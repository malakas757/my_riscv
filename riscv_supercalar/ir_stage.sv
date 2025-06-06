`timescale 1ns/1ps
import common::*;




module ir_stage(/*AUTOARG*/
   // Outputs
   RRAT_debug, fl_can_alloc, T_0, T_1, T_old_0, T_old_1,
   instr0_prf_rs1, instr0_prf_rs2, instr1_prf_rs1, instr1_prf_rs2,
   // Inputs
   clk, reset_n, dec_instr0, dec_instr1, ID_stall, fl_write_en_0,
   fl_write_en_1, fl_write_data_0, fl_write_data_1, retire_arf_id_0,
   retire_arf_id_1, retire_prf_id_0, retire_prf_id_1, retire_valid_0,
   retire_valid_1, retire_wb_0, retire_wb_1, rob_state, fl_walk_0,
   fl_walk_1, rat_walk_0_valid, rat_walk_1_valid, rat_walk_0_rd_id,
   rat_walk_1_rd_id, rat_walk_0_rd_prf, rat_walk_1_rd_prf
   );
   

   input                 clk;
   input 		 reset_n;
   output logic [PRF_WIDTH-1:0] RRAT_debug[ARF_NUM-1:0];
   

   // From decode stage
   input   control_type   dec_instr0;
   input   control_type   dec_instr1;
   input                  ID_stall;
  


   //From retire to fl
   input 		              fl_write_en_0;
   input 		              fl_write_en_1;
   input logic [PRF_WIDTH-1:0]        fl_write_data_0;
   input logic [PRF_WIDTH-1:0]        fl_write_data_1;

   //input from rob for release arf
   
   input logic [4:0] 		      retire_arf_id_0;
   input logic [4:0] 		      retire_arf_id_1;
   input logic [PRF_WIDTH-1:0] 	      retire_prf_id_0;
   input logic [PRF_WIDTH-1:0] 	      retire_prf_id_1;
   input 			      retire_valid_0;
   input 			      retire_valid_1;
   input 			      retire_wb_0;
   input 			      retire_wb_1;

   
   
   //From rob for recovery

   input logic [1:0] 		      rob_state; 			      
	
   input 			      fl_walk_0;
   input 			      fl_walk_1;

   input  			      rat_walk_0_valid;
   input  			      rat_walk_1_valid;
   input logic [ARF_WIDTH-1:0] 	      rat_walk_0_rd_id;
   input logic [ARF_WIDTH-1:0] 	      rat_walk_1_rd_id;
   input logic [PRF_WIDTH-1:0] 	      rat_walk_0_rd_prf;
   input logic [PRF_WIDTH-1:0] 	      rat_walk_1_rd_prf;


   //output To RS and ROB
   output 			      fl_can_alloc;
   output logic [PRF_WIDTH-1:0]       T_0; // The current PRF id in ROB
   output logic [PRF_WIDTH-1:0]       T_1; // The current PRF id in ROB
   output logic [PRF_WIDTH-1:0]       T_old_0; //To ROB for FL to release PRF
   output logic [PRF_WIDTH-1:0]       T_old_1; //To ROB for FL to release PRF
   output logic [PRF_WIDTH-1:0]       instr0_prf_rs1;
   output logic [PRF_WIDTH-1:0]       instr0_prf_rs2;
   output logic [PRF_WIDTH-1:0]       instr1_prf_rs1;
   output logic [PRF_WIDTH-1:0]       instr1_prf_rs2;
   


   //FL input  watch out for reg0 !!!
   logic   fl_req_0;
   logic   fl_req_1;
   logic [PRF_WIDTH-1:0] resp_prf_0;
   logic [PRF_WIDTH-1:0] resp_prf_1;
   
   //if it is not valid instr,or rd_id == 0, or pipeline is stall,dont alloc phyreg
   assign fl_req_0 = (~ID_stall && dec_instr0.reg_write && ~(dec_instr0.rd_id == 0) && dec_instr0.is_valid);
   assign fl_req_1 = (~ID_stall && dec_instr1.reg_write && ~(dec_instr1.rd_id == 0) && dec_instr1.is_valid);
   
   

 /*freelist AUTO_TEMPLATE(
		    // Outputs
		    .resp_prf_0		(resp_prf_0[PRF_WIDTH-1:0]),
		    .resp_prf_1		(resp_prf_1[PRF_WIDTH-1:0]),
		    .can_alloc		(fl_can_alloc),
		    // Inputs
		    .clk		(clk),
		    .reset_n		(reset_n),
		    .req_0		(fl_req_0),
		    .req_1		(fl_req_1),
		    .write_en_0		(fl_write_en_0),
		    .write_en_1		(fl_write_en_1),
		    .write_data_0	(fl_write_data_0[PRF_WIDTH-1:0]),
		    .write_data_1	(fl_write_data_1[PRF_WIDTH-1:0]),
		    .rob_state		(rob_state[1:0]),
		    .walk_0		(fl_walk_0),
 		    .walk_1		(fl_walk_1));*/
   

   freelist inst_fl(/*AUTOINST*/
		    // Outputs
		    .resp_prf_0		(resp_prf_0[PRF_WIDTH-1:0]), // Templated
		    .resp_prf_1		(resp_prf_1[PRF_WIDTH-1:0]), // Templated
		    .can_alloc		(fl_can_alloc),		 // Templated
		    // Inputs
		    .clk		(clk),			 // Templated
		    .reset_n		(reset_n),		 // Templated
		    .req_0		(fl_req_0),		 // Templated
		    .req_1		(fl_req_1),		 // Templated
		    .write_en_0		(fl_write_en_0),	 // Templated
		    .write_en_1		(fl_write_en_1),	 // Templated
		    .write_data_0	(fl_write_data_0[PRF_WIDTH-1:0]), // Templated
		    .write_data_1	(fl_write_data_1[PRF_WIDTH-1:0]), // Templated
		    .rob_state		(rob_state[1:0]),	 // Templated
		    .walk_0		(fl_walk_0),		 // Templated
		    .walk_1		(fl_walk_1));		 // Templated



//RAT and ARAT

   rename_type rename_0;
   rename_type rename_1;
   logic   rd_valid_0;
   logic   rd_valid_1;
  //read from rat and fl write prf to rat 
   assign  rd_valid_0 = fl_req_0;
   assign  rd_valid_1 = fl_req_1;  
   assign  rename_0.fl_prf_id = resp_prf_0;
   assign  rename_1.fl_prf_id = resp_prf_1;
   
   assign  rename_0.rs1_id = dec_instr0.rs1_id;
   assign  rename_0.rs2_id = dec_instr0.rs2_id;
   assign  rename_1.rs2_id = dec_instr1.rs2_id;
   assign  rename_1.rs1_id = dec_instr1.rs1_id;
   assign  rename_0.rd_id = dec_instr0.rd_id;
   assign  rename_1.rd_id = dec_instr1.rd_id;

   // retire release arf

   assign  rename_0.retire_arf_id = retire_arf_id_0;
   assign  rename_1.retire_arf_id = retire_arf_id_1;
   assign  rename_0.retire_prf_id = retire_prf_id_0;
   assign  rename_1.retire_prf_id = retire_prf_id_1;
   assign  rename_0.retire_valid  = retire_valid_0;
   assign  rename_1.retire_valid  = retire_valid_1;
   assign  rename_0.retire_wb     = retire_wb_0;
   assign  rename_1.retire_wb     = retire_wb_1;

   
   
 /*maptable AUTO_TEMPLATE(
		    .RRAT_debug         (RRAT_debug),
                    .instr0_prf_rs1	(instr0_prf_rs1[PRF_WIDTH-1:0]),
		    .instr0_prf_rs2	(instr0_prf_rs2[PRF_WIDTH-1:0]),
		    .instr1_prf_rs1	(instr1_prf_rs1[PRF_WIDTH-1:0]),
		    .instr1_prf_rs2	(instr1_prf_rs2[PRF_WIDTH-1:0]),
		    .T_0		(T_0[PRF_WIDTH-1:0]),
		    .T_1		(T_1[PRF_WIDTH-1:0]),
		    .T_old_0		(T_old_0[PRF_WIDTH-1:0]),
		    .T_old_1		(T_old_1[PRF_WIDTH-1:0]),
		    // Inputs		    
		    .rename_0		(rename_0),
		    .rename_1		(rename_1),
		    .rd_valid_0		(rd_valid_0),
		    .rd_valid_1		(rd_valid_1),
		    .rob_state		(rob_state),
		    .walk_0_valid	(rat_walk_0_valid),
		    .walk_1_valid	(rat_walk_1_valid),
		    .walk_0_rd_id	(rat_walk_0_rd_id[ARF_WIDTH-1:0]),
		    .walk_1_rd_id	(rat_walk_1_rd_id[ARF_WIDTH-1:0]),
		    .walk_0_rd_prf	(rat_walk_0_rd_prf[PRF_WIDTH-1:0]),
		    .walk_1_rd_prf	(rat_walk_1_rd_prf[PRF_WIDTH-1:0]));*/
   
   maptable inst_mt(/*AUTOINST*/
		    // Outputs
		    .RRAT_debug		(RRAT_debug),		 // Templated
		    .instr0_prf_rs1	(instr0_prf_rs1[PRF_WIDTH-1:0]), // Templated
		    .instr0_prf_rs2	(instr0_prf_rs2[PRF_WIDTH-1:0]), // Templated
		    .instr1_prf_rs1	(instr1_prf_rs1[PRF_WIDTH-1:0]), // Templated
		    .instr1_prf_rs2	(instr1_prf_rs2[PRF_WIDTH-1:0]), // Templated
		    .T_0		(T_0[PRF_WIDTH-1:0]),	 // Templated
		    .T_1		(T_1[PRF_WIDTH-1:0]),	 // Templated
		    .T_old_0		(T_old_0[PRF_WIDTH-1:0]), // Templated
		    .T_old_1		(T_old_1[PRF_WIDTH-1:0]), // Templated
		    // Inputs
		    .clk		(clk),
		    .reset_n		(reset_n),
		    .rename_0		(rename_0),		 // Templated
		    .rename_1		(rename_1),		 // Templated
		    .rd_valid_0		(rd_valid_0),		 // Templated
		    .rd_valid_1		(rd_valid_1),		 // Templated
		    .rob_state		(rob_state),		 // Templated
		    .walk_0_valid	(rat_walk_0_valid),	 // Templated
		    .walk_1_valid	(rat_walk_1_valid),	 // Templated
		    .walk_0_rd_id	(rat_walk_0_rd_id[ARF_WIDTH-1:0]), // Templated
		    .walk_1_rd_id	(rat_walk_1_rd_id[ARF_WIDTH-1:0]), // Templated
		    .walk_0_rd_prf	(rat_walk_0_rd_prf[PRF_WIDTH-1:0]), // Templated
		    .walk_1_rd_prf	(rat_walk_1_rd_prf[PRF_WIDTH-1:0])); // Templated
   
   


endmodule
