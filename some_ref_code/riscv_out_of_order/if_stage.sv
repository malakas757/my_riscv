`timescale 1ns/1ps

import common::*;

//Current the structure can support fetch two instrs and predict, but I only use it as one fetch. By do these changes to make it as single fetch unit:
//1) change the pc increment from 8 to 4
//2) gshare instr1 never hit: set 0 for instr1_btb_hit

module if_stage(
/*AUTOARG*/
   // Outputs
   instr_req, instr0_if_id, instr1_if_id, imem_miss,
   // Inputs
   clk, reset_n, instr_resp, ex_branch_in, PC_stall, PC_flush,
   IF_stall
   );

    input  clk;
    input  reset_n;

    //From imemory   
    output instr_req_type   instr_req;
    input  instr_resp_type  instr_resp;

    // To ID stage

    output if_id_type instr0_if_id;
    output if_id_type instr1_if_id;

   // From Ex Stage (deal with miss prediction)		
    input  ex2if_type ex_branch_in;

   // From stall & flush unit
    input   PC_stall;
    input   PC_flush;
    input   IF_stall;
   output   imem_miss; 
   
   

   


///////////////////////////////////////////////////////

   /*AUTOWIRE*/
   // Beginning of automatic wires (for undeclared instantiated-module outputs)
   logic [GSHARE_GHSR_WIDTH-1:0] current_instr0_GHSR;// From gshare_inst of gshare.v
   logic [GSHARE_GHSR_WIDTH-1:0] current_instr1_GHSR;// From gshare_inst of gshare.v
   logic [XLEN_WIDTH-1:0] pc;			// From inst_pc of pc_counter.v
   // End of automatics
       



   ///////////////////////////////////////   
   logic                  PC_predict_taken;
   logic [ADDR_WIDTH-1:0] PC_predict_pc;
   logic [ADDR_WIDTH-1:0] instr0_btb_target_addr;
   logic [ADDR_WIDTH-1:0] instr1_btb_target_addr;
   logic 		  instr0_btb_hit;
   logic 		  instr1_btb_hit;
   logic 		  instr0_predict_taken;
   logic 		  instr1_predict_taken;
   logic [ADDR_WIDTH-1:0] pcplus4;
   logic 		  imem_req;
   ///////////////////////////////////////////


   // Predict by BTB and Gshare
   always_comb begin
      if( instr0_btb_hit && instr0_predict_taken ) begin
	 PC_predict_pc     = instr0_btb_target_addr;
	 PC_predict_taken  = 1'b1;	 	 
      end
      else if( instr1_btb_hit && instr1_predict_taken) begin
	 PC_predict_pc     = instr1_btb_target_addr;
	 PC_predict_taken  = 1'b1;	 	 
      end
      else begin
	 PC_predict_pc     = PC_INIT;
	 PC_predict_taken  = 1'b0;
      end

   end // always_comb

////////////////////////////////////////

   //Handshake with cache ***** Dont consider cache line miss now( instr0 valid, 1 miss in cache)


   assign pcplus4 = pc + 4;

   assign imem_miss = ~instr_resp.ready;
   assign instr_req.instr0 = pc;
   assign instr_req.instr1 = pcplus4;
   assign instr_req.valid  = imem_req;
   
   
   
   always_ff @(posedge clk) begin
      
    if (~reset_n)
        imem_req <= 1;
    else if (PC_stall)
        imem_req <= 0;
    else
        imem_req <= 1;
   end


///////////////////////////////////////////
  
 //To ID stage

   assign instr0_if_id.pc = pc;
   assign instr1_if_id.pc = pcplus4;
  

   always_comb begin
      if (instr_resp.ready) begin 
	 instr0_if_id.instr_valid = 1'b1;
      end
      else begin
	 instr0_if_id.instr_valid = 1'b0;
      end
      
      if(instr_resp.ready && ~(instr0_btb_hit && instr0_predict_taken))begin
	 instr1_if_id.instr_valid = 1'b1;	   
      end
      else begin
	 instr1_if_id.instr_valid = 1'b0;
      end
	 	   			 
   end // always_comb


   assign instr0_if_id.predict.taken = instr0_btb_hit? instr0_predict_taken : 1'b0;
   assign instr1_if_id.predict.taken = instr1_btb_hit? instr1_predict_taken : 1'b0;
   assign instr0_if_id.predict.current_GHSR   = current_instr0_GHSR[GSHARE_GHSR_WIDTH-1:0];
   assign instr1_if_id.predict.current_GHSR   = current_instr1_GHSR[GSHARE_GHSR_WIDTH-1:0];
   assign instr0_if_id.predict.btb_hit        = instr0_btb_hit;
   assign instr1_if_id.predict.btb_hit        = instr1_btb_hit;
   assign instr0_if_id.predict.btb_addr       = instr0_btb_target_addr[31:0];
   assign instr1_if_id.predict.btb_addr       = instr1_btb_target_addr[31:0];

   assign instr0_if_id.instruction            = instr_resp.instr0;
   assign instr1_if_id.instruction            = instr_resp.instr1;

   ///////////////////////////////////////////////////////////////////////////////////
   
   
   

   


/*pc_counter AUTO_TEMPLATE(
		   .stall		(PC_stall),
		   .ex_branch_target_addr(ex_branch_in.target_addr),
		   .ex_branch_flush	(PC_flush),
		   .predict_pc		(PC_predict_pc),
		   .predict_taken	(PC_predict_taken));*/   

pc_counter inst_pc(
/*AUTOINST*/
		   // Outputs
		   .pc			(pc[XLEN_WIDTH-1:0]),
		   // Inputs
		   .clk			(clk),
		   .reset_n		(reset_n),
		   .stall		(PC_stall),		 // Templated
		   .ex_branch_target_addr(ex_branch_in.target_addr), // Templated
		   .ex_branch_flush	(PC_flush),		 // Templated
		   .predict_pc		(PC_predict_pc),	 // Templated
		   .predict_taken	(PC_predict_taken));	 // Templated


   
 /*btb AUTO_TEMPLATE(
         	.instr0_btb_hit		(instr0_btb_hit),
		.instr0_btb_target_addr	(instr0_btb_target_addr[31:0]),
	     		
		.clk			(clk),
		.reset_n		(reset_n),
		.IF_instr0_pc		(pc),
		.IF_instr1_pc		(pcplus4),
		.branch_valid		(ex_branch_in.valid),
		.branch_taken		(ex_branch_in.taken),
		.branch_addr		(ex_branch_in.addr),
		.branch_target_addr	(ex_branch_in.target_addr),
         
 );*/
   btb btb_inst(/*AUTOINST*/
		// Outputs
		.instr0_btb_hit		(instr0_btb_hit),	 // Templated
		.instr0_btb_target_addr	(instr0_btb_target_addr[31:0]), // Templated
		.instr1_btb_hit		(instr1_btb_hit),
		.instr1_btb_target_addr	(instr1_btb_target_addr[31:0]),
		// Inputs
		.clk			(clk),			 // Templated
		.reset_n		(reset_n),		 // Templated
		.IF_instr0_pc		(pc),			 // Templated
		.IF_instr1_pc		(pcplus4),		 // Templated
		.branch_valid		(ex_branch_in.valid),	 // Templated
		.branch_taken		(ex_branch_in.taken),	 // Templated
		.branch_addr		(ex_branch_in.addr),	 // Templated
		.branch_target_addr	(ex_branch_in.target_addr)); // Templated

   
/*gshare AUTO_TEMPLATE(

		      .current_instr0_GHSR(current_instr0_GHSR[GSHARE_GHSR_WIDTH-1:0]),
		      .current_instr1_GHSR(current_instr1_GHSR[GSHARE_GHSR_WIDTH-1:0]),
		      .clk		(clk),
		      .reset_n		(reset_n),
		      .IF_instr0_pc	(pc),
		      .IF_instr0_hit	(instr0_btb_hit),
		      .IF_instr0_resp	(instr_resp.ready),
 		      .IF_instr1_pc	(pcplus4),
		      .IF_instr1_hit	('0), 
		      .EXE_is_BJ	(ex_branch_in.valid),
		      .EXE_update_GHSR	(ex_branch_in.update_GHSR),
		      .EXE_branch_taken	(ex_branch_in.taken),
		      .EXE_branch_addr(ex_branch_in.addr),
		      .EXE_GHSR_restore	(ex_branch_in.GHSR_restore));*/
 
   gshare gshare_inst(/*AUTOINST*/
		      // Outputs
		      .instr0_predict_taken(instr0_predict_taken),
		      .instr1_predict_taken(instr1_predict_taken),
		      .current_instr0_GHSR(current_instr0_GHSR[GSHARE_GHSR_WIDTH-1:0]), // Templated
		      .current_instr1_GHSR(current_instr1_GHSR[GSHARE_GHSR_WIDTH-1:0]), // Templated
		      // Inputs
		      .clk		(clk),			 // Templated
		      .reset_n		(reset_n),		 // Templated
		      .IF_instr0_pc	(pc),			 // Templated
		      .IF_instr1_pc	(pcplus4),		 // Templated
		      .IF_instr0_hit	(instr0_btb_hit),	 // Templated
		      .IF_instr1_hit	('0),			 // Templated
		      .IF_instr0_resp	(instr_resp.ready),	 // Templated
		      .EXE_is_BJ	(ex_branch_in.valid),	 // Templated
		      .EXE_update_GHSR	(ex_branch_in.update_GHSR), // Templated
		      .EXE_branch_taken	(ex_branch_in.taken),	 // Templated
		      .EXE_branch_addr	(ex_branch_in.addr),	 // Templated
		      .EXE_GHSR_restore	(ex_branch_in.GHSR_restore)); // Templated
   



   

endmodule
