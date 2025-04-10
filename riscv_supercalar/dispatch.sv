`timescale 1ns/1ps

import common::*;
`define debug


module dispatch(/*AUTOARG*/
   // Outputs
   can_dispatch, instr0_control, instr1_control, instr0_valid_rob,
   instr1_valid_rob, instr0_pc, instr1_pc, instr0_instr, instr1_instr,
   instr0_T, instr1_T, instr0_T_old, instr1_T_old, instr0_src1,
   instr0_src2, instr1_src1, instr1_src2, instr0_valid_intisq,
   instr1_valid_intisq, instr0_valid_memisq, instr1_valid_memisq,
   isq_robid_0, isq_robid_1, isq_src1_busy_0, isq_src2_busy_0,
   isq_src1_busy_1, isq_src2_busy_1,
   // Inputs
   instr0_pipe_reg, instr1_pipe_reg, instr0_pc_in, instr1_pc_in,
   instr0_instr_in, instr1_instr_in, rob_left, instr0_robid_in,
   instr1_robid_in, instr0_src1_busy_in, instr0_src2_busy_in,
   instr1_src1_busy_in, instr1_src2_busy_in, intisq_left, memisq_left,
   sq_left, flush_valid
   );

   output                    can_dispatch;

  
//From pipeline reg   
   input ir_is_type          instr0_pipe_reg;
   input ir_is_type          instr1_pipe_reg;

   input logic [31:0]        instr0_pc_in;
   input logic [31:0] 	     instr1_pc_in;
   input logic [31:0] 	     instr0_instr_in;
   input logic [31:0] 	     instr1_instr_in;      



//input from and output to ROB
   input logic [1:0] 	      rob_left;
   input [ROB_WIDTH:0] 	      instr0_robid_in;
   input [ROB_WIDTH:0] 	      instr1_robid_in;  
   output control_type	      instr0_control;
   output control_type	      instr1_control;
   output                     instr0_valid_rob;
   output 		      instr1_valid_rob;
`ifdef debug
   output [31:0] 	      instr0_pc;
   output [31:0] 	      instr1_pc;
   output instruction_type    instr0_instr;
   output instruction_type    instr1_instr;
`endif 			
   output [PRF_WIDTH-1:0]     instr0_T;
   output [PRF_WIDTH-1:0]     instr1_T;
   output [PRF_WIDTH-1:0]     instr0_T_old;
   output [PRF_WIDTH-1:0]     instr1_T_old;


// from busy table
   output [PRF_WIDTH-1:0]     instr0_src1;
   output [PRF_WIDTH-1:0]     instr0_src2;
   output [PRF_WIDTH-1:0]     instr1_src1;
   output [PRF_WIDTH-1:0]     instr1_src2;
   input 		      instr0_src1_busy_in;
   input 		      instr0_src2_busy_in;
   input 		      instr1_src1_busy_in;
   input 		      instr1_src2_busy_in;


//input from and output to ISSUE QUEUE
   input logic [1:0] 	     intisq_left;
   input logic [1:0] 	     memisq_left;
   output logic 	     instr0_valid_intisq; 	
   output logic 	     instr1_valid_intisq; 	
   output logic 	     instr0_valid_memisq; 	
   output logic 	     instr1_valid_memisq; 	
   
   output [ROB_WIDTH:0]      isq_robid_0;
   output [ROB_WIDTH:0]      isq_robid_1;
   output 		     isq_src1_busy_0;
   output 		     isq_src2_busy_0;
   output 		     isq_src1_busy_1;
   output 		     isq_src2_busy_1;
  
   


//input from and output to STORE QUEUE
   input  logic [1:0] 	         sq_left;


//flush
   input                         flush_valid;
    
   




   


//dispatch logic: can alloc? 
//if there is enough space for rob, isq, store queue,
// if all module have enough space then also need to decide how many instr go to intisq and memisq.

   logic 		     rob_can_alloc;
   logic 		     intisq_can_alloc;
   logic 		     memisq_can_alloc;
   logic 		     sq_can_alloc;
   logic 		     can_dispatch;
   logic [1:0] 		     mem_instr_num;
   logic [1:0] 		     int_instr_num;
   logic [1:0] 		     store_instr_num;
   logic [1:0] 		     mem_instr_vec;
   logic [1:0] 		     int_instr_vec;
   logic [1:0] 		     store_instr_vec;
 	
   always_comb begin
      mem_instr_vec = '0;
      int_instr_vec = '0;
      store_instr_vec = '0;
      if (instr0_pipe_reg.control.is_valid && (instr0_pipe_reg.control.mem_read || instr0_pipe_reg.control.mem_write))
	  mem_instr_vec[0] = 1'b1;
      else if ( instr0_pipe_reg.control.is_valid)
	  int_instr_vec[0] = 1'b1;
      if (instr1_pipe_reg.control.is_valid && (instr1_pipe_reg.control.mem_read || instr1_pipe_reg.control.mem_write))
	  mem_instr_vec[1] = 1'b1;
      else if ( instr1_pipe_reg.control.is_valid)
	  int_instr_vec[1] = 1'b1;
      if (instr0_pipe_reg.control.is_valid && ( instr0_pipe_reg.control.mem_write))
	  store_instr_vec[0] = 1'b1;
      if (instr1_pipe_reg.control.is_valid && ( instr1_pipe_reg.control.mem_write))
	  store_instr_vec[1] = 1'b1;
   end // always_comb

   assign int_instr_num = int_instr_vec[1] + int_instr_vec[0];
   assign mem_instr_num = mem_instr_vec[1] + mem_instr_vec[0];
   assign store_instr_num = store_instr_vec[1] + store_instr_vec[0];
   

   assign rob_can_alloc = (rob_left >= (mem_instr_num + int_instr_num))?1 : 0 ;
   assign intisq_can_alloc = (intisq_left >= int_instr_num)?1 : 0 ;
   assign memisq_can_alloc = (memisq_left >= mem_instr_num)?1 : 0 ;
   assign sq_can_alloc = (sq_left >= store_instr_num)?1 : 0 ;
   assign can_dispatch = rob_can_alloc & intisq_can_alloc & memisq_can_alloc & sq_can_alloc & ~flush_valid;
   assign instr0_valid_intisq = instr0_valid_rob & int_instr_vec[0];
   assign instr1_valid_intisq = instr1_valid_rob & int_instr_vec[1];
   assign instr0_valid_memisq = instr0_valid_rob & mem_instr_vec[0];
   assign instr1_valid_memisq = instr1_valid_rob & mem_instr_vec[1];



// output to ROB logic
   assign instr0_valid_rob = instr0_pipe_reg.control.is_valid & can_dispatch;
   assign instr1_valid_rob = instr1_pipe_reg.control.is_valid & can_dispatch;

   assign  instr0_control    = instr0_pipe_reg.control ; //also to isq
   assign  instr1_control    = instr1_pipe_reg.control ;
`ifdef debug   
   assign  instr0_pc       = instr0_pc_in ;             	
   assign  instr1_pc       = instr1_pc_in ;             	
   assign  instr0_instr    = instr0_instr_in ;
   assign  instr1_instr    = instr1_instr_in ;
`endif   
   assign  instr0_T        = instr0_pipe_reg.T ;         	
   assign  instr1_T        = instr1_pipe_reg.T ;         	
   assign  instr0_T_old    = instr0_pipe_reg.T_old ;
   assign  instr1_T_old    = instr1_pipe_reg.T_old ;
 

//output logic to ISSUE QUEUE

   assign isq_robid_0 = instr0_robid_in;
   assign isq_robid_1 = instr1_robid_in;
   assign isq_src1_busy_0 = instr0_src1_busy_in;
   assign isq_src2_busy_0 = instr0_src2_busy_in;
   assign isq_src1_busy_1 = instr1_src1_busy_in;
   assign isq_src2_busy_1 = instr1_src2_busy_in;
   assign instr0_src1 = instr0_pipe_reg.prf_rs1; // to isq and busytable
   assign instr0_src2 = instr0_pipe_reg.prf_rs2;
   assign instr1_src1 = instr1_pipe_reg.prf_rs1;
   assign instr1_src2 = instr1_pipe_reg.prf_rs2;      




   
   

endmodule // dispatch
