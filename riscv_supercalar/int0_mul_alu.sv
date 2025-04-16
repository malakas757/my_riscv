`timescale 1ns/1ps
import common::*;

module int0_mul_alu(/*AUTOARG*/
   // Outputs
   mul_slot_busy, writeback0_valid, writeback0_need_to_wb,
   writeback0_prd, writeback0_robid, writeback0_data,
   writeback1_valid, writeback1_need_to_wb, writeback1_robid,
   writeback1_prd, writeback1_data,
   // Inputs
   clk, reset_n, flush_valid, flush_robid, int0_valid, int0_pc,
   int0_control, int0_rs1, int0_rs2, int0_T, int0_robid
   );

   input                       clk;
   input                       reset_n;
   input                       flush_valid;
   input [ROB_WIDTH:0] 	       flush_robid;
   output 		       mul_slot_busy;//always 1 because pipeline mul unit
   
   

   input                       int0_valid;
   input logic [31:0] 	       int0_pc;
   input control_type          int0_control;
   input logic [31:0]          int0_rs1;
   input logic [31:0]          int0_rs2;
   input logic [PRF_WIDTH-1:0] int0_T;
   input logic [ROB_WIDTH:0]   int0_robid;


   //output to mul_wb
   output logic                 writeback0_valid;//int0 mul
   output logic 		writeback0_need_to_wb;
   output logic [PRF_WIDTH-1:0] writeback0_prd;                     
   output logic [ROB_WIDTH:0] 	writeback0_robid;                     
   output logic [31:0] 		writeback0_data;                     
   //output to alu_wb
   output logic                 writeback1_valid;//int0 mul
   output logic 		writeback1_need_to_wb;
   output logic [ROB_WIDTH:0] 	writeback1_robid;
   output logic [PRF_WIDTH-1:0] writeback1_prd;                     
   output logic [31:0] 		writeback1_data;


   logic [31:0] 		left_operand;
   logic [31:0] 		right_operand;
   logic [63:0] 		mul_out_data;
   logic 			mul_done;
   logic 			mul_out_valid;
   logic [ROB_WIDTH:0] 		mul_out_robid;
   logic [PRF_WIDTH-1:0] 	mul_out_T;

   //wb0 reg
   logic 			wb0_reg_valid;
   logic 			wb0_reg_need_to_wb;
   logic [PRF_WIDTH-1:0] 	wb0_reg_prd;                     
   logic [ROB_WIDTH:0] 		wb0_reg_robid;                     
   logic [31:0] 		wb0_reg_data;
   logic 			wb0_need_to_flush;

   //wb1 reg
   logic 			wb1_reg_valid;
   logic 			wb1_reg_need_to_wb;
   logic [PRF_WIDTH-1:0] 	wb1_reg_prd;                     
   logic [ROB_WIDTH:0] 		wb1_reg_robid;                     
   logic [31:0] 		wb1_reg_data;
   logic 			wb1_need_to_flush;


   logic [31:0] 		alu_result;
   

   
   always_comb begin: operand_selector
      left_operand  = (int0_control.is_auipc)? int0_pc : int0_rs1 ;// add AUIPC
      right_operand = int0_rs2;
      if (int0_control.alu_src) begin
         right_operand = int0_control.imm_data;
      end
   end

   //for alu
   alu inst_alu(
		.control(int0_control.alu_op),
		.left_operand(left_operand), 
		.right_operand(right_operand),
		.result(alu_result)
		);

   //wb1 reg



   assign wb1_need_to_flush = (flush_valid & (wb1_reg_robid[ROB_WIDTH] ^ flush_robid[ROB_WIDTH] ^ (wb1_reg_robid[ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0])))?1:0;
   assign writeback1_need_to_wb  = wb1_reg_need_to_wb;
   assign writeback1_valid       = wb1_reg_valid & ~flush_valid;
   assign writeback1_prd         = wb1_reg_prd;
   assign writeback1_robid       = wb1_reg_robid;
   assign writeback1_data        = wb1_reg_data;
   
   
   always_ff@(posedge clk) begin
      if(~reset_n | wb1_need_to_flush) begin
	 wb1_reg_valid      <= 1'b0;
	 wb1_reg_robid      <= '0;
	 wb1_reg_prd        <= '0;
	 wb1_reg_data       <= '0;
	 wb1_reg_need_to_wb <= '0;
      end
      else if ( ~flush_valid ) begin
	 wb1_reg_valid      <= int0_valid & ~int0_control.is_mul;
	 wb1_reg_robid      <= int0_robid;
	 wb1_reg_prd        <= int0_T;
	 wb1_reg_data       <= alu_result;
	 wb1_reg_need_to_wb <= int0_control.reg_write;	 
      end	 
   end // always_ff@ (posedge clk)


   
   //for mul
   mult inst_mult(
		  // Outputs
		  .product		(mul_out_data),
		  .done			(mul_done),
		  .out_valid		(mul_out_valid),
		  .out_rob_id		(mul_out_robid),
		  .out_prf_id		(mul_out_T),
		  // Inputs
		  .clock		(clk),
		  .reset		(~reset_n),
		  .start		(int0_control.is_mul & int0_valid),
		  .sign			(2'b11),// only support MUL,so should be signed
		  .mcand		(left_operand),
		  .mplier		(right_operand),
		  .valid		(int0_control.is_mul & int0_valid),
		  .rob_id		(int0_robid),
		  .flush_robid		(flush_robid[ROB_WIDTH:0]),
		  .prf_id		(int0_T),
		  .flush_valid		(flush_valid));
   


  
   //wb0 reg
   assign wb0_need_to_flush = (flush_valid & (wb0_reg_robid[ROB_WIDTH] ^ flush_robid[ROB_WIDTH] ^ (wb0_reg_robid[ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0])))?1:0;
   assign writeback0_need_to_wb  = wb0_reg_need_to_wb;
   assign writeback0_valid       = wb0_reg_valid & ~flush_valid;
   assign writeback0_prd         = wb0_reg_prd;
   assign writeback0_robid       = wb0_reg_robid;
   assign writeback0_data        = wb0_reg_data;
   assign mul_slot_busy          = 1'b0;
   
   
   always_ff@(posedge clk) begin
      if(~reset_n | wb0_need_to_flush) begin
	 wb0_reg_valid      <= 1'b0;
	 wb0_reg_robid      <= '0;
	 wb0_reg_prd        <= '0;
	 wb0_reg_data       <= '0;
	 wb0_reg_need_to_wb <= '0;
      end
      else if ( ~flush_valid ) begin
	 wb0_reg_valid      <= mul_done & mul_out_valid;
	 wb0_reg_robid      <= mul_out_robid;
	 wb0_reg_prd        <= mul_out_T;
	 wb0_reg_data       <= mul_out_data[31:0];
	 wb0_reg_need_to_wb <= 1'b1;	 
      end	 
   end // always_ff@ (posedge clk)


endmodule

