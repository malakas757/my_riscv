`timescale 1ns / 1ps

import common::*;
`define debug

module pipeline(/*AUTOARG*/
   // Inputs
   clk, reset_n, retire_arf_id_0, retire_arf_id_1, retire_prf_id_0,
   retire_prf_id_1, retire_valid_0, retire_valid_1, retire_wb_0,
   retire_wb_1, rob_state, fl_walk_0, fl_walk_1, rat_walk_0_valid,
   rat_walk_1_valid, rat_walk_0_rd_id, rat_walk_1_rd_id,
   rat_walk_0_rd_prf, rat_walk_1_rd_prf
   );
   input clk;
   input reset_n;



   //debug///////////////////////////////////////////////
   input logic [4:0] 		      retire_arf_id_0;
   input logic [4:0] 		      retire_arf_id_1;
   input logic [PRF_WIDTH-1:0] 	      retire_prf_id_0;
   input logic [PRF_WIDTH-1:0] 	      retire_prf_id_1;
   input 			      retire_valid_0;
   input 			      retire_valid_1;
   input 			      retire_wb_0;
   input 			      retire_wb_1;
   input logic [1:0] 		      rob_state; 			      	
   input 			      fl_walk_0;
   input 			      fl_walk_1;
   input  			      rat_walk_0_valid;
   input  			      rat_walk_1_valid;
   input logic [ARF_WIDTH-1:0] 	      rat_walk_0_rd_id;
   input logic [ARF_WIDTH-1:0] 	      rat_walk_1_rd_id;
   input logic [PRF_WIDTH-1:0] 	      rat_walk_0_rd_prf;
   input logic [PRF_WIDTH-1:0] 	      rat_walk_1_rd_prf;
   /////////////////////////////////////////////////////////


   /*AUTOWIRE*/
   // Beginning of automatic wires (for undeclared instantiated-module outputs)
   wire			ID_flush;		// From inst_stall_flush of stall_flush_control.v
   wire			ID_stall;		// From inst_stall_flush of stall_flush_control.v
   wire			IF_flush;		// From inst_stall_flush of stall_flush_control.v
   wire			IF_stall;		// From inst_stall_flush of stall_flush_control.v
   wire			IR_flush;		// From inst_stall_flush of stall_flush_control.v
   wire			IR_stall;		// From inst_stall_flush of stall_flush_control.v
   wire			PC_flush;		// From inst_stall_flush of stall_flush_control.v
   wire			PC_stall;		// From inst_stall_flush of stall_flush_control.v
   // End of automatics


  /////////////////////////////////////////////////////////////////////

                              //Stall Flush control//

   ///////////////////////////////////////////////////////////////////

   

   /* stall_flush_control AUTO_TEMPLATE(
    );*/

   stall_flush_control inst_stall_flush(/*AUTOINST*/
					// Outputs
					.PC_stall	(PC_stall),
					.PC_flush	(PC_flush),
					.IF_stall	(IF_stall),
					.ID_stall	(ID_stall),
					.IR_stall	(IR_stall),
					.ID_flush	(ID_flush),
					.IF_flush	(IF_flush),
					.IR_flush	(IR_flush),
					// Inputs
					.imem_miss	(imem_miss));
   


  /////////////////////////////////////////////////////////////////////

                              //IF STAGE//

   ///////////////////////////////////////////////////////////////////
   
   if_id_type         if_id_reg0,if_id_reg1;
   logic [31:0] 	  read_data0;
   logic [31:0] 	  read_data1;
   if_id_type             instr0_if_id;
   if_id_type             instr1_if_id;

   
   
   instr_resp_type    imem_resp;

   assign             imem_resp.instr0 = read_data0;
   assign             imem_resp.instr1 = read_data1;
   assign             imem_resp.ready = 1'b1;
   


   /*debug*/
   program_memory inst_imem(
			    // Outputs
			    .read_data0		(read_data0[XLEN_WIDTH-1:0]),
			    .read_data1		(read_data1[XLEN_WIDTH-1:0]),
			    // Inputs
			    .clk		(clk),
			    .byte_address0	(instr0_if_id.pc),
			    .byte_address1	(instr1_if_id.pc),
			    .write_enable	('0),
			    .write_data		('0));
   
   
   
   /* if_stage AUTO_TEMPLATE(
    );*/

   if_stage inst_if_stage(
			  // Outputs
			  .instr_req		(instr_req),
			  .instr0_if_id		(instr0_if_id),
			  .instr1_if_id		(instr1_if_id),
			  .imem_miss		(imem_miss),
			  // Inputs
			  .clk			(clk),
			  .reset_n		(reset_n),
			  .instr_resp		(imem_resp),
			  .ex_branch_in		(ex_branch_in),
			  .PC_stall		(PC_stall),
			  .PC_flush		(PC_flush),
			  .IF_stall		(IF_stall));


   always_ff @(posedge clk) begin


	   if(IF_flush || ~reset_n) begin
	      if_id_reg0.pc            <= '0;
	      if_id_reg1.pc            <= '0;
	      if_id_reg0.instr_valid   <= '0;
	      if_id_reg1.instr_valid   <= '0;
	      if_id_reg0.instruction   <= 32'h00000013;
	      if_id_reg1.instruction   <= 32'h00000013;
	      if_id_reg0.predict       <= '0;
	      if_id_reg1.predict       <= '0;
	      end
	   else if (IF_stall) begin
	      if_id_reg0.pc            <= if_id_reg0.pc;
	      if_id_reg1.pc            <= if_id_reg1.pc;
	      if_id_reg0.instr_valid   <= if_id_reg0.instr_valid;
	      if_id_reg1.instr_valid   <= if_id_reg1.instr_valid;
	      if_id_reg0.instruction   <= if_id_reg0.instruction;
	      if_id_reg1.instruction   <= if_id_reg1.instruction;
	      if_id_reg0.predict       <= if_id_reg0.predict;
	      if_id_reg1.predict       <= if_id_reg1.predict;
	      end
	   else begin
	      if_id_reg0.pc            <= instr0_if_id.pc;
	      if_id_reg1.pc            <= instr1_if_id.pc;
	      if_id_reg0.instr_valid   <= instr0_if_id.instr_valid;
	      if_id_reg1.instr_valid   <= instr1_if_id.instr_valid;
	      if_id_reg0.instruction   <= instr0_if_id.instruction;
	      if_id_reg1.instruction   <= instr1_if_id.instruction;
	      if_id_reg0.predict       <= instr0_if_id.predict;
	      if_id_reg1.predict       <= instr1_if_id.predict;
	   end
   end




  /////////////////////////////////////////////////////////////////////

                              //ID STAGE//

   ///////////////////////////////////////////////////////////////////

  control_type    id_ir_reg0;
  control_type    id_ir_reg1;
//debug
`ifdef debug
  logic [31:0]    id_ir_reg0_pc;
  instruction_type    id_ir_reg0_instr;
  logic [31:0]    id_ir_reg1_pc;
  instruction_type    id_ir_reg1_instr;
`endif   
//////////////////////////// 
  control_type    dec_instr0;
  control_type    dec_instr1;

  
   

   id_stage inst_id(
		    .dec_instr0		(dec_instr0),
		    .dec_instr1		(dec_instr1),		   
		    .clk		(clk),
		    .reset_n		(reset_n),
		    .if_instr0		(if_id_reg0),
		    .if_instr1		(if_id_reg1));
   
   
      always_ff @(posedge clk) begin


	   if(ID_flush || ~reset_n) begin
	      id_ir_reg0      <= '0;
	      id_ir_reg1      <= '0;	     
`ifdef debug
	      id_ir_reg0_instr   <= '0;	     
	      id_ir_reg0_pc      <= '0;	     
	      id_ir_reg1_instr   <= '0;	     
	      id_ir_reg1_pc      <= '0;	     
`endif
	      	     
	      end
	   else if (ID_stall) begin
	      id_ir_reg0       <= id_ir_reg0 ;
	      id_ir_reg1       <= id_ir_reg1 ;	 
`ifdef debug    
	      id_ir_reg0_instr   <=  id_ir_reg0_instr;	     
	      id_ir_reg0_pc      <=  id_ir_reg0_pc;	     
	      id_ir_reg1_instr   <=  id_ir_reg1_instr;	     
	      id_ir_reg1_pc      <=  id_ir_reg1_pc;	     
`endif
	   end
	   else begin
	      id_ir_reg0       <= dec_instr0 ;
	      id_ir_reg1       <= dec_instr1 ;
`ifdef debug	      
	      id_ir_reg0_instr   <=  if_id_reg0.instruction;	     
	      id_ir_reg0_pc      <=  if_id_reg0.pc;	     
	      id_ir_reg1_instr   <=  if_id_reg1.instruction;	     
	      id_ir_reg1_pc      <=  if_id_reg1.pc;
`endif	      
	   end
   end





  /////////////////////////////////////////////////////////////////////

                    //IR STAGE(***RENAME stage)//

   ///////////////////////////////////////////////////////////////////

   ir_is_type             ir_is_reg0,ir_is_reg0_next;
   ir_is_type             ir_is_reg1,ir_is_reg1_next;

   assign                 ir_is_reg0_next.control = id_ir_reg0;
   assign                 ir_is_reg1_next.control = id_ir_reg1;
   

`ifdef debug
   logic [31:0]    ir_is_reg0_pc;
   instruction_type    ir_is_reg0_instr;
   logic [31:0]    ir_is_reg1_pc;
   instruction_type    ir_is_reg1_instr;
`endif 
   
   
  /* ir_stage AUTO_TEMPLATE(
		    // Outputs
		    .fl_can_alloc	(),
		    .T_0		(ir_is_reg0_next.T),
		    .T_1		(ir_is_reg1_next.T),
		    .T_old_0		(ir_is_reg0_next.T_old),
		    .T_old_1		(ir_is_reg1_next.T_old),
		    .instr0_prf_rs1	(ir_is_reg0_next.prf_rs1),
		    .instr0_prf_rs2	(ir_is_reg0_next.prf_rs2),
		    .instr1_prf_rs1	(ir_is_reg1_next.prf_rs1),
		    .instr1_prf_rs2	(ir_is_reg1_next.prf_rs2),		    // Inputs
		    .clk		(clk),
		    .reset_n		(reset_n),
		    .dec_instr0		(id_ir_reg0),
		    .dec_instr1		(id_ir_reg1),
		    .fl_write_en_0	('0),
		    .fl_write_en_1	('0),
		    .fl_write_data_0	('0),
		    .fl_write_data_1	('0),
		    .retire_arf_id_0	(retire_arf_id_0[4:0]),
		    .retire_arf_id_1	(retire_arf_id_1[4:0]),
		    .retire_prf_id_0	(retire_prf_id_0[PRF_WIDTH-1:0]),
		    .retire_prf_id_1	(retire_prf_id_1[PRF_WIDTH-1:0]),
		    .retire_valid_0	(retire_valid_0),
		    .retire_valid_1	(retire_valid_1),
		    .retire_wb_0	(retire_wb_0),
		    .retire_wb_1	(retire_wb_1),
		    .rob_state		(rob_state[1:0]),
		    .fl_walk_0		(fl_walk_0),
		    .fl_walk_1		(fl_walk_1),
		    .rat_walk_0_valid	(rat_walk_0_valid),
		    .rat_walk_1_valid	(rat_walk_1_valid),
		    .rat_walk_0_rd_id	(rat_walk_0_rd_id[ARF_WIDTH-1:0]),
		    .rat_walk_1_rd_id	(rat_walk_1_rd_id[ARF_WIDTH-1:0]),
		    .rat_walk_0_rd_prf	(rat_walk_0_rd_prf[PRF_WIDTH-1:0]),
		    .rat_walk_1_rd_prf	(rat_walk_1_rd_prf[PRF_WIDTH-1:0]));*/
   
   ir_stage inst_ir(/*AUTOINST*/
		    // Outputs
		    .fl_can_alloc	(),			 // Templated
		    .T_0		(ir_is_reg0_next.T),	 // Templated
		    .T_1		(ir_is_reg1_next.T),	 // Templated
		    .T_old_0		(ir_is_reg0_next.T_old), // Templated
		    .T_old_1		(ir_is_reg1_next.T_old), // Templated
		    .instr0_prf_rs1	(ir_is_reg0_next.prf_rs1), // Templated
		    .instr0_prf_rs2	(ir_is_reg0_next.prf_rs2), // Templated
		    .instr1_prf_rs1	(ir_is_reg1_next.prf_rs1), // Templated
		    .instr1_prf_rs2	(ir_is_reg1_next.prf_rs2), // Templated
		    // Inputs
		    .clk		(clk),			 // Templated
		    .reset_n		(reset_n),		 // Templated
		    .dec_instr0		(id_ir_reg0),		 // Templated
		    .dec_instr1		(id_ir_reg1),		 // Templated
		    .fl_write_en_0	('0),			 // Templated
		    .fl_write_en_1	('0),			 // Templated
		    .fl_write_data_0	('0),			 // Templated
		    .fl_write_data_1	('0),			 // Templated
		    .retire_arf_id_0	(retire_arf_id_0[4:0]),	 // Templated
		    .retire_arf_id_1	(retire_arf_id_1[4:0]),	 // Templated
		    .retire_prf_id_0	(retire_prf_id_0[PRF_WIDTH-1:0]), // Templated
		    .retire_prf_id_1	(retire_prf_id_1[PRF_WIDTH-1:0]), // Templated
		    .retire_valid_0	(retire_valid_0),	 // Templated
		    .retire_valid_1	(retire_valid_1),	 // Templated
		    .retire_wb_0	(retire_wb_0),		 // Templated
		    .retire_wb_1	(retire_wb_1),		 // Templated
		    .rob_state		(rob_state[1:0]),	 // Templated
		    .fl_walk_0		(fl_walk_0),		 // Templated
		    .fl_walk_1		(fl_walk_1),		 // Templated
		    .rat_walk_0_valid	(rat_walk_0_valid),	 // Templated
		    .rat_walk_1_valid	(rat_walk_1_valid),	 // Templated
		    .rat_walk_0_rd_id	(rat_walk_0_rd_id[ARF_WIDTH-1:0]), // Templated
		    .rat_walk_1_rd_id	(rat_walk_1_rd_id[ARF_WIDTH-1:0]), // Templated
		    .rat_walk_0_rd_prf	(rat_walk_0_rd_prf[PRF_WIDTH-1:0]), // Templated
		    .rat_walk_1_rd_prf	(rat_walk_1_rd_prf[PRF_WIDTH-1:0])); // Templated
   
   
      always_ff @(posedge clk) begin


	   if(IR_flush || ~reset_n) begin
	      ir_is_reg0      <= '0;
	      ir_is_reg1      <= '0;	     
`ifdef debug
	      ir_is_reg0_instr   <= '0;	     
	      ir_is_reg0_pc      <= '0;	     
	      ir_is_reg1_instr   <= '0;	     
	      ir_is_reg1_pc      <= '0;	     
`endif
	      	     
	      end
	   else if (IR_stall) begin
	      ir_is_reg0       <= ir_is_reg0 ;
	      ir_is_reg1       <= ir_is_reg1 ;	 
`ifdef debug    
	      ir_is_reg0_instr   <=  ir_is_reg0_instr;	     
	      ir_is_reg0_pc      <=  ir_is_reg0_pc;	     
	      ir_is_reg1_instr   <=  ir_is_reg1_instr;	     
	      ir_is_reg1_pc      <=  ir_is_reg1_pc;	     
`endif
	   end
	   else begin
	      ir_is_reg0       <= ir_is_reg0_next ;
	      ir_is_reg1       <= ir_is_reg1_next ;
`ifdef debug	      
	      ir_is_reg0_instr   <=  id_ir_reg0_instr;	     
	      ir_is_reg0_pc      <=  id_ir_reg0_pc;	     
	      ir_is_reg1_instr   <=  id_ir_reg1_instr;	     
	      ir_is_reg1_pc      <=  id_ir_reg1_pc;
`endif	      
	   end
   end
   


endmodule
