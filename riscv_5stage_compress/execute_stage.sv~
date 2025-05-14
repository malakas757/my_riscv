`timescale 1ns / 1ps

import common::*;


module execute_stage(
    /*AUTOARG*/
   // Outputs
   control_out, rd_data, branch_pc, branch_flush, memory_data,
   memory_addr,
   // Inputs
   clk, reset_n, data1, data2, pc, immediate_data, control_in,
   branch_predict, fwd_sel_rs1, fwd_sel_rs2, fwd_data_ex_mem,
   fwd_data_mem_wb
   );
   input clk;
   
   input reset_n;
   input [31:0] data1;
   
   input [31:0] data2;
   input [31:0] pc;
   
   input [31:0] immediate_data;
   
   input 	control_type control_in;
   input 	branch_predict;
   
   input [1:0] 	fwd_sel_rs1;
   input [1:0] 	fwd_sel_rs2;
   input [31:0] fwd_data_ex_mem;
   input [31:0] fwd_data_mem_wb;
   
   
   output 	control_type control_out;
   
   output logic [31:0] rd_data; // if it is Load/Store, rd_data=mem_addr 
   output logic [31:0] branch_pc;
   output logic   branch_flush;
   
   output logic [31:0] memory_data;
   output logic [31:0] memory_addr;
   

   /*AUTOWIRE*/
   // Beginning of automatic wires (for undeclared instantiated-module outputs)
   logic		branch_taken;		// From inst_bju of bju.v
   logic		flush;			// From inst_bju of bju.v
   logic [31:0]		j_next_pc;		// From inst_bju of bju.v
   logic [31:0]		mem_addr;		// From inst_lsu of lsu.v
   logic [31:0]		store_data;		// From inst_lsu of lsu.v
   // End of automatics
   /*AUTOREG*/
    
    logic [31:0] alu_left_operand;
    logic [31:0] rs1_after_fwd;
    logic [31:0] rs2_after_fwd;
    logic [31:0] alu_right_operand;
    logic [31:0] alu_data;

   assign rs1_after_fwd = (fwd_sel_rs1==2'b01)?  fwd_data_mem_wb:
			  (fwd_sel_rs1==2'b10)?  fwd_data_ex_mem:
                                                 data1;

   assign rs2_after_fwd = (fwd_sel_rs2==2'b01)?  fwd_data_mem_wb:
			  (fwd_sel_rs2==2'b10)?  fwd_data_ex_mem:
                                                 data2;   
    


    always_comb begin: operand_selector
        alu_left_operand = rs1_after_fwd;
        alu_right_operand = rs2_after_fwd;
        if (control_in.alu_src) begin
            alu_right_operand = immediate_data;
        end
    end    
    
    alu inst_alu(
        .control(control_in.alu_op),
	.left_operand(alu_left_operand), 
        .right_operand(alu_right_operand),
        .result(alu_data)
    );

/*bju AUTO_TEMPLATE(
    .left_operand( rs1_after_fwd ),
    .right_operand( rs2_after_fwd ),
    .control ( control_in ),
 )*/   
   bju inst_bju(
		/*AUTOINST*/
		// Outputs
		.j_next_pc		(j_next_pc[31:0]),
		.branch_pc		(branch_pc[31:0]),
		.branch_taken		(branch_taken),
		.flush			(branch_flush),
		// Inputs
		.left_operand		( rs1_after_fwd ),	 // Templated
		.right_operand		( rs2_after_fwd ),	 // Templated
		.pc			(pc[31:0]),
		.control		( control_in ),		 // Templated
		.immediate_data		(immediate_data[31:0]),
		.branch_predict		(branch_predict));


/*lsu AUTO_TEMPLATE(
    .left_operand( rs1_after_fwd ),
    .right_operand( rs2_after_fwd ),
    .control ( control_in ),
 )*/   
   lsu inst_lsu(
		/*AUTOINST*/
		// Outputs
		.mem_addr		(mem_addr[31:0]),
		.store_data		(store_data[31:0]),
		// Inputs
		.left_operand		( rs1_after_fwd ),	 // Templated
		.right_operand		( rs2_after_fwd ),	 // Templated
		.control		( control_in ),		 // Templated
		.immediate_data		(immediate_data[31:0]));   
    
    assign control_out = control_in;
    assign memory_data = store_data;
    assign memory_addr = mem_addr;
   
    always_comb begin
       if ( control_in.is_jump | control_in.is_jumpr) begin
	  rd_data = j_next_pc;	  
          end
       else if (control_in.mem_read | control_in.mem_write ) begin
	  rd_data = mem_addr;	  
	  end
       else begin
	  rd_data = alu_data;
          end
    end
   
endmodule
