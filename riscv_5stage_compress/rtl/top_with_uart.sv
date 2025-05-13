`timescale 1ns/1ns
import common::*;


module top_with_uart(/*AUTOARG*/
   // Outputs
   led,debug_is_bj,debug_flush,
   // Inputs
   clk, rstn, io_rx
   );

   input         clk;
   input         rstn;
   input  	 io_rx;
   output logic [7:0]  led;
   output logic 	 debug_is_bj;
   output logic 	 debug_flush;
   

   logic 	 io_data_valid;
   logic [7:0] 	 io_data_packet; 


   logic [9:0] 	 write_address;
   (* DONT_TOUCH= "TRUE" *)logic [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];

   uart inst_uart(
		  // Outputs
		  .io_data_valid	(io_data_valid),
		  .io_data_packet	(io_data_packet[7:0]),
		  // Inputs
		  .clk			(clk),
		  .reset_n		(rstn),
		  .io_rx		(io_rx));

   cpu  inst_cpu(
		 // Outputs
		 .debug_flush		(debug_flush),
		 .debug_is_bj		(debug_is_bj),
		 .debug_reg             (debug_reg),
		 // Inputs
		 .clk			(clk),
		 .reset_n		(rstn),
		 .write_address		({22'd0,write_address[9:0]}),
		 .write_data		(io_data_packet[7:0]),
		 .write_enable		(io_data_valid));
   
   always_ff@(posedge clk) begin
      if(!rstn) begin
	 write_address <= '0;
      end
      else if (io_data_valid)
	write_address <= write_address + 1;      	
   end


      /*debug UART*/
   //latch the first byte
   always_ff@(posedge clk) begin
     if (!rstn)
       led <= '0;
     else if (io_data_valid)
       led <= io_data_packet;
   end
      



endmodule 
