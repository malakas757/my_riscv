`timescale 1ns/1ps

import common::*;

module ex_buffer(/*AUTOARG*/
   // Outputs
   int0_valid, int0_pc, int0_control, int0_rs1, int0_rs2, int0_T,
   int0_robid, int1_valid, int1_pc, int1_control, int1_rs1, int1_rs2,
   int1_T, int1_robid, int2_valid, int2_pc, int2_control, int2_rs1,
   int2_rs2, int2_T, int2_robid,
   // Inputs
   clk, reset_n, flush_valid, flush_robid, ex_slot0_valid,
   ex_slot1_valid, ex_slot2_valid, slot0_T, slot1_T, slot2_T,
   slot0_control, slot1_control, slot2_control, slot0_pc, slot1_pc,
   slot2_pc, slot0_robid, slot1_robid, slot2_robid, IQ0_rs1_data,
   IQ0_rs2_data, IQ1_rs1_data, IQ1_rs2_data, MEM_rs1_data,
   MEM_rs2_data, mem_issue_stall
   );

   input                      clk;
   input                      reset_n;
   input                      flush_valid;
   input [ROB_WIDTH:0] 	      flush_robid;
   
   
   
   //from isq
   input logic                ex_slot0_valid;
   input logic                ex_slot1_valid;
   input logic                ex_slot2_valid;
   input [PRF_WIDTH-1:0]      slot0_T;
   input [PRF_WIDTH-1:0]      slot1_T;
   input [PRF_WIDTH-1:0]      slot2_T;   
   input control_type	      slot0_control;
   input control_type	      slot1_control;
   input control_type	      slot2_control;
   input [31:0] 	      slot0_pc;
   input [31:0] 	      slot1_pc;
   input [31:0] 	      slot2_pc;
   input [ROB_WIDTH:0] 	      slot0_robid;
   input [ROB_WIDTH:0] 	      slot1_robid;
   input [ROB_WIDTH:0] 	      slot2_robid;
   //from phyreg
     //INT data
   input logic [31:0] 		IQ0_rs1_data;
   input logic [31:0] 		IQ0_rs2_data;
   input logic [31:0] 		IQ1_rs1_data;
   input logic [31:0] 		IQ1_rs2_data;
     //MEM data
   input logic [31:0] 		MEM_rs1_data;
   input logic [31:0] 		MEM_rs2_data;

   //To function unit
     //To int0 (alu and mul)
   output                       int0_valid;
   output logic [31:0] 		int0_pc;
   output control_type          int0_control;
   output logic [31:0]          int0_rs1;
   output logic [31:0]          int0_rs2;
   output logic [PRF_WIDTH-1:0] int0_T;
   output logic [ROB_WIDTH:0] 	int0_robid;
     //To int1 (alu and bju)
   output                       int1_valid;
   output logic [31:0] 		int1_pc;
   output control_type          int1_control;
   output logic [31:0]          int1_rs1;
   output logic [31:0]          int1_rs2;
   output logic [PRF_WIDTH-1:0] int1_T;
   output logic [ROB_WIDTH:0] 	int1_robid;
     //To int2 (lsu)
   output                       int2_valid;
   output logic [31:0] 		int2_pc;
   output control_type          int2_control;
   output logic [31:0]          int2_rs1;
   output logic [31:0]          int2_rs2;
   output logic [PRF_WIDTH-1:0] int2_T;
   output logic [ROB_WIDTH:0] 	int2_robid; 
   //from lsu
   input                        mem_issue_stall;
   




   
   logic 			slot_reg_valid[3];
   logic [31:0] 		slot_reg_pc[3]; 
   logic [31:0] 		slot_reg_rs1[3]; 
   logic [31:0] 		slot_reg_rs2[3]; 
   logic [ROB_WIDTH:0] 		slot_reg_robid[3];
   logic [PRF_WIDTH-1:0] 	slot_reg_T[3];
   control_type                 slot_reg_control[3];





   logic 			slot_need_to_flush[3];
   logic 			slot_need_to_stall[3];
   logic 			slot_valid_in[3];
   logic [31:0]			slot_pc_in[3];
   logic [ROB_WIDTH:0] 		slot_robid_in[3];
   logic [PRF_WIDTH-1:0] 	slot_T_in[3];
   logic [31:0] 		slot_rs1_in[3];
   logic [31:0] 		slot_rs2_in[3];
   control_type			slot_control_in[3];

   
   //flush  stall logic 
   always_comb begin
      int i;      
      slot_need_to_flush ='{default:0};
      for(i=0; i<3 ; i=i+1) begin
	 if (flush_valid & slot_reg_valid[i] & (slot_reg_robid[i][ROB_WIDTH] ^ flush_robid[ROB_WIDTH] ^ (slot_reg_robid[i][ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0])))
	   slot_need_to_flush[i] = 1'b1;           
      end
   end

   assign slot_need_to_stall[0] = 0;
   assign slot_need_to_stall[1] = 0;
   assign slot_need_to_stall[2] = mem_issue_stall;

   //new issue for valid

   assign slot_valid_in[0] = ex_slot0_valid;
   assign slot_valid_in[1] = ex_slot1_valid;
   assign slot_valid_in[2] = ex_slot2_valid;

   assign slot_pc_in[0] = slot0_pc;
   assign slot_pc_in[1] = slot1_pc;
   assign slot_pc_in[2] = slot2_pc;
   assign slot_T_in[0] = slot0_T;
   assign slot_T_in[1] = slot1_T;
   assign slot_T_in[2] = slot2_T;
   assign slot_robid_in[0] = slot0_robid;
   assign slot_robid_in[1] = slot1_robid;
   assign slot_robid_in[2] = slot2_robid;
   assign slot_rs1_in[0] = IQ0_rs1_data;
   assign slot_rs1_in[1] = IQ1_rs1_data;
   assign slot_rs1_in[2] = MEM_rs1_data;
   assign slot_rs2_in[0] = IQ0_rs2_data;
   assign slot_rs2_in[1] = IQ1_rs2_data;
   assign slot_rs2_in[2] = MEM_rs2_data;
   assign slot_control_in[0] = slot0_control;
   assign slot_control_in[1] = slot1_control;
   assign slot_control_in[2] = slot2_control;
   
   //valid set
   always_ff@(posedge clk) begin
      int i;      
      if(~reset_n) begin
	 for(i=0;i<3;i=i+1)
	   slot_reg_valid[i] <= '0;
      end
      else begin
	 for(i=0;i<3;i=i+1) begin
	    if(slot_need_to_flush[i])
	      slot_reg_valid[i] <= 0;
	    else if (~slot_need_to_stall[i] & ~flush_valid) 
	      slot_reg_valid[i] <= slot_valid_in[i];	    
	 end
      end
   end
   // data in
   always_ff@(posedge clk) begin
      int i;     	 
	 for(i=0; i<3; i=i+1) begin
	    if(~slot_need_to_stall[i] & ~flush_valid) begin
	       slot_reg_T [i] <= slot_T_in[i];   
	       slot_reg_pc [i] <= slot_pc_in[i];
	       slot_reg_control[i] <= slot_control_in[i];
	       slot_reg_rs1[i] <= slot_rs1_in[i];
	       slot_reg_rs2[i] <= slot_rs2_in[i];
	       slot_reg_robid[i] <= slot_robid_in[i];	       
	    end
	  end	 
      
   end
      
//output
   assign int0_valid = slot_reg_valid[0] & ~flush_valid;   
   assign int1_valid = slot_reg_valid[1] & ~flush_valid;   
   assign int2_valid = slot_reg_valid[2] & ~flush_valid;
   

   assign int0_T     = slot_reg_T[0];
   assign int1_T     = slot_reg_T[1];
   assign int2_T     = slot_reg_T[2];
   assign int0_pc    = slot_reg_pc[0];
   assign int1_pc    = slot_reg_pc[1];
   assign int2_pc    = slot_reg_pc[2];
   assign int0_robid    = slot_reg_robid[0];
   assign int1_robid    = slot_reg_robid[1];
   assign int2_robid    = slot_reg_robid[2];
   assign int0_control    = slot_reg_control[0];
   assign int1_control    = slot_reg_control[1];
   assign int2_control    = slot_reg_control[2];
   assign int0_rs1    = slot_reg_rs1[0];
   assign int1_rs1    = slot_reg_rs1[1];
   assign int2_rs1    = slot_reg_rs1[2];   
   assign int0_rs2    = slot_reg_rs2[0];
   assign int1_rs2    = slot_reg_rs2[1];
   assign int2_rs2    = slot_reg_rs2[2];   




endmodule
