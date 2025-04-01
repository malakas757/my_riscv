`timescale 1ns/1ps

import common::*;

module stall_flush_control (/*AUTOARG*/
   // Outputs
   PC_stall, PC_flush, IF_stall,
   // Inputs
   imem_miss
   );
  

   //From IF
   output   PC_stall;
   output   PC_flush;
   output   IF_stall;
   input    imem_miss;




   // IF_stage

   assign PC_stall = imem_miss;
   assign PC_flush = 1'b0;
   assign IF_stall = 1'b0;
 
   



endmodule
