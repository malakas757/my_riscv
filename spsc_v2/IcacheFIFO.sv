`timescale 1ns/1ps

module IcacheFIFO #(
  parameter FIFOWIDE = 69
)
   (/*AUTOARG*/
   // Outputs
   fifo_full, fifo_empty, fifo_dout,
   // Inputs
   clk, rstn, fifo_wr, fifo_rd, wd_data, fifo_clean, state_update,
   state_update_ptr, state
   );
   input                 clk;
   input 	         rstn;
   input                 fifo_wr;
   input                 fifo_rd;
   input [FIFOWIDE-1:0]  wd_data;
   input                 fifo_clean;
   input                 state_update;//when data come back from axi,update state bit in fifo reg
   input [2:0] 		 state_update_ptr;
   input [1:0] 		 state; // new state   
   output                fifo_full;
   output                fifo_empty;
   output [FIFOWIDE-1:0] fifo_dout;
   
   
   
   



   logic [FIFOWIDE-1:0] fiforeg[0:7];
   logic [3:0] 		fifo_head;
   logic [3:0] 		fifo_tail;

   logic                inter_wr; //inter signal control wr
   logic                inter_rd; // inter signal control rd

   
   assign fifo_full = (fifo_head[2:0] == fifo_tail[2:0]) & (fifo_head[3] ^ fifo_tail[3]);
   assign fifo_empty = fifo_head == fifo_tail;
   
   assign inter_wr = !fifo_full & fifo_wr;
   assign inter_rd = !fifo_full & fifo_rd;

   assign fifo_dout = fiforeg[fifo_tail[2:0]];
   
   
   
   always_ff@(posedge clk) begin

      if(!rstn | fifo_clean) begin
	 fiforeg   <= '{default:0};
	 fifo_head <= '0;
	 fifo_tail <= '0;	 
      end
      else begin
	if(inter_wr) begin
	   fiforeg[fifo_head[2:0]] <= wd_data;
	   fifo_head <= fifo_head + 1;	  
	end
        if(inter_rd) begin
	   fifo_tail <= fifo_tail + 1;	   
	end
	if(state_update) begin
	   fiforeg[state_update_ptr][3:2] <= state;	   
	end
      end
   end
 		
   
   
   










endmodule
