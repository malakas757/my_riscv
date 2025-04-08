`timescale 1ns/1ps

import common::*;
`define debug


module intisq(/*AUTOARG*/
   // Outputs
   intisq_left, ex_slot0_valid, ex_slot1_valid, slot0_T, slot1_T,
   slot0_control, slot1_control, slot0_pc, slot1_pc, slot0_robid,
   slot1_robid,
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
   mul_slot_busy
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
   output logic [1:0] 	       intisq_left;
   


   

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
   input logic                 mul_slot_busy;
   output logic                ex_slot0_valid;
   output logic                ex_slot1_valid;
   output [PRF_WIDTH-1:0]      slot0_T;
   output [PRF_WIDTH-1:0]      slot1_T;
   output control_type	       slot0_control;
   output control_type	       slot1_control;
   output [31:0]               slot0_pc;
   output [31:0] 	       slot1_pc;
   output [ROB_WIDTH:0]        slot0_robid;
   output [ROB_WIDTH:0]        slot1_robid;   
   
    


   	  
//empty finder

   logic [INTISQ_WIDTH-1:0] 		       empty_id0;
   logic 				       empty_id0_valid;
   logic [INTISQ_WIDTH-1:0] 		       empty_id1;
   logic 				       empty_id1_valid;
   logic [INTISQ_WIDTH-1:0] 		       in_id[INTISQ_NUM-1:0];

//entry define
   logic                    intisq_valid[INTISQ_NUM-1:0];
   logic [INTISQ_WIDTH:0] intisq_age [INTISQ_NUM-1:0]; // one more bit to deal with conner case: like two instrs stay very long time
   logic [INTISQ_WIDTH:0] intisq_age_order_reverse [INTISQ_NUM-1:0]; // reverse order to adapt to Picker
   logic [INTISQ_WIDTH:0] intisq_age_next [INTISQ_NUM-1:0];
   logic                    intisq_src1_state[INTISQ_NUM-1:0];
   logic                    intisq_src2_state[INTISQ_NUM-1:0];
   logic [PRF_WIDTH-1:0]    intisq_src1_id[INTISQ_NUM-1:0];
   logic [PRF_WIDTH-1:0]    intisq_src2_id[INTISQ_NUM-1:0];
   logic [PRF_WIDTH-1:0]    intisq_T[INTISQ_NUM-1:0];
   logic [31:0] 	    intisq_pc[INTISQ_NUM-1:0];
   logic [ROB_WIDTH:0] 	    intisq_robid[INTISQ_NUM-1:0];
   control_type             intisq_control[INTISQ_NUM-1:0];
   logic                    intisq_entry_ready[INTISQ_NUM-1:0];//means both src ref is ready
   logic                    intisq_entry_ready_order_reverse[INTISQ_NUM-1:0];//to adapta picker	    
// depart define
   logic [INTISQ_WIDTH-1:0]    old0_id;
   logic [INTISQ_WIDTH-1:0]    old1_id;
   logic 		       old0_valid;
   logic 		       old1_valid;
   logic [INTISQ_WIDTH-1:0]    deq0_id;
   logic [INTISQ_WIDTH-1:0]    deq1_id;
   logic 		       deq0_valid;  // used to unset valid bit 
   logic 		       deq1_valid;   
   logic [1:0] 		       ready_vec;
   logic [INTISQ_WIDTH-1:0]    slot1_entry_id; // the isqid need to dispatch to slot1
   logic [INTISQ_WIDTH-1:0]    slot0_entry_id; // the isqid need to dispatch to slot0
   logic                       old0_is_mul;
   logic                       old0_is_bju;
   logic                       old0_is_alu;
   logic                       old1_is_mul;
   logic                       old1_is_bju;
   logic                       old1_is_alu;     
   logic                       intisq_empty[INTISQ_NUM-1:0];     
   
   always_comb begin
      int i;
      
     
        for(i=0; i<INTISQ_NUM; i=i+1) begin
	   in_id[i] = i;	 
	end
   end 
   /*empty_entry_finder8 AUTO_TEMPLATE(
					// Outputs
					.out_id_0	(empty_id0),
					.out_id_1	(empty_id1),
					.out_alloc_valid_0(empty_id0_valid),
					.out_alloc_valid_1(empty_id1_valid),
					// Inputs
					.in_id		(in_id),
					.in_alloc_valid	(intisq_valid));*/
   
   
   empty_entry_finder8 inst_emptyfinder(/*AUTOINST*/
					// Outputs
					.out_id_0	(empty_id0),	 // Templated
					.out_id_1	(empty_id1),	 // Templated
					.out_alloc_valid_0(empty_id0_valid), // Templated
					.out_alloc_valid_1(empty_id1_valid), // Templated
					// Inputs
					.in_id		(in_id),	 // Templated
					.in_alloc_valid	(intisq_empty));	 // Templated
   
   

   assign intisq_left = empty_id0_valid + empty_id1_valid;
   
   always_comb begin
      int i;
      
      for(i=0;i<INTISQ_NUM;i=i+1)
	intisq_empty[i] = ~intisq_valid[i];
      
      
   end



   
   

//fluch vector
   logic 		    flush_valid_vector[INTISQ_NUM-1:0];
   always_comb begin
      int i;
      
      flush_valid_vector = '{default: 0};      
      for (i=0;i<INTISQ_NUM;i=i+1) begin
	 if (intisq_valid[i] & (intisq_robid[i][ROB_WIDTH] ^ flush_robid[ROB_WIDTH]) & (intisq_robid[i][ROB_WIDTH-1:0] < flush_robid[ROB_WIDTH-1:0]))
	   flush_valid_vector[i] = 1'b1;
	 if (intisq_valid[i] & ~(intisq_robid[i][ROB_WIDTH] ^ flush_robid[ROB_WIDTH]) & (intisq_robid[i][ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0]))	 
	   flush_valid_vector[i] = 1'b1;
      end      
   end
   
   
//entry valid logic 

   always_ff@(posedge clk) begin
      int i,i1;
      
      if (~reset_n) begin
	 for (i=0 ;i<INTISQ_NUM;i=i+1)
	   intisq_valid[i] <= 1'b0;
      end
      else if (flush_valid) begin
	 for(i1=0; i1<INTISQ_NUM;i1=i1+1)
	   if(flush_valid_vector[i1])
	   intisq_valid[i1] <= '0;
      end
      else if(instr0_enq_valid) begin// instr0 is int and can alloc(see dispatch.v line 115)
	 intisq_valid[empty_id0] <= 1'b1;
	 if (instr1_enq_valid) 
	    intisq_valid[empty_id1] <= 1'b1;
      end
      else if (instr1_enq_valid) begin
	 intisq_valid[empty_id0] <= 1'b1;
      end
      if(deq0_valid)
	intisq_valid[deq0_id] <= 1'b0;
      if(deq1_valid)
	intisq_valid[deq1_id] <= 1'b0;

   end // always_ff@ (posedge clk)

   
//age reg
   always_ff@(posedge clk) begin
      int i;
      
      for (i=0 ;i<INTISQ_NUM;i=i+1)
	if (~reset_n) begin
	   intisq_age[i] <= '0;
	end
	else // new entry age becomes 0; others incre 1
	  intisq_age[i] <= intisq_age_next[i];      
   end

   always_comb begin
      int i;
      
      intisq_age_next = intisq_age;
// dispatch
      for(i=0;i<INTISQ_NUM;i=i+1)  begin      
	 if(instr0_enq_valid & instr1_enq_valid) 
	    intisq_age_next[i] = (i==empty_id0)?  1:
				 (i==empty_id1)?  0:
				 (intisq_age[i] == '1)? intisq_age[i] : intisq_age[i]+2;	 
	 else  if(~instr1_enq_valid & instr0_enq_valid)	      
	   intisq_age_next[i] = (i==empty_id0)?  0:
				(intisq_age[i] == '1)? intisq_age[i] : intisq_age[i]+1;	 
	 
	 else if (instr1_enq_valid & ~instr0_enq_valid)	    
	   intisq_age_next[i] = (i==empty_id1)?  0:
	                        (intisq_age[i] == '1)? intisq_age[i] : intisq_age[i]+1;	 
      end
      
//deq      
      if (deq0_valid)
	intisq_age_next[deq0_id] = '0;
      if (deq1_valid)
	intisq_age_next[deq1_id] = '0;          
   end

   

// depart logic
 

   
   

   assign deq0_id = slot0_entry_id;
   assign deq1_id = slot1_entry_id;
   assign deq0_valid = ex_slot0_valid;
   assign deq1_valid = ex_slot1_valid;
   assign old0_is_alu =~(intisq_control[old0_id].is_jump | intisq_control[old0_id].is_jumpr | intisq_control[old0_id].is_branch | intisq_control[old0_id].is_mul);
   assign old1_is_alu =~(intisq_control[old1_id].is_jump | intisq_control[old1_id].is_jumpr | intisq_control[old1_id].is_branch | intisq_control[old1_id].is_mul);
   assign old0_is_bju =(intisq_control[old0_id].is_jump | intisq_control[old0_id].is_jumpr | intisq_control[old0_id].is_branch );
   assign old1_is_bju =(intisq_control[old1_id].is_jump | intisq_control[old1_id].is_jumpr | intisq_control[old1_id].is_branch );
   assign old0_is_mul = intisq_control[old0_id].is_mul ;
   assign old1_is_mul = intisq_control[old1_id].is_mul ;

   

   
   

   
   
   

   
   always_comb begin // if the src data is ready?
      int i;
      
      for (i=0;i<INTISQ_NUM;i=i+1)
	 intisq_entry_ready[i] = intisq_valid[i] & ((intisq_control[i].rs1_valid & !intisq_src1_state[i]) || !intisq_control[i].rs1_valid) &  ((intisq_control[i].rs2_valid & !intisq_src2_state[i]) || !intisq_control[i].rs2_valid); 	 	      
   end

   //reverse order to adapt to Picker
   always_comb begin
      int i;
      for (i=0;i<INTISQ_NUM;i=i+1) begin
	 intisq_age_order_reverse[i] = intisq_age[7-i];
	 intisq_entry_ready_order_reverse[i] = intisq_entry_ready[7-i];
	 
	 
      end
      

   end

   Picker8_2 inst_oldest_picker(
				// Outputs
				.out_id_1	(old1_id),
				.out_id_0	(old0_id),
				.out_valid_0	(old0_valid),
				.out_valid_1	(old1_valid),
				// Inputs
				.in_age		(intisq_age_order_reverse),
				.in_valid	(intisq_entry_ready_order_reverse));
   

   assign ready_vec = {old1_valid,old0_valid};

//pick up ready instrs

   always_comb begin // according to mul_slot_busy,and the type of instr, decide dispatch to which slot
      slot0_entry_id = old0_id;
      slot1_entry_id = old1_id;
      ex_slot0_valid = 0;
      ex_slot1_valid = 0;	     
      case (ready_vec)
	2'b11: 
	  if(old0_is_mul & old1_is_mul) begin
	     ex_slot0_valid =  !mul_slot_busy;
	     ex_slot1_valid = 0;	     	     
	  end
	  else if(old0_is_mul & old1_is_alu) begin
	     ex_slot0_valid =  !mul_slot_busy;
	     ex_slot1_valid = 1;	     	     
	  end
	  else if(old1_is_mul & old0_is_alu) begin
	     ex_slot0_valid =  !mul_slot_busy;
	     ex_slot1_valid = 1;
	     slot0_entry_id = old1_id;
	     slot1_entry_id = old0_id;	     	     
	  end
	  else if(old0_is_mul & old1_is_bju) begin
	     ex_slot0_valid =  !mul_slot_busy;
	     ex_slot1_valid = 1;     	     
	  end
	  else if(old1_is_mul & old0_is_bju) begin
	     ex_slot0_valid =  !mul_slot_busy;
	     ex_slot1_valid = 1;
	     slot0_entry_id = old1_id;
	     slot1_entry_id = old0_id;     	     
	  end
	  else if(old0_is_bju & old1_is_bju) begin
	     ex_slot0_valid = 0;
	     ex_slot1_valid = 1;     	     
	  end
	  else if(old0_is_bju & old1_is_alu) begin
	     ex_slot0_valid = 1;
	     ex_slot1_valid = 1;
	     slot0_entry_id = old1_id;
	     slot1_entry_id = old0_id;     	     
	  end
	  else if(old1_is_bju & old0_is_alu) begin
	     ex_slot0_valid = 1;
	     ex_slot1_valid = 1;     	     
	  end
	  else if(old0_is_alu & old1_is_alu) begin
	     ex_slot0_valid = 1;
	     ex_slot1_valid = 1;     	     
	  end
	2'b01:
	  if (old0_is_mul) begin
	     ex_slot0_valid = 1;
	  end
	  else if (old0_is_bju) begin
	     ex_slot1_valid = 1;
	     slot0_entry_id = old1_id;
	     slot1_entry_id = old0_id; 
	  end
	  else begin
	     ex_slot0_valid = 1;
	  end
	2'b10:
	  if (old1_is_mul) begin
	     ex_slot0_valid = 1;
	     slot0_entry_id = old1_id;
	     slot1_entry_id = old0_id; 	     
	  end
	  else if (old1_is_bju) begin
	     ex_slot1_valid = 1;
	  end
	  else begin
	     ex_slot1_valid = 1;
	  end
	default: begin
	   slot0_entry_id = old0_id;
	   slot1_entry_id = old1_id;
	   ex_slot0_valid = 0;
	   ex_slot1_valid = 0;
	end
	  
      endcase

   end // always_comb

   
   
   
// wrtie the data into isq when set valid  

   always_ff@(posedge clk) begin
      int i;
      
      if (!reset_n) begin
	 for (i=0 ;i<INTISQ_NUM;i=i+1) begin	
	    intisq_src1_id[i]    <= '0;     
	    intisq_src2_id[i]    <= '0;     
	    intisq_T[i]          <= '0;           
	    intisq_pc[i]         <= '0;          
	    intisq_robid[i]      <= '0;       
	    intisq_control[i]    <= '0;     
	 end
      end
      else if(instr0_enq_valid) begin// instr0 is int and can alloc(see dispatch.v line 115)
	    intisq_src1_id[empty_id0]    <= instr0_src1_id;     
	    intisq_src2_id[empty_id0]    <= instr0_src2_id;     
	    intisq_T[empty_id0]          <= instr0_T;           
	    intisq_pc[empty_id0]         <= instr0_pc;          
	    intisq_robid[empty_id0]      <= instr0_robid;       
	    intisq_control[empty_id0]    <= instr0_control;     
	 if (instr1_enq_valid) 
	    intisq_src1_id[empty_id1]    <= instr1_src1_id;     
	    intisq_src2_id[empty_id1]    <= instr1_src2_id;     
	    intisq_T[empty_id1]          <= instr1_T;           
	    intisq_pc[empty_id1]         <= instr1_pc;          
	    intisq_robid[empty_id1]      <= instr1_robid;       
	    intisq_control[empty_id1]    <= instr1_control;	   
      end
      else if (instr1_enq_valid) begin
	    intisq_src1_id[empty_id0]    <= instr1_src1_id;     
	    intisq_src2_id[empty_id0]    <= instr1_src2_id;     
	    intisq_T[empty_id0]          <= instr1_T;           
	    intisq_pc[empty_id0]         <= instr1_pc;          
	    intisq_robid[empty_id0]      <= instr1_robid;       
	    intisq_control[empty_id0]    <= instr1_control;	   
	 
      end
   end // always_ff@ (posedge clk)



// write back logic

   
   always_ff@(posedge clk) begin
      int i2,i;
      
      if (!reset_n) begin
	 for (i=0 ;i<INTISQ_NUM;i=i+1) begin	
            intisq_src1_state[i] <= '0;  
	    intisq_src2_state[i] <= '0;  

	 end
      end
      else if(instr0_enq_valid) begin// instr0 is int and can alloc(see dispatch.v line 115)
            intisq_src1_state[empty_id0] <= instr0_src1_busy;  
	    intisq_src2_state[empty_id0] <= instr0_src2_busy;  
	 if (instr1_enq_valid) 
            intisq_src1_state[empty_id1] <= instr1_src1_busy;  
	    intisq_src2_state[empty_id1] <= instr1_src2_busy;  
      end
      else if (instr1_enq_valid) begin
	    intisq_src1_state[empty_id0] <= instr1_src1_busy;  
	    intisq_src2_state[empty_id0] <= instr1_src2_busy;  	 
      end
      else   begin
	 for(i2=0 ; i2 < INTISQ_NUM ; i2=i2+1) begin
	    if ((writeback0_need_to_wb & writeback0_valid & intisq_valid[i2] & intisq_src1_id[i2] == writeback0_prd) ||
		(writeback1_need_to_wb & writeback1_valid & intisq_valid[i2] & intisq_src1_id[i2] == writeback1_prd) || 
		(writeback2_need_to_wb & writeback2_valid & intisq_valid[i2] & intisq_src1_id[i2] == writeback2_prd) || 
		(writeback3_need_to_wb & writeback3_valid & intisq_valid[i2] & intisq_src1_id[i2] == writeback3_prd))
	      intisq_src1_state[i2] <= 1'b0;
	    if ((writeback0_need_to_wb & writeback0_valid & intisq_valid[i2] & intisq_src2_id[i2] == writeback0_prd) ||
		(writeback1_need_to_wb & writeback1_valid & intisq_valid[i2] & intisq_src2_id[i2] == writeback1_prd) || 
		(writeback2_need_to_wb & writeback2_valid & intisq_valid[i2] & intisq_src2_id[i2] == writeback2_prd) || 
		(writeback3_need_to_wb & writeback3_valid & intisq_valid[i2] & intisq_src2_id[i2] == writeback3_prd))
	      intisq_src2_state[i2] <= 1'b0;
	   
	 end
      end
   end // always_ff@ (posedge clk)
   
// output data to exe
   

   assign  slot0_T        = intisq_T[slot0_entry_id];   
   assign  slot1_T        = intisq_T[slot1_entry_id];      
   assign  slot0_control  = intisq_control[slot0_entry_id];   
   assign  slot1_control  = intisq_control[slot1_entry_id];   
   assign  slot0_pc       = intisq_pc[slot0_entry_id];
   assign  slot1_pc       = intisq_pc[slot1_entry_id];   
   assign  slot0_robid    = intisq_robid[slot0_entry_id]; 
   assign  slot1_robid    = intisq_robid[slot1_entry_id]; 






   
endmodule
