`timescale 1ns/1ns
import common::*;


module top_with_uart(/*AUTOARG*/
   // Outputs
   led,debug_is_bj,debug_flush,debug_exception,
   // Inputs
   clk, rstn_cpu,rstn_uart, io_rx
   );




   input         clk;
   input         rstn_uart;
   input         rstn_cpu;
   input  	 io_rx;
   output logic [7:0]  led;
   output logic 	 debug_is_bj;
   output logic 	 debug_flush;
   output logic 	 debug_exception;
   

   logic 	 io_data_valid;
   logic [7:0] 	 io_data_packet; 


   logic [9:0] 	 write_address;
    (* DONT_TOUCH= "TRUE" *)logic [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];
    (* DONT_TOUCH= "TRUE" *)logic [31:0]  ram_debug[DATA_RAM_DEPTH/4];
   
   uart inst_uart(
		  // Outputs
		  .io_data_valid	(io_data_valid),
		  .io_data_packet	(io_data_packet[7:0]),
		  // Inputs
		  .clk			(clk),
		  .reset_n		(rstn_uart),
		  .io_rx		(io_rx));

   cpu  inst_cpu(
		 // Outputs
		 .debug_flush		(debug_flush),
		 .debug_is_bj		(debug_is_bj),
		 .debug_reg             (debug_reg),
		 .debug_exception       (debug_exception),
		 .ram_debug             (ram_debug),
		 // Inputs
		 .clk			(clk),
		 .reset_n		(rstn_cpu),
		 .write_address		({22'd0,write_address[9:0]}),
		 .write_data		(io_data_packet[7:0]),
		 .write_enable		(io_data_valid));
   
   always_ff@(posedge clk) begin
      if(!rstn_uart) begin
	 write_address <= '0;
      end
      else if (io_data_valid)
	write_address <= write_address + 1;      	
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
