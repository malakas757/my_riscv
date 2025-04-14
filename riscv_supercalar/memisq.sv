`timescale 1ns/1ps

import common::*;
`define debug


module memisq(/*AUTOARG*/
   // Outputs
   memisq_left, slot2_valid, slot2_T, slot2_src1_id, slot2_src2_id,
   slot2_control, slot2_pc, slot2_robid,
   // Inputs
   clk, reset_n, instr0_enq_valid, instr1_enq_valid, instr0_control,
   instr1_control, instr0_pc, instr1_pc, instr0_robid, instr1_robid,
   instr0_src1_id, instr0_src2_id, instr1_src1_id, instr1_src2_id,
   instr0_T, instr1_T, instr0_src1_busy, instr0_src2_busy,
   instr1_src1_busy, instr1_src2_busy, writeback0_valid,
   writeback0_need_to_wb, writeback0_prd, writeback1_valid,
   writeback1_need_to_wb, writeback1_prd, writeback2_valid,
   writeback2_need_to_wb, writeback2_prd, writeback3_valid,
   writeback3_need_to_wb, writeback3_prd, flush_valid, flush_robid,
   mem_issue_stall
   );
   input clk;
   input reset_n;


// from/to dispatch 
   input                       instr0_enq_valid;
   input 		       instr1_enq_valid;
   input control_type	       instr0_control;
   input control_type	       instr1_control;
   input [31:0]                instr0_pc;
   input [31:0]                instr1_pc;
   input [ROB_WIDTH:0]         instr0_robid;
   input [ROB_WIDTH:0]         instr1_robid;
   input [PRF_WIDTH-1:0]       instr0_src1_id;
   input [PRF_WIDTH-1:0]       instr0_src2_id;
   input [PRF_WIDTH-1:0]       instr1_src1_id;
   input [PRF_WIDTH-1:0]       instr1_src2_id;
   input [PRF_WIDTH-1:0]       instr0_T;
   input [PRF_WIDTH-1:0]       instr1_T;
   input 		       instr0_src1_busy; //current state from busy table
   input 		       instr0_src2_busy;
   input 		       instr1_src1_busy;
   input 		       instr1_src2_busy;  
   output logic [1:0] 	       memisq_left;
   


   

// wakeup from wb, 4 cdb wb
   input logic                 writeback0_valid;
   input logic 		       writeback0_need_to_wb;
   input logic [PRF_WIDTH-1:0] writeback0_prd;	 
   input logic 		       writeback1_valid;
   input logic 		       writeback1_need_to_wb;
   input logic [PRF_WIDTH-1:0] writeback1_prd;
   input logic                 writeback2_valid;
   input logic 		       writeback2_need_to_wb;
   input logic [PRF_WIDTH-1:0] writeback2_prd;	 
   input logic 		       writeback3_valid;
   input logic 		       writeback3_need_to_wb;
   input logic [PRF_WIDTH-1:0] writeback3_prd;


// flush input 
   input logic                 flush_valid;
   input logic [ROB_WIDTH:0]   flush_robid;

//input/output from/to exe
   output logic                slot2_valid;
   output [PRF_WIDTH-1:0]      slot2_T;
   output [PRF_WIDTH-1:0]      slot2_src1_id;
   output [PRF_WIDTH-1:0]      slot2_src2_id;
   output control_type	       slot2_control;
   output [31:0]               slot2_pc;
   output [ROB_WIDTH:0]        slot2_robid;

//input from ex, need to stall if : no enough sq or data miss
   input  		       mem_issue_stall;
    
   

   




//entry define
   logic                    memisq_valid[MEMISQ_NUM-1:0];
   logic                    memisq_src1_state[MEMISQ_NUM-1:0];
   logic                    memisq_src2_state[MEMISQ_NUM-1:0];
   logic [PRF_WIDTH-1:0]    memisq_src1_id[MEMISQ_NUM-1:0];
   logic [PRF_WIDTH-1:0]    memisq_src2_id[MEMISQ_NUM-1:0];
   logic [PRF_WIDTH-1:0]    memisq_T[MEMISQ_NUM-1:0];
   logic [31:0] 	    memisq_pc[MEMISQ_NUM-1:0];
   logic [ROB_WIDTH:0] 	    memisq_robid[MEMISQ_NUM-1:0];
   control_type             memisq_control[MEMISQ_NUM-1:0];




   logic [MEMISQ_WIDTH-1:0] memisq_head;
   logic [MEMISQ_WIDTH-1:0] memisq_tail;
   
   logic [MEMISQ_WIDTH:0] memisq_empty_num;  
   logic                    memisq_entry_ready[MEMISQ_NUM-1:0]; // means both srcs are ready 
   logic                    deq_valid; //  
   logic 		    flush_valid_vector[MEMISQ_NUM-1:0];
 
   
 
// Dispatch
   // sq_head logic
   always_comb begin
      int i;
      memisq_head = memisq_tail;      
	for (i=0;i<MEMISQ_NUM;i=i+1) begin
	  if(i !=(MEMISQ_NUM-1) & memisq_valid[i[MEMISQ_WIDTH-1:0]] & ~memisq_valid[i[MEMISQ_WIDTH-1:0]+1])
	    memisq_head = i+1;
          if(i ==(MEMISQ_NUM-1) & memisq_valid[i] & ~memisq_valid[0])
	    memisq_head = '0;
	end
   end


   //valid set

   always_ff@(posedge clk) begin // when flush valid cant issue and disp
      int i,i1;
      
      if (~reset_n) begin
	 for (i=0 ;i<MEMISQ_NUM;i=i+1)
	   memisq_valid[i] <= 1'b0;
      end
      else if (flush_valid) begin
	 for(i1=0; i1<MEMISQ_NUM;i1=i1+1)
	   if(flush_valid_vector[i1])
	     memisq_valid[i1] <= 1'b0;
      end
      else begin
	 if(instr0_enq_valid) begin// instr0 is int and can alloc(see dispatch.v line 115)
	    memisq_valid[memisq_head] <= 1'b1;
	    if (instr1_enq_valid) 
	      memisq_valid[memisq_head+1] <= 1'b1;
	 end
	 else if (instr1_enq_valid) begin
	    memisq_valid[memisq_head] <= 1'b1;
	 end
	 if(deq_valid)
	   memisq_valid[memisq_tail] <= 1'b0;
      end

   end // always_ff@ (posedge clk)


   // memisq_left
   always_comb begin
      int i;
      memisq_empty_num = 0 ;      
      for (i=0;i<MEMISQ_NUM;i=i+1) begin
	 memisq_empty_num = memisq_empty_num + ~memisq_valid[i];	 
      end
      memisq_left = (memisq_empty_num > 1)? 2'b10:
                    (memisq_empty_num == '0) ? 2'b00: 2'b01;
   
   end

// wrtie the data into isq when set valid  

   always_ff@(posedge clk) begin
      int i;
      
      if (!reset_n) begin
	 for (i=0 ;i<MEMISQ_NUM;i=i+1) begin	
	    memisq_src1_id[i]    <= '0;     
	    memisq_src2_id[i]    <= '0;     
	    memisq_T[i]          <= '0;           
	    memisq_pc[i]         <= '0;          
	    memisq_robid[i]      <= '0;       
	    memisq_control[i]    <= '0;     
	 end
      end
      else if(instr0_enq_valid) begin// instr0 is int and can alloc(see dispatch.v line 115)
	    memisq_src1_id[memisq_head]    <= instr0_src1_id;     
	    memisq_src2_id[memisq_head]    <= instr0_src2_id;     
	    memisq_T[memisq_head]          <= instr0_T;           
	    memisq_pc[memisq_head]         <= instr0_pc;          
	    memisq_robid[memisq_head]      <= instr0_robid;       
	    memisq_control[memisq_head]    <= instr0_control;     
	 if (instr1_enq_valid) 
	    memisq_src1_id[memisq_head+1]    <= instr1_src1_id;     
	    memisq_src2_id[memisq_head+1]    <= instr1_src2_id;     
	    memisq_T[memisq_head+1]          <= instr1_T;           
	    memisq_pc[memisq_head+1]         <= instr1_pc;          
	    memisq_robid[memisq_head+1]      <= instr1_robid;       
	    memisq_control[memisq_head+1]    <= instr1_control;	   
      end
      else if (instr1_enq_valid) begin
	    memisq_src1_id[memisq_head]    <= instr1_src1_id;     
	    memisq_src2_id[memisq_head]    <= instr1_src2_id;     
	    memisq_T[memisq_head]          <= instr1_T;           
	    memisq_pc[memisq_head]         <= instr1_pc;          
	    memisq_robid[memisq_head]      <= instr1_robid;       
	    memisq_control[memisq_head]    <= instr1_control;	   
	 
      end
   end // always_ff@ (posedge clk)


//fluch vector

   always_comb begin
      int i;
      
      flush_valid_vector = '{default: 0};      
      for (i=0;i<MEMISQ_NUM;i=i+1) begin
	 if (memisq_valid[i] & (memisq_robid[i][ROB_WIDTH] ^ flush_robid[ROB_WIDTH]) & (memisq_robid[i][ROB_WIDTH-1:0] < flush_robid[ROB_WIDTH-1:0]))
	   flush_valid_vector[i] = 1'b1;
	 if (memisq_valid[i] & ~(memisq_robid[i][ROB_WIDTH] ^ flush_robid[ROB_WIDTH]) & (memisq_robid[i][ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0]))	 
	   flush_valid_vector[i] = 1'b1;
      end      
   end
   
//deq logic
   always_comb begin // if the src data is ready?
      int i;      
      for (i=0;i<MEMISQ_NUM;i=i+1)
	memisq_entry_ready[i] = memisq_valid[i] & ((memisq_control[i].rs1_valid & !memisq_src1_state[i]) || !memisq_control[i].rs1_valid) &  ((memisq_control[i].rs2_valid & !memisq_src2_state[i]) || !memisq_control[i].rs2_valid); 	 	      
   end


   
   
   assign deq_valid = memisq_entry_ready[memisq_tail] & memisq_valid[memisq_tail] & ~flush_valid & ~mem_issue_stall;
   

   
   always_ff@(posedge clk) begin
      if (~reset_n) 
	memisq_tail <='0;
      else if ( deq_valid )
	memisq_tail <= memisq_tail + 1;	       
   end //
   
// write back logic

   
   always_ff@(posedge clk) begin
      int i2,i;
      
      if (!reset_n) begin
	 for (i=0 ;i<MEMISQ_NUM;i=i+1) begin	
            memisq_src1_state[i] <= '0;  
	    memisq_src2_state[i] <= '0;  

	 end
      end
      else begin 
	 if(instr0_enq_valid) begin// instr0 is int and can alloc(see dispatch.v line 115)
            memisq_src1_state[memisq_head] <= instr0_src1_busy;  
	    memisq_src2_state[memisq_head] <= instr0_src2_busy;  
	    if (instr1_enq_valid) begin
               memisq_src1_state[memisq_head+1] <= instr1_src1_busy;  
	       memisq_src2_state[memisq_head+1] <= instr1_src2_busy;  
	    end
         end
         else if (instr1_enq_valid) begin
	    memisq_src1_state[memisq_head] <= instr1_src1_busy;  
	    memisq_src2_state[memisq_head] <= instr1_src2_busy;  	 
	 end
	 
	 for(i2=0 ; i2 < MEMISQ_NUM ; i2=i2+1) begin
	    if ((writeback0_need_to_wb & writeback0_valid & memisq_valid[i2] & memisq_src1_id[i2] == writeback0_prd) ||
		(writeback1_need_to_wb & writeback1_valid & memisq_valid[i2] & memisq_src1_id[i2] == writeback1_prd) || 
		(writeback2_need_to_wb & writeback2_valid & memisq_valid[i2] & memisq_src1_id[i2] == writeback2_prd) || 
		(writeback3_need_to_wb & writeback3_valid & memisq_valid[i2] & memisq_src1_id[i2] == writeback3_prd))
	      memisq_src1_state[i2] <= 1'b0;
	    if ((writeback0_need_to_wb & writeback0_valid & memisq_valid[i2] & memisq_src2_id[i2] == writeback0_prd) ||
		(writeback1_need_to_wb & writeback1_valid & memisq_valid[i2] & memisq_src2_id[i2] == writeback1_prd) || 
		(writeback2_need_to_wb & writeback2_valid & memisq_valid[i2] & memisq_src2_id[i2] == writeback2_prd) || 
		(writeback3_need_to_wb & writeback3_valid & memisq_valid[i2] & memisq_src2_id[i2] == writeback3_prd))
	      memisq_src2_state[i2] <= 1'b0;
	    
	 end
      end 
      
   end // always_ff@ (posedge clk)


   // output data to exe
   

   assign  slot2_T        = memisq_T[memisq_tail];     
   assign  slot2_src1_id  = memisq_src1_id[memisq_tail];     
   assign  slot2_src2_id  = memisq_src2_id[memisq_tail];     
   assign  slot2_control  = memisq_control[memisq_tail];     
   assign  slot2_pc       = memisq_pc[memisq_tail];  
   assign  slot2_robid    = memisq_robid[memisq_tail]; 
   assign  slot2_valid    = deq_valid; 
  


endmodule
