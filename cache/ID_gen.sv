`timescale 1ns/1ps

`include "define.sv"


module ID_gen
#(parameter int SWB_DEPTH = 8)
(/*AUTOARG*/);
   input  logic                               clk                        ;
   input  logic 			      rstn                       ;
   
