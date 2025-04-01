`timescale 1ns/1ps

import common::*;

//  6 reads and 2 writes, be careful with the WAW and RAW logic, using walk recovery to deal with misprediction




module maptable(/*AUTOARG*/
   // Outputs
   instr0_prf_rs1, instr0_prf_rs2, instr1_prf_rs1, instr1_prf_rs2,
   T_0, T_1, T_old_0, T_old_1,
   // Inputs
   clk, reset_n, rename_0, rename_1, rd_valid_0, rd_valid_1,
   rob_state, walk_0_valid, walk_1_valid, walk_0_rd_id, walk_1_rd_id,
   walk_0_rd_prf, walk_1_rd_prf
   );

   input  clk;
   input  reset_n;
  
   
   //Input from dispatch and rob(retire)

   input  rename_type              rename_0;
   input  rename_type              rename_1;
   input  rd_valid_0;           //valid bit for update RAT table(dispatch)
   input  rd_valid_1;           //valid bit for update RAT table(dispatch)
   
   //To  RS
   output logic [PRF_WIDTH-1:0]       instr0_prf_rs1;
   output logic [PRF_WIDTH-1:0]       instr0_prf_rs2;
   output logic [PRF_WIDTH-1:0]       instr1_prf_rs1;
   output logic [PRF_WIDTH-1:0]       instr1_prf_rs2;
   
   
   
   //To ROB
   output logic [PRF_WIDTH-1:0]       T_0; // The current PRF id in ROB
   output logic [PRF_WIDTH-1:0]       T_1; // The current PRF id in ROB
   output logic [PRF_WIDTH-1:0]       T_old_0; //To ROB for FL to release PRF
   output logic [PRF_WIDTH-1:0]       T_old_1; //To ROB for FL to release PRF

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
      else begin 
	 if(rd_valid_0 && ~(rd_valid_1 && rename_0.rd_id == rename_1.rd_id) ) 
	   RAT_NEXT[rename_0.rd_id] =  rename_0.fl_prf_id;	   
	 if(rd_valid_1) 
	   RAT_NEXT[rename_1.rd_id] =  rename_1.fl_prf_id;	   
      end
   end

//READ  Watch out for RAW!!!

   assign instr0_prf_rs1 = RAT[rename_0.rs1_id];
   assign instr0_prf_rs2 = RAT[rename_0.rs2_id];
   assign instr1_prf_rs1 = (rd_valid_0 && rename_1.rs1_id == rename_0.rd_id)?rename_0.fl_prf_id:RAT[rename_1.rs1_id];
   assign instr1_prf_rs2 = (rd_valid_0 && rename_1.rs2_id == rename_0.rd_id)?rename_0.fl_prf_id:RAT[rename_1.rs2_id];
  
   // To ROB  WAW hazard
   assign T_old_0 = RAT[rename_0.rd_id];
   assign T_old_1 = (rd_valid_0 && rd_valid_1 && rename_0.rd_id == rename_1.rd_id)?rename_0.fl_prf_id : RAT[rename_1.rd_id];
   assign T_0 = rename_0.fl_prf_id;
   
   assign T_1 = rename_1.fl_prf_id;





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


   
   // retire
   always_comb begin
      RRAT_NEXT = RRAT;
      

      if (rename_0.retire_valid && rename_0.retire_wb) begin 
	   RRAT_NEXT[rename_0.retire_arf_id] =  rename_0.retire_prf_id;
      end
      if (rename_1.retire_valid && rename_1.retire_wb) begin 
	   RRAT_NEXT[rename_1.retire_arf_id] =  rename_1.retire_prf_id; 
      end
   end



endmodule
     
