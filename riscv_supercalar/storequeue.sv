`timescale 1ns/1ps

import common::*;

module storequeue(/*AUTOARG*/
   // Outputs
   sq_left, retire_sq2mem_data, retire_sq2mem_addr,
   retire_sq2mem_func3, retire_sq2mem_valid, sq_fwd_data,
   sq_fwd_valid,
   // Inputs
   clk, reset_n, lsuint2sq_instr0_valid, lsuint2sq_instr0_robid,
   lsuint2sq_instr0_pc, lsuint2sq_wb_data, lsuint2sq_wb_addr,
   lsuint2sq_wb_func3, retire0_valid, retire1_valid, retire0_robid,
   retire1_robid, flush_valid, flush_robid, load_addr
   );
   input                  clk;
   input                  reset_n;



// Dispatch
   output logic [1:0] 	         sq_left;
   input                         lsuint2sq_instr0_valid;
//   input                         lsuint2sq_instr1_valid;
   input [ROB_WIDTH:0] 		 lsuint2sq_instr0_robid;
//   input [ROB_WIDTH:0] 		 lsuint2sq_instr1_robid;
   //debug
   input [31:0] 		 lsuint2sq_instr0_pc;
//   input [ROB_WIDTH:0] 		 lsuint2sq_instr1_pc;
   input [31:0] 		 lsuint2sq_wb_data;
   input [31:0] 		 lsuint2sq_wb_addr;
   input [2:0] 			 lsuint2sq_wb_func3;

   
   
    
// Retire
   input 			 retire0_valid;
   input 			 retire1_valid;
   input [ROB_WIDTH:0] 		 retire0_robid;
   input [ROB_WIDTH:0] 		 retire1_robid;
   output logic [31:0] 		 retire_sq2mem_data;
   output logic [31:0] 		 retire_sq2mem_addr;
   output logic [2:0] 		 retire_sq2mem_func3;
   output 			 retire_sq2mem_valid;
     
      
//flush
   input                         flush_valid;
   input [ROB_WIDTH:0] 		 flush_robid;


//forward to load
   input [31:0] 		 load_addr;
   output [31:0] 		 sq_fwd_data;
   output 			 sq_fwd_valid;
 
                         
////////////////////

   logic [SQ_WIDTH-1:0] 	 sq_head,sq_tail;

   logic [ROB_WIDTH:0] 		 sq_reg_robid[SQ_NUM-1:0];
   logic [31:0] 		 sq_reg_pc[SQ_NUM-1:0];
   logic [31:0] 		 sq_reg_data[SQ_NUM-1:0];
   logic [31:0] 		 sq_reg_addr[SQ_NUM-1:0];
   logic [2:0] 			 sq_reg_func3[SQ_NUM-1:0];
   logic 			 sq_reg_valid[SQ_NUM-1:0];
   logic 			 sq_reg_ready[SQ_NUM-1:0];

   logic [SQ_WIDTH:0] 		 sq_empty_num;
   logic                         load_addr_hit[SQ_NUM];
   logic [SQ_WIDTH-1:0] 	 sq_fwd_id;
   
   
   
//dispatch write to sq reg
   always_ff@(posedge clk) begin
     int i;        
      if(~reset_n) 
	for (i=0;i<SQ_NUM;i=i+1) begin
	   sq_reg_valid[i] <= '0;
	end
      else begin       // anytime can retire to mem, but when flush , stop lsuint2sq
	 if(sq_reg_ready[sq_tail] & sq_reg_ready[sq_tail]) begin
	    sq_reg_valid[sq_tail] <= '0;	   
	 end

	 if (flush_valid) begin
	    for(i=0;i<SQ_NUM;i=i+1) begin
	       if (sq_reg_valid[i] & (flush_robid[ROB_WIDTH] ^ sq_reg_robid[i][ROB_WIDTH] ^ (sq_reg_robid[i][ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0])))
		 sq_reg_valid[i] <= '0;	    
	    end	 
	 end
	 
	 if (lsuint2sq_instr0_valid) 
	    sq_reg_valid[sq_head] <= '1;    
	    /*   if (lsuint2sq_instr1_valid) begin
		  sq_reg_valid[sq_head+1] <= '1;
	       end
	    end
	    else if (lsuint2sq_instr1_valid) begin
	       sq_reg_valid[sq_head] <= '1;
	    end*/
	   
      end   
   end // always_ff@ (posedge clk)


   always_ff@(posedge clk) begin
      int i;        
      if(~reset_n) 
	for (i=0;i<SQ_NUM;i=i+1) begin
	   sq_reg_robid[i] <= '0;
	   sq_reg_pc[i] <= '0;
	   sq_reg_addr[i] <= '0;
	   sq_reg_data[i] <= '0;
	   sq_reg_func3[i] <= '0;
	end      
      else begin     
	 if (lsuint2sq_instr0_valid) begin
	    sq_reg_robid[sq_head] <= lsuint2sq_instr0_robid;     
	    sq_reg_pc[sq_head] <= lsuint2sq_instr0_pc;
	    sq_reg_addr[sq_head] <= lsuint2sq_wb_addr;
	    sq_reg_data[sq_head] <= lsuint2sq_wb_data;	 
	    sq_reg_func3[sq_head] <= lsuint2sq_wb_func3;	 
     
	  /*  if (lsuint2sq_instr1_valid) begin
	       sq_reg_robid[sq_head+1] <= lsuint2sq_instr1_robid;
	       sq_reg_pc[sq_head+1] <= lsuint2sq_instr1_pc;
	    end
	 end
	 else if (lsuint2sq_instr1_valid) begin
	    sq_reg_robid[sq_head] <= lsuint2sq_instr1_robid;
	    sq_reg_pc[sq_head] <= lsuint2sq_instr1_pc;
	*/
	 end	 
      end   
   end   
   
	
// sq_head logic
   always_comb begin
      int i;
      sq_head = sq_tail;      
	for (i=0;i<SQ_NUM;i=i+1) begin
	  if(i !=(SQ_NUM-1) & sq_reg_valid[i[SQ_WIDTH-1:0]] & ~sq_reg_valid[i[SQ_WIDTH-1:0]+1])
	    sq_head = i+1;
          if(i ==(SQ_NUM-1) & sq_reg_valid[i] & ~sq_reg_valid[0])
	    sq_head = '0;
	end
   end

// sq_left
   always_comb begin
      int i;
      sq_empty_num = 0 ;      
      for (i=0;i<SQ_NUM;i=i+1) begin
	 sq_empty_num = sq_empty_num + ~sq_reg_valid[i];	 
      end
      sq_left = (sq_empty_num > 1)? 2'b10:
                (sq_empty_num == '0) ? 2'b00: 2'b01;
   
   end
   
      
//deq logic
   always_ff@(posedge clk) begin
      if (~reset_n) 
	 sq_tail <='0;
      else if (sq_reg_ready[sq_tail] & sq_reg_valid[sq_tail])
	sq_tail <= sq_tail + 1;	       
   end // 

   // retire
   always_ff@(posedge clk) begin
      int i;      
      if(~reset_n)
	for(i=0;i<SQ_NUM;i=i+1)
	sq_reg_ready[i] <= '0;
      else begin
	for(i=0;i<SQ_NUM;i=i+1) begin
	  if (retire_sq2mem_valid & i == sq_tail) //when deq, set ready to 0
	    sq_reg_ready[i] <='0;
	  else if( (retire0_valid && sq_reg_robid[i] == retire0_robid) || (retire1_valid && sq_reg_robid[i] == retire1_robid))
	    sq_reg_ready[i] <= '1;	   
	end

      end            
   end
   // output to mem
   assign retire_sq2mem_data  = sq_reg_data[sq_tail];    
   assign retire_sq2mem_func3  = sq_reg_func3[sq_tail];    
   assign retire_sq2mem_addr  = sq_reg_addr[sq_tail]; 
   assign retire_sq2mem_valid = sq_reg_valid[sq_tail] & sq_reg_ready[sq_tail];  


   
//wb 
 /*  always_ff@(posedge clk) begin
      int i;
      
      if (~reset_n) begin
	 for (i=0;i<SQ_NUM;i=i+1) begin	 
	    sq_reg_addr[i] <= '0;
	    sq_reg_data[i] <= '0;
	 end
      end      
      else
	for (i=0;i<SQ_NUM;i=i+1) begin
	   if(lsuint2sq_wb_valid & lsuint2sq_wb_is_store & lsuint2sq_wb_robid == sq_reg_robid[i]) begin
	      sq_reg_addr[i] <= lsuint2sq_wb_addr;
	      sq_reg_data[i] <= lsuint2sq_wb_data;	      
	   end	  
      end
   end  */


   //forward
   always_comb begin
      int i;
      for (i=0;i<SQ_NUM;i=i+1) begin	 
	    load_addr_hit[i] = '0;
      end
      for (i=0;i<SQ_NUM;i=i+1) begin	 
	    if (load_addr[31:2] == sq_reg_addr[i][31:2] & sq_reg_valid[i])
	      load_addr_hit[i] = 1;	 
      end
   end

   //pick the latest data to forward
   load_forward_unit inst_load_picker(
				      // Outputs
				      .hit		(sq_fwd_valid),
				      .hit_index	(sq_fwd_id),
				      // Inputs
				      .match		(load_addr_hit),
				      .push_head	(sq_head));
   
   
   assign sq_fwd_data = sq_reg_data[sq_fwd_id];
 

endmodule
