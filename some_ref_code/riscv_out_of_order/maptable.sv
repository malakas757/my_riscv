`timescale 1ns/1ps

import common::*;

//  6 reads and 2 writes, be careful with the WAW and RAW logic, using walk recovery to deal with misprediction

// when use as it scalar cpu, rename_1 = '0, rd_valid[1]=0 




module maptable(/*AUTOARG*/
   // Outputs
   prf_rs1, prf_rs2, T, T_old,
   // Inputs
   clk, reset_n, rename, rd_valid, rob_state, walk_0_valid,
   walk_1_valid, walk_0_rd_id, walk_1_rd_id, walk_0_rd_prf,
   walk_1_rd_prf
   );

   input  clk;
   input  reset_n;
  
   
   //Input from decoder and rob(retire)

   input  rename_type              rename_0;
   input  rename_type              rename_1;
   input  rd_valid[1:0];           //valid bit for update RAT table(dispatch)
   
   //To  RS
   output logic [PRF_WIDTH-1:0]       prf_rs1[1:0];
   output logic [PRF_WIDTH-1:0]       prf_rs2[1:0];
   
   //To ROB
   output logic [PRF_WIDTH-1:0]       T[1:0]; // The current PRF id in ROB
   output logic [PRF_WIDTH-1:0]       T_old[1:0]; //To ROB for FL to release PRF

   //recovery
   input [1:0] 			      rob_state;
   input  			      walk_0_valid;
   input  			      walk_1_valid;
   input logic [ARF_WIDTH-1:0] 	      walk_0_rd_id;
   input logic [ARF_WIDTH-1:0] 	      walk_1_rd_id;
   input logic [PRF_WIDTH-1:0] 	      walk_0_rd_prf;
   input logic [PRF_WIDTH-1:0] 	      walk_1_rd_prf;
   
       


   logic [PRF_WIDTH-1:0] 	      RAT[ARF_NUM-1:0]; //For specualtively update
   logic [PRF_WIDTH-1:0] 	      RAT_NEXT[ARF_NUM-1:0]; //For specualtively update
   logic [PRF_WIDTH-1:0] 	      RRAT[ARF_NUM-1:0];// For retire update
   logic [PRF_WIDTH-1:0] 	      RRAT_NEXT[ARF_NUM-1:0];// For retire update
   logic 			      is_idle;
   logic 			      is_rollback;
   logic 			      is_walk;

   //////////////////////////////////////////////////////////////////////////

                                     //RAT//

   //////////////////////////////////////////////////////////////////////////


//WRITE


   assign is_idle     = (rob_state == rob_idle);
   assign is_rollback = (rob_state == rob_rollback);
   assign is_walk     = (rob_state == rob_walk);

   integer    i;
   
   always_ff@(posedge clk) begin
      if(~reset_n) begin
	 for(i=0; i< ARF_NUM ;i=i+1)
	   RAT[i] <= i;
      end
      else if (is_rollback) begin
	 RAT <= RRAT;	 
      end
      else  begin// Watch out for WAW hazard!!!
	 RAT <= RAT_NEXT;	 	
      end
   end

   // WAW hazard
   always_comb begin
      RAT_NEXT = RAT;
      if(is_walk) begin
	 if(walk_0_valid && ~(walk_1_valid && walk_0_rd_id == walk_1_rd_id)) 
	    RAT_NEXT[walk_0_rd_id] = walk_0_rd_prf;
	 if(walk_1_valid)
	   RAT_NEXT[walk_1_rd_id] = walk_1_rd_prf;	 	    	 
      end      
      else if( rd_valid[0] && rd_valid[1] && rename_0.rd_id == rename_1.rd_id) begin
	 RAT_NEXT[rename_1.rd_id] =  rename_1.fl_prf_id;
      end
      else begin 
	 if(rd_valid[0]) 
	   RAT_NEXT[rename_0.rd_id] =  rename_0.fl_prf_id;	   
	 if(rd_valid[1]) 
	   RAT_NEXT[rename_1.rd_id] =  rename_1.fl_prf_id;	   
      end
   end

//READ  Watch out for RAW!!!

   assign prf_rs1[0] = RAT[rename_0.rs1_id];
   assign prf_rs2[0] = RAT[rename_0.rs2_id];
   assign prf_rs1[1] = (rd_valid[0] && rename_1.rs1_id == rename_0.rd_id)?rename_0.fl_prf_id:RAT[rename_1.rs1_id];
   assign prf_rs2[1] = (rd_valid[0] && rename_1.rs2_id == rename_0.rd_id)?rename_0.fl_prf_id:RAT[rename_1.rs2_id];
  
   // To ROB  WAW hazard
   assign T_old[0] = RAT[rename_0.rd_id];
   assign T_old[1] = (rd_valid[0] && rd_valid[1] && rename_0.rd_id == rename_1.rd_id)?rename_0.fl_prf_id : RAT[rename_1.rd_id];
   assign T[0] = RAT_NEXT[rename_0.rd_id];
   assign T[1] = RAT_NEXT[rename_1.rd_id];





   //////////////////////////////////////////////////////////////////////////

                                     //RRAT//

   //////////////////////////////////////////////////////////////////////////

   always_ff@(posedge clk) begin
      if(~reset_n) begin
	 for(i=0; i< ARF_NUM ;i=i+1)
	   RRAT[i] <= i;
      end
      else  begin// Watch out for WAW hazard!!!
	 RRAT <= RRAT_NEXT;	 	
      end
   end


   
   // reite
   always_comb begin
      RRAT_NEXT = RAT;
      

      if (rename_0.retire_valid && rename_0.retire_wb) begin 
	   RAT_NEXT[rename_0.retire.arf_id] =  rename_0.retire_prf_id;	   
	 if(rd_valid[1]) 
	   RAT_NEXT[rename_1.rd_id] =  rename_1.fl_prf_id;	   
      end
   end



endmodule
     
