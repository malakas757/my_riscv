/////////////////////////////////////////////////////////////////////////
//                                                                     //
//   Modulename :  pipeline.v                                          //
//                                                                     //
//  Description :  Top-level module of the verisimple pipeline;        //
//                 This instantiates and connects the 5 stages of the  //
//                 Verisimple pipeline togeather.                      //
//                                                                     //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

`ifndef __PIPELINE_V__
`define __PIPELINE_V__
`include "sys_defs.svh"
`timescale 1ns/100ps

`ifdef SS_1
module pipeline (

	input         clock,                    // System clock
	input         reset,                    // System reset
	input [3:0]   mem2proc_response,        // Tag from memory about current request
	input [63:0]  mem2proc_data,            // Data coming back from memory
	input [3:0]   mem2proc_tag,              // Tag from memory about current reply
	
	output logic [1:0]  proc2mem_command,    // command sent to memory
	output logic [`XLEN-1:0] proc2mem_addr,      // Address sent to memory
	output logic [63:0] proc2mem_data,      // Data sent to memory
	`ifndef CACHE_MODE
		output MEM_SIZE proc2mem_size,          // data size sent to memory
	`endif
	output logic [3:0]  		pipeline_completed_insts,
	output EXCEPTION_CODE   	pipeline_error_status,
	output logic [4:0]  		pipeline_commit_wr_idx,
	output logic [`XLEN-1:0] 	pipeline_commit_wr_data,
	output logic        		pipeline_commit_wr_en,
	output logic [`XLEN-1:0] 	pipeline_commit_NPC,
	output logic [`XLEN-1:0] id_ex_NPC,
	output logic [31:0] id_ex_IR,
	output logic        id_ex_valid_inst
);
//////////////////////////////////////////////////
//                                              //
//       ROB RS MT balabala packet def          //
//                                              //
//////////////////////////////////////////////////


	// ID
	ID_ROB_PACKET       id_rob;   
	ID_RS_PACKET        id_rs;
	// logic				sq_rob_valid;
	// logic				sq_retire;

	// CDB
	CDB_ENTRY           cdb_out;
	CDB_ENTRY			rs_cdb;
	
	// Map table
	MT_RS_PACKET        mt_rs;

	// RS
	logic 				rs_entry_full;
	RS_ROB_PACKET       rs_rob;
	RS_MT_PACKET        rs_mt;
    RS_FU_PACKET        rs_fu;
	RS_REG_PACKET    	rs_reg;
	RS_LSQ_PACKET		rs_lsq;
	FU_LSQ_PACKET   [`NUM_LS-1:0]   fu_lsq;
	LSQ_RS_PACKET                   lsq_rs;
	LSQ_FU_PACKET   [`NUM_LS-1:0]   lsq_fu;

	// ROB
	logic 				rob_full;
    ROB_RS_PACKET       rob_rs;
    ROB_MT_PACKET       rob_mt;
    ROB_REG_PACKET      rob_reg;
	ROB_ID_PACKET       rob_id;
	ROB_LSQ_PACKET		rob_lsq;
	LSQ_ROB_PACKET		lsq_rob;

	REG_RS_PACKET       reg_rs;

//////////////////////////////////////////////////
//                                              //
//     ROB RS MT balabala packet def end        //
//                                              //
//////////////////////////////////////////////////

	// Pipeline register enables
	logic   if_id_enable, dispatch_enable;//id_ex_enable, ex_mem_enable, mem_wb_enable;
	
	// Outputs from IF-Stage
	logic [`XLEN-1:0] proc2Imem_addr;
	// IF_ID_PACKET if_packet;

	// Outputs from IF/ID Pipeline Register
	// IF_ID_PACKET if_id_packet;

	// Outputs from ID stage
	ID_EX_PACKET id_packet;
	//logic dispatch_enable;

	// Outputs from ID/EX Pipeline Register
	ID_EX_PACKET id_packet_out;
	logic [`XLEN-1:0] wb_reg_wr_data_out;
	logic  [4:0] wb_reg_wr_idx_out;
	logic        wb_reg_wr_en_out;
	logic [`XLEN-1:0] mem_wb_NPC;

	logic halt;
	logic squash;

	assign pipeline_completed_insts = {3'b0, rob_reg.valid};
	assign memory_error = (proc2mem_command != BUS_NONE) && (mem2proc_response==4'h0);
	assign pipeline_error_status 	= 	halt			?	HALTED_ON_WFI :
										// memory_error 	? 	LOAD_ACCESS_FAULT :
	                                						NO_ERROR;
	
	assign pipeline_commit_wr_idx 	= rob_reg.dest_reg_idx;
	assign pipeline_commit_wr_data 	= rob_reg.dest_value;
	assign pipeline_commit_wr_en 	= rob_reg.dest_valid;
	assign pipeline_commit_NPC 		= rob_reg.OLD_PC_p_4;
	
//////////////////////////////////////////////////
//                                              //
//              ICache                          //
//                                              //
//////////////////////////////////////////////////

	logic [`XLEN-1:0]				proc2Icache_addr;
	logic [1:0]						proc2Imem_command;
    logic [63:0]					Icache_data_out; 		// value is memory[proc2Icache_addr]
    logic 							Icache_valid_out;      	// when this is high

	icache icache_0 (
		.clock(clock),
		.reset(reset),
		.squash(squash),

		// input
	 	.Imem2proc_response(do_Ifetch ? mem2proc_response : 4'b0),
	    .Imem2proc_data(mem2proc_data),
	    .Imem2proc_tag(mem2proc_tag),

	    .proc2Icache_addr(proc2Icache_addr),

		// output
    	.proc2Imem_command(proc2Imem_command),
    	.proc2Imem_addr(proc2Imem_addr),

	    .Icache_data_out(Icache_data_out),
	    .Icache_valid_out(Icache_valid_out)
	);


//////////////////////////////////////////////////
//                                              //
//              DCache                          //
//                                              //
//////////////////////////////////////////////////

	// logic 						chosen2Mem;

    // logic                        Dmem2proc_valid;
    // logic [3:0]					Dmem2proc_response;
    // logic [63:0]					Dmem2proc_data;
    // logic [3:0]					Dmem2proc_tag;

    logic                           proc2Dmem_valid;
    logic [63:0]                    proc2Dmem_data;
    logic [1:0]                     proc2Dmem_command;
    logic [`XLEN-1:0]               proc2Dmem_addr;

	DCACHE_LOAD_LSQ_PACKET          dc_load_lsq;
	DCACHE_STORE_LSQ_PACKET         dc_store_lsq;
	LSQ_LOAD_DCACHE_PACKET          lsq_load_dc;
	LSQ_STORE_DCACHE_PACKET         lsq_store_dc;

	dcache dcache_0 (
		.clock(clock),
		.reset(reset),

		// From Pipeline
		.chosen2Mem(~do_Ifetch),

    	// From Dmem
    	.Dmem2proc_valid(mem2proc_tag != 4'b0000),
    	.Dmem2proc_response(mem2proc_response),
    	.Dmem2proc_data(mem2proc_data),
    	.Dmem2proc_tag(mem2proc_tag),

    	// To Dmem
    	.proc2Dmem_valid(proc2Dmem_valid),
    	.proc2Dmem_data(proc2Dmem_data),
    	.proc2Dmem_command(proc2Dmem_command),
    	.proc2Dmem_addr(proc2Dmem_addr),

		// From LSQ
		.lsq_load_dc(lsq_load_dc),
		.lsq_store_dc(lsq_store_dc),

		// To LSQ
		.dc_load_lsq(dc_load_lsq),
		.dc_store_lsq(dc_store_lsq)
	);

//////////////////////////////////////////////////
//                                              //
//             Cache2Mem                        //
//                                              //
//////////////////////////////////////////////////

	assign proc2mem_addr	= (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid) ? proc2Imem_addr 		: proc2Dmem_addr;
	assign proc2mem_command	= (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid) ? proc2Imem_command 	: proc2Dmem_command;
	assign proc2mem_data	= (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid) ? 64'b0 				: proc2Dmem_data;

	// Memory

	// logic [`XLEN-1:0] mem_result_out;
	// logic [`XLEN-1:0] proc2Dmem_addr;
	// logic [`XLEN-1:0] proc2Dmem_data;
	// logic [1:0]  proc2Dmem_command;
	// MEM_SIZE proc2Dmem_size;

	// assign proc2Dmem_command = BUS_NONE;
	
	assign do_Ifetch = (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid);

	// assign proc2mem_command =
	//      do_Ifetch ? proc2Imem_command : proc2Dmem_command;
	// assign proc2mem_addr =
	//      do_Ifetch ? proc2Imem_addr : proc2Dmem_addr;
	//if it's an instruction, then load a double word (64 bits)
	// `ifndef CACHE_MODE
	// 	assign proc2mem_size =
	// 		do_Ifetch ? DOUBLE : proc2Dmem_size;
	// `endif
	// assign proc2mem_data = {32'b0, proc2Dmem_data};




//////////////////////////////////////////////////
//                                              //
//              Dispatch-Stage                  //
//                                              //
//////////////////////////////////////////////////

	// logic         							ex_mem_take_branch;		// taken-branch signal
	// logic					[`XLEN-1:0]		ex_mem_target_pc;		// target pc: use if take_branch is TRUE
	// assign ex_mem_take_branch				= 1'b0;
	// assign ex_mem_target_pc					= `XLEN'b0;

	`ifdef DEBUG
	logic [31:0] cycle_count;
	// synopsys sync_set_reset "reset"
	always_ff @(negedge clock) begin
        if(reset) begin
            cycle_count = 0;
        end else begin
            $display("DEBUG %4d: Icache_valid_out = %d, proc2mem_command = %d, proc2Imem_command = %d, proc2mem_addr = %d", cycle_count, Icache_valid_out, proc2mem_command, proc2Imem_command, proc2mem_addr);
            cycle_count = cycle_count + 1;
        end
    end
	`endif

	dispatch_stage dispatch_stage_0 (
		// Inputs
		.clock(clock),
		.reset(reset),
		// .mem_wb_valid_inst(mem_wb_valid_inst),
		.stall(~dispatch_enable),
		// .ex_mem_take_branch(ex_mem_take_branch),
		// .ex_mem_target_pc(ex_mem_target_pc),
		.Icache_data_out(Icache_data_out),
		.Icache_valid_out(Icache_valid_out),
		.rob_id(rob_id),
		
		// Outputs
		.proc2Imem_addr(proc2Icache_addr),
		.id_packet_out(id_packet)
	);

	// always @(posedge clock) begin
	// 	$display("DEBUG pipeline I addr", proc2Imem_addr);
	// end


//////////////////////////////////////////////////
//                                              //
//     Dispatch/ROBRSMT Pipeline Register       //
//                                              //
//////////////////////////////////////////////////

	assign id_ex_NPC        = id_packet_out.NPC;
	assign id_ex_IR         = id_packet_out.inst;
	assign id_ex_valid_inst = id_packet_out.valid;

	assign id_ex_enable 	= 1'b1; // always enabled
	// synopsys sync_set_reset "reset"
	always_ff @(posedge clock) begin
		if (reset || rob_id.squash) begin
			id_packet_out 	<= `SD '{	
										`ifdef BRANCH_MODE
											{`DIRP_IDX_LEN{1'b0}},
										`endif
										{`XLEN{1'b0}},
										{`XLEN{1'b0}},
										{`XLEN{1'b0}}, 
 
										OPA_IS_RS1, 
										OPB_IS_RS2, 
										`NOP,
										
										`ZERO_REG,
										{5'b0,5'b0},

										ALU_ADD, 
										1'b0, //rd_mem
										1'b0, //wr_mem
										1'b0, //cond
										1'b0, //uncond
										1'b0, //halt
										1'b0, //illegal
										1'b0, //csr_op
										1'b0,
										1'b0, //valid
										2'b0,
										1'b0
									}; 
		end else if (dispatch_enable) begin // if (reset)
			if (id_ex_enable) begin
				id_packet_out <= `SD id_packet;
			end // if
		end // else: !if(reset)
	end // always

		
	assign dispatch_enable = (!rob_full) && (!rs_entry_full);
	//ID TO ROB
	assign id_rob = {	
						id_packet_out.valid && ~id_packet_out.illegal,
						id_packet_out.NPC_out,
						id_packet_out.PC,
						dispatch_enable,
						id_packet_out.dest_reg_idx,
						id_packet_out.wr_mem,
						id_packet_out.cond_branch,
						id_packet_out.take_branch,
						id_packet_out.halt
						`ifdef BRANCH_MODE
							, id_packet_out.dirp_tag
						`endif
					};
	//ID TO RS
	assign id_rs = {	
						id_packet_out.NPC,			
						id_packet_out.PC,			                             
						dispatch_enable,                    
						id_packet_out.opa_select,	
						id_packet_out.opb_select,	
						id_packet_out.inst,	
						id_packet_out.dest_reg_idx,    
						id_packet_out.input_reg_idx,
						id_packet_out.alu_func,		
						id_packet_out.rd_mem,		
						id_packet_out.wr_mem,		
						id_packet_out.cond_branch,
						id_packet_out.uncond_branch,	
						id_packet_out.halt,			
						id_packet_out.illegal,		
						id_packet_out.csr_op,	
						id_packet_out.mult_op,	
						id_packet_out.valid,		
						id_packet_out.req_reg 	
					};                           
	//ID TO MT
	logic [$clog2(`REG_SIZE)-1:0]     rd_dispatch; // where does this come from??
	assign rd_dispatch_0 = id_packet_out.dest_reg_idx;
	assign rd_dispatch_1 = id_packet_out.dest_reg_idx;


	regfile regf_0 (
		/*RS TO REG*/
		.rda_idx(rs_reg.register_idxes[0]),
		.rda_out(reg_rs.rs_values[0]), 

		.rdb_idx(rs_reg.register_idxes[1]),
		.rdb_out(reg_rs.rs_values[1]),

		/*ROB TO REG*/
		.wr_clk(clock),
		.wr_en(rob_reg.dest_valid),
		.wr_idx(rob_reg.dest_reg_idx),
		.wr_data(rob_reg.dest_value)
		`ifdef DEBUG
		, .reset(reset)
		`endif
	);


	//temporary input from fu
	logic FU_valid;
	logic [`ROB_IDX_LEN:0] FU_tag;
	logic [`XLEN-1:0] FU_value;

	cdb cdb_0(
        //input
        .clock(clock),
		.reset(reset), 
		.rs_cdb(rs_cdb),

		//OUTPUT
		.cdb_out(cdb_out)
	);

	// TODO fix this
	map_table map_table_0 (
        //input
        .clock(clock),
 		.reset(reset),

        .dispatch_enable(id_rs.dispatch_enable && id_rs.valid && ~id_rs.halt && ~id_rs.illegal),
        .rd_dispatch(id_packet_out.dest_reg_idx),
        .rob_mt(rob_mt),

        .cdb_in(cdb_out),
        .rs_mt(rs_mt),

        //input logic [$clog2(`REG_SIZE)-1:0]     rd_retire, // rd idx to clear in retire stage
        //input logic                             clear, //tag-clear signal in retire stage (should sent from ROB?)         

        //output
        .mt_rs(mt_rs)
    );
	

	rs rs_0(
		// input
		.clock(clock),
		.reset(reset),

		.id_rs(id_rs),
		.mt_rs(mt_rs),
		.reg_rs(reg_rs),
		.cdb_rs(cdb_out),
		.rob_rs(rob_rs),
		.lsq_rs(lsq_rs),
		.lsq_fu(lsq_fu),

		// output
		.rs_mt(rs_mt),
		.rs_cdb(rs_cdb),
		.rs_reg(rs_reg),
		//.rs_fu(rs_fu),
		.rs_rob(rs_rob),
		.rs_lsq(rs_lsq),
		.rs_entry_full(rs_entry_full),
		.fu_lsq(fu_lsq)
	);

	rob rob_0(
		// input
		.clock(clock),
		.reset(reset),

		.id_rob(id_rob),
		.rs_rob(rs_rob),
		.cdb_rob(cdb_out),
		.lsq_rob(lsq_rob),
		// .sq_rob_valid(sq_rob_valid),
		// output
		.rob_full(rob_full),
		.halt(halt),
		.squash(squash),
		.rob_id(rob_id),
		.rob_rs(rob_rs),
		.rob_mt(rob_mt),
		.rob_reg(rob_reg),
		.rob_lsq(rob_lsq)
		// .sq_retire(sq_retire)
	);

	lsq lsq_0 (
		.clock(clock),
		.reset(reset),
		.squash(squash),

		.rs_lsq(rs_lsq),
		.fu_lsq(fu_lsq),
		.rob_lsq(rob_lsq),
		// .sq_retire(sq_retire), // from rob
		// .store_finish, // from d-cache indicate whether the store finished write

		// .sq_rob_valid(sq_rob_valid), // to rob
		.lsq_rob(lsq_rob),
		.lsq_fu(lsq_fu),
		.lsq_rs(lsq_rs),

		.dc_load_lsq(dc_load_lsq),
		.dc_store_lsq(dc_store_lsq),
		.lsq_load_dc(lsq_load_dc),
		.lsq_store_dc(lsq_store_dc)

	);
`endif






`ifdef SS_1POINT5
module pipeline (

	input         clock,                    // System clock
	input         reset,                    // System reset
	input [3:0]   mem2proc_response,        // Tag from memory about current request
	input [63:0]  mem2proc_data,            // Data coming back from memory
	input [3:0]   mem2proc_tag,              // Tag from memory about current reply
	
	output logic [1:0]  proc2mem_command,    // command sent to memory
	output logic [`XLEN-1:0] proc2mem_addr,      // Address sent to memory
	output logic [63:0] proc2mem_data,      // Data sent to memory
	`ifndef CACHE_MODE
		output MEM_SIZE proc2mem_size,          // data size sent to memory
	`endif
	output logic [3:0]  		pipeline_completed_insts,
	output EXCEPTION_CODE   	pipeline_error_status,
	output logic [4:0]  		pipeline_commit_wr_idx_0,
	output logic [`XLEN-1:0] 	pipeline_commit_wr_data_0,
	output logic        		pipeline_commit_wr_en_0,
	output logic [`XLEN-1:0] 	pipeline_commit_NPC_0,
	output logic [4:0]  		pipeline_commit_wr_idx_1,
	output logic [`XLEN-1:0] 	pipeline_commit_wr_data_1,
	output logic        		pipeline_commit_wr_en_1,
	output logic [`XLEN-1:0] 	pipeline_commit_NPC_1,
	output logic [`XLEN-1:0] 	id_ex_NPC,
	output logic [31:0] 		id_ex_IR,
	output logic        		id_ex_valid_inst
	
);
//////////////////////////////////////////////////
//                                              //
//       ROB RS MT balabala packet def          //
//                                              //
//////////////////////////////////////////////////


	// ID
	ID_ROB_PACKET       id_rob;   
	ID_RS_PACKET        id_rs;
	// logic				sq_rob_valid;
	// logic				sq_retire;

	// CDB
	CDB_ENTRY           cdb_out_0;
	CDB_ENTRY           cdb_out_1;
	CDB_ENTRY			rs_cdb_0;
	CDB_ENTRY			rs_cdb_1;
	
	// Map table
	MT_RS_PACKET        mt_rs_0;
	MT_RS_PACKET        mt_rs_1;

	// RS
	logic 				rs_entry_full;
	RS_ROB_PACKET       rs_rob_0;
	RS_ROB_PACKET       rs_rob_1;
	RS_MT_PACKET        rs_mt_0;
	RS_MT_PACKET        rs_mt_1;
	RS_REG_PACKET    	rs_reg_0;
	RS_REG_PACKET    	rs_reg_1;
	RS_LSQ_PACKET		rs_lsq;
	FU_LSQ_PACKET   [`NUM_LS-1:0]   fu_lsq;
	LSQ_RS_PACKET                   lsq_rs;
	LSQ_FU_PACKET   [`NUM_LS-1:0]   lsq_fu;
	FU_ID_PACKET	    fu_id_0;
	FU_ID_PACKET		fu_id_1;

	// ROB
	logic 				rob_full;
    ROB_RS_PACKET       rob_rs_0;
    ROB_RS_PACKET       rob_rs_1;
    ROB_MT_PACKET       rob_mt_0;
    ROB_MT_PACKET       rob_mt_1;
    ROB_REG_PACKET      rob_reg_0;
    ROB_REG_PACKET      rob_reg_1;
	ROB_ID_PACKET       rob_id_0;
	ROB_ID_PACKET       rob_id_1;
	ROB_LSQ_PACKET		rob_lsq;
	LSQ_ROB_PACKET		lsq_rob;
	ROB_ICACHE_PACKET	rob_icache;

	REG_RS_PACKET       reg_rs_0;
	REG_RS_PACKET       reg_rs_1;

//////////////////////////////////////////////////
//                                              //
//     ROB RS MT balabala packet def end        //
//                                              //
//////////////////////////////////////////////////

	// Pipeline register enables
	logic	dispatch_enable;//id_ex_enable, ex_mem_enable, mem_wb_enable;
	
	// Outputs from IF-Stage
	logic [`XLEN-1:0] proc2Imem_addr;
	// IF_ID_PACKET if_packet;

	// Outputs from IF/ID Pipeline Register
	// IF_ID_PACKET if_id_packet;

	// Outputs from ID stage
	ID_EX_PACKET id_packet;
	//logic dispatch_enable;

	// Outputs from ID/EX Pipeline Register
	ID_EX_PACKET id_packet_out;

	logic halt;
	logic squash;

	assign memory_error = (proc2mem_command != BUS_NONE) && (mem2proc_response==4'h0);
	assign pipeline_error_status 	= 	halt			?	HALTED_ON_WFI :
										// memory_error 	? 	LOAD_ACCESS_FAULT :
	                                						NO_ERROR;
	assign pipeline_completed_insts = {2'b0, rob_reg_0.valid && rob_reg_1.valid, ~(rob_reg_0.valid == rob_reg_1.valid)};

	assign pipeline_commit_wr_idx_0 	= rob_reg_0.dest_reg_idx;
	assign pipeline_commit_wr_data_0 	= rob_reg_0.dest_value;
	assign pipeline_commit_wr_en_0		= rob_reg_0.dest_valid;
	assign pipeline_commit_NPC_0 		= rob_reg_0.OLD_PC_p_4;
	assign pipeline_commit_wr_idx_1 	= rob_reg_1.dest_reg_idx;
	assign pipeline_commit_wr_data_1 	= rob_reg_1.dest_value;
	assign pipeline_commit_wr_en_1		= rob_reg_1.dest_valid;
	assign pipeline_commit_NPC_1		= rob_reg_1.OLD_PC_p_4;
	
//////////////////////////////////////////////////
//                                              //
//              ICache                          //
//                                              //
//////////////////////////////////////////////////

	logic [`XLEN-1:0]				proc2Icache_addr;
	logic [1:0]						proc2Imem_command;
    logic [63:0]					Icache_data_out; 		// value is memory[proc2Icache_addr]
    logic 							Icache_valid_out;      	// when this is high

	icache_l2 icache_0 (
		.clock(clock),
		.reset(reset),
		.squash(squash),

		// input
	 	.Imem2proc_response(do_Ifetch ? mem2proc_response : 4'b0),
	    .Imem2proc_data(mem2proc_data),
	    .Imem2proc_tag(mem2proc_tag),

	    .proc2Icache_addr(proc2Icache_addr),

		.rob_icache(rob_icache),

		// output
    	.proc2Imem_command(proc2Imem_command),
    	.proc2Imem_addr(proc2Imem_addr),

	    .Icache_data_out(Icache_data_out),
	    .Icache_valid_out(Icache_valid_out)
	);


//////////////////////////////////////////////////
//                                              //
//              DCache                          //
//                                              //
//////////////////////////////////////////////////

	// logic 						chosen2Mem;

    // logic                        Dmem2proc_valid;
    // logic [3:0]					Dmem2proc_response;
    // logic [63:0]					Dmem2proc_data;
    // logic [3:0]					Dmem2proc_tag;

    logic                           proc2Dmem_valid;
    logic [63:0]                    proc2Dmem_data;
    logic [1:0]                     proc2Dmem_command;
    logic [`XLEN-1:0]               proc2Dmem_addr;

	DCACHE_LOAD_LSQ_PACKET          dc_load_lsq;
	DCACHE_STORE_LSQ_PACKET         dc_store_lsq;
	LSQ_LOAD_DCACHE_PACKET          lsq_load_dc;
	LSQ_STORE_DCACHE_PACKET         lsq_store_dc;

	dcache_l2 dcache_0 (
		.clock(clock),
		.reset(reset),

		// From Pipeline
		.chosen2Mem(~do_Ifetch),

    	// From Dmem
    	.Dmem2proc_valid(mem2proc_tag != 4'b0000),
    	.Dmem2proc_response(mem2proc_response),
    	.Dmem2proc_data(mem2proc_data),
    	.Dmem2proc_tag(mem2proc_tag),

    	// To Dmem
    	.proc2Dmem_valid(proc2Dmem_valid),
    	.proc2Dmem_data(proc2Dmem_data),
    	.proc2Dmem_command(proc2Dmem_command),
    	.proc2Dmem_addr(proc2Dmem_addr),

		// From LSQ
		.lsq_load_dc(lsq_load_dc),
		.lsq_store_dc(lsq_store_dc),

		// To LSQ
		.dc_load_lsq(dc_load_lsq),
		.dc_store_lsq(dc_store_lsq)
	);

//////////////////////////////////////////////////
//                                              //
//             Cache2Mem                        //
//                                              //
//////////////////////////////////////////////////

	assign proc2mem_addr	= (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid) ? proc2Imem_addr 		: proc2Dmem_addr;
	assign proc2mem_command	= (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid) ? proc2Imem_command 	: proc2Dmem_command;
	assign proc2mem_data	= (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid) ? 64'b0 				: proc2Dmem_data;

	// Memory

	// logic [`XLEN-1:0] mem_result_out;
	// logic [`XLEN-1:0] proc2Dmem_addr;
	// logic [`XLEN-1:0] proc2Dmem_data;
	// logic [1:0]  proc2Dmem_command;
	// MEM_SIZE proc2Dmem_size;

	// assign proc2Dmem_command = BUS_NONE;
	
	assign do_Ifetch = (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid);

	// assign proc2mem_command =
	//      do_Ifetch ? proc2Imem_command : proc2Dmem_command;
	// assign proc2mem_addr =
	//      do_Ifetch ? proc2Imem_addr : proc2Dmem_addr;
	//if it's an instruction, then load a double word (64 bits)
	// `ifndef CACHE_MODE
	// 	assign proc2mem_size =
	// 		do_Ifetch ? DOUBLE : proc2Dmem_size;
	// `endif
	// assign proc2mem_data = {32'b0, proc2Dmem_data};




//////////////////////////////////////////////////
//                                              //
//              Dispatch-Stage                  //
//                                              //
//////////////////////////////////////////////////

	// logic         							ex_mem_take_branch;		// taken-branch signal
	// logic					[`XLEN-1:0]		ex_mem_target_pc;		// target pc: use if take_branch is TRUE
	// assign ex_mem_take_branch				= 1'b0;
	// assign ex_mem_target_pc					= `XLEN'b0;

	`ifdef DEBUG
	logic [31:0] cycle_count;
	// synopsys sync_set_reset "reset"
	always_ff @(negedge clock) begin
        if(reset) begin
            cycle_count = 0;
        end else begin
            $display("DEBUG %4d: Icache_valid_out = %d, proc2mem_command = %d, proc2Imem_command = %d, proc2mem_addr = %d", cycle_count, Icache_valid_out, proc2mem_command, proc2Imem_command, proc2mem_addr);
            cycle_count = cycle_count + 1;
        end
    end
	`endif

	dispatch_stage_1point2 dispatch_stage_0 (
		// Inputs
		.clock(clock),
		.reset(reset),
		// .mem_wb_valid_inst(mem_wb_valid_inst),
		.stall(~dispatch_enable),
		// .ex_mem_take_branch(ex_mem_take_branch),
		// .ex_mem_target_pc(ex_mem_target_pc),
		.Icache_data_out(Icache_data_out),
		.Icache_valid_out(Icache_valid_out),
		.rob_id_0(rob_id_0),
		.rob_id_1(rob_id_1),
		.fu_id_0(fu_id_0),
		.fu_id_1(fu_id_1),
		
		// Outputs
		.proc2Imem_addr(proc2Icache_addr),
		.id_packet_out(id_packet)
	);

	// always @(posedge clock) begin
	// 	$display("DEBUG pipeline I addr", proc2Imem_addr);
	// end

//////////////////////////////////////////////////
//                                              //
//     Dispatch/ROBRSMT Pipeline Register       //
//                                              //
//////////////////////////////////////////////////

	assign id_ex_NPC        = id_packet_out.NPC;
	assign id_ex_IR         = id_packet_out.inst;
	assign id_ex_valid_inst = id_packet_out.valid;

	assign id_ex_enable 	= 1'b1; // always enabled
	// synopsys sync_set_reset "reset"
	always_ff @(posedge clock) begin
		if (reset || rob_id_0.squash || rob_id_1.squash) begin
			id_packet_out 	<= `SD '{	
										`ifdef BRANCH_MODE
											{`DIRP_IDX_LEN{1'b0}},
										`endif
										{`XLEN{1'b0}},
										{`XLEN{1'b0}},
										{`XLEN{1'b0}}, 
 
										OPA_IS_RS1, 
										OPB_IS_RS2, 
										`NOP,
										
										`ZERO_REG,
										{5'b0,5'b0},

										ALU_ADD, 
										1'b0, //rd_mem
										1'b0, //wr_mem
										1'b0, //cond
										1'b0, //uncond
										1'b0, //halt
										1'b0, //illegal
										1'b0, //csr_op
										1'b0,
										1'b0, //valid
										2'b0,
										1'b0
									}; 
		end else if (dispatch_enable) begin // if (reset)
			if (id_ex_enable) begin
				id_packet_out <= `SD id_packet;
			end // if
		end // else: !if(reset)
	end // always

		
	assign dispatch_enable = (!rob_full) && (!rs_entry_full);
	//ID TO ROB
	assign id_rob = {	
						id_packet_out.valid && ~id_packet_out.illegal,
						id_packet_out.NPC_out,
						id_packet_out.PC,
						dispatch_enable,
						id_packet_out.dest_reg_idx,
						id_packet_out.wr_mem,
						id_packet_out.cond_branch,
						id_packet_out.take_branch,
						id_packet_out.halt
						`ifdef BRANCH_MODE
							, id_packet_out.dirp_tag
						`endif
					};
	//ID TO RS
	assign id_rs = {	
						id_packet_out.NPC,			
						id_packet_out.PC,			                             
						dispatch_enable,                    
						id_packet_out.opa_select,	
						id_packet_out.opb_select,	
						id_packet_out.inst,	
						id_packet_out.dest_reg_idx,    
						id_packet_out.input_reg_idx,
						id_packet_out.alu_func,		
						id_packet_out.rd_mem,		
						id_packet_out.wr_mem,		
						id_packet_out.cond_branch,
						id_packet_out.uncond_branch,	
						id_packet_out.halt,			
						id_packet_out.illegal,		
						id_packet_out.csr_op,	
						id_packet_out.mult_op,	
						id_packet_out.valid,		
						id_packet_out.req_reg 	
					};                           
	//ID TO MT
	logic [$clog2(`REG_SIZE)-1:0]     rd_dispatch; // where does this come from??
	assign rd_dispatch = id_packet_out.dest_reg_idx;


	regfile_2 regf_0 (
		.clock(clock),

		/*RS TO REG*/
		.rda_idx_0(rs_reg_0.register_idxes[0]),
		.rda_out_0(reg_rs_0.rs_values[0]),
		.rdb_idx_0(rs_reg_0.register_idxes[1]),
		.rdb_out_0(reg_rs_0.rs_values[1]),
		
		.rda_idx_1(rs_reg_1.register_idxes[0]),
		.rda_out_1(reg_rs_1.rs_values[0]),
		.rdb_idx_1(rs_reg_1.register_idxes[1]),
		.rdb_out_1(reg_rs_1.rs_values[1]),

		/*ROB TO REG*/
		.wr_en_0(rob_reg_0.dest_valid),
		.wr_idx_0(rob_reg_0.dest_reg_idx),
		.wr_data_0(rob_reg_0.dest_value),

		.wr_en_1(rob_reg_1.dest_valid),
		.wr_idx_1(rob_reg_1.dest_reg_idx),
		.wr_data_1(rob_reg_1.dest_value)

		`ifdef DEBUG
		, .reset(reset)
		`endif
	);

	cdb_2 cdb_0(
        //input
        .clock(clock),
		.reset(reset), 
		.rs_cdb_0(rs_cdb_0), 
		.rs_cdb_1(rs_cdb_1),

		//OUTPUT
		.cdb_out_0(cdb_out_0),
		.cdb_out_1(cdb_out_1)
	);

	// TODO fix this
	map_table_2 map_table_0 (
        //input
        .clock(clock),
 		.reset(reset),

        .dispatch_enable_0(id_rs.dispatch_enable && id_rs.valid && ~id_rs.halt && ~id_rs.illegal),
        .rd_dispatch_0(id_packet_out.dest_reg_idx),
        .dispatch_enable_1(1'b0),
        .rd_dispatch_1(id_packet_out.dest_reg_idx),
        .rob_mt_0(rob_mt_0),
		.rob_mt_1(rob_mt_1),

        .cdb_in_0(cdb_out_0),
		.cdb_in_1(cdb_out_1),
        .rs_mt_0(rs_mt_0),
        .rs_mt_1(rs_mt_1),

        //input logic [$clog2(`REG_SIZE)-1:0]     rd_retire, // rd idx to clear in retire stage
        //input logic                             clear, //tag-clear signal in retire stage (should sent from ROB?)         

        //output
        .mt_rs_0(mt_rs_0),
		.mt_rs_1(mt_rs_1)
    );
	

	rs_1point5 rs_0(
		// input
		.clock(clock),
		.reset(reset),

		.id_rs(id_rs),
		.mt_rs(mt_rs_0),
		.reg_rs(reg_rs_0),
		.cdb_rs_0(cdb_out_0),
		.cdb_rs_1(cdb_out_1),
		.rob_rs(rob_rs_0),
		.lsq_rs(lsq_rs),
		.lsq_fu(lsq_fu),

		// output
		.rs_mt_0(rs_mt_0),
		.rs_mt_1(rs_mt_1),
		.rs_cdb_0(rs_cdb_0),
		.rs_cdb_1(rs_cdb_1),
		.rs_reg(rs_reg_0),
		.fu_id_0(fu_id_0),
		.fu_id_1(fu_id_1),
		//.rs_fu(rs_fu),
		.rs_rob(rs_rob_0),
		.rs_lsq(rs_lsq),
		.rs_entry_full(rs_entry_full),
		.fu_lsq(fu_lsq)
	);

	assign rs_rob_1 = 0;

	rob_1point8 rob_0(
		// input
		.clock(clock),
		.reset(reset),

		.id_rob(id_rob),
		.rs_rob_0(rs_rob_0),
		.rs_rob_1(rs_rob_1),
		.cdb_rob_0(cdb_out_0),
		.cdb_rob_1(cdb_out_1),
		.lsq_rob(lsq_rob),
		// .sq_rob_valid(sq_rob_valid),
		// output
		.rob_full(rob_full),
		.halt(halt),
		.squash(squash),

		.rob_id_0(rob_id_0),
		.rob_id_1(rob_id_1),
		.rob_rs_0(rob_rs_0),
		.rob_rs_1(rob_rs_1),
		.rob_mt_0(rob_mt_0),
		.rob_mt_1(rob_mt_1),
		.rob_reg_0(rob_reg_0),
		.rob_reg_1(rob_reg_1),
		.rob_lsq(rob_lsq),
		.rob_icache(rob_icache)
		// .sq_retire(sq_retire)
	);

	lsq lsq_0 (
		.clock(clock),
		.reset(reset),
		.squash(squash),

		.rs_lsq(rs_lsq),
		.fu_lsq(fu_lsq),
		.rob_lsq(rob_lsq),
		// .sq_retire(sq_retire), // from rob
		// .store_finish, // from d-cache indicate whether the store finished write

		// .sq_rob_valid(sq_rob_valid), // to rob
		.lsq_rob(lsq_rob),
		.lsq_fu(lsq_fu),
		.lsq_rs(lsq_rs),

		.dc_load_lsq(dc_load_lsq),
		.dc_store_lsq(dc_store_lsq),
		.lsq_load_dc(lsq_load_dc),
		.lsq_store_dc(lsq_store_dc)

	);

`endif







`ifdef SS_2
module pipeline (
	input         				clock,                    // System clock
	input         				reset,                    // System reset
	input [3:0]   				mem2proc_response,        // Tag from memory about current request
	input [63:0]  				mem2proc_data,            // Data coming back from memory
	input [3:0]   				mem2proc_tag,              // Tag from memory about current reply
	
	output logic [1:0]  		proc2mem_command,    // command sent to memory
	output logic [`XLEN-1:0] 	proc2mem_addr,      // Address sent to memory
	output logic [63:0] 		proc2mem_data,      // Data sent to memory
	`ifndef CACHE_MODE
		output MEM_SIZE 		proc2mem_size,          // data size sent to memory
	`endif
	output logic [3:0]  		pipeline_completed_insts,
	output EXCEPTION_CODE   	pipeline_error_status,
	output logic [4:0]  		pipeline_commit_wr_idx_0,
	output logic [`XLEN-1:0] 	pipeline_commit_wr_data_0,
	output logic        		pipeline_commit_wr_en_0,
	output logic [`XLEN-1:0] 	pipeline_commit_NPC_0,
	output logic [4:0]  		pipeline_commit_wr_idx_1,
	output logic [`XLEN-1:0] 	pipeline_commit_wr_data_1,
	output logic        		pipeline_commit_wr_en_1,
	output logic [`XLEN-1:0] 	pipeline_commit_NPC_1	
);
//////////////////////////////////////////////////
//                                              //
//       ROB RS MT balabala packet def          //
//                                              //
//////////////////////////////////////////////////


	// ID
	ID_ROB_PACKET       id_rob_0;
	ID_ROB_PACKET       id_rob_1;   
	ID_RS_PACKET        id_rs_0;
	ID_RS_PACKET        id_rs_1;
	// logic				sq_rob_valid;
	// logic				sq_retire;

	// CDB
	CDB_ENTRY           cdb_out_0;
	CDB_ENTRY           cdb_out_1;
	CDB_ENTRY			rs_cdb_0;
	CDB_ENTRY			rs_cdb_1;
	
	// Map table
	MT_RS_PACKET        mt_rs_0;
	MT_RS_PACKET        mt_rs_1;

	// RS
	logic 				rs_entry_full_0;
	logic 				rs_entry_full_1;
	RS_ROB_PACKET       rs_rob_0;
	RS_ROB_PACKET       rs_rob_1;
	RS_MT_PACKET        rs_mt_0;
	RS_MT_PACKET        rs_mt_1;
	RS_REG_PACKET    	rs_reg_0;
	RS_REG_PACKET    	rs_reg_1;
	RS_LSQ_PACKET		rs_lsq;
	FU_LSQ_PACKET   [`NUM_LS-1:0]   fu_lsq;
	LSQ_RS_PACKET                   lsq_rs;
	LSQ_FU_PACKET   [`NUM_LS-1:0]   lsq_fu;
	FU_ID_PACKET	    fu_id_0;
	FU_ID_PACKET		fu_id_1;

	// ROB
	logic 				rob_full_0;
	logic 				rob_full_1;
    ROB_RS_PACKET       rob_rs_0;
    ROB_RS_PACKET       rob_rs_1;
    ROB_MT_PACKET       rob_mt_0;
    ROB_MT_PACKET       rob_mt_1;
    ROB_REG_PACKET      rob_reg_0;
    ROB_REG_PACKET      rob_reg_1;
	ROB_ID_PACKET       rob_id_0;
	ROB_ID_PACKET       rob_id_1;
	ROB_LSQ_PACKET		rob_lsq;
	LSQ_ROB_PACKET		lsq_rob;
	ROB_ICACHE_PACKET	rob_icache;

	REG_RS_PACKET       reg_rs_0;
	REG_RS_PACKET       reg_rs_1;

//////////////////////////////////////////////////
//                                              //
//     ROB RS MT balabala packet def end        //
//                                              //
//////////////////////////////////////////////////

	// Pipeline register enables
	logic	dispatch_enable_0;//id_ex_enable, ex_mem_enable, mem_wb_enable;
	logic	dispatch_enable_1;

	// Outputs from IF-Stage
	logic [`XLEN-1:0] proc2Imem_addr;
	// IF_ID_PACKET if_packet;

	// Outputs from IF/ID Pipeline Register
	// IF_ID_PACKET if_id_packet;

	// Outputs from ID stage
	ID_EX_PACKET id_packet_0;
	ID_EX_PACKET id_packet_1;
	//logic dispatch_enable;

	// Outputs from ID/EX Pipeline Register
	ID_EX_PACKET id_packet_out_0;
	ID_EX_PACKET id_packet_out_1;
	logic halt;
	logic squash;

	assign memory_error = (proc2mem_command != BUS_NONE) && (mem2proc_response==4'h0);
	assign pipeline_error_status 	= 	halt			?	HALTED_ON_WFI :
										// memory_error 	? 	LOAD_ACCESS_FAULT :
	                                						NO_ERROR;
	assign pipeline_completed_insts = {2'b0, rob_reg_0.valid && rob_reg_1.valid, ~(rob_reg_0.valid == rob_reg_1.valid)};

	assign pipeline_commit_wr_idx_0 	= rob_reg_0.dest_reg_idx;
	assign pipeline_commit_wr_data_0 	= rob_reg_0.dest_value;
	assign pipeline_commit_wr_en_0		= rob_reg_0.dest_valid;
	assign pipeline_commit_NPC_0 		= rob_reg_0.OLD_PC_p_4;
	assign pipeline_commit_wr_idx_1 	= rob_reg_1.dest_reg_idx;
	assign pipeline_commit_wr_data_1 	= rob_reg_1.dest_value;
	assign pipeline_commit_wr_en_1		= rob_reg_1.dest_valid;
	assign pipeline_commit_NPC_1		= rob_reg_1.OLD_PC_p_4;
	
//////////////////////////////////////////////////
//                                              //
//              ICache                          //
//                                              //
//////////////////////////////////////////////////

	logic [`XLEN-1:0]				proc2Icache_addr;
	logic [1:0]						proc2Imem_command;
    logic [63:0]					Icache_data_out; 		// value is memory[proc2Icache_addr]
    logic 							Icache_valid_out;      	// when this is high

	icache_l2 icache_0 (
		.clock(clock),
		.reset(reset),
		.squash(squash),

		// input
	 	.Imem2proc_response(do_Ifetch ? mem2proc_response : 4'b0),
	    .Imem2proc_data(mem2proc_data),
	    .Imem2proc_tag(mem2proc_tag),

	    .proc2Icache_addr(proc2Icache_addr),

		.rob_icache(rob_icache),

		// output
    	.proc2Imem_command(proc2Imem_command),
    	.proc2Imem_addr(proc2Imem_addr),

	    .Icache_data_out(Icache_data_out),
	    .Icache_valid_out(Icache_valid_out)
	);


//////////////////////////////////////////////////
//                                              //
//              DCache                          //
//                                              //
//////////////////////////////////////////////////

	// logic 						chosen2Mem;

    // logic                        Dmem2proc_valid;
    // logic [3:0]					Dmem2proc_response;
    // logic [63:0]					Dmem2proc_data;
    // logic [3:0]					Dmem2proc_tag;

    logic                           proc2Dmem_valid;
    logic [63:0]                    proc2Dmem_data;
    logic [1:0]                     proc2Dmem_command;
    logic [`XLEN-1:0]               proc2Dmem_addr;

	DCACHE_LOAD_LSQ_PACKET          dc_load_lsq;
	DCACHE_STORE_LSQ_PACKET         dc_store_lsq;
	LSQ_LOAD_DCACHE_PACKET          lsq_load_dc;
	LSQ_STORE_DCACHE_PACKET         lsq_store_dc;

	dcache_l2 dcache_0 (
		.clock(clock),
		.reset(reset),

		// From Pipeline
		.chosen2Mem(~do_Ifetch),

    	// From Dmem
    	.Dmem2proc_valid(mem2proc_tag != 4'b0000),
    	.Dmem2proc_response(mem2proc_response),
    	.Dmem2proc_data(mem2proc_data),
    	.Dmem2proc_tag(mem2proc_tag),

    	// To Dmem
    	.proc2Dmem_valid(proc2Dmem_valid),
    	.proc2Dmem_data(proc2Dmem_data),
    	.proc2Dmem_command(proc2Dmem_command),
    	.proc2Dmem_addr(proc2Dmem_addr),

		// From LSQ
		.lsq_load_dc(lsq_load_dc),
		.lsq_store_dc(lsq_store_dc),

		// To LSQ
		.dc_load_lsq(dc_load_lsq),
		.dc_store_lsq(dc_store_lsq)
	);

//////////////////////////////////////////////////
//                                              //
//             Cache2Mem                        //
//                                              //
//////////////////////////////////////////////////

	assign proc2mem_addr	= (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid) ? proc2Imem_addr 		: proc2Dmem_addr;
	assign proc2mem_command	= (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid) ? proc2Imem_command 	: proc2Dmem_command;
	assign proc2mem_data	= (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid) ? 64'b0 				: proc2Dmem_data;

	assign do_Ifetch = (proc2Dmem_command == BUS_NONE || ~proc2Dmem_valid);


//////////////////////////////////////////////////
//                                              //
//              Dispatch-Stage                  //
//                                              //
//////////////////////////////////////////////////

	// logic         							ex_mem_take_branch;		// taken-branch signal
	// logic					[`XLEN-1:0]		ex_mem_target_pc;		// target pc: use if take_branch is TRUE
	// assign ex_mem_take_branch				= 1'b0;
	// assign ex_mem_target_pc					= `XLEN'b0;

	`ifdef DEBUG
	logic [31:0] cycle_count;
	// synopsys sync_set_reset "reset"
	always_ff @(negedge clock) begin
        if(reset) begin
            cycle_count = 0;
        end else begin
            $display("DEBUG %4d: Icache_valid_out = %d, proc2mem_command = %d, proc2Imem_command = %d, proc2mem_addr = %d", cycle_count, Icache_valid_out, proc2mem_command, proc2Imem_command, proc2mem_addr);
            cycle_count = cycle_count + 1;
        end
    end
	`endif

	
	logic dispatch_new_value;

	dispatch_stage_2 dispatch_stage_0 (
		// Inputs
		.clock(clock),
		.reset(reset),

		.dispatch_new_value(dispatch_new_value),
		// .mem_wb_valid_inst(mem_wb_valid_inst),
		.dispatch_enable_0(dispatch_enable_0),
		.dispatch_enable_1(dispatch_enable_1),
		// .ex_mem_take_branch(ex_mem_take_branch),
		// .ex_mem_target_pc(ex_mem_target_pc),
		.Icache_data_out(Icache_data_out),
		.Icache_valid_out(Icache_valid_out),
		.rob_id_0(rob_id_0),
		.rob_id_1(rob_id_1),

		.fu_id_0(fu_id_0),
		.fu_id_1(fu_id_1),
		
		.id_packet_out_0(id_packet_out_0),
		.id_packet_out_1(id_packet_out_1),
		
		// Outputs
		.proc2Imem_addr(proc2Icache_addr),
		.id_packet_0(id_packet_0),
		.id_packet_1(id_packet_1)
	);

	// always @(posedge clock) begin
	// 	$display("DEBUG pipeline I addr", proc2Imem_addr);
	// end

//////////////////////////////////////////////////
//                                              //
//     Dispatch/ROBRSMT Pipeline Register       //
//                                              //
//////////////////////////////////////////////////
	// synopsys sync_set_reset "reset"
	always_ff @(posedge clock) begin
		if (reset || rob_id_0.squash || rob_id_1.squash) begin
			id_packet_out_0	<= `SD '{	
										`ifdef BRANCH_MODE
											{`DIRP_IDX_LEN{1'b0}},
										`endif
										{`XLEN{1'b0}},
										{`XLEN{1'b0}},
										{`XLEN{1'b0}}, 
 
										OPA_IS_RS1, 
										OPB_IS_RS2, 
										`NOP,
										
										`ZERO_REG,
										{5'b0,5'b0},

										ALU_ADD, 
										1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b0, 1'b0
									}; 
			id_packet_out_1	<= `SD '{	
										`ifdef BRANCH_MODE
											{`DIRP_IDX_LEN{1'b0}},
										`endif
										{`XLEN{1'b0}},
										{`XLEN{1'b0}},
										{`XLEN{1'b0}}, 
 
										OPA_IS_RS1, 
										OPB_IS_RS2, 
										`NOP,
										
										`ZERO_REG,
										{5'b0,5'b0},

										ALU_ADD, 
										1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b0, 1'b0
									}; 
		end else begin
			// if () begin


				
			// end else if (dispatch_enable_0 && id_packet_out_0.valid && ~dispatch_enable_1) begin
			// 	id_packet_out_0 <= `SD id_packet_out_1;
			// 	id_packet_out_1	<= `SD 0;
			// end else begin
				id_packet_out_0 <= `SD id_packet_0;
				id_packet_out_1 <= `SD id_packet_1;
			// end

		end // else: !if(reset)
	end // always
	// assign dispatch_new_value = (dispatch_enable_0 && id_packet_out_0.valid && dispatch_enable_1 && id_packet_out_1.valid) || 
	// 							(dispatch_enable_0 && id_packet_out_0.valid && id_packet_out_1.inst == `XLEN'b0) ||
	// 							rob_id_0.squash || rob_id_1.squash;

	assign dispatch_enable_0 = (!rob_full_0) && (!rs_entry_full_0);
	assign dispatch_enable_1 = (!rob_full_1) && (!rs_entry_full_1);
	//ID TO ROB
	assign id_rob_0 = {	
						id_packet_out_0.valid && ~id_packet_out_0.illegal,
						id_packet_out_0.NPC_out,
						id_packet_out_0.PC,
						dispatch_enable_0,
						id_packet_out_0.dest_reg_idx,
						id_packet_out_0.wr_mem,
						id_packet_out_0.cond_branch || id_packet_out_1.uncond_branch,
						id_packet_out_0.take_branch,
						id_packet_out_0.halt
						`ifdef BRANCH_MODE
							, id_packet_out_0.dirp_tag
						`endif
					};

	assign id_rob_1 = {	
						id_packet_out_1.valid && ~id_packet_out_1.illegal,
						id_packet_out_1.NPC_out,
						id_packet_out_1.PC,
						dispatch_enable_1,
						id_packet_out_1.dest_reg_idx,
						id_packet_out_1.wr_mem,
						id_packet_out_1.cond_branch || id_packet_out_1.uncond_branch,
						id_packet_out_1.take_branch,
						id_packet_out_1.halt
						`ifdef BRANCH_MODE
							, id_packet_out_1.dirp_tag
						`endif
					};
	//ID TO RS
	assign id_rs_0 = {	
						id_packet_out_0.NPC,			
						id_packet_out_0.PC,			                             
						dispatch_enable_0,                    
						id_packet_out_0.opa_select,	
						id_packet_out_0.opb_select,	
						id_packet_out_0.inst,	
						id_packet_out_0.dest_reg_idx,    
						id_packet_out_0.input_reg_idx,
						id_packet_out_0.alu_func,		
						id_packet_out_0.rd_mem,		
						id_packet_out_0.wr_mem,		
						id_packet_out_0.cond_branch,
						id_packet_out_0.uncond_branch,	
						id_packet_out_0.halt,			
						id_packet_out_0.illegal,		
						id_packet_out_0.csr_op,	
						id_packet_out_0.mult_op,	
						id_packet_out_0.valid,		
						id_packet_out_0.req_reg 	
					 };   


	assign id_rs_1 = {	
						id_packet_out_1.NPC,			
						id_packet_out_1.PC,			                             
						dispatch_enable_1,                    
						id_packet_out_1.opa_select,	
						id_packet_out_1.opb_select,	
						id_packet_out_1.inst,	
						id_packet_out_1.dest_reg_idx,    
						id_packet_out_1.input_reg_idx,
						id_packet_out_1.alu_func,		
						id_packet_out_1.rd_mem,		
						id_packet_out_1.wr_mem,		
						id_packet_out_1.cond_branch,
						id_packet_out_1.uncond_branch,	
						id_packet_out_1.halt,			
						id_packet_out_1.illegal,		
						id_packet_out_1.csr_op,	
						id_packet_out_1.mult_op,	
						id_packet_out_1.valid,		
						id_packet_out_1.req_reg 	
					 };                           
	//ID TO MT
	// logic [$clog2(`REG_SIZE)-1:0]     rd_dispatch_0, rd_dispatch_1;
	// assign rd_dispatch_0 = id_packet_out_0.dest_reg_idx;
	// assign rd_dispatch_1 = id_packet_out_1.dest_reg_idx;

	regfile_2 regf_0 (
		.clock(clock),

		/*RS TO REG*/
		.rda_idx_0(rs_reg_0.register_idxes[0]),
		.rda_out_0(reg_rs_0.rs_values[0]),
		.rdb_idx_0(rs_reg_0.register_idxes[1]),
		.rdb_out_0(reg_rs_0.rs_values[1]),
		
		.rda_idx_1(rs_reg_1.register_idxes[0]),
		.rda_out_1(reg_rs_1.rs_values[0]),
		.rdb_idx_1(rs_reg_1.register_idxes[1]),
		.rdb_out_1(reg_rs_1.rs_values[1]),

		/*ROB TO REG*/
		.wr_en_0(rob_reg_0.dest_valid),
		.wr_idx_0(rob_reg_0.dest_reg_idx),
		.wr_data_0(rob_reg_0.dest_value),

		.wr_en_1(rob_reg_1.dest_valid),
		.wr_idx_1(rob_reg_1.dest_reg_idx),
		.wr_data_1(rob_reg_1.dest_value)

		`ifdef DEBUG
		, .reset(reset)
		`endif
	);

	cdb_2 cdb_0(
        //input
        .clock(clock),
		.reset(reset), 
		.rs_cdb_0(rs_cdb_0), 
		.rs_cdb_1(rs_cdb_1),

		//OUTPUT
		.cdb_out_0(cdb_out_0),
		.cdb_out_1(cdb_out_1)
	);

	map_table_2 map_table_0 (
        //input
        .clock(clock),
 		.reset(reset),

        .dispatch_enable_0(dispatch_enable_0 && id_rs_0.valid && ~id_rs_0.halt && ~id_rs_0.illegal),
        .rd_dispatch_0(id_packet_out_0.dest_reg_idx),
        .dispatch_enable_1(dispatch_enable_1 && id_rs_1.valid && ~id_rs_1.halt && ~id_rs_1.illegal),
        .rd_dispatch_1(id_packet_out_1.dest_reg_idx),
        .rob_mt_0(rob_mt_0),
		.rob_mt_1(rob_mt_1),

        .cdb_in_0(cdb_out_0),
		.cdb_in_1(cdb_out_1),
        .rs_mt_0(rs_mt_0),
        .rs_mt_1(rs_mt_1),

        //input logic [$clog2(`REG_SIZE)-1:0]     rd_retire, // rd idx to clear in retire stage
        //input logic                             clear, //tag-clear signal in retire stage (should sent from ROB?)         

        //output
        .mt_rs_0(mt_rs_0),
		.mt_rs_1(mt_rs_1)
    );
	

	rs_2 rs_0(
		// input
		.clock(clock),
		.reset(reset),

		.id_rs_0(id_rs_0),
		.id_rs_1(id_rs_1),
		.mt_rs_0(mt_rs_0),
		.mt_rs_1(mt_rs_1),
		.reg_rs_0(reg_rs_0),
		.reg_rs_1(reg_rs_1),
		.cdb_rs_0(cdb_out_0),
		.cdb_rs_1(cdb_out_1),
		.rob_rs_0(rob_rs_0),
		.rob_rs_1(rob_rs_1),
		.lsq_rs(lsq_rs),
		.lsq_fu(lsq_fu),

		// output
		.fu_id_0(fu_id_0),
		.fu_id_1(fu_id_1),
		.rs_mt_0(rs_mt_0),
		.rs_mt_1(rs_mt_1),
		.rs_cdb_0(rs_cdb_0),
		.rs_cdb_1(rs_cdb_1),
		.rs_reg_0(rs_reg_0),
		.rs_reg_1(rs_reg_1),
		.rs_rob_0(rs_rob_0),
		.rs_rob_1(rs_rob_1),
		.rs_entry_full_0(rs_entry_full_0),
		.rs_entry_full_1(rs_entry_full_1),
		.rs_lsq(rs_lsq),
		.fu_lsq(fu_lsq)
	);

	rob_2 rob_0(
		// input
		.clock(clock),
		.reset(reset),

		.id_rob_0(id_rob_0),
		.id_rob_1(id_rob_1),
		.rs_rob_0(rs_rob_0),
		.rs_rob_1(rs_rob_1),
		.cdb_rob_0(cdb_out_0),
		.cdb_rob_1(cdb_out_1),
		.lsq_rob(lsq_rob),
		// .sq_rob_valid(sq_rob_valid),
		// output
		.rob_full_0(rob_full_0),
		.rob_full_1(rob_full_1),
		.halt(halt),
		.squash(squash),

		.rob_id_0(rob_id_0),
		.rob_id_1(rob_id_1),
		.rob_rs_0(rob_rs_0),
		.rob_rs_1(rob_rs_1),
		.rob_mt_0(rob_mt_0),
		.rob_mt_1(rob_mt_1),
		.rob_reg_0(rob_reg_0),
		.rob_reg_1(rob_reg_1),
		.rob_lsq(rob_lsq),
		.rob_icache(rob_icache)
		// .sq_retire(sq_retire)
	);

	lsq lsq_0 (
		.clock(clock),
		.reset(reset),
		.squash(squash),

		.rs_lsq(rs_lsq),
		.fu_lsq(fu_lsq),
		.rob_lsq(rob_lsq),
		// .sq_retire(sq_retire), // from rob
		// .store_finish, // from d-cache indicate whether the store finished write

		// .sq_rob_valid(sq_rob_valid), // to rob
		.lsq_rob(lsq_rob),
		.lsq_fu(lsq_fu),
		.lsq_rs(lsq_rs),

		.dc_load_lsq(dc_load_lsq),
		.dc_store_lsq(dc_store_lsq),
		.lsq_load_dc(lsq_load_dc),
		.lsq_store_dc(lsq_store_dc)

	);

`endif

endmodule  // module verisimple
`endif // __PIPELINE_V__
