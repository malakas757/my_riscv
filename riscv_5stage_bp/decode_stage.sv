`timescale 1ns / 1ps
import common::*;



module decode_stage(/*AUTOARG*/
   // Outputs
   branch_out, reg_rd_id, pc_out, read_data1, read_data2,
   immediate_data, control_signals,
   // Inputs
   clk, reset_n, instruction, pc, write_en, write_id, write_data,
   branch_in
   );


    input clk;
    input reset_n;
    input instruction_type instruction;    
    input logic [31:0] pc;
    input logic write_en;
    input logic [4:0] write_id;
    input logic [31:0] write_data;
    input branch_predict_type  branch_in;
    output branch_predict_type  branch_out;
    output logic [4:0] reg_rd_id;
    output logic [31:0] pc_out;
    output logic [31:0] read_data1;
    output logic [31:0] read_data2;
    output logic [31:0] immediate_data;
    output control_type control_signals;
   

    logic [31:0] rf_read_data1;
    logic [31:0] rf_read_data2;
    
    control_type control;
        

    register_file rf_inst(
        .clk(clk),

        .reset_n(reset_n),
        .write_en(write_en),
        .read1_id(instruction.rs1),
        .read2_id(instruction.rs2),
        .write_id(write_id),
        .write_data(write_data),
        .read1_data(rf_read_data1),
        .read2_data(rf_read_data2)        
    );
    
   /* control inst_control(
    .control(control),
   */
    control_unit inst_control(/*AUTOINST*/
			      // Outputs
			      .control		(control),
			      // Inputs
			      .clk		(clk),
			      .reset_n		(reset_n),
			      .instruction	(instruction));

    
   
    assign reg_rd_id = instruction.rd;
    assign read_data1 = rf_read_data1;
    assign read_data2 = rf_read_data2;
    assign immediate_data = immediate_extension(instruction, control.encoding);
    assign control_signals = control;
    assign pc_out = pc;
    assign branch_out = branch_in;
   
    
endmodule
