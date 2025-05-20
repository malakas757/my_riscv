`timescale 1ns/1ns
import common::*;


module top_with_uart(/*AUTOARG*/
   // Outputs
   led, branch_times_debug, flush_times_debug,
   // Inputs
   clk, rstn_cpu, rstn_uart, io_rx
   );

   input         clk;
   input         rstn_cpu;
   input         rstn_uart;
   input  	 io_rx;
   output logic [7:0]  led;
   output logic        branch_times_debug;
   output logic        flush_times_debug;

   
   

   logic 	 io_data_valid;
   logic 	 io_word_valid;
   logic [31:0]  io_data_packet; 
   logic [9:0] 	 write_address;
   logic [31:0]  io_word_packet;

   (* MARK_DEBUG = "ture" *) logic [31:0] ram_debug[DATA_RAM_DEPTH/4];
   logic [31:0] prf_debug[PRF_NUM-1:0];
   logic [PRF_WIDTH-1:0] RRAT_debug[ARF_NUM-1:0];

   

   /*AUTOWIRE*/
   
   
   
   
   uart inst_uart(
		  // Outputs
		  .io_data_valid	(io_data_valid),
		  .io_word_valid	(io_word_valid),
		  .io_data_packet	(io_data_packet[7:0]),
		  .io_word_packet	(io_word_packet[31:0]),
		  // Inputs
		  .clk			(clk),
		  .reset_n		(rstn_uart),
		  .io_rx		(io_rx));


   
   pipeline  inst_cpu(
		      // Outputs
		      .ram_debug	(ram_debug/*[31:0].[256]*/),
		      .prf_debug	(prf_debug/*[31:0].[PRF_NUM-1:0]*/),
		      .RRAT_debug	(RRAT_debug/*[PRF_WIDTH-1:0].[ARF_NUM-1:0]*/),
		      .branch_times_debug(branch_times_debug),
		      .flush_times_debug(flush_times_debug),
		      // Inputs
		      .clk		(clk),
		      .reset_n		(rstn_cpu),
		      .imem_en		(io_word_valid),
		      .imem_data_in	(io_word_packet),
		      .write_address	({22'd0,write_address}));
   
   always_ff@(posedge clk) begin
      if(!rstn_uart) begin
	 write_address <= '0;
      end
      else if (io_word_valid)
	write_address <= write_address + 4;      	
   end

   /*debug UART*/
   //latch the first byte
   always_ff@(posedge clk) begin
     if (!rstn_uart)
       led <= '0;
     else if (io_data_valid)
       led <= io_data_packet;
   end
       
       

      



endmodule 
