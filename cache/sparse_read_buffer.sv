`timescale 1ns/1ps



module sparse_read_buffer
  #(parameter int SRB_DEPTH = 256,
   parameter int SRB_WIDTH = 8)
  (/*AUTOARG*/
   // Outputs
   write_enable, read_enable, read_rtn_valid, read_rtn_data,
   sparse_array_valid, sparse_array_bottom_ptr,
   // Inputs
   clk, rstn, write_valid, write_data, read_valid, read_ptr,
   read_rtn_enable
   );

   input                clk;
   input                rstn;
   //write port
   input                write_valid;
   output               write_enable;
   input [SRB_WIDTH-1:0] write_data;
   //read port
   input                read_valid;
   output               read_enable;
   input [$clog2(SRB_DEPTH)-1:0] read_ptr;
   //read return port
   output 		read_rtn_valid;
   input 		read_rtn_enable;
   output logic [SRB_WIDTH-1:0] read_rtn_data;
   //state output
   output logic [SRB_DEPTH-1:0] sparse_array_valid;
   output logic [$clog2(SRB_DEPTH)-1:0] sparse_array_bottom_ptr;


   logic [$clog2(SRB_DEPTH)-1:0] 		write_ptr;
   logic [$clog2(SRB_DEPTH)-1:0] 		write_ptr_n;
   logic                write_kickoff;
   logic                read_kickoff;


   logic [SRB_WIDTH-1:0] 		sparse_array[SRB_DEPTH-1:0];

   logic [$clog2(SRB_DEPTH)-1:0] 	sparse_array_bottom_ptr_n;
   

   //hand shake
   assign write_enable  = !(write_ptr == sparse_array_bottom_ptr); // buffer is full
   assign write_kickoff = write_enable & write_valid;
   assign read_kickoff  = read_enable & read_valid;
   assign read_enable   = read_rtn_enable;
   assign read_rtn_valid   = read_valid;
   assign read_rtn_data   = read_valid? sparse_array[read_ptr] : '0;
   
   
   always_ff@(posedge clk) begin
      if (!rstn)
	write_ptr <= '0;
      else if (write_kickoff)
	write_ptr <= write_ptr_n;            
   end
   
   assign write_ptr_n = write_ptr + 1;
  //data in buffer
   always_ff@(posedge clk) begin
      if (!rstn) 
	sparse_array <= '{default:'d0};      
      else if (write_kickoff) 
	sparse_array[write_ptr]   <= write_data;      
   end 
   // valid_flag set and unset
   always_ff@(posedge clk) begin
      if (!rstn) begin
	sparse_array_valid <= '0;
      end
      else begin
	if (write_kickoff) 
	   sparse_array_valid[write_ptr] <= 1;            
	if (read_kickoff) 
	   sparse_array_valid[read_ptr]  <= 0;            
      end
   end   


   
   // find bottom
   always_ff@(posedge clk) begin
      if (!rstn) 
	sparse_array_bottom_ptr <= '1;      
      else 
	sparse_array_bottom_ptr <= sparse_array_bottom_ptr_n;
      
   end 
   assign sparse_array_bottom_ptr_n = find_bottom(sparse_array_bottom_ptr,sparse_array_valid);
   











   function logic[$clog2(SRB_DEPTH)-1:0] find_bottom
     (
      input logic [$clog2(SRB_DEPTH)-1:0] bottom_ptr,
      input logic [SRB_DEPTH-1:0] valid_array
      );
      logic [SRB_DEPTH-1:0] 	valid_arrry_aftet_shift;
      assign  valid_arrry_aftet_shift = (valid_array>>bottom_ptr) | valid_array>>(8-bottom_ptr);
      find_bottom = '1;      
      for(int i=0 ; i<SRB_DEPTH;i++) begin
	 if (valid_arrry_aftet_shift[i])
	   find_bottom = bottom_ptr + i;
	 break;	 
      end
   endfunction

endmodule
