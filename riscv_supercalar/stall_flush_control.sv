`timescale 1ns/1ps

import common::*;

module stall_flush_control (/*AUTOARG*/
   // Outputs
   PC_stall, PC_flush, IF_stall, ID_stall, IR_stall, ID_flush,
   IF_flush, IR_flush,
   // Inputs
   imem_miss
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




   // IF_stage

   assign PC_stall = imem_miss;
   assign PC_flush = 1'b0;
   assign IF_stall = 1'b0;
   assign ID_stall = 1'b0;
   assign IR_stall = 1'b0;
   assign IF_flush = 1'b0;
   assign ID_flush = 1'b0;
   assign IR_flush = 1'b0;
   
   



endmodule
