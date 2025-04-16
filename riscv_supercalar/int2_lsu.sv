`timescale 1ns/1ps

import common::*;


module int2_lsu(/*AUTOARG*/
   // Outputs
   mem_issue_stall, writeback3_valid, writeback3_need_to_wb,
   writeback3_prd, writeback3_robid, writeback3_data, load_addr,
   lsuint2sq_instr0_valid, lsuint2sq_instr0_robid, lsuint2sq_wb_data,
   lsuint2sq_wb_addr, lsuint2sq_instr0_pc, mem_read_req,
   mem_read_addr,
   // Inputs
   clk, reset_n, flush_valid, flush_robid, int2_valid, int2_pc,
   int2_control, int2_rs1, int2_rs2, int2_T, int2_robid, sq_fwd_data,
   sq_fwd_valid, sq_left, mem_data_valid, mem_data_resp
   );
   input                       clk;
   input                       reset_n;
   input                       flush_valid;
   input [ROB_WIDTH:0] 	       flush_robid;
   output                      mem_issue_stall;
   

   //from buffer
   input                       int2_valid;
   input logic [31:0] 	       int2_pc;
   input control_type          int2_control;
   input logic [31:0]          int2_rs1;
   input logic [31:0]          int2_rs2;
   input logic [PRF_WIDTH-1:0] int2_T;
   input logic [ROB_WIDTH:0]   int2_robid;
   //output to writeback2 alu
   output logic                 writeback3_valid;
   output logic 		writeback3_need_to_wb;
   output logic [PRF_WIDTH-1:0] writeback3_prd;                     
   output logic [ROB_WIDTH:0] 	writeback3_robid;                     
   output logic [31:0] 		writeback3_data;
   //from/to store buffer
      //fwd
   input  logic [31:0] 		sq_fwd_data;
   input  logic  		sq_fwd_valid;
   output logic [31:0] 		load_addr;
     // write to store queue
   input logic [1:0] 		sq_left;
   output 			lsuint2sq_instr0_valid;
   output [ROB_WIDTH:0] 	lsuint2sq_instr0_robid;
   output [31:0] 		lsuint2sq_wb_data;
   output [31:0] 		lsuint2sq_wb_addr;
   //debug
   output [31:0] 		lsuint2sq_instr0_pc;




   //from/to dmem
   output                       mem_read_req;
   output [31:0] 		mem_read_addr;
   input                        mem_data_valid;//from dmem, data is valid
   input [31:0] 		mem_data_resp;
   
   
   
   //pipereg
   logic [31:0] 		agu_mem_addr,reg_mem_addr;
   logic [31:0] 		agu_store_data,reg_store_data;
   logic 			reg_valid;
   logic 			reg_is_store;
   logic [ROB_WIDTH:0] 		reg_robid;
   logic [PRF_WIDTH-1:0] 	reg_T;
   logic [31:0] 		reg_pc;
   logic [2:0] 			reg_funct3;
   
   logic 			need_to_flush;//pipereg
   logic 			wb_need_to_flush;//wb_reg
   logic 			load_data_is_not_ready;//if the data has come back from dmem or can fwd from sq  
   logic                        need_to_alloc_sq;

   //wb reg
   logic 			wb_reg_valid;
   logic 			wb_reg_need_to_wb;
   logic [PRF_WIDTH-1:0] 	wb_reg_prd;                     
   logic [ROB_WIDTH:0] 		wb_reg_robid;                     
   logic [31:0] 		wb_reg_data;

   //load_data
   logic [31:0] 		load_data;
   logic [31:0] 		load_data_cut;
   logic [7:0] 			load_byte        ;  // Load byte
   logic [15:0] 		load_hword       ;  // Load half-word
   logic [31:0] 		load_word        ;  // Load word
 
   
   lsu inst_agu(
		// Outputs
		.mem_addr		(agu_mem_addr[31:0]),
		.store_data		(agu_store_data[31:0]),
		// Inputs
		.left_operand		(int2_rs1),
		.right_operand		(int2_rs2),
		.control		(int2_control),
		.immediate_data		(int2_control.imm_data));


   assign need_to_flush = (flush_valid & (reg_robid[ROB_WIDTH] ^ flush_robid[ROB_WIDTH] ^ (reg_robid[ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0])))?1:0;
   assign wb_need_to_flush = (flush_valid & (wb_reg_robid[ROB_WIDTH] ^ flush_robid[ROB_WIDTH] ^ (wb_reg_robid[ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0])))?1:0;
   

   always_ff@(posedge clk) begin
      if(~reset_n | need_to_flush) begin
	 reg_valid      <= 1'b0;
	 reg_is_store   <= 1'b0;
	 reg_robid      <= '0;
	 reg_T          <= '0;
	 reg_pc         <= '0;
	 reg_mem_addr   <= '0;
	 reg_store_data <= '0;
	 reg_funct3     <= '0;
      end
      else if (~flush_valid & ~mem_issue_stall) begin
	 reg_valid      <= int2_valid; 
	 reg_is_store   <= int2_control.mem_write; 
	 reg_robid      <= int2_robid; 
	 reg_T          <= int2_T; 
	 reg_mem_addr   <= agu_mem_addr; 
	 reg_store_data <= agu_store_data; 	 
	 reg_pc         <= int2_pc; 	 
	 reg_funct3     <= int2_control.funct3; 	 
      end	 
   end
   
   //write to sq
   assign   lsuint2sq_instr0_valid = need_to_alloc_sq & ~mem_issue_stall ;
   assign   lsuint2sq_instr0_pc    = reg_pc;
   assign   lsuint2sq_instr0_robid = reg_robid;
   assign   lsuint2sq_wb_addr         = reg_mem_addr;
   assign   lsuint2sq_wb_data         = reg_store_data;


   //stall logic
   // 1.sq is full
   // 2.cant fwd from sq and data mem from dmem is not ready

   assign need_to_alloc_sq = ~flush_valid & reg_is_store & reg_valid;   
   assign mem_read_req  = ~reg_is_store & reg_valid & ~flush_valid;
   assign mem_read_addr = reg_mem_addr;
   assign load_data_is_not_ready = mem_read_req & ~(mem_data_valid | sq_fwd_valid);   
   assign mem_issue_stall = (need_to_alloc_sq & sq_left == 0) | (load_data_is_not_ready);
   

   //writeback
   assign writeback3_data       = wb_reg_data;
   assign writeback3_need_to_wb = wb_reg_need_to_wb;
   assign writeback3_prd        = wb_reg_prd;
   assign writeback3_robid      = wb_reg_robid;
   assign writeback3_valid      = wb_reg_valid & ~flush_valid;





   assign load_addr    = reg_mem_addr;   
   assign load_data    = sq_fwd_valid? sq_fwd_data : mem_data_resp;
   assign load_byte    = load_data >> (8 * reg_mem_addr[1:0]) ;
   assign load_hword   = load_data >> (8 * reg_mem_addr[1:0]) ;
   assign load_word    = load_data ;
   
   always_comb begin
      case (reg_funct3)
	F3_LB  : load_data_cut = {{(32-8) { load_byte  [7]}}, load_byte } ;  // Signed Load Byte
	F3_LH  : load_data_cut = { { (32-16){load_hword[15]} }, load_hword} ;  // Signed Load Half-word
	F3_LW  : load_data_cut = { load_word } ;  // Signed Load Word
	F3_LBU : load_data_cut = { { (32-8){1'b0} }, load_byte } ;  // Unsigned Load Byte
	F3_LHU : load_data_cut = { { (32-16){1'b0} }, load_hword} ;  // Unsigned Load Half-word
	default: load_data_cut = { load_word } ;  // Signed Load Word
      endcase      
   end
   
   always_ff@(posedge clk) begin
      if(~reset_n | wb_need_to_flush | mem_issue_stall) begin
	 wb_reg_valid      <= 1'b0;
	 wb_reg_robid      <= '0;
	 wb_reg_prd        <= '0;
	 wb_reg_data       <= '0;
	 wb_reg_need_to_wb <= '0;
      end
      else if ( ~flush_valid ) begin
	 wb_reg_valid      <= reg_valid;
	 wb_reg_robid      <= reg_robid;
	 wb_reg_prd        <= reg_T;
	 wb_reg_data       <= load_data_cut;
	 wb_reg_need_to_wb <= reg_is_store;	 
      end	 
   end
   
   






endmodule
