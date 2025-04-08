`timescale 1ns / 1ps

import common::*;
`define debug

module pipeline(/*AUTOARG*/
   // Inputs
   clk, reset_n, writeback0_valid, writeback0_need_to_wb,
   writeback0_prd, writeback1_valid, writeback1_need_to_wb,
   writeback1_prd, writeback2_valid, writeback2_need_to_wb,
   writeback2_prd, writeback3_valid, writeback3_need_to_wb,
   writeback3_prd, writeback0_robid, writeback1_robid,
   writeback2_robid, writeback3_robid, mul_slot_busy, flush_robid,
   flush_valid
   );
   input clk;
   input reset_n;



   //debug///////////////////////////////////////////////
   input logic                 writeback0_valid;//int0 mul
   input logic 		       writeback0_need_to_wb;
   input logic [PRF_WIDTH-1:0] writeback0_prd;	 
   input logic 		       writeback1_valid;//int0alu
   input logic 		       writeback1_need_to_wb;
   input logic [PRF_WIDTH-1:0] writeback1_prd;
   input logic                 writeback2_valid;//int1alu
   input logic 		       writeback2_need_to_wb;
   input logic [PRF_WIDTH-1:0] writeback2_prd;	 
   input logic 		       writeback3_valid;//mem
   input logic 		       writeback3_need_to_wb;
   input logic [PRF_WIDTH-1:0] writeback3_prd;
   input logic [ROB_WIDTH:0]   writeback0_robid;
   input logic [ROB_WIDTH:0]   writeback1_robid;
   input logic [ROB_WIDTH:0]   writeback2_robid;
   input logic [ROB_WIDTH:0]   writeback3_robid;   
   input logic                 mul_slot_busy;
   input logic [ROB_WIDTH:0]   flush_robid;
   input 		       flush_valid;

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
   wire			can_dispatch;		// From inst_is_stage of is_stage.v
   logic		ex_slot0_valid;		// From inst_is_stage of is_stage.v
   logic		ex_slot1_valid;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	instr0_src1;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	instr0_src2;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	instr1_src1;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	instr1_src2;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	retire0_T;		// From inst_is_stage of is_stage.v
   wire [ARF_WIDTH-1:0]	retire0_arf_id;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	retire0_fl_Told;	// From inst_is_stage of is_stage.v
   wire			retire0_is_wb;		// From inst_is_stage of is_stage.v
   wire [ROB_WIDTH:0]	retire0_robid;		// From inst_is_stage of is_stage.v
   wire			retire0_valid;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	retire1_T;		// From inst_is_stage of is_stage.v
   wire [ARF_WIDTH-1:0]	retire1_arf_id;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	retire1_fl_Told;	// From inst_is_stage of is_stage.v
   wire			retire1_is_wb;		// From inst_is_stage of is_stage.v
   wire [ROB_WIDTH:0]	retire1_robid;		// From inst_is_stage of is_stage.v
   wire			retire1_valid;		// From inst_is_stage of is_stage.v
   wire [1:0]		rob_state;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	slot0_T;		// From inst_is_stage of is_stage.v
   control_type		slot0_control;		// From inst_is_stage of is_stage.v
   wire [31:0]		slot0_pc;		// From inst_is_stage of is_stage.v
   wire [ROB_WIDTH:0]	slot0_robid;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	slot1_T;		// From inst_is_stage of is_stage.v
   control_type		slot1_control;		// From inst_is_stage of is_stage.v
   wire [31:0]		slot1_pc;		// From inst_is_stage of is_stage.v
   wire [ROB_WIDTH:0]	slot1_robid;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	walk0_T;		// From inst_is_stage of is_stage.v
   wire [ARF_WIDTH-1:0]	walk0_arf_id;		// From inst_is_stage of is_stage.v
   wire			walk0_complete;		// From inst_is_stage of is_stage.v
   wire			walk0_valid;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	walk1_T;		// From inst_is_stage of is_stage.v
   wire [ARF_WIDTH-1:0]	walk1_arf_id;		// From inst_is_stage of is_stage.v
   wire			walk1_complete;		// From inst_is_stage of is_stage.v
   wire			walk1_valid;		// From inst_is_stage of is_stage.v
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
					.imem_miss	(imem_miss),
					.can_dispatch	(can_dispatch),
					.flush_valid	(flush_valid));
   


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
			  .ex_branch_in		('0),
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
		    .instr1_prf_rs2	(ir_is_reg1_next.prf_rs2),		    
                    // Inputs
		    .clk		(clk),
		    .reset_n		(reset_n),
		    .dec_instr0		(id_ir_reg0),
		    .dec_instr1		(id_ir_reg1),
		    .fl_write_en_0	(retire0_valid & retire0_is_wb),//
		    .fl_write_en_1	(retire1_valid & retire1_is_wb),//
		    .fl_write_data_0	(retire0_fl_Told),//
		    .fl_write_data_1	(retire1_fl_Told),//
		    .retire_arf_id_0	(retire0_arf_id[4:0]),//
		    .retire_arf_id_1	(retire1_arf_id[4:0]),//
		    .retire_prf_id_0	(retire0_T[PRF_WIDTH-1:0]),//
		    .retire_prf_id_1	(retire1_T[PRF_WIDTH-1:0]),//
		    .retire_valid_0	(retire0_valid),        // 
		    .retire_valid_1	(retire1_valid),	// 
		    .retire_wb_0	(retire0_is_wb),	// 
		    .retire_wb_1	(retire1_is_wb),	// 		   
		    .fl_walk_0		(walk0_valid),         //
		    .fl_walk_1		(walk1_valid),        //
		    .rat_walk_0_valid	(walk0_valid),       //
		    .rat_walk_1_valid	(walk0_valid),       // 
		    .rat_walk_0_rd_id	(walk0_arf_id[ARF_WIDTH-1:0]),//
		    .rat_walk_1_rd_id	(walk1_arf_id[ARF_WIDTH-1:0]),//
		    .rat_walk_0_rd_prf	(walk0_T[PRF_WIDTH-1:0]),//
		    .rat_walk_1_rd_prf	(walk1_T[PRF_WIDTH-1:0]));*/
   
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
		    .ID_stall		(ID_stall),
		    .fl_write_en_0	(retire0_valid & retire0_is_wb), // Templated
		    .fl_write_en_1	(retire1_valid & retire1_is_wb), // Templated
		    .fl_write_data_0	(retire0_fl_Told),	 // Templated
		    .fl_write_data_1	(retire1_fl_Told),	 // Templated
		    .retire_arf_id_0	(retire0_arf_id[4:0]),	 // Templated
		    .retire_arf_id_1	(retire1_arf_id[4:0]),	 // Templated
		    .retire_prf_id_0	(retire0_T[PRF_WIDTH-1:0]), // Templated
		    .retire_prf_id_1	(retire1_T[PRF_WIDTH-1:0]), // Templated
		    .retire_valid_0	(retire0_valid),	 // Templated
		    .retire_valid_1	(retire1_valid),	 // Templated
		    .retire_wb_0	(retire0_is_wb),	 // Templated
		    .retire_wb_1	(retire1_is_wb),	 // Templated
		    .rob_state		(rob_state[1:0]),
		    .fl_walk_0		(walk0_valid),		 // Templated
		    .fl_walk_1		(walk1_valid),		 // Templated
		    .rat_walk_0_valid	(walk0_valid),		 // Templated
		    .rat_walk_1_valid	(walk0_valid),		 // Templated
		    .rat_walk_0_rd_id	(walk0_arf_id[ARF_WIDTH-1:0]), // Templated
		    .rat_walk_1_rd_id	(walk1_arf_id[ARF_WIDTH-1:0]), // Templated
		    .rat_walk_0_rd_prf	(walk0_T[PRF_WIDTH-1:0]), // Templated
		    .rat_walk_1_rd_prf	(walk1_T[PRF_WIDTH-1:0])); // Templated
   
   
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


  /////////////////////////////////////////////////////////////////////

                    //IS STAGE(***RENAME stage)//

   ///////////////////////////////////////////////////////////////////
    /* is_stage AUTO_TEMPLATE(
			  // Outputs
			  .can_dispatch		(can_dispatch),                  // 
			  .instr0_src1		(instr0_src1[PRF_WIDTH-1:0]),	 // 
			  .instr0_src2		(instr0_src2[PRF_WIDTH-1:0]),	 // 
			  .instr1_src1		(instr1_src1[PRF_WIDTH-1:0]),	 // 
			  .instr1_src2		(instr1_src2[PRF_WIDTH-1:0]),	 // 
			  .retire0_valid	(retire0_valid),		 // 
			  .retire1_valid	(retire1_valid),		 // 
			  .retire0_is_wb	(retire0_is_wb),		 // 
			  .retire1_is_wb	(retire1_is_wb),		 // 
			  .retire0_arf_id	(retire0_arf_id[ARF_WIDTH-1:0]), // 
			  .retire1_arf_id	(retire1_arf_id[ARF_WIDTH-1:0]), // 
			  .retire0_fl_Told	(retire0_fl_Told[PRF_WIDTH-1:0]),// 
			  .retire1_fl_Told	(retire1_fl_Told[PRF_WIDTH-1:0]),// 
			  .retire0_T		(retire0_T[PRF_WIDTH-1:0]),	 // 
			  .retire1_T		(retire1_T[PRF_WIDTH-1:0]),	 //   	  
			  .rob_state		(rob_state[1:0]),		 // 
			  .walk0_valid		(walk0_valid),			 // 
			  .walk1_valid		(walk1_valid),			 // 
			  .walk0_complete	(walk0_complete),		 // 
			  .walk1_complete	(walk1_complete),		 // 
			  .walk0_arf_id		(walk0_arf_id[ARF_WIDTH-1:0]),	 // 
			  .walk1_arf_id		(walk1_arf_id[ARF_WIDTH-1:0]),	 // 
			  .walk0_T		(walk0_T[PRF_WIDTH-1:0]),	 // 
			  .walk1_T		(walk1_T[PRF_WIDTH-1:0]),	 // 
			  .ex_slot0_valid	(ex_slot0_valid),		 // 
			  .ex_slot1_valid	(ex_slot1_valid),		 // 
			  .slot0_T		(slot0_T[PRF_WIDTH-1:0]),	 // 
			  .slot1_T		(slot1_T[PRF_WIDTH-1:0]),	 // 
			  .slot0_control	(slot0_control),		 // 
			  .slot1_control	(slot1_control),		 // 
			  .slot0_pc		(slot0_pc[31:0]),		 // 
			  .slot1_pc		(slot1_pc[31:0]),		 // 
			  .slot0_robid		(slot0_robid[ROB_WIDTH:0]),	 // 
			  .slot1_robid		(slot1_robid[ROB_WIDTH:0]),	 // 
			  // Inputs
			  .clk			(clk),
			  .reset_n		(reset_n),
			  .ir_is_reg0		(ir_is_reg0),
			  .ir_is_reg1		(ir_is_reg1),
			  .ir_is_reg0_pc	(ir_is_reg0_pc[31:0]),
			  .ir_is_reg1_pc	(ir_is_reg1_pc[31:0]),
			  .ir_is_reg0_instr	(ir_is_reg0_instr[31:0]),
			  .ir_is_reg1_instr	(ir_is_reg1_instr[31:0]),
			  .flush_valid		(flush_valid),
			  .writeback0_valid	(writeback0_valid),
			  .writeback0_need_to_wb(writeback0_need_to_wb),
			  .writeback0_prd	(writeback0_prd[PRF_WIDTH-1:0]),
			  .writeback1_valid	(writeback1_valid),
			  .writeback1_need_to_wb(writeback1_need_to_wb),
			  .writeback1_prd	(writeback1_prd[PRF_WIDTH-1:0]),
			  .writeback2_valid	(writeback2_valid),
			  .writeback2_need_to_wb(writeback2_need_to_wb),
			  .writeback2_prd	(writeback2_prd[PRF_WIDTH-1:0]),
			  .writeback3_valid	(writeback3_valid),
			  .writeback3_need_to_wb(writeback3_need_to_wb),
			  .writeback3_prd	(writeback3_prd[PRF_WIDTH-1:0]),
			  .writeback0_robid	(writeback0_robid[ROB_WIDTH:0]),
			  .writeback1_robid	(writeback1_robid[ROB_WIDTH:0]),
			  .writeback2_robid	(writeback2_robid[ROB_WIDTH:0]),
			  .writeback3_robid	(writeback3_robid[ROB_WIDTH:0]),
			  .mul_slot_busy	(mul_slot_busy)); */


   is_stage inst_is_stage(/*AUTOINST*/
			  // Outputs
			  .can_dispatch		(can_dispatch),	 // Templated
			  .instr0_src1		(instr0_src1[PRF_WIDTH-1:0]), // Templated
			  .instr0_src2		(instr0_src2[PRF_WIDTH-1:0]), // Templated
			  .instr1_src1		(instr1_src1[PRF_WIDTH-1:0]), // Templated
			  .instr1_src2		(instr1_src2[PRF_WIDTH-1:0]), // Templated
			  .retire0_valid	(retire0_valid), // Templated
			  .retire1_valid	(retire1_valid), // Templated
			  .retire0_is_wb	(retire0_is_wb), // Templated
			  .retire1_is_wb	(retire1_is_wb), // Templated
			  .retire0_arf_id	(retire0_arf_id[ARF_WIDTH-1:0]), // Templated
			  .retire1_arf_id	(retire1_arf_id[ARF_WIDTH-1:0]), // Templated
			  .retire0_fl_Told	(retire0_fl_Told[PRF_WIDTH-1:0]), // Templated
			  .retire1_fl_Told	(retire1_fl_Told[PRF_WIDTH-1:0]), // Templated
			  .retire0_T		(retire0_T[PRF_WIDTH-1:0]), // Templated
			  .retire1_T		(retire1_T[PRF_WIDTH-1:0]), // Templated
			  .retire0_robid	(retire0_robid[ROB_WIDTH:0]),
			  .retire1_robid	(retire1_robid[ROB_WIDTH:0]),
			  .rob_state		(rob_state[1:0]), // Templated
			  .walk0_valid		(walk0_valid),	 // Templated
			  .walk1_valid		(walk1_valid),	 // Templated
			  .walk0_complete	(walk0_complete), // Templated
			  .walk1_complete	(walk1_complete), // Templated
			  .walk0_arf_id		(walk0_arf_id[ARF_WIDTH-1:0]), // Templated
			  .walk1_arf_id		(walk1_arf_id[ARF_WIDTH-1:0]), // Templated
			  .walk0_T		(walk0_T[PRF_WIDTH-1:0]), // Templated
			  .walk1_T		(walk1_T[PRF_WIDTH-1:0]), // Templated
			  .ex_slot0_valid	(ex_slot0_valid), // Templated
			  .ex_slot1_valid	(ex_slot1_valid), // Templated
			  .slot0_T		(slot0_T[PRF_WIDTH-1:0]), // Templated
			  .slot1_T		(slot1_T[PRF_WIDTH-1:0]), // Templated
			  .slot0_control	(slot0_control), // Templated
			  .slot1_control	(slot1_control), // Templated
			  .slot0_pc		(slot0_pc[31:0]), // Templated
			  .slot1_pc		(slot1_pc[31:0]), // Templated
			  .slot0_robid		(slot0_robid[ROB_WIDTH:0]), // Templated
			  .slot1_robid		(slot1_robid[ROB_WIDTH:0]), // Templated
			  // Inputs
			  .clk			(clk),		 // Templated
			  .reset_n		(reset_n),	 // Templated
			  .ir_is_reg0		(ir_is_reg0),	 // Templated
			  .ir_is_reg1		(ir_is_reg1),	 // Templated
			  .ir_is_reg0_pc	(ir_is_reg0_pc[31:0]), // Templated
			  .ir_is_reg1_pc	(ir_is_reg1_pc[31:0]), // Templated
			  .ir_is_reg0_instr	(ir_is_reg0_instr[31:0]), // Templated
			  .ir_is_reg1_instr	(ir_is_reg1_instr[31:0]), // Templated
			  .flush_robid		(flush_robid[ROB_WIDTH:0]),
			  .flush_valid		(flush_valid),	 // Templated
			  .writeback0_valid	(writeback0_valid), // Templated
			  .writeback0_need_to_wb(writeback0_need_to_wb), // Templated
			  .writeback0_prd	(writeback0_prd[PRF_WIDTH-1:0]), // Templated
			  .writeback1_valid	(writeback1_valid), // Templated
			  .writeback1_need_to_wb(writeback1_need_to_wb), // Templated
			  .writeback1_prd	(writeback1_prd[PRF_WIDTH-1:0]), // Templated
			  .writeback2_valid	(writeback2_valid), // Templated
			  .writeback2_need_to_wb(writeback2_need_to_wb), // Templated
			  .writeback2_prd	(writeback2_prd[PRF_WIDTH-1:0]), // Templated
			  .writeback3_valid	(writeback3_valid), // Templated
			  .writeback3_need_to_wb(writeback3_need_to_wb), // Templated
			  .writeback3_prd	(writeback3_prd[PRF_WIDTH-1:0]), // Templated
			  .writeback0_robid	(writeback0_robid[ROB_WIDTH:0]), // Templated
			  .writeback1_robid	(writeback1_robid[ROB_WIDTH:0]), // Templated
			  .writeback2_robid	(writeback2_robid[ROB_WIDTH:0]), // Templated
			  .writeback3_robid	(writeback3_robid[ROB_WIDTH:0]), // Templated
			  .mul_slot_busy	(mul_slot_busy)); // Templated

   

   

endmodule
