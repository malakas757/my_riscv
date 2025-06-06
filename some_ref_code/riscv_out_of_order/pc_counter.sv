`timescale 1ns/1ps


import common::*;

module pc_counter(/*AUTOARG*/
   // Outputs
   pc,
   // Inputs
   clk, reset_n, stall, ex_branch_target_addr, ex_branch_flush,
   predict_pc, predict_taken
   );


   input 			  clk;
   input 			  reset_n;

   // pipeline stall signal
   input 			  stall;



   //EXE branch result update signal (if misprediction)
   input logic [XLEN_WIDTH-1:0]   ex_branch_target_addr;
   input 			  ex_branch_flush; //miss ; need update pc

   //IF stage branch prediction
   input logic [XLEN_WIDTH-1:0]   predict_pc;
   input 			  predict_taken;

   
   // PC stage pipeline register output
   output logic [XLEN_WIDTH-1:0]  pc /*verilator public*/;


always_ff@(posedge clk) begin
    if (~reset_n) begin
        pc <= PC_INIT;
    end else if (ex_branch_flush) begin
        pc <= ex_branch_target_addr; //update pc to correct 1
    end else if (stall) begin
        pc <= pc;
    end else if (predict_taken) begin
        pc <= predict_pc;      
    end else begin
        pc <= pc + 4;
    end
end




endmodule
