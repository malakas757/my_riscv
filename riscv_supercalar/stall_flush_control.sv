`timescale 1ns/1ps

import common::*;

module stall_flush_control (/*AUTOARG*/
   // Outputs
   PC_stall, IF_stall, ID_stall, IR_stall, ID_flush, IF_flush,
   IR_flush,
   // Inputs
   imem_miss, can_dispatch, flush_valid, rob_state, pc_is_read
   );
  

   //From IF
   output   PC_stall;
   output   IF_stall;
   output   ID_stall;
   output   IR_stall;
   output   ID_flush;
   output   IF_flush;
   output   IR_flush;
   input    imem_miss;
   input    can_dispatch;
   input    flush_valid;
   input [1:0] rob_state;
   input [31:0] pc_is_read;
   



   logic 		 is_idle;
   logic 		 is_rollback;
   logic 		 is_walk;

   /* stall when read the last instr in program memory */
   logic                 pc_run_out;
   
      
   assign is_idle     = (rob_state == rob_idle);
   assign is_rollback = (rob_state == rob_rollback);
   assign is_walk     = (rob_state == rob_walk);
   assign pc_run_out  = (pc_is_read[9:3] == {7{1'b1}});
   
   
   // IF_stage
   
   assign PC_stall = imem_miss || ~can_dispatch || is_walk || is_rollback || pc_run_out;
   assign IF_stall = ~can_dispatch || is_walk || is_rollback;
   assign ID_stall = ~can_dispatch || is_rollback || is_walk ;
   assign IR_stall = ~can_dispatch || is_walk || is_rollback;
   assign IF_flush = flush_valid || imem_miss || pc_run_out;
   assign ID_flush = flush_valid || pc_run_out;
   assign IR_flush = flush_valid || pc_run_out;


   
   



endmodule
