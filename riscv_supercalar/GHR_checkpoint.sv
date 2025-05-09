`timescale 1ns/1ps

import common::*;

module GHR_checkpoint(/*AUTOARG*/
   // Outputs
   GHT_left, need_update_GHSR, ex2if_GHSR_restore,
   // Inputs
   clk, reset_n, flush_valid, branch_valid, flush_robid,
   GHSR_entry_req0, GHSR_entry_req1, GHSR_req0_robid, GHSR_req1_robid,
   GHSR_req0_data, GHSR_req1_data
   );

   
   input clk;
   input reset_n;
   output logic [1:0]          GHT_left;

   //  input from exe 
   input logic                 flush_valid;
   input logic                 branch_valid;
   input logic [ROB_WIDTH:0]   flush_robid;

   //from dispatch
   input 		         GHSR_entry_req0;
   input 		         GHSR_entry_req1;
   input [ROB_WIDTH:0] 		 GHSR_req0_robid;
   input [ROB_WIDTH:0] 		 GHSR_req1_robid;
   input [GSHARE_GHSR_WIDTH-1:0] GHSR_req0_data;
   input [GSHARE_GHSR_WIDTH-1:0] GHSR_req1_data;
   //to if stage
   output                               need_update_GHSR;
   output logic [GSHARE_GHSR_WIDTH-1:0] ex2if_GHSR_restore;


   //entry define
   logic                         GHSR_valid[GHT_NUM-1:0];
   logic                         GHSR_empty[GHT_NUM-1:0];
   logic [ROB_WIDTH:0] 	         GHSR_robid[GHT_NUM-1:0];
   logic [GSHARE_GHSR_WIDTH-1:0] GHSR_data[GHT_NUM-1:0];

    

   //empty finder

   logic [INTISQ_WIDTH-1:0] 		       empty_id0;
   logic 				       empty_id0_valid;
   logic [INTISQ_WIDTH-1:0] 		       empty_id1;
   logic 				       empty_id1_valid;
   logic [INTISQ_WIDTH-1:0] 		       in_id[INTISQ_NUM-1:0];
   

   always_comb begin
      int i;      
      for(i=0;i<GHT_NUM;i=i+1)
	GHSR_empty[i] = ~GHSR_valid[i];            
   end

   always_comb begin
      int i;            
      for(i=0; i<INTISQ_NUM; i=i+1) begin
	 in_id[i] = i;	 
	end
   end

   always_comb begin
      int i;
      ex2if_GHSR_restore = '0;      
      for(i=0; i<INTISQ_NUM; i=i+1) begin
	 if ((GHSR_robid[i] == flush_robid) & GHSR_valid[i])
	  ex2if_GHSR_restore = GHSR_data[i];	 
      end
   end
   
   assign GHT_left = empty_id0_valid + empty_id1_valid;
   
   /*empty_entry_finder8 AUTO_TEMPLATE(
					// Outputs
					.out_id_0	(empty_id0),
					.out_id_1	(empty_id1),
					.out_alloc_valid_0(empty_id0_valid),
					.out_alloc_valid_1(empty_id1_valid),
					// Inputs
					.in_id		(in_id),
					.in_alloc_valid	(GHSR_empty));*/
   
   empty_entry_finder8 inst_emptyfinder(/*AUTOINST*/
					// Outputs
					.out_id_0	(empty_id0),	 // Templated
					.out_id_1	(empty_id1),	 // Templated
					.out_alloc_valid_0(empty_id0_valid), // Templated
					.out_alloc_valid_1(empty_id1_valid), // Templated
					// Inputs
					.in_id		(in_id),	 // Templated
					.in_alloc_valid	(GHSR_empty));	 // Templated

   logic 		    flush_valid_vector[GHT_NUM-1:0];
   
   always_comb begin
      int i;      
      flush_valid_vector = '{default: 0};      
      for (i=0;i<GHT_NUM;i=i+1) begin
	 if (GHSR_valid[i] & ((GHSR_robid[i][ROB_WIDTH] ^ flush_robid[ROB_WIDTH]) ^ (GHSR_robid[i][ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0])))
	   flush_valid_vector[i] = 1'b1;
      end      
   end

   //entry valid logic 

   always_ff@(posedge clk) begin // when flush valid cant issue and disp
      int i,i1;      
      if (~reset_n) begin
	 for (i=0 ;i<GHT_NUM;i=i+1)
	   GHSR_valid[i] <= 1'b0;
	   GHSR_data[i]  <= '0;
	   GHSR_robid[i] <= '0;
	 
      end
      
      else begin
	 for(i1=0; i1<GHT_NUM;i1=i1+1) begin //when get a result from exe or need to flush,unset valid signal
	    if (GHSR_valid[i1] & ((flush_valid & flush_valid_vector[i1]) || (GHSR_robid[i1] == flush_robid & branch_valid)))
	      GHSR_valid[i1] <= '0;	   
         end
	 if(GHSR_entry_req0) begin// instr0 is int and can alloc(see dispatch.v line 115)
	    GHSR_valid[empty_id0] <= 1'b1;
	    GHSR_robid[empty_id0] <= GHSR_req0_robid;
	    GHSR_data[empty_id0]  <= GHSR_req0_data;
	    if (GHSR_entry_req1) begin 
	       GHSR_valid[empty_id1] <= 1'b1;
	       GHSR_robid[empty_id1] <= GHSR_req1_robid;
	       GHSR_data[empty_id1]  <= GHSR_req1_data;
	    end
	 end
	 else if (GHSR_entry_req1) begin
	    GHSR_valid[empty_id0] <= 1'b1;
	    GHSR_robid[empty_id0] <= GHSR_req1_robid;
	    GHSR_data[empty_id0]  <= GHSR_req1_data;
	 end
      end // else: !if(~reset_n)
   end // always_ff@ (posedge clk)

   assign need_update_GHSR = branch_valid & flush_valid;

   











   
endmodule
