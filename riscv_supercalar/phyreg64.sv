`timescale 1ns/1ps

import common::*;


// 6r 4w regfiles

module phyreg64(/*AUTOARG*/
   // Outputs
   prf_debug, IQ0_rs1_data, IQ0_rs2_data, IQ1_rs1_data, IQ1_rs2_data,
   MEM_rs1_data, MEM_rs2_data,
   // Inputs
   clk, reset_n, IQ0_rs1_addr, IQ0_rs2_addr, IQ1_rs1_addr,
   IQ1_rs2_addr, MEM_rs1_addr, MEM_rs2_addr, writeback0_need_to_wb,
   writeback1_need_to_wb, writeback2_need_to_wb,
   writeback3_need_to_wb, writeback0_prd, writeback1_prd,
   writeback2_prd, writeback3_prd, writeback0_data, writeback1_data,
   writeback2_data, writeback3_data
   );


   input 			clk;
   input 			reset_n;
   output logic [31:0] 		prf_debug[PRF_NUM-1:0];   
   //INT IQ
   input logic [PRF_WIDTH-1:0] 	IQ0_rs1_addr;
   input logic [PRF_WIDTH-1:0] 	IQ0_rs2_addr;
   input logic [PRF_WIDTH-1:0] 	IQ1_rs1_addr;
   input logic [PRF_WIDTH-1:0] 	IQ1_rs2_addr;
   //MEM IQ
   input logic [PRF_WIDTH-1:0] 	MEM_rs1_addr;
   input logic [PRF_WIDTH-1:0] 	MEM_rs2_addr; //for store
   //INT data
   output logic [31:0] 		IQ0_rs1_data;
   output logic [31:0] 		IQ0_rs2_data;
   output logic [31:0] 		IQ1_rs1_data;
   output logic [31:0] 		IQ1_rs2_data;
   //MEM data
   output logic [31:0] 		MEM_rs1_data;
   output logic [31:0] 		MEM_rs2_data;
   // WB
   input 			writeback0_need_to_wb;
   input 			writeback1_need_to_wb;
   input 			writeback2_need_to_wb;
   input 			writeback3_need_to_wb;
   input logic [PRF_WIDTH-1:0] 	writeback0_prd;
   input logic [PRF_WIDTH-1:0] 	writeback1_prd;
   input logic [PRF_WIDTH-1:0] 	writeback2_prd;
   input logic [PRF_WIDTH-1:0] 	writeback3_prd;
   input logic [31:0] 		writeback0_data;
   input logic [31:0] 		writeback1_data;
   input logic [31:0] 		writeback2_data;
   input logic [31:0] 		writeback3_data;
   

   
   logic [31:0] 		prf_file[PRF_NUM-1:0];


   assign prf_debug = prf_file;
   

   

   always_ff @(posedge clk) begin
      integer 			i;
      if (~reset_n) begin
         for (i = 0 ; i < PRF_NUM ; i = i + 1) begin
            prf_file[i] <= 0;
         end
      end

      if (writeback0_need_to_wb && writeback0_prd != 0)
        prf_file[writeback0_prd] <= writeback0_data;
      if (writeback1_need_to_wb && writeback1_prd != 0)
        prf_file[writeback1_prd] <= writeback1_data;
      if (writeback2_need_to_wb && writeback2_prd != 0)
        prf_file[writeback2_prd] <= writeback2_data;
      if (writeback3_need_to_wb && writeback3_prd != 0)
        prf_file[writeback3_prd] <= writeback3_data;

   end
  


   //forward cdb data to read

   always_comb begin
      IQ0_rs1_data = prf_file[IQ0_rs1_addr];
      IQ0_rs2_data = prf_file[IQ0_rs2_addr];
      IQ1_rs1_data = prf_file[IQ1_rs1_addr];
      IQ1_rs2_data = prf_file[IQ1_rs2_addr];
      MEM_rs1_data = prf_file[MEM_rs1_addr];
      MEM_rs2_data = prf_file[MEM_rs2_addr];
      if (writeback0_need_to_wb && writeback0_prd != 0 && writeback0_prd == IQ0_rs1_addr)
	IQ0_rs1_data = writeback0_data;
      else if (writeback1_need_to_wb && writeback1_prd != 0 && writeback1_prd == IQ0_rs1_addr)
	IQ0_rs1_data = writeback1_data;
      else if (writeback2_need_to_wb && writeback2_prd != 0 && writeback2_prd == IQ0_rs1_addr)
	IQ0_rs1_data = writeback2_data;

      if (writeback0_need_to_wb && writeback0_prd != 0 && writeback0_prd == IQ0_rs2_addr)
	IQ0_rs2_data = writeback0_data;
      else if (writeback1_need_to_wb && writeback1_prd != 0 && writeback1_prd == IQ0_rs2_addr)
	IQ0_rs2_data = writeback1_data;
      else if (writeback2_need_to_wb && writeback2_prd != 0 && writeback2_prd == IQ0_rs2_addr)
	IQ0_rs2_data = writeback2_data;

      if (writeback0_need_to_wb && writeback0_prd != 0 && writeback0_prd == IQ1_rs1_addr)
	IQ1_rs1_data = writeback0_data;
      else if (writeback1_need_to_wb && writeback1_prd != 0 && writeback1_prd == IQ1_rs1_addr)
	IQ1_rs1_data = writeback1_data;
      else if (writeback2_need_to_wb && writeback2_prd != 0 && writeback2_prd == IQ1_rs1_addr)
	IQ1_rs1_data = writeback2_data;

      
      if (writeback0_need_to_wb && writeback0_prd != 0 && writeback0_prd == IQ1_rs2_addr)
	IQ1_rs2_data = writeback0_data;
      else if (writeback1_need_to_wb && writeback1_prd != 0 && writeback1_prd == IQ1_rs2_addr)
	IQ1_rs2_data = writeback1_data;
      else if (writeback2_need_to_wb && writeback2_prd != 0 && writeback2_prd == IQ1_rs2_addr)
	IQ1_rs2_data = writeback2_data;  
   end

endmodule
