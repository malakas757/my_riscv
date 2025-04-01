`timescale 1ns / 1ps



module Ram2r1w(
  input         clock,
  input         io_imem_en,
  input  [63:0] io_imem_addr,
  output [63:0] io_imem_rdata,

   
   
   
  // New data memory ports
   input        io_dmem_en,
   input [63:0] io_dmem_addr,
   output  [63:0] io_dmem_rdata,
   input [63:0] io_dmem_wdata,
   input 	 io_dmem_wen
);
  wire  mem_clk; // @[Ram.scala 37:19]
  wire [63:0] mem_imem_addr; // @[Ram.scala 37:19]
  wire  mem_imem_en; // @[Ram.scala 37:19]
  wire [31:0] mem_imem_data; // @[Ram.scala 37:19]
  wire  mem_dmem_en; // @[Ram.scala 37:19]
  wire [63:0] mem_dmem_addr; // @[Ram.scala 37:19]
  wire [63:0] mem_dmem_rdata; // @[Ram.scala 37:19]
  wire [63:0] mem_dmem_wdata; // @[Ram.scala 37:19]
  wire [63:0] mem_dmem_wmask; // @[Ram.scala 37:19]
  wire  mem_dmem_wen; // @[Ram.scala 37:19]
  ram_2r1w mem ( // @[Ram.scala 37:19]
    .clk(mem_clk),
    .imem_addr(mem_imem_addr),
    .imem_en(mem_imem_en),
    .imem_data(mem_imem_data),
    .dmem_en(mem_dmem_en),
    .dmem_addr(mem_dmem_addr),
    .dmem_rdata(mem_dmem_rdata),
    .dmem_wdata(mem_dmem_wdata),
    .dmem_wmask(mem_dmem_wmask),
    .dmem_wen(mem_dmem_wen)
  );
  assign io_imem_rdata = {{32'd0}, mem_imem_data}; // @[Ram.scala 41:20]
  assign mem_clk = clock; // @[Ram.scala 38:20]
  assign mem_imem_addr = io_imem_addr; // @[Ram.scala 40:20]
  assign mem_imem_en = io_imem_en; // @[Ram.scala 39:20]
  assign mem_dmem_en = io_dmem_en; // @[Ram.scala 42:20]
  assign mem_dmem_addr = io_dmem_addr; // @[Ram.scala 43:20]
  assign mem_dmem_wdata = io_dmem_wdata; // @[Ram.scala 45:20]
  assign mem_dmem_wmask = 64'h0; // @[Ram.scala 44:20]
  assign mem_dmem_wen = io_dmem_wen; // @[Ram.scala 46:20]
endmodule



module Simtop (
	       /*AUTOARG*/
   // Outputs
   io_uart_out_valid, io_uart_out_ch, io_uart_in_valid,
   // Inputs
   clock, reset, io_logCtrl_log_begin, io_logCtrl_log_end,
   io_logCtrl_log_level, io_perfInfo_clean, io_perfInfo_dump,
   io_uart_in_ch
   );

  input         clock;
  input         reset;
  input  [63:0] io_logCtrl_log_begin;
  input  [63:0] io_logCtrl_log_end;
  input  [63:0] io_logCtrl_log_level;
  input         io_perfInfo_clean;
  input         io_perfInfo_dump;
  output        io_uart_out_valid;
  output [7:0]  io_uart_out_ch;
  output        io_uart_in_valid;
  input [7:0] 	io_uart_in_ch;
   
  /*AUTOWIRE*/ 
  // Beginning of automatic wires (for undeclared instantiated-module outputs)
  wire [63:0]		io_dmem_addr;		// From cpu_inst of cpu.v
  wire			io_dmem_en;		// From cpu_inst of cpu.v
  wire [63:0]		io_dmem_rdata;		// From Ram2r1w_inst of Ram2r1w.v
  wire [63:0]		io_dmem_wdata;		// From cpu_inst of cpu.v
  wire			io_dmem_wen;		// From cpu_inst of cpu.v
  wire [63:0]		io_imem_addr;		// From cpu_inst of cpu.v
  wire			io_imem_en;		// From cpu_inst of cpu.v
  wire [63:0]		io_imem_rdata;		// From Ram2r1w_inst of Ram2r1w.v
  // End of automatics

   /*AUTOREG*/
  assign io_uart_out_valid = 1'h0;
  assign io_uart_out_ch = 8'h0;
  assign io_uart_in_valid = 1'h0;
  assign clk = clock;
  assign reset_n = ~reset_n;

   cpu cpu_inst(
/*AUTOINST*/
		// Outputs
		.io_imem_en		(io_imem_en),
		.io_imem_addr		(io_imem_addr[63:0]),
		.io_dmem_en		(io_dmem_en),
		.io_dmem_addr		(io_dmem_addr[63:0]),
		.io_dmem_wdata		(io_dmem_wdata[63:0]),
		.io_dmem_wen		(io_dmem_wen),
		// Inputs
		.clk			(clk),
		.reset_n		(reset_n),
		.io_imem_rdata		(io_imem_rdata[31:0]),
		.io_dmem_rdata		(io_dmem_rdata[63:0]));

   Ram2r1w Ram2r1w_inst(
/*AUTOINST*/
			// Outputs
			.io_imem_rdata	(io_imem_rdata[63:0]),
			.io_dmem_rdata	(io_dmem_rdata[63:0]),
			// Inputs
			.clock		(clock),
			.io_imem_en	(io_imem_en),
			.io_imem_addr	(io_imem_addr[63:0]),
			.io_dmem_en	(io_dmem_en),
			.io_dmem_addr	(io_dmem_addr[63:0]),
			.io_dmem_wdata	(io_dmem_wdata[63:0]),
			.io_dmem_wen	(io_dmem_wen));
			


   //for difftest

   DifftestArchIntRegState difftest ( // @[RegFile.scala 23:24]
    .io_clock(difftest_io_clock),
    .io_coreid(difftest_io_coreid),
    .io_gpr_0(difftest_io_gpr_0),
    .io_gpr_1(difftest_io_gpr_1),
    .io_gpr_2(difftest_io_gpr_2),
    .io_gpr_3(difftest_io_gpr_3),
    .io_gpr_4(difftest_io_gpr_4),
    .io_gpr_5(difftest_io_gpr_5),
    .io_gpr_6(difftest_io_gpr_6),
    .io_gpr_7(difftest_io_gpr_7),
    .io_gpr_8(difftest_io_gpr_8),
    .io_gpr_9(difftest_io_gpr_9),
    .io_gpr_10(difftest_io_gpr_10),
    .io_gpr_11(difftest_io_gpr_11),
    .io_gpr_12(difftest_io_gpr_12),
    .io_gpr_13(difftest_io_gpr_13),
    .io_gpr_14(difftest_io_gpr_14),
    .io_gpr_15(difftest_io_gpr_15),
    .io_gpr_16(difftest_io_gpr_16),
    .io_gpr_17(difftest_io_gpr_17),
    .io_gpr_18(difftest_io_gpr_18),
    .io_gpr_19(difftest_io_gpr_19),
    .io_gpr_20(difftest_io_gpr_20),
    .io_gpr_21(difftest_io_gpr_21),
    .io_gpr_22(difftest_io_gpr_22),
    .io_gpr_23(difftest_io_gpr_23),
    .io_gpr_24(difftest_io_gpr_24),
    .io_gpr_25(difftest_io_gpr_25),
    .io_gpr_26(difftest_io_gpr_26),
    .io_gpr_27(difftest_io_gpr_27),
    .io_gpr_28(difftest_io_gpr_28),
    .io_gpr_29(difftest_io_gpr_29),
    .io_gpr_30(difftest_io_gpr_30),
    .io_gpr_31(difftest_io_gpr_31)
  );
  
		

endmodule   
