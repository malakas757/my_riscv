`timescale 1ns/1ps

import common::*;

module stall_flush_control (/*AUTOARG*/
   // Outputs
   PC_stall, PC_flush, IF_stall, ID_stall, IR_stall, ID_flush,
   IF_flush, IR_flush,
   // Inputs
   imem_miss, can_dispatch, flush_valid, rob_state
   );
  

   //From IF
   output   PC_stall;
   output   PC_flush;
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



   logic 		 is_idle;
   logic 		 is_rollback;
   logic 		 is_walk;
      
   assign is_idle     = (rob_state == rob_idle);
   assign is_rollback = (rob_state == rob_rollback);
   assign is_walk     = (rob_state == rob_walk);
   
   // IF_stage
   
   assign PC_stall = imem_miss || ~can_dispatch || is_walk || is_rollback;
   assign IF_stall = ~can_dispatch || is_walk || is_rollback;
   assign ID_stall = ~can_dispatch || is_rollback || is_walk ;
   assign IR_stall = ~can_dispatch || is_walk || is_rollback;
   assign PC_flush = flush_valid;
   assign IF_flush = flush_valid || imem_miss;
   assign ID_flush = flush_valid;
   assign IR_flush = flush_valid;


   
   



endmodule
