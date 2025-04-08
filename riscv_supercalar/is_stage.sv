`timescale 1ns/1ps
import common::*;

module is_stage(/*AUTOARG*/
   // Outputs
   can_dispatch, instr0_src1, instr0_src2, instr1_src1, instr1_src2,
   retire0_valid, retire1_valid, retire0_is_wb, retire1_is_wb,
   retire0_arf_id, retire1_arf_id, retire0_fl_Told, retire1_fl_Told,
   retire0_T, retire1_T, retire0_robid, retire1_robid, rob_state,
   walk0_valid, walk1_valid, walk0_complete, walk1_complete,
   walk0_arf_id, walk1_arf_id, walk0_T, walk1_T, ex_slot0_valid,
   ex_slot1_valid, slot0_T, slot1_T, slot0_control, slot1_control,
   slot0_pc, slot1_pc, slot0_robid, slot1_robid,
   // Inputs
   clk, reset_n, ir_is_reg0, ir_is_reg1, ir_is_reg0_pc, ir_is_reg1_pc,
   ir_is_reg0_instr, ir_is_reg1_instr, flush_robid, flush_valid,
   writeback0_valid, writeback0_need_to_wb, writeback0_prd,
   writeback1_valid, writeback1_need_to_wb, writeback1_prd,
   writeback2_valid, writeback2_need_to_wb, writeback2_prd,
   writeback3_valid, writeback3_need_to_wb, writeback3_prd,
   writeback0_robid, writeback1_robid, writeback2_robid,
   writeback3_robid, mul_slot_busy
   );


   input                   clk;
   input                   reset_n;

// state
   output                    can_dispatch;//    

//from pipeline reg
   input  ir_is_type         ir_is_reg0;
   input  ir_is_type         ir_is_reg1;
   input  logic[31:0]        ir_is_reg0_pc;
   input  logic[31:0]        ir_is_reg1_pc;
   input  logic[31:0]        ir_is_reg0_instr;
   input  logic[31:0]        ir_is_reg1_instr;

//from/to busytable
   output [PRF_WIDTH-1:0]    instr0_src1;
   output [PRF_WIDTH-1:0]    instr0_src2;
   output [PRF_WIDTH-1:0]    instr1_src1;
   output [PRF_WIDTH-1:0]    instr1_src2;

   
//retire to ir stage
   output 		     retire0_valid;
   output 		     retire1_valid;
   output 		     retire0_is_wb;
   output 		     retire1_is_wb;
   output [ARF_WIDTH-1:0]    retire0_arf_id;
   output [ARF_WIDTH-1:0]    retire1_arf_id;
   output [PRF_WIDTH-1:0]    retire0_fl_Told;
   output [PRF_WIDTH-1:0]    retire1_fl_Told;
   output [PRF_WIDTH-1:0]    retire0_T;
   output [PRF_WIDTH-1:0]    retire1_T;
   output [ROB_WIDTH:0]      retire0_robid;
   output [ROB_WIDTH:0]      retire1_robid;

//flush and walk logic
   //flush logic
   input logic [ROB_WIDTH:0] flush_robid;
   input 		     flush_valid;


   //walk logic output
   output [1:0] 	     rob_state;				
   output 		     walk0_valid;
   output 		     walk1_valid;
   output 		     walk0_complete;
   output 		     walk1_complete;
   output [ARF_WIDTH-1:0]    walk0_arf_id;
   output [ARF_WIDTH-1:0]    walk1_arf_id;
   output [PRF_WIDTH-1:0]    walk0_T;
   output [PRF_WIDTH-1:0]    walk1_T;

//from/to exe stage
   input logic 		       writeback0_valid;//int0 mul
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
   output logic                ex_slot0_valid;
   output logic                ex_slot1_valid;
   output [PRF_WIDTH-1:0]      slot0_T;
   output [PRF_WIDTH-1:0]      slot1_T;
   output control_type	       slot0_control;
   output control_type	       slot1_control;
   output [31:0]               slot0_pc;
   output [31:0] 	       slot1_pc;
   output [ROB_WIDTH:0]        slot0_robid;
   output [ROB_WIDTH:0]        slot1_robid;      


/*AUTOWIRE*/
// Beginning of automatic wires (for undeclared instantiated-module outputs)
wire [PRF_WIDTH-1:0]	instr0_T;		// From inst_dispatch of dispatch.v
wire [PRF_WIDTH-1:0]	instr0_T_old;		// From inst_dispatch of dispatch.v
control_type		instr0_control;		// From inst_dispatch of dispatch.v
instruction_type	instr0_instr;		// From inst_dispatch of dispatch.v
wire [31:0]		instr0_pc;		// From inst_dispatch of dispatch.v
wire [ROB_WIDTH:0]	instr0_robid;		// From inst_rob of rob.v
logic [SQ_WIDTH-1:0]	instr0_sqid;		// From inst_dispatch of dispatch.v
logic			instr0_valid_intisq;	// From inst_dispatch of dispatch.v
wire			instr0_valid_rob;	// From inst_dispatch of dispatch.v
wire [PRF_WIDTH-1:0]	instr1_T;		// From inst_dispatch of dispatch.v
wire [PRF_WIDTH-1:0]	instr1_T_old;		// From inst_dispatch of dispatch.v
control_type		instr1_control;		// From inst_dispatch of dispatch.v
instruction_type	instr1_instr;		// From inst_dispatch of dispatch.v
wire [31:0]		instr1_pc;		// From inst_dispatch of dispatch.v
wire [ROB_WIDTH:0]	instr1_robid;		// From inst_rob of rob.v
logic [SQ_WIDTH-1:0]	instr1_sqid;		// From inst_dispatch of dispatch.v
logic			instr1_valid_intisq;	// From inst_dispatch of dispatch.v
wire			instr1_valid_rob;	// From inst_dispatch of dispatch.v
wire [ROB_WIDTH:0]	isq_robid_0;		// From inst_dispatch of dispatch.v
wire [ROB_WIDTH:0]	isq_robid_1;		// From inst_dispatch of dispatch.v
wire			isq_src1_busy_0;	// From inst_dispatch of dispatch.v
wire			isq_src1_busy_1;	// From inst_dispatch of dispatch.v
wire			isq_src2_busy_0;	// From inst_dispatch of dispatch.v
wire			isq_src2_busy_1;	// From inst_dispatch of dispatch.v
wire [1:0]		rob_left;		// From inst_rob of rob.v
// End of automatics

   wire [1:0]		intisq_left;		// From inst_rob of rob.v
  // wire [1:0]		sq_left;		// From inst_rob of rob.v
  // wire [1:0] 		memisq_left;		// From inst_rob of rob.v
   wire                 instr0_rs1_busy;
   wire                 instr1_rs2_busy;
   wire                 instr0_rs1_busy;
   wire                 instr1_rs2_busy;
   

/*   dispatch AUTO_TEMPLATE(
			  // Outputs
			  .instr0_valid_intisq	(instr0_valid_intisq),//
			  .instr1_valid_intisq	(instr1_valid_intisq),//
			  .instr0_sqid		(instr0_sqid[SQ_WIDTH-1:0]),
			  .instr1_sqid		(instr1_sqid[SQ_WIDTH-1:0]),
			  // Inputs		 
			  .instr0_pipe_reg	(ir_is_reg0),//
			  .instr1_pipe_reg	(ir_is_reg1),//
			  .instr0_pc_in		(ir_is_reg0_pc),//
			  .instr1_pc_in		(ir_is_reg1_pc),//
			  .instr0_instr_in	(ir_is_reg0_instr),//
			  .instr1_instr_in	(ir_is_reg1_instr),//
			  .rob_left		(rob_left[1:0]),//
			  .instr0_robid_in	(instr0_robid[ROB_WIDTH:0]),//
			  .instr1_robid_in	(instr1_robid[ROB_WIDTH:0]),//
			  .instr0_src1_busy_in	(instr0_rs1_busy),// 
			  .instr0_src2_busy_in	(instr0_rs2_busy),// 
			  .instr1_src1_busy_in	(instr1_rs1_busy),// 
			  .instr1_src2_busy_in	(instr1_rs2_busy),// 
			  .intisq_left		(intisq_left[1:0]),//
			  .memisq_left		(2'b10),//
			  .sq_left		(2'b10));*/


   dispatch inst_dispatch(/*AUTOINST*/
			  // Outputs
			  .can_dispatch		(can_dispatch),
			  .instr0_control	(instr0_control),
			  .instr1_control	(instr1_control),
			  .instr0_valid_rob	(instr0_valid_rob),
			  .instr1_valid_rob	(instr1_valid_rob),
			  .instr0_pc		(instr0_pc[31:0]),
			  .instr1_pc		(instr1_pc[31:0]),
			  .instr0_instr		(instr0_instr),
			  .instr1_instr		(instr1_instr),
			  .instr0_T		(instr0_T[PRF_WIDTH-1:0]),
			  .instr1_T		(instr1_T[PRF_WIDTH-1:0]),
			  .instr0_T_old		(instr0_T_old[PRF_WIDTH-1:0]),
			  .instr1_T_old		(instr1_T_old[PRF_WIDTH-1:0]),
			  .instr0_src1		(instr0_src1[PRF_WIDTH-1:0]),
			  .instr0_src2		(instr0_src2[PRF_WIDTH-1:0]),
			  .instr1_src1		(instr1_src1[PRF_WIDTH-1:0]),
			  .instr1_src2		(instr1_src2[PRF_WIDTH-1:0]),
			  .instr0_valid_intisq	(instr0_valid_intisq), // Templated
			  .instr1_valid_intisq	(instr1_valid_intisq), // Templated
			  .isq_robid_0		(isq_robid_0[ROB_WIDTH:0]),
			  .isq_robid_1		(isq_robid_1[ROB_WIDTH:0]),
			  .isq_src1_busy_0	(isq_src1_busy_0),
			  .isq_src2_busy_0	(isq_src2_busy_0),
			  .isq_src1_busy_1	(isq_src1_busy_1),
			  .isq_src2_busy_1	(isq_src2_busy_1),
			  .instr0_sqid		(instr0_sqid[SQ_WIDTH-1:0]), // Templated
			  .instr1_sqid		(instr1_sqid[SQ_WIDTH-1:0]), // Templated
			  // Inputs
			  .instr0_pipe_reg	(ir_is_reg0),	 // Templated
			  .instr1_pipe_reg	(ir_is_reg1),	 // Templated
			  .instr0_pc_in		(ir_is_reg0_pc), // Templated
			  .instr1_pc_in		(ir_is_reg1_pc), // Templated
			  .instr0_instr_in	(ir_is_reg0_instr), // Templated
			  .instr1_instr_in	(ir_is_reg1_instr), // Templated
			  .rob_left		(rob_left[1:0]), // Templated
			  .instr0_robid_in	(instr0_robid[ROB_WIDTH:0]), // Templated
			  .instr1_robid_in	(instr1_robid[ROB_WIDTH:0]), // Templated
			  .instr0_src1_busy_in	(instr0_rs1_busy), // Templated
			  .instr0_src2_busy_in	(instr0_rs2_busy), // Templated
			  .instr1_src1_busy_in	(instr1_rs1_busy), // Templated
			  .instr1_src2_busy_in	(instr1_rs2_busy), // Templated
			  .intisq_left		(intisq_left[1:0]), // Templated
			  .memisq_left		(2'b10),	 // Templated
			  .sq_left		(2'b10));	 // Templated

   
/*   rob AUTO_TEMPLATE(
		// Outputs	
		.retire0_valid		(retire0_valid),		      //
		.retire1_valid		(retire1_valid),		      //
		.retire0_is_wb		(retire0_is_wb),		      //
		.retire1_is_wb		(retire1_is_wb),		      //
		.retire0_arf_id		(retire0_arf_id[ARF_WIDTH-1:0]),      //
		.retire1_arf_id		(retire1_arf_id[ARF_WIDTH-1:0]),      //
		.retire0_fl_Told	(retire0_fl_Told[PRF_WIDTH-1:0]),     //
		.retire1_fl_Told	(retire1_fl_Told[PRF_WIDTH-1:0]),     //
		.retire0_T		(retire0_T[PRF_WIDTH-1:0]),	      //
		.retire1_T		(retire1_T[PRF_WIDTH-1:0]),	      //
		.rob_state		(rob_state[1:0]),		      //
		.walk0_valid		(walk0_valid),			      //
		.walk1_valid		(walk1_valid),			      //
		.walk0_complete		(walk0_complete),		      //
		.walk1_complete		(walk1_complete),		      //
		.walk0_arf_id		(walk0_arf_id[ARF_WIDTH-1:0]),	      //
		.walk1_arf_id		(walk1_arf_id[ARF_WIDTH-1:0]),	      //
		.walk0_T		(walk0_T[PRF_WIDTH-1:0]),	      //
		.walk1_T		(walk1_T[PRF_WIDTH-1:0]),             //
		// Inputs
		.clk			(clk),
		.reset_n		(reset_n),
		.instr0_valid		(instr0_valid_rob),//
		.instr1_valid		(instr1_valid_rob),//
		.instr0_is_wb		(instr0_control.reg_write),//
		.instr1_is_wb		(instr1_control.reg_write),//			      
		.instr0_arf_id		(instr0_control.rd_id),    // 
		.instr1_arf_id		(instr1_control.rd_id),	   // 
		.int0alu_wb_valid	(writeback0_valid),	   // 
		.int0mul_wb_valid	(writeback1_valid),	   // 
		.int1alu_wb_valid	(writeback2_valid),	   // 
		.int1lsu_wb_valid	(writeback3_valid),	   // 
		.int0alu_wb_robid	(writeback0_robid),	   // 
		.int0mul_wb_robid	(writeback1_robid),	   // 
		.int1alu_wb_robid	(writeback2_robid),	   // 
		.int1lsu_wb_robid	(writeback3_robid),	   // 
);*/

   
   
   rob inst_rob(/*AUTOINST*/
		// Outputs
		.rob_left		(rob_left[1:0]),
		.instr0_robid		(instr0_robid[ROB_WIDTH:0]),
		.instr1_robid		(instr1_robid[ROB_WIDTH:0]),
		.retire0_valid		(retire0_valid),	 // Templated
		.retire1_valid		(retire1_valid),	 // Templated
		.retire0_is_wb		(retire0_is_wb),	 // Templated
		.retire1_is_wb		(retire1_is_wb),	 // Templated
		.retire0_arf_id		(retire0_arf_id[ARF_WIDTH-1:0]), // Templated
		.retire1_arf_id		(retire1_arf_id[ARF_WIDTH-1:0]), // Templated
		.retire0_fl_Told	(retire0_fl_Told[PRF_WIDTH-1:0]), // Templated
		.retire1_fl_Told	(retire1_fl_Told[PRF_WIDTH-1:0]), // Templated
		.retire0_T		(retire0_T[PRF_WIDTH-1:0]), // Templated
		.retire1_T		(retire1_T[PRF_WIDTH-1:0]), // Templated
		.retire0_robid		(retire0_robid[ROB_WIDTH:0]),
		.retire1_robid		(retire1_robid[ROB_WIDTH:0]),
		.rob_state		(rob_state[1:0]),	 // Templated
		.walk0_valid		(walk0_valid),		 // Templated
		.walk1_valid		(walk1_valid),		 // Templated
		.walk0_complete		(walk0_complete),	 // Templated
		.walk1_complete		(walk1_complete),	 // Templated
		.walk0_arf_id		(walk0_arf_id[ARF_WIDTH-1:0]), // Templated
		.walk1_arf_id		(walk1_arf_id[ARF_WIDTH-1:0]), // Templated
		.walk0_T		(walk0_T[PRF_WIDTH-1:0]), // Templated
		.walk1_T		(walk1_T[PRF_WIDTH-1:0]), // Templated
		// Inputs
		.clk			(clk),			 // Templated
		.reset_n		(reset_n),		 // Templated
		.instr0_valid		(instr0_valid_rob),	 // Templated
		.instr1_valid		(instr1_valid_rob),	 // Templated
		.instr0_is_wb		(instr0_control.reg_write), // Templated
		.instr1_is_wb		(instr1_control.reg_write), // Templated
		.instr0_pc		(instr0_pc[31:0]),
		.instr1_pc		(instr1_pc[31:0]),
		.instr0_instr		(instr0_instr),
		.instr1_instr		(instr1_instr),
		.instr0_T		(instr0_T[PRF_WIDTH-1:0]),
		.instr1_T		(instr1_T[PRF_WIDTH-1:0]),
		.instr0_T_old		(instr0_T_old[PRF_WIDTH-1:0]),
		.instr1_T_old		(instr1_T_old[PRF_WIDTH-1:0]),
		.instr0_arf_id		(instr0_control.rd_id),	 // Templated
		.instr1_arf_id		(instr1_control.rd_id),	 // Templated
		.int0alu_wb_valid	(writeback0_valid),	 // Templated
		.int0mul_wb_valid	(writeback1_valid),	 // Templated
		.int1alu_wb_valid	(writeback2_valid),	 // Templated
		.int1lsu_wb_valid	(writeback3_valid),	 // Templated
		.int0alu_wb_robid	(writeback0_robid),	 // Templated
		.int0mul_wb_robid	(writeback1_robid),	 // Templated
		.int1alu_wb_robid	(writeback2_robid),	 // Templated
		.int1lsu_wb_robid	(writeback3_robid),	 // Templated
		.flush_robid		(flush_robid[ROB_WIDTH:0]),
		.flush_valid		(flush_valid));
   
   intisq inst_intisq(
		      // Outputs
		      .intisq_left	(intisq_left[1:0]),//
		      .ex_slot0_valid	(ex_slot0_valid),//
		      .ex_slot1_valid	(ex_slot1_valid),//
		      .slot0_T		(slot0_T[PRF_WIDTH-1:0]),//
		      .slot1_T		(slot1_T[PRF_WIDTH-1:0]),//
		      .slot0_control	(slot0_control),//
		      .slot1_control	(slot1_control),//
		      .slot0_pc		(slot0_pc[31:0]),//
		      .slot1_pc		(slot1_pc[31:0]),//
		      .slot0_robid	(slot0_robid[ROB_WIDTH:0]),//
		      .slot1_robid	(slot1_robid[ROB_WIDTH:0]),//
		      // Inputs
		      .clk		(clk),
		      .reset_n		(reset_n),
		      .instr0_enq_valid	(instr0_valid_intisq),//
		      .instr1_enq_valid	(instr1_valid_intisq),//
		      .instr0_control	(instr0_control),//
		      .instr1_control	(instr1_control),//
		      .instr0_pc	(instr0_pc[31:0]),//
		      .instr1_pc	(instr1_pc[31:0]),//
		      .instr0_robid	(isq_robid_0),//
		      .instr1_robid	(isq_robid_1),//
		      .instr0_src1_id	(instr0_src1),//
		      .instr0_src2_id	(instr0_src2),//
		      .instr1_src1_id	(instr1_src1),//
		      .instr1_src2_id	(instr1_src2),//
		      .instr0_T		(instr0_T[PRF_WIDTH-1:0]),//
		      .instr1_T		(instr1_T[PRF_WIDTH-1:0]),//
		      .instr0_src1_busy	(isq_src1_busy_0),//
		      .instr0_src2_busy	(isq_src2_busy_0),// 
		      .instr1_src1_busy	(isq_src1_busy_1),// 
		      .instr1_src2_busy	(isq_src2_busy_1),// 
		      .writeback0_valid	(writeback0_valid),               // 
		      .writeback0_need_to_wb(writeback0_need_to_wb),	  // 
		      .writeback0_prd	(writeback0_prd[PRF_WIDTH-1:0]),  // 
		      .writeback1_valid	(writeback1_valid),		  // 
		      .writeback1_need_to_wb(writeback1_need_to_wb),	  // 
		      .writeback1_prd	(writeback1_prd[PRF_WIDTH-1:0]),  // 
		      .writeback2_valid	(writeback2_valid),		  // 
		      .writeback2_need_to_wb(writeback2_need_to_wb),	  // 
		      .writeback2_prd	(writeback2_prd[PRF_WIDTH-1:0]),  // 
		      .writeback3_valid	(writeback3_valid),		  // 
		      .writeback3_need_to_wb(writeback3_need_to_wb),	  // 
		      .writeback3_prd	(writeback3_prd[PRF_WIDTH-1:0]),  // 
		      .flush_valid	(flush_valid),			  // 
		      .flush_robid	(flush_robid[ROB_WIDTH:0]),	  // 
		      .mul_slot_busy	(mul_slot_busy));		  // 


   busytable inst_bt(
		     // Outputs
		     .instr0_rs1_busy	(instr0_rs1_busy),
		     .instr0_rs2_busy	(instr0_rs2_busy),
		     .instr1_rs1_busy	(instr1_rs1_busy),
		     .instr1_rs2_busy	(instr1_rs2_busy),
		     // Inputs
		     .clk		(clk),
		     .reset_n		(reset_n),
		     .instr0_disp2bt_rs1(instr0_src1),// 
		     .instr0_disp2bt_rs2(instr0_src2),// 
		     .instr1_disp2bt_rs1(instr1_src1),// 
		     .instr1_disp2bt_rs2(instr1_src2),// 
		     .instr0_disp2bt_rs1_valid(instr0_control.rs1_valid),// 
		     .instr0_disp2bt_rs2_valid(instr0_control.rs2_valid),// 
		     .instr1_disp2bt_rs1_valid(instr1_control.rs1_valid),// 
		     .instr1_disp2bt_rs2_valid(instr1_control.rs2_valid),// 
		     .instr0_disp2bt_rd	(instr0_T[PRF_WIDTH-1:0]),//
		     .instr1_disp2bt_rd	(instr1_T[PRF_WIDTH-1:0]),//
		     .instr0_disp2bt_rd_en(instr0_valid_rob & instr0_control.reg_write),
		     .instr1_disp2bt_rd_en(instr1_valid_rob & instr1_control.reg_write),
		     .int0_mul_wb	(writeback0_prd),//
		     .int0_mul_wb_en	(writeback0_valid & writeback0_need_to_wb),// 
		     .int0_alu_wb	(writeback1_prd),			   // 
		     .int0_alu_wb_en	(writeback1_valid & writeback1_need_to_wb),// 
		     .int1_alu_wb	(writeback2_prd),			   // 
		     .int1_alu_wb_en	(writeback2_valid & writeback2_need_to_wb),// 
		     .mem_alu_wb	(writeback3_prd),			   // 
		     .mem_alu_wb_en	(writeback3_valid & writeback3_need_to_wb),// 
		     .rob_state		(rob_state[1:0]),//
		     .rob_walk0_valid	(walk0_valid),            // 
		     .rob_walk0_complete(walk0_complete),	  // 
		     .rob_walk0_prd	(walk0_T[PRF_WIDTH-1:0]), // 
		     .rob_walk1_valid	(walk1_valid),		  // 
		     .rob_walk1_prd	(walk1_T[PRF_WIDTH-1:0]), // 
		     .rob_walk1_complete(walk1_complete));	  // 


endmodule
