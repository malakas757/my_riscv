`timescale 1ns / 1ps
import common::*;




module freelist(/*AUTOARG*/
   // Outputs
   resp_prf_0, resp_prf_1, can_alloc,
   // Inputs
   clk, reset_n, req_0, req_1, write_en_0, write_en_1, write_data_0,
   write_data_1, rob_state, walk_0, walk_1
   );

   input                       clk;
   input                       reset_n;
   

   // From Decode
   input                       req_0;
   input 		       req_1;
   output logic [PRF_WIDTH-1:0] resp_prf_0;
   output logic [PRF_WIDTH-1:0] resp_prf_1;
  


   //From retire
   input 		       write_en_0;
   input 		       write_en_1;
   input logic [PRF_WIDTH-1:0] write_data_0;
   input logic [PRF_WIDTH-1:0] write_data_1;



   //rollback
   input logic [1:0] 	       rob_state;
   input 		       walk_0;
   input 		       walk_1;


   //output
   output                      can_alloc;//




   logic [PRF_WIDTH-1:0]       fl[ARF_NUM-1:0];
   logic [PRF_WIDTH-1:0]       read_0,read_1;
   logic [FL_WIDTH:0] 	       head,head_next;
   logic [FL_WIDTH:0] 	       tail,tail_next;
   logic [FL_WIDTH:0] 	       head_plus1,tail_plus1;
   logic [1:0] 		       req_count;
   logic [1:0] 		       walk_count;
   logic [1:0] 		       prf_left;//00 means no prf for use, 01 means 1prf, 11 means >=2
   logic 		       is_idle;
   logic 		       is_rollback;
   logic 		       is_walk;



   assign is_idle     = (rob_state == rob_idle);
   assign is_rollback = (rob_state == rob_rollback);
   assign is_walk     = (rob_state == rob_walk);
   
   

   assign head_plus1 = head + 1;
   assign tail_plus1 = tail + 1;
   
// how many prf can be used ? can allocate?
   always_comb begin
      if (head == tail)
	prf_left = 2'b00;
      else if (head_plus1 == tail)
	prf_left = 2'b01;      
      else
	prf_left = 2'b11;      
   end

   assign req_count = (req_0&&req_1)? 2'b10:
		      (req_0||req_1)? 2'b01:2'b00;

   assign walk_count = (walk_0&&walk_1)? 2'b10:
		       (walk_0||walk_1)? 2'b01:2'b00;
   
  
   assign can_alloc = ( prf_left >= req_count ) ? 1:0;
      
// fl_table
   integer 		       i;   
   always_ff@(posedge clk) begin
      if (~reset_n) begin
	 for(i=0;i<32;i=i+1)
	   fl[i] 	       <= i + 32;
      end     
      else begin
	 if(write_en_0) begin
	    fl[tail[FL_WIDTH-1:0]]   <= write_data_0;
	    if(write_en_1)
	      fl[tail_plus1[FL_WIDTH-1:0]] <= write_data_1;
	 end
	 else if (write_en_1) begin
	    fl[tail[FL_WIDTH-1:0]] <= write_data_1;
	 end 	   
      end      
   end // always_ff@ (posedge clk)



//head_pointer

  
   
   
   always_ff@(posedge clk) begin
      if(~reset_n) begin
	 head <= {1'b1, {FL_WIDTH{1'b0}}};
      end
      else if (is_rollback) begin
	 head <= {~tail[FL_WIDTH],tail[FL_WIDTH-1:0]};
      end
      else begin
	 head <= head_next; 
      end
   end

   always_comb begin
      
      head_next = head;
      read_0 = '0;
      read_1 = '0;
      if(is_walk) begin
	 head_next = head + walk_count;	 
      end
      else if(req_0 && req_1 && can_alloc) begin
	 head_next = head + 2;
	 read_0 = fl[head[FL_WIDTH-1:0]];
	 read_1 = fl[head_plus1[FL_WIDTH-1:0]];	    
      end
      else if (req_0 && ~req_1 && can_alloc) begin
	 head_next = head + 1;
	 read_0 = fl[head[FL_WIDTH-1:0]];
      end
      else if (req_1 && ~req_0 && can_alloc) begin
	 head_next = head + 1;
	 read_1 = fl[head[FL_WIDTH-1:0]];
      end      
      else  begin
	 head_next = head;
	 read_0 = '0;
	 read_1 = '0;	    
      end  
    
   end // always_comb

   assign resp_prf_0 = read_0;
   assign resp_prf_1 = read_1;


// tail pointer   
   
   always_ff@(posedge clk) begin
      if(~reset_n) begin
	 tail <= {1'b0, {FL_WIDTH{1'b0}}};
   end
      else begin
	 tail <= tail_next; 
      end
   end
   
   always_comb begin
      
      tail_next = tail;

      if(write_en_0 && write_en_1) begin
	 tail_next = tail + 2;
	    
      end
      else if (write_en_0 || write_en_1 ) begin
	 tail_next = tail + 1;
      end    
      else  begin
	 tail_next = tail;	    
      end  
      
   end // always_comb
   
   
   

   
   

   
   












endmodule // freelist
