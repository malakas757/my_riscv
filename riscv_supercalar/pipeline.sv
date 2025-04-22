`timescale 1ns / 1ps

import common::*;
`define debug

module pipeline(/*AUTOARG*/
   // Outputs
   ram_debug, prf_debug, RRAT_debug,
   // Inputs
   clk, reset_n, imem_en, imem_data_in
   );
   input               clk;
   input               reset_n;
   input               imem_en;
   input [31:0]        imem_data_in;
   output logic [31:0] ram_debug[256];
   output logic [31:0] prf_debug[PRF_NUM-1:0];
   output logic [PRF_WIDTH-1:0] RRAT_debug[ARF_NUM-1:0];
   
   



   //debug///////////////////////////////////////////////


   /////////////////////////////////////////////////////////


   /*AUTOWIRE*/
   // Beginning of automatic wires (for undeclared instantiated-module outputs)
   wire			ID_flush;		// From inst_stall_flush of stall_flush_control.v
   wire			ID_stall;		// From inst_stall_flush of stall_flush_control.v
   wire			IF_flush;		// From inst_stall_flush of stall_flush_control.v
   wire			IF_stall;		// From inst_stall_flush of stall_flush_control.v
   logic [31:0]		IQ0_rs1_data;		// From inst_phyreg of phyreg64.v
   logic [31:0]		IQ0_rs2_data;		// From inst_phyreg of phyreg64.v
   logic [31:0]		IQ1_rs1_data;		// From inst_phyreg of phyreg64.v
   logic [31:0]		IQ1_rs2_data;		// From inst_phyreg of phyreg64.v
   wire			IR_flush;		// From inst_stall_flush of stall_flush_control.v
   wire			IR_stall;		// From inst_stall_flush of stall_flush_control.v
   logic [31:0]		MEM_rs1_data;		// From inst_phyreg of phyreg64.v
   logic [31:0]		MEM_rs2_data;		// From inst_phyreg of phyreg64.v
   wire			PC_stall;		// From inst_stall_flush of stall_flush_control.v
   logic [31:0]		branch_target_pc;	// From inst_int1 of int1_alu_bju.v
   wire			can_dispatch;		// From inst_is_stage of is_stage.v
   logic [GSHARE_GHSR_WIDTH-1:0] ex2if_GHSR_restore;// From inst_int1 of int1_alu_bju.v
   logic [31:0]		ex2if_branch_addr;	// From inst_int1 of int1_alu_bju.v
   logic		ex2if_branch_taken;	// From inst_int1 of int1_alu_bju.v
   logic [31:0]		ex2if_branch_target_addr;// From inst_int1 of int1_alu_bju.v
   logic		ex2if_branch_update_GHSR;// From inst_int1 of int1_alu_bju.v
   logic		ex2if_branch_valid;	// From inst_int1 of int1_alu_bju.v
   logic		ex_slot0_valid;		// From inst_is_stage of is_stage.v
   logic		ex_slot1_valid;		// From inst_is_stage of is_stage.v
   logic		ex_slot2_valid;		// From inst_is_stage of is_stage.v
   logic [ROB_WIDTH:0]	flush_robid;		// From inst_int1 of int1_alu_bju.v
   logic		flush_valid;		// From inst_int1 of int1_alu_bju.v
   wire [PRF_WIDTH-1:0]	instr0_src1;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	instr0_src2;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	instr1_src1;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	instr1_src2;		// From inst_is_stage of is_stage.v
   instr_req_type	instr_req;		// From inst_if_stage of if_stage.v
   logic [PRF_WIDTH-1:0] int0_T;		// From inst_buffer of ex_buffer.v
   control_type		int0_control;		// From inst_buffer of ex_buffer.v
   logic [31:0]		int0_pc;		// From inst_buffer of ex_buffer.v
   logic [ROB_WIDTH:0]	int0_robid;		// From inst_buffer of ex_buffer.v
   logic [31:0]		int0_rs1;		// From inst_buffer of ex_buffer.v
   logic [31:0]		int0_rs2;		// From inst_buffer of ex_buffer.v
   wire			int0_valid;		// From inst_buffer of ex_buffer.v
   logic [PRF_WIDTH-1:0] int1_T;		// From inst_buffer of ex_buffer.v
   control_type		int1_control;		// From inst_buffer of ex_buffer.v
   logic [31:0]		int1_pc;		// From inst_buffer of ex_buffer.v
   logic [ROB_WIDTH:0]	int1_robid;		// From inst_buffer of ex_buffer.v
   logic [31:0]		int1_rs1;		// From inst_buffer of ex_buffer.v
   logic [31:0]		int1_rs2;		// From inst_buffer of ex_buffer.v
   wire			int1_valid;		// From inst_buffer of ex_buffer.v
   logic [PRF_WIDTH-1:0] int2_T;		// From inst_buffer of ex_buffer.v
   control_type		int2_control;		// From inst_buffer of ex_buffer.v
   logic [31:0]		int2_pc;		// From inst_buffer of ex_buffer.v
   logic [ROB_WIDTH:0]	int2_robid;		// From inst_buffer of ex_buffer.v
   logic [31:0]		int2_rs1;		// From inst_buffer of ex_buffer.v
   logic [31:0]		int2_rs2;		// From inst_buffer of ex_buffer.v
   wire			int2_valid;		// From inst_buffer of ex_buffer.v
   logic [31:0]		load_addr;		// From inst_int2 of int2_lsu.v
   wire [31:0]		lsuint2sq_instr0_pc;	// From inst_int2 of int2_lsu.v
   wire [ROB_WIDTH:0]	lsuint2sq_instr0_robid;	// From inst_int2 of int2_lsu.v
   wire			lsuint2sq_instr0_valid;	// From inst_int2 of int2_lsu.v
   wire [31:0]		lsuint2sq_wb_addr;	// From inst_int2 of int2_lsu.v
   wire [31:0]		lsuint2sq_wb_data;	// From inst_int2 of int2_lsu.v
   wire			mem_issue_stall;	// From inst_int2 of int2_lsu.v
   wire [31:0]		mem_read_addr;		// From inst_int2 of int2_lsu.v
   wire			mem_read_req;		// From inst_int2 of int2_lsu.v
   wire			mul_slot_busy;		// From inst_int0 of int0_mul_alu.v
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
   logic [31:0]		retire_sq2mem_addr;	// From inst_sq of storequeue.v
   logic [31:0]		retire_sq2mem_data;	// From inst_sq of storequeue.v
   wire			retire_sq2mem_valid;	// From inst_sq of storequeue.v
   wire [1:0]		rob_state;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	slot0_T;		// From inst_is_stage of is_stage.v
   control_type		slot0_control;		// From inst_is_stage of is_stage.v
   wire [31:0]		slot0_pc;		// From inst_is_stage of is_stage.v
   wire [ROB_WIDTH:0]	slot0_robid;		// From inst_is_stage of is_stage.v
   logic [PRF_WIDTH-1:0] slot0_src1_id;		// From inst_is_stage of is_stage.v
   logic [PRF_WIDTH-1:0] slot0_src2_id;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	slot1_T;		// From inst_is_stage of is_stage.v
   control_type		slot1_control;		// From inst_is_stage of is_stage.v
   wire [31:0]		slot1_pc;		// From inst_is_stage of is_stage.v
   wire [ROB_WIDTH:0]	slot1_robid;		// From inst_is_stage of is_stage.v
   logic [PRF_WIDTH-1:0] slot1_src1_id;		// From inst_is_stage of is_stage.v
   logic [PRF_WIDTH-1:0] slot1_src2_id;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	slot2_T;		// From inst_is_stage of is_stage.v
   control_type		slot2_control;		// From inst_is_stage of is_stage.v
   wire [31:0]		slot2_pc;		// From inst_is_stage of is_stage.v
   wire [ROB_WIDTH:0]	slot2_robid;		// From inst_is_stage of is_stage.v
   logic [PRF_WIDTH-1:0] slot2_src1_id;		// From inst_is_stage of is_stage.v
   logic [PRF_WIDTH-1:0] slot2_src2_id;		// From inst_is_stage of is_stage.v
   wire [31:0]		sq_fwd_data;		// From inst_sq of storequeue.v
   wire			sq_fwd_valid;		// From inst_sq of storequeue.v
   logic [1:0]		sq_left;		// From inst_sq of storequeue.v
   wire [PRF_WIDTH-1:0]	walk0_T;		// From inst_is_stage of is_stage.v
   wire [ARF_WIDTH-1:0]	walk0_arf_id;		// From inst_is_stage of is_stage.v
   wire			walk0_complete;		// From inst_is_stage of is_stage.v
   wire			walk0_valid;		// From inst_is_stage of is_stage.v
   wire [PRF_WIDTH-1:0]	walk1_T;		// From inst_is_stage of is_stage.v
   wire [ARF_WIDTH-1:0]	walk1_arf_id;		// From inst_is_stage of is_stage.v
   wire			walk1_complete;		// From inst_is_stage of is_stage.v
   wire			walk1_valid;		// From inst_is_stage of is_stage.v
   logic [31:0]		writeback0_data;	// From inst_int0 of int0_mul_alu.v
   logic		writeback0_need_to_wb;	// From inst_int0 of int0_mul_alu.v
   logic [PRF_WIDTH-1:0] writeback0_prd;	// From inst_int0 of int0_mul_alu.v
   logic [ROB_WIDTH:0]	writeback0_robid;	// From inst_int0 of int0_mul_alu.v
   logic		writeback0_valid;	// From inst_int0 of int0_mul_alu.v
   logic [31:0]		writeback1_data;	// From inst_int0 of int0_mul_alu.v
   logic		writeback1_need_to_wb;	// From inst_int0 of int0_mul_alu.v
   logic [PRF_WIDTH-1:0] writeback1_prd;	// From inst_int0 of int0_mul_alu.v
   logic [ROB_WIDTH:0]	writeback1_robid;	// From inst_int0 of int0_mul_alu.v
   logic		writeback1_valid;	// From inst_int0 of int0_mul_alu.v
   logic [31:0]		writeback2_data;	// From inst_int1 of int1_alu_bju.v
   logic		writeback2_need_to_wb;	// From inst_int1 of int1_alu_bju.v
   logic [PRF_WIDTH-1:0] writeback2_prd;	// From inst_int1 of int1_alu_bju.v
   logic [ROB_WIDTH:0]	writeback2_robid;	// From inst_int1 of int1_alu_bju.v
   logic		writeback2_valid;	// From inst_int1 of int1_alu_bju.v
   logic [31:0]		writeback3_data;	// From inst_int2 of int2_lsu.v
   logic		writeback3_need_to_wb;	// From inst_int2 of int2_lsu.v
   logic [PRF_WIDTH-1:0] writeback3_prd;	// From inst_int2 of int2_lsu.v
   logic [ROB_WIDTH:0]	writeback3_robid;	// From inst_int2 of int2_lsu.v
   logic		writeback3_valid;	// From inst_int2 of int2_lsu.v
   // End of automatics

   logic [31:0] 	dmem_read_data;
   wire                 imem_miss;
   wire [31:0] 		read_data0;
   wire [31:0] 		read_data1;
      
   wire 		instr_resp_ready;
   


   


  /////////////////////////////////////////////////////////////////////

                              //Stall Flush control//

   ///////////////////////////////////////////////////////////////////

   

   /* stall_flush_control AUTO_TEMPLATE(
    );*/

   stall_flush_control inst_stall_flush(/*AUTOINST*/
					// Outputs
					.PC_stall	(PC_stall),
					.IF_stall	(IF_stall),
					.ID_stall	(ID_stall),
					.IR_stall	(IR_stall),
					.ID_flush	(ID_flush),
					.IF_flush	(IF_flush),
					.IR_flush	(IR_flush),
					// Inputs
					.imem_miss	(imem_miss),
					.can_dispatch	(can_dispatch),
					.flush_valid	(flush_valid),
					.rob_state	(rob_state[1:0]));
   


  /////////////////////////////////////////////////////////////////////

                              //IF STAGE//

   ///////////////////////////////////////////////////////////////////
   
   if_id_type         if_id_reg0,if_id_reg1;
   if_id_type             instr0_if_id;
   if_id_type             instr1_if_id;
   ex2if_type             ex_branch_in;

   //*** ex_... is used to update BTB and GHSR !!!
   // flush_valid and branch_target_pc is used to redirect pc !!!
   assign ex_branch_in.valid = ex2if_branch_valid;
   assign ex_branch_in.taken = ex2if_branch_taken;
   assign ex_branch_in.addr = ex2if_branch_addr;
   assign ex_branch_in.target_addr = ex2if_branch_target_addr;
   assign ex_branch_in.update_GHSR = ex2if_branch_update_GHSR;
   assign ex_branch_in.GHSR_restore = ex2if_GHSR_restore;
   
   

   assign             instr_resp_ready = 1'b1;
   


   /*debug*/
   program_memory inst_imem(
			    // Outputs
			    .read_data0		(read_data0[XLEN_WIDTH-1:0]),
			    .read_data1		(read_data1[XLEN_WIDTH-1:0]),
			    // Inputs
			    .clk		(clk),
			    .byte_address0	(instr0_if_id.pc),
			    .byte_address1	(instr1_if_id.pc),
			    .write_enable	(imem_en),
			    .write_data		(imem_data_in));
   
   
    /*if_stage AUTO_TEMPLATE(
			  .imem_data_instr0	(read_data0),
			  .imem_data_instr1	(read_data1),          
     );*/

   if_stage inst_if_stage(/*AUTOINST*/
			  // Outputs
			  .instr_req		(instr_req),
			  .instr0_if_id		(instr0_if_id),
			  .instr1_if_id		(instr1_if_id),
			  .imem_miss		(imem_miss),
			  // Inputs
			  .clk			(clk),
			  .reset_n		(reset_n),
			  .instr_resp_ready	(instr_resp_ready),
			  .imem_data_instr0	(read_data0),	 // Templated
			  .imem_data_instr1	(read_data1),	 // Templated
			  .ex_branch_in		(ex_branch_in),
			  .flush_valid		(flush_valid),
			  .branch_target_pc	(branch_target_pc[31:0]),
			  .PC_stall		(PC_stall),
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

                              //ID & IR STAGE//

   ///////////////////////////////////////////////////////////////////

  control_type    id_ir_reg0;
  control_type    id_ir_reg1;
/*
`ifdef debug
  logic [31:0]    id_ir_reg0_pc;
  instruction_type    id_ir_reg0_instr;
  logic [31:0]    id_ir_reg1_pc;
  instruction_type    id_ir_reg1_instr;
`endif   
*/
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
   
   
/*      always_ff @(posedge clk) begin


	   if(ID_flush || ~reset_n) begin
	      id_ir_reg0      <= '0;
	      id_ir_reg1      <=g '0;	     
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
   end*/






   ir_is_type             ir_is_reg0,ir_is_reg0_next;
   ir_is_type             ir_is_reg1,ir_is_reg1_next;

   assign                 ir_is_reg0_next.control = dec_instr0;
   assign                 ir_is_reg1_next.control = dec_instr1;
   

`ifdef debug
   logic [31:0]    ir_is_reg0_pc;
   instruction_type    ir_is_reg0_instr;
   logic [31:0]    ir_is_reg1_pc;
   instruction_type    ir_is_reg1_instr;
`endif 
   
   
  /* ir_stage AUTO_TEMPLATE(
		    // Outputs
                    .RRAT_debug         (RRAT_debug),
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
		    .dec_instr0		(dec_instr0),
		    .dec_instr1		(dec_instr1),
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
		    .rat_walk_1_valid	(walk1_valid),       // 
		    .rat_walk_0_rd_id	(walk0_arf_id[ARF_WIDTH-1:0]),//
		    .rat_walk_1_rd_id	(walk1_arf_id[ARF_WIDTH-1:0]),//
		    .rat_walk_0_rd_prf	(walk0_T[PRF_WIDTH-1:0]),//
		    .rat_walk_1_rd_prf	(walk1_T[PRF_WIDTH-1:0]));*/
   
   ir_stage inst_ir(/*AUTOINST*/
		    // Outputs
		    .RRAT_debug		(RRAT_debug),		 // Templated
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
		    .dec_instr0		(dec_instr0),		 // Templated
		    .dec_instr1		(dec_instr1),		 // Templated
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
		    .rat_walk_1_valid	(walk1_valid),		 // Templated
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
	      ir_is_reg0_instr   <=  if_id_reg0.instruction;	     
	      ir_is_reg0_pc      <=  if_id_reg0.pc;	     
	      ir_is_reg1_instr   <=  if_id_reg1.instruction;	     
	      ir_is_reg1_pc      <=  if_id_reg1.pc;
`endif	      
	   end
   end


  /////////////////////////////////////////////////////////////////////

                              //IS STAGE//

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
			  .ex_slot0_valid	(ex_slot0_valid),
			  .ex_slot1_valid	(ex_slot1_valid),
			  .ex_slot2_valid	(ex_slot2_valid),
			  .slot0_T		(slot0_T[PRF_WIDTH-1:0]), // Templated
			  .slot1_T		(slot1_T[PRF_WIDTH-1:0]), // Templated
			  .slot2_T		(slot2_T[PRF_WIDTH-1:0]),
			  .slot0_control	(slot0_control), // Templated
			  .slot1_control	(slot1_control), // Templated
			  .slot2_control	(slot2_control),
			  .slot0_pc		(slot0_pc[31:0]), // Templated
			  .slot1_pc		(slot1_pc[31:0]), // Templated
			  .slot2_pc		(slot2_pc[31:0]),
			  .slot0_robid		(slot0_robid[ROB_WIDTH:0]), // Templated
			  .slot1_robid		(slot1_robid[ROB_WIDTH:0]), // Templated
			  .slot2_robid		(slot2_robid[ROB_WIDTH:0]),
			  .slot0_src1_id	(slot0_src1_id[PRF_WIDTH-1:0]),
			  .slot0_src2_id	(slot0_src2_id[PRF_WIDTH-1:0]),
			  .slot1_src1_id	(slot1_src1_id[PRF_WIDTH-1:0]),
			  .slot1_src2_id	(slot1_src2_id[PRF_WIDTH-1:0]),
			  .slot2_src1_id	(slot2_src1_id[PRF_WIDTH-1:0]),
			  .slot2_src2_id	(slot2_src2_id[PRF_WIDTH-1:0]),
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
			  .mul_slot_busy	(mul_slot_busy), // Templated
			  .mem_issue_stall	(mem_issue_stall));

    /////////////////////////////////////////////////////////////////////

                              //PHY_REG READ STAGE//

   ////////////////////////////////////////////////////////////////////
     
   /* phyreg64 AUTO_TEMPLATE(
    			.IQ0_rs1_addr	(slot0_src1_id),
			.IQ0_rs2_addr	(slot0_src2_id),
			.IQ1_rs1_addr	(slot1_src1_id),
			.IQ1_rs2_addr	(slot1_src2_id),
			.MEM_rs1_addr	(slot2_src1_id),
			.MEM_rs2_addr	(slot2_src2_id),
			.prf_debug	(prf_debug),
    			.writeback0_need_to_wb(writeback0_need_to_wb & writeback0_valid),
			.writeback1_need_to_wb(writeback1_need_to_wb & writeback1_valid),
			.writeback2_need_to_wb(writeback2_need_to_wb & writeback2_valid),
			.writeback3_need_to_wb(writeback3_need_to_wb & writeback3_valid),   
                          );*/
   phyreg64 inst_phyreg(/*AUTOINST*/
			// Outputs
			.prf_debug	(prf_debug),		 // Templated
			.IQ0_rs1_data	(IQ0_rs1_data[31:0]),
			.IQ0_rs2_data	(IQ0_rs2_data[31:0]),
			.IQ1_rs1_data	(IQ1_rs1_data[31:0]),
			.IQ1_rs2_data	(IQ1_rs2_data[31:0]),
			.MEM_rs1_data	(MEM_rs1_data[31:0]),
			.MEM_rs2_data	(MEM_rs2_data[31:0]),
			// Inputs
			.clk		(clk),
			.reset_n	(reset_n),
			.IQ0_rs1_addr	(slot0_src1_id),	 // Templated
			.IQ0_rs2_addr	(slot0_src2_id),	 // Templated
			.IQ1_rs1_addr	(slot1_src1_id),	 // Templated
			.IQ1_rs2_addr	(slot1_src2_id),	 // Templated
			.MEM_rs1_addr	(slot2_src1_id),	 // Templated
			.MEM_rs2_addr	(slot2_src2_id),	 // Templated
			.writeback0_need_to_wb(writeback0_need_to_wb & writeback0_valid), // Templated
			.writeback1_need_to_wb(writeback1_need_to_wb & writeback1_valid), // Templated
			.writeback2_need_to_wb(writeback2_need_to_wb & writeback2_valid), // Templated
			.writeback3_need_to_wb(writeback3_need_to_wb & writeback3_valid), // Templated
			.writeback0_prd	(writeback0_prd[PRF_WIDTH-1:0]),
			.writeback1_prd	(writeback1_prd[PRF_WIDTH-1:0]),
			.writeback2_prd	(writeback2_prd[PRF_WIDTH-1:0]),
			.writeback3_prd	(writeback3_prd[PRF_WIDTH-1:0]),
			.writeback0_data(writeback0_data[31:0]),
			.writeback1_data(writeback1_data[31:0]),
			.writeback2_data(writeback2_data[31:0]),
			.writeback3_data(writeback3_data[31:0]));
   



    /////////////////////////////////////////////////////////////////////

                              //EX STAGE//

   ///////////////////////////////////////////////////////////////////
     /* ex_buffer AUTO_TEMPLATE(
			 // Outputs
			 // Inputs
			 .IQ0_rs1_data		(IQ0_rs1_data[31:0]),
			 .IQ0_rs2_data		(IQ0_rs2_data[31:0]),
			 .IQ1_rs1_data		(IQ1_rs1_data[31:0]),
			 .IQ1_rs2_data		(IQ1_rs2_data[31:0]),
			 .MEM_rs1_data		(MEM_rs1_data[31:0]),
			 .MEM_rs2_data		(MEM_rs2_data[31:0]),
    			 .IQ0_rs1_addr	(slot0_src1_id),
			 .IQ0_rs2_addr	(slot0_src2_id),
			 .IQ1_rs1_addr	(slot1_src1_id),
			 .IQ1_rs2_addr	(slot1_src2_id),
			 .MEM_rs1_addr	(slot2_src1_id),
			 .MEM_rs2_addr	(slot2_src2_id),
    			 .writeback0_need_to_wb(writeback0_need_to_wb & writeback0_valid),
			 .writeback1_need_to_wb(writeback1_need_to_wb & writeback1_valid),
			 .writeback2_need_to_wb(writeback2_need_to_wb & writeback2_valid),
			 .writeback3_need_to_wb(writeback3_need_to_wb & writeback3_valid),    
			 .mem_issue_stall	(mem_issue_stall));*/  

   ex_buffer inst_buffer(/*AUTOINST*/
			 // Outputs
			 .int0_valid		(int0_valid),
			 .int0_pc		(int0_pc[31:0]),
			 .int0_control		(int0_control),
			 .int0_rs1		(int0_rs1[31:0]),
			 .int0_rs2		(int0_rs2[31:0]),
			 .int0_T		(int0_T[PRF_WIDTH-1:0]),
			 .int0_robid		(int0_robid[ROB_WIDTH:0]),
			 .int1_valid		(int1_valid),
			 .int1_pc		(int1_pc[31:0]),
			 .int1_control		(int1_control),
			 .int1_rs1		(int1_rs1[31:0]),
			 .int1_rs2		(int1_rs2[31:0]),
			 .int1_T		(int1_T[PRF_WIDTH-1:0]),
			 .int1_robid		(int1_robid[ROB_WIDTH:0]),
			 .int2_valid		(int2_valid),
			 .int2_pc		(int2_pc[31:0]),
			 .int2_control		(int2_control),
			 .int2_rs1		(int2_rs1[31:0]),
			 .int2_rs2		(int2_rs2[31:0]),
			 .int2_T		(int2_T[PRF_WIDTH-1:0]),
			 .int2_robid		(int2_robid[ROB_WIDTH:0]),
			 // Inputs
			 .clk			(clk),
			 .reset_n		(reset_n),
			 .flush_valid		(flush_valid),
			 .flush_robid		(flush_robid[ROB_WIDTH:0]),
			 .ex_slot0_valid	(ex_slot0_valid),
			 .ex_slot1_valid	(ex_slot1_valid),
			 .ex_slot2_valid	(ex_slot2_valid),
			 .slot0_T		(slot0_T[PRF_WIDTH-1:0]),
			 .slot1_T		(slot1_T[PRF_WIDTH-1:0]),
			 .slot2_T		(slot2_T[PRF_WIDTH-1:0]),
			 .slot0_control		(slot0_control),
			 .slot1_control		(slot1_control),
			 .slot2_control		(slot2_control),
			 .slot0_pc		(slot0_pc[31:0]),
			 .slot1_pc		(slot1_pc[31:0]),
			 .slot2_pc		(slot2_pc[31:0]),
			 .slot0_robid		(slot0_robid[ROB_WIDTH:0]),
			 .slot1_robid		(slot1_robid[ROB_WIDTH:0]),
			 .slot2_robid		(slot2_robid[ROB_WIDTH:0]),
			 .IQ0_rs1_data		(IQ0_rs1_data[31:0]), // Templated
			 .IQ0_rs2_data		(IQ0_rs2_data[31:0]), // Templated
			 .IQ1_rs1_data		(IQ1_rs1_data[31:0]), // Templated
			 .IQ1_rs2_data		(IQ1_rs2_data[31:0]), // Templated
			 .MEM_rs1_data		(MEM_rs1_data[31:0]), // Templated
			 .MEM_rs2_data		(MEM_rs2_data[31:0]), // Templated
			 .IQ0_rs1_addr		(slot0_src1_id), // Templated
			 .IQ0_rs2_addr		(slot0_src2_id), // Templated
			 .IQ1_rs1_addr		(slot1_src1_id), // Templated
			 .IQ1_rs2_addr		(slot1_src2_id), // Templated
			 .MEM_rs1_addr		(slot2_src1_id), // Templated
			 .MEM_rs2_addr		(slot2_src2_id), // Templated
			 .mem_issue_stall	(mem_issue_stall), // Templated
			 .writeback0_need_to_wb	(writeback0_need_to_wb & writeback0_valid), // Templated
			 .writeback1_need_to_wb	(writeback1_need_to_wb & writeback1_valid), // Templated
			 .writeback2_need_to_wb	(writeback2_need_to_wb & writeback2_valid), // Templated
			 .writeback3_need_to_wb	(writeback3_need_to_wb & writeback3_valid), // Templated
			 .writeback0_prd	(writeback0_prd[PRF_WIDTH-1:0]),
			 .writeback1_prd	(writeback1_prd[PRF_WIDTH-1:0]),
			 .writeback2_prd	(writeback2_prd[PRF_WIDTH-1:0]),
			 .writeback3_prd	(writeback3_prd[PRF_WIDTH-1:0]),
			 .writeback0_data	(writeback0_data[31:0]),
			 .writeback1_data	(writeback1_data[31:0]),
			 .writeback2_data	(writeback2_data[31:0]),
			 .writeback3_data	(writeback3_data[31:0]));
   


   int0_mul_alu inst_int0(/*AUTOINST*/
			  // Outputs
			  .mul_slot_busy	(mul_slot_busy),
			  .writeback0_valid	(writeback0_valid),
			  .writeback0_need_to_wb(writeback0_need_to_wb),
			  .writeback0_prd	(writeback0_prd[PRF_WIDTH-1:0]),
			  .writeback0_robid	(writeback0_robid[ROB_WIDTH:0]),
			  .writeback0_data	(writeback0_data[31:0]),
			  .writeback1_valid	(writeback1_valid),
			  .writeback1_need_to_wb(writeback1_need_to_wb),
			  .writeback1_robid	(writeback1_robid[ROB_WIDTH:0]),
			  .writeback1_prd	(writeback1_prd[PRF_WIDTH-1:0]),
			  .writeback1_data	(writeback1_data[31:0]),
			  // Inputs
			  .clk			(clk),
			  .reset_n		(reset_n),
			  .flush_valid		(flush_valid),
			  .flush_robid		(flush_robid[ROB_WIDTH:0]),
			  .int0_valid		(int0_valid),
			  .int0_pc		(int0_pc[31:0]),
			  .int0_control		(int0_control),
			  .int0_rs1		(int0_rs1[31:0]),
			  .int0_rs2		(int0_rs2[31:0]),
			  .int0_T		(int0_T[PRF_WIDTH-1:0]),
			  .int0_robid		(int0_robid[ROB_WIDTH:0]));

    /* int1_alu_bju AUTO_TEMPLATE(
			 // Outputs
			 // Inputs
			  .branch_flush		(flush_valid),
			  .branch_flush_robid	(flush_robid[ROB_WIDTH:0]));*/ 

   int1_alu_bju inst_int1(/*AUTOINST*/
			  // Outputs
			  .writeback2_valid	(writeback2_valid),
			  .writeback2_need_to_wb(writeback2_need_to_wb),
			  .writeback2_prd	(writeback2_prd[PRF_WIDTH-1:0]),
			  .writeback2_robid	(writeback2_robid[ROB_WIDTH:0]),
			  .writeback2_data	(writeback2_data[31:0]),
			  .ex2if_branch_valid	(ex2if_branch_valid),
			  .ex2if_branch_taken	(ex2if_branch_taken),
			  .ex2if_branch_addr	(ex2if_branch_addr[31:0]),
			  .ex2if_branch_target_addr(ex2if_branch_target_addr[31:0]),
			  .ex2if_branch_update_GHSR(ex2if_branch_update_GHSR),
			  .ex2if_GHSR_restore	(ex2if_GHSR_restore[GSHARE_GHSR_WIDTH-1:0]),
			  .branch_target_pc	(branch_target_pc[31:0]),
			  .branch_flush		(flush_valid),	 // Templated
			  .branch_flush_robid	(flush_robid[ROB_WIDTH:0]), // Templated
			  // Inputs
			  .clk			(clk),
			  .reset_n		(reset_n),
			  .flush_valid		(flush_valid),
			  .flush_robid		(flush_robid[ROB_WIDTH:0]),
			  .int1_valid		(int1_valid),
			  .int1_pc		(int1_pc[31:0]),
			  .int1_control		(int1_control),
			  .int1_rs1		(int1_rs1[31:0]),
			  .int1_rs2		(int1_rs2[31:0]),
			  .int1_T		(int1_T[PRF_WIDTH-1:0]),
			  .int1_robid		(int1_robid[ROB_WIDTH:0]));
   
       /* int2_lsu AUTO_TEMPLATE(
			 // Outputs
			 // Inputs
			 .mem_data_valid	(1'b1),
			 .mem_data_resp		(dmem_read_data));*/ 
   
   int2_lsu    inst_int2(/*AUTOINST*/
			 // Outputs
			 .mem_issue_stall	(mem_issue_stall),
			 .writeback3_valid	(writeback3_valid),
			 .writeback3_need_to_wb	(writeback3_need_to_wb),
			 .writeback3_prd	(writeback3_prd[PRF_WIDTH-1:0]),
			 .writeback3_robid	(writeback3_robid[ROB_WIDTH:0]),
			 .writeback3_data	(writeback3_data[31:0]),
			 .load_addr		(load_addr[31:0]),
			 .lsuint2sq_instr0_valid(lsuint2sq_instr0_valid),
			 .lsuint2sq_instr0_robid(lsuint2sq_instr0_robid[ROB_WIDTH:0]),
			 .lsuint2sq_wb_data	(lsuint2sq_wb_data[31:0]),
			 .lsuint2sq_wb_addr	(lsuint2sq_wb_addr[31:0]),
			 .lsuint2sq_instr0_pc	(lsuint2sq_instr0_pc[31:0]),
			 .mem_read_req		(mem_read_req),
			 .mem_read_addr		(mem_read_addr[31:0]),
			 // Inputs
			 .clk			(clk),
			 .reset_n		(reset_n),
			 .flush_valid		(flush_valid),
			 .flush_robid		(flush_robid[ROB_WIDTH:0]),
			 .int2_valid		(int2_valid),
			 .int2_pc		(int2_pc[31:0]),
			 .int2_control		(int2_control),
			 .int2_rs1		(int2_rs1[31:0]),
			 .int2_rs2		(int2_rs2[31:0]),
			 .int2_T		(int2_T[PRF_WIDTH-1:0]),
			 .int2_robid		(int2_robid[ROB_WIDTH:0]),
			 .sq_fwd_data		(sq_fwd_data[31:0]),
			 .sq_fwd_valid		(sq_fwd_valid),
			 .sq_left		(sq_left[1:0]),
			 .mem_data_valid	(1'b1),		 // Templated
			 .mem_data_resp		(dmem_read_data)); // Templated

   storequeue inst_sq(/*AUTOINST*/
		      // Outputs
		      .sq_left		(sq_left[1:0]),
		      .retire_sq2mem_data(retire_sq2mem_data[31:0]),
		      .retire_sq2mem_addr(retire_sq2mem_addr[31:0]),
		      .retire_sq2mem_valid(retire_sq2mem_valid),
		      .sq_fwd_data	(sq_fwd_data[31:0]),
		      .sq_fwd_valid	(sq_fwd_valid),
		      // Inputs
		      .clk		(clk),
		      .reset_n		(reset_n),
		      .lsuint2sq_instr0_valid(lsuint2sq_instr0_valid),
		      .lsuint2sq_instr0_robid(lsuint2sq_instr0_robid[ROB_WIDTH:0]),
		      .lsuint2sq_instr0_pc(lsuint2sq_instr0_pc[31:0]),
		      .lsuint2sq_wb_data(lsuint2sq_wb_data[31:0]),
		      .lsuint2sq_wb_addr(lsuint2sq_wb_addr[31:0]),
		      .retire0_valid	(retire0_valid),
		      .retire1_valid	(retire1_valid),
		      .retire0_robid	(retire0_robid[ROB_WIDTH:0]),
		      .retire1_robid	(retire1_robid[ROB_WIDTH:0]),
		      .flush_valid	(flush_valid),
		      .flush_robid	(flush_robid[ROB_WIDTH:0]),
		      .load_addr	(load_addr[31:0]));

   data_memory inst_dmem(
			 // Outputs
			 .read_data		(dmem_read_data[31:0]),
			 .ram_debug		(ram_debug),
			 // Inputs
			 .clk			(clk),
			 .read_address		(mem_read_addr[9:0]),
			 .write_address		(retire_sq2mem_addr[9:0]),
			 .write_enable		(retire_sq2mem_valid),
			 .write_data		(retire_sq2mem_data[31:0]));
   
   

   

endmodule
