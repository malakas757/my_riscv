`timescale 1ns/1ps


`include "define.sv"


module xbar(/*AUTOARG*/
   // Outputs
   mpc_channel0_enable, mpc_channel0_rtn_valid,
   mpc_channel0_rtn_enable, mpc_channel0_rtn_data,
   mpc_channel1_enable, mpc_channel1_rtn_valid,
   mpc_channel1_rtn_enable, mpc_channel1_rtn_data,
   mpc_channel2_enable, mpc_channel2_rtn_valid,
   mpc_channel2_rtn_enable, mpc_channel2_rtn_data, mpc_xbar_htu_valid,
   mpc_xbar_htu_channel_id, mpc_xbar_htu_op_code, mpc_xbar_htu_addr,
   mpc_xbar_htu_set, mpc_xbar_htu_wbuffer_id, mpc_xbar_wbuf_req_valid,
   mpc_xbar_wbuf_req_channel_id, mpc_xbar_wbuf_req_data,
   mpc_xbar_wbuf_req_wbuffer_id, xbar_ISU_crdt_rtn_bank,
   d_bank0_enable, d_bank1_enable, d_bank2_enable, d_bank3_enable,
   // Inputs
   clk, rstn, mpc_channel0_valid, mpc_channel0_op,
   mpc_channel0_address, mpc_channel0_data, mpc_channel1_valid,
   mpc_channel1_op, mpc_channel1_address, mpc_channel1_data,
   mpc_channel2_valid, mpc_channel2_op, mpc_channel2_address,
   mpc_channel2_data, mpc_xbar_htu_enable, mpc_xbar_wbuf_req_enable,
   mpc_xbar_wbuf_rtn_free_id, d_bank0_valid, d_bank0_chl_id,
   d_bank0_rob_id, d_bank0_data, d_bank1_valid, d_bank1_chl_id,
   d_bank1_rob_id, d_bank1_data, d_bank2_valid, d_bank2_chl_id,
   d_bank2_rob_id, d_bank2_data, d_bank3_valid, d_bank3_chl_id,
   d_bank3_rob_id, d_bank3_data
   );
   
   input                  clk;
   input                  rstn;



   input 		  mpc_channel0_valid;   
   output 		  mpc_channel0_enable;   
   input [1:0] 		  mpc_channel0_op; //0 = (read)1 = (write)2 = (flush)3 = (invalidate)
   input [31:4] 	  mpc_channel0_address;   
   input [127:0] 	  mpc_channel0_data;
   output 		  mpc_channel0_rtn_valid;
   input 		  mpc_channel0_rtn_enable;
   output logic [127:0]   mpc_channel0_rtn_data;
   
   
   
   
   input 		  mpc_channel1_valid;   
   output 		  mpc_channel1_enable;   
   input [1:0] 		  mpc_channel1_op; //0 = (read)1 = (write)2 = (flush)3 = (invalidate)
   input [31:4] 	  mpc_channel1_address;   
   input [127:0] 	  mpc_channel1_data;
   output 		  mpc_channel1_rtn_valid;
   input 		  mpc_channel1_rtn_enable;
   output logic [127:0]   mpc_channel1_rtn_data;   

   input 		  mpc_channel2_valid;   
   output 		  mpc_channel2_enable;   
   input [1:0] 		  mpc_channel2_op; //0 = (read)1 = (write)2 = (flush)3 = (invalidate)
   input [31:4] 	  mpc_channel2_address;   
   input [127:0] 	  mpc_channel2_data;
   output 		  mpc_channel2_rtn_valid;
   input 		  mpc_channel2_rtn_enable;
   output logic [127:0]   mpc_channel2_rtn_data;

   //hit test port
   output logic 	  mpc_xbar_htu_valid[3:0];
   input  logic		  mpc_xbar_htu_enable[3:0];
   output logic [1:0] 	  mpc_xbar_htu_channel_id[3:0];
   output logic [1:0] 	  mpc_xbar_htu_op_code[3:0];
   output logic [31:0] 	  mpc_xbar_htu_addr[3:0];
   output logic [2:0] 	  mpc_xbar_htu_set[3:0];
   output logic [7:0] 	  mpc_xbar_htu_wbuffer_id[3:0];
   //sram port
   output logic 	  mpc_xbar_wbuf_req_valid[3:0];          		    
   input  logic 	  mpc_xbar_wbuf_req_enable[3:0];         	
   output logic [1:0] 	  mpc_xbar_wbuf_req_channel_id[3:0];     
   output logic [127:0]   mpc_xbar_wbuf_req_data[3:0];            	
   output logic [7:0] 	  mpc_xbar_wbuf_req_wbuffer_id[3:0];     
   input  logic [255:0]   mpc_xbar_wbuf_rtn_free_id[3:0];  
   //ISU
   output logic [2:0] 	  xbar_ISU_crdt_rtn_bank[4];//[4] means 4banks,[2:0] means 3 channels, for example: x..[4] = 3'b101,means " for bank4 channel2 and channel0 rtn 2 credicts"


   //sram controller   
   input 		  d_bank0_valid;   
   output 		  d_bank0_enable;   
   input [1:0] 		  d_bank0_chl_id; 
   input [`ROB_WIDTH-1:0] d_bank0_rob_id;   
   input [127:0] 	  d_bank0_data;
   
   input 		  d_bank1_valid;   
   output 		  d_bank1_enable;   
   input [1:0] 		  d_bank1_chl_id; 
   input [`ROB_WIDTH-1:0] d_bank1_rob_id;   
   input [127:0] 	  d_bank1_data;

   input 		  d_bank2_valid;   
   output 		  d_bank2_enable;   
   input [1:0] 		  d_bank2_chl_id; 
   input [`ROB_WIDTH-1:0] d_bank2_rob_id;   
   input [127:0] 	  d_bank2_data;

   input 		  d_bank3_valid;   
   output 		  d_bank3_enable;   
   input [1:0] 		  d_bank3_chl_id; 
   input [`ROB_WIDTH-1:0] d_bank3_rob_id;   
   input [127:0] 	  d_bank3_data;






   logic 	  u_channel_0_rsp_valid      ;  
  
   logic [127: 0]  u_channel_0_rsp_data       ;  
   logic [  1: 0]  u_channel_0_rsp_bank_id    ;  
   logic [`ROB_WIDTH-1:0] u_channel_0_rsp_rob_id     ; 
                                                 
   logic 	   u_channel_1_rsp_valid      ; 

   logic [127: 0]   u_channel_1_rsp_data       ; 
   logic [  1: 0]   u_channel_1_rsp_bank_id    ; 
   logic [`ROB_WIDTH-1:0] u_channel_1_rsp_rob_id     ; 
                                                 
   logic 	   u_channel_2_rsp_valid      ; 
   
   logic [127: 0]   u_channel_2_rsp_data       ; 
   logic [  1: 0]   u_channel_2_rsp_bank_id    ; 
   logic [`ROB_WIDTH-1:0] u_channel_2_rsp_rob_id     ; 







   
   

   ////////////////////////////////////////////////////////////////////////
   //////////////////////////////HANDSHAKE/////////////////////////////////
   ////////////////////////////////////////////////////////////////////////

// from upstream, need handshake with both Xbarcore and KOB,Here is the logic 
   logic                  chn_xbar_already_sent[3];
   logic                  chn_KOB_already_sent[3];
   logic                  chn_xbar_handshake[3];
   logic                  chn_KOB_handshake[3];
   logic                  chn_u_handshake[3];   
   logic 		  chn_xbar_req_valid[3];
   logic 		  chn_xbar_req_enable[3];
   logic 		  chn_KOB_req_valid[3];
   logic 		  chn_KOB_req_enable[3];
   logic                  mpc_channel_valid[3];
   logic                  mpc_channel_enable[3];

   

   assign mpc_channel_valid[0]  = mpc_channel0_valid;
   assign mpc_channel_valid[1]  = mpc_channel1_valid;
   assign mpc_channel_valid[2]  = mpc_channel2_valid;
   assign mpc_channel0_enable = mpc_channel_enable[0];
   assign mpc_channel1_enable = mpc_channel_enable[1];
   assign mpc_channel2_enable = mpc_channel_enable[2];
   assign chn_u_handshake[0]     = mpc_channel0_enable & mpc_channel0_valid;
   assign chn_u_handshake[1]     = mpc_channel1_enable & mpc_channel1_valid;
   assign chn_u_handshake[2]     = mpc_channel2_enable & mpc_channel2_valid;
   



     
   
  

   genvar 		  i;
   generate  
      for( i=0;i<3;i++) begin:hs_KOB_xbar
	    
	 always_ff@(posedge clk) begin
	    if(!rstn) begin
	       chn_xbar_already_sent[i] <= '0;
	       chn_KOB_already_sent[i]  <= '0;	 
	    end
	    else begin
	       chn_KOB_already_sent[i] <= (chn_KOB_already_sent[i] | chn_KOB_handshake[i]) & !(chn_u_handshake[i]);
	       chn_xbar_already_sent[i] <= (chn_xbar_already_sent[i] | chn_xbar_handshake[i]) & !(chn_u_handshake[i]);	       
	    end
	 end

	 always_comb begin
	    chn_KOB_req_valid[i]  = !chn_KOB_already_sent[i] & mpc_channel_valid[i];
	    chn_xbar_req_valid[i]  = !chn_xbar_already_sent[i] & mpc_channel_valid[i];
	    
	    
	    chn_KOB_handshake[i]  = chn_KOB_req_valid[i] & chn_KOB_req_enable[i];
	    chn_xbar_handshake[i] = chn_xbar_req_valid[i] & chn_xbar_req_enable[i];
	    mpc_channel_enable[i] = !(chn_KOB_req_valid[i] & !chn_KOB_req_enable) & !(chn_xbar_req_valid[i] & !chn_xbar_req_enable);
	    


	 end
	 
   end
   endgenerate


   ////////////////////////////////////////////////////////////////////////
   //////////////////////////////KOB///////////////////////////////////////
   ////////////////////////////////////////////////////////////////////////

   logic                   kob_rob_req[3];
   logic                   kob_rob_ack[3];
   logic [1:0] 		   kob_rob_bank_id[3];
   
   




	 KOB Inst_KOB(
		      // Outputs
		      .u_channel_0_req_ready(chn_KOB_req_enable[0]),
		      .u_channel_1_req_ready(chn_KOB_req_enable[1]),
		      .u_channel_2_req_ready(chn_KOB_req_enable[2]),
		      .d_ch_0_rob_req	(kob_rob_req[0]),
		      .d_ch_0_rob_bank_id(kob_rob_bank_id[0]),
		      .d_ch_1_rob_req	(kob_rob_req[1]),
		      .d_ch_1_rob_bank_id(kob_rob_bank_id[1]),
		      .d_ch_2_rob_req	(kob_rob_req[2]),
		      .d_ch_2_rob_bank_id(kob_rob_bank_id[2]),
		      // Inputs
		      .clk		(clk),
		      .rstn		(rstn),
		      .u_channel_0_req_valid(chn_KOB_req_valid[0]),
		      .u_channel_0_req_op(mpc_channel0_op),
		      .u_channel_0_req_bank_id(mpc_channel0_address[9:8]),
		      .u_channel_1_req_valid(chn_KOB_req_valid[0]),
		      .u_channel_1_req_op(mpc_channel1_op),
		      .u_channel_1_req_bank_id(mpc_channel0_address[9:8]),
		      .u_channel_2_req_valid(chn_KOB_req_valid[0]),
		      .u_channel_2_req_op(mpc_channel2_op),
		      .u_channel_2_req_bank_id(mpc_channel0_address[9:8]),
		      .d_ch_0_rob_ack	(kob_rob_ack[0]),
		      .d_ch_1_rob_ack	(kob_rob_ack[1]),
		      .d_ch_2_rob_ack	(kob_rob_ack[2]));
	 


   ///////////////////////////////////////////////////////////////////////
   //////////////////////////////SWB_GROUP////////////////////////////////
   ///////////////////////////////////////////////////////////////////////


      
   
   SWB_GROUP ch0_SWB (
		      // Outputs
		      .u_kob_rob_ack	(kob_rob_ack[0]),
		      .u_ch_valid	(mpc_channel0_rtn_valid),
		      .u_ch_data	(mpc_channel0_rtn_data),
		      .d_bank_0_crdt_rtn(xbar_ISU_crdt_rtn_bank[0][0]),
		      .d_bank_1_crdt_rtn(xbar_ISU_crdt_rtn_bank[1][0]),
		      .d_bank_2_crdt_rtn(xbar_ISU_crdt_rtn_bank[2][0]),
		      .d_bank_3_crdt_rtn(xbar_ISU_crdt_rtn_bank[3][0]),
		      // Inputs
		      .clk		(clk),
		      .rstn		(rstn),
		      .u_kob_rob_req	(kob_rob_req[0]),
		      .u_kob_rob_bank_id(kob_rob_bank_id[0]),
		      .d_rc_valid	(u_channel_0_rsp_valid),
		      .d_rc_rob_id	(u_channel_0_rsp_rob_id),
		      .d_rc_data	(u_channel_0_rsp_data),
		      .d_rc_bank_id	(u_channel_0_rsp_bank_id[1:0]),
		      .u_ch_ready	(mpc_channel0_rtn_enable));

   SWB_GROUP ch1_SWB (
		      // Outputs
		      .u_kob_rob_ack	(kob_rob_ack[1]),
		      .u_ch_valid	(mpc_channel1_rtn_valid),
		      .u_ch_data	(mpc_channel1_rtn_data),
		      .d_bank_0_crdt_rtn(xbar_ISU_crdt_rtn_bank[0][1]),
		      .d_bank_1_crdt_rtn(xbar_ISU_crdt_rtn_bank[1][1]),
		      .d_bank_2_crdt_rtn(xbar_ISU_crdt_rtn_bank[2][1]),
		      .d_bank_3_crdt_rtn(xbar_ISU_crdt_rtn_bank[3][1]),
		      // Inputs
		      .clk		(clk),
		      .rstn		(rstn),
		      .u_kob_rob_req	(kob_rob_req[1]),
		      .u_kob_rob_bank_id(kob_rob_bank_id[1]),
		      .d_rc_valid	(u_channel_1_rsp_valid),
		      .d_rc_rob_id	(u_channel_1_rsp_rob_id),
		      .d_rc_data	(u_channel_1_rsp_data),
		      .d_rc_bank_id	(u_channel_1_rsp_bank_id[1:0]),
		      .u_ch_ready	(mpc_channel1_rtn_enable));

   SWB_GROUP ch2_SWB (
		      // Outputs
		      .u_kob_rob_ack	(kob_rob_ack[2]),
		      .u_ch_valid	(mpc_channel2_rtn_valid),
		      .u_ch_data	(mpc_channel2_rtn_data),
		      .d_bank_0_crdt_rtn(xbar_ISU_crdt_rtn_bank[0][2]),
		      .d_bank_1_crdt_rtn(xbar_ISU_crdt_rtn_bank[1][2]),
		      .d_bank_2_crdt_rtn(xbar_ISU_crdt_rtn_bank[2][2]),
		      .d_bank_3_crdt_rtn(xbar_ISU_crdt_rtn_bank[3][2]),
		      // Inputs
		      .clk		(clk),
		      .rstn		(rstn),
		      .u_kob_rob_req	(kob_rob_req[2]),
		      .u_kob_rob_bank_id(kob_rob_bank_id[2]),
		      .d_rc_valid	(u_channel_2_rsp_valid),
		      .d_rc_rob_id	(u_channel_2_rsp_rob_id),
		      .d_rc_data	(u_channel_2_rsp_data),
		      .d_rc_bank_id	(u_channel_2_rsp_bank_id[1:0]),
		      .u_ch_ready	(mpc_channel2_rtn_enable));   
   


   ///////////////////////////////////////////////////////////////////////
   //////////////////////////////XBAR_CORE////////////////////////////////
   ///////////////////////////////////////////////////////////////////////

   xbar_core u_xbarcore(
			// Outputs
			.mpc_channel0_enable(chn_xbar_req_enable[0]),
			.mpc_channel1_enable(chn_xbar_req_enable[1]),
			.mpc_channel2_enable(chn_xbar_req_enable[2]),
			.mpc_xbar_htu_valid(mpc_xbar_htu_valid/*.[3:0]*/),
			.mpc_xbar_htu_channel_id(mpc_xbar_htu_channel_id/*[1:0].[3:0]*/),
			.mpc_xbar_htu_op_code(mpc_xbar_htu_op_code/*[1:0].[3:0]*/),
			.mpc_xbar_htu_addr(mpc_xbar_htu_addr/*[31:0].[3:0]*/),
			.mpc_xbar_htu_set(mpc_xbar_htu_set/*[2:0].[3:0]*/),
			.mpc_xbar_htu_wbuffer_id(mpc_xbar_htu_wbuffer_id/*[7:0].[3:0]*/),
			.mpc_xbar_wbuf_req_valid(mpc_xbar_wbuf_req_valid/*.[3:0]*/),
			.mpc_xbar_wbuf_req_channel_id(mpc_xbar_wbuf_req_channel_id/*[1:0].[3:0]*/),
			.mpc_xbar_wbuf_req_data(mpc_xbar_wbuf_req_data/*[127:0].[3:0]*/),
			.mpc_xbar_wbuf_req_wbuffer_id(mpc_xbar_wbuf_req_wbuffer_id),
			// Inputs
			.clk		(clk),
			.rstn		(rstn),
			.mpc_channel0_valid(chn_xbar_req_valid[0]),
			.mpc_channel0_op(mpc_channel0_op[1:0]),
			.mpc_channel0_address(mpc_channel0_address[31:4]),
			.mpc_channel0_data(mpc_channel0_data[127:0]),
			.mpc_channel1_valid(chn_xbar_req_valid[1]),
			.mpc_channel1_op(mpc_channel1_op[1:0]),
			.mpc_channel1_address(mpc_channel1_address[31:4]),
			.mpc_channel1_data(mpc_channel1_data[127:0]),
			.mpc_channel2_valid(chn_xbar_req_valid[2]),
			.mpc_channel2_op(mpc_channel2_op[1:0]),
			.mpc_channel2_address(mpc_channel2_address[31:4]),
			.mpc_channel2_data(mpc_channel2_data[127:0]),
			.mpc_xbar_htu_enable(mpc_xbar_htu_enable/*.[3:0]*/),
			.mpc_xbar_wbuf_req_enable(mpc_xbar_wbuf_req_enable/*.[3:0]*/),
			.mpc_xbar_wbuf_rtn_free_id(mpc_xbar_wbuf_rtn_free_id/*[255:0].[3:0]*/));
   
    //////////////////////////////////////////////////////////////////////
   //////////////////////////////XBAR_RTN_CORE////////////////////////////
   ///////////////////////////////////////////////////////////////////////

   xbar_rtncore u_xbar_rtncore(
			       // Outputs
			       .d_bank0_enable	(d_bank0_enable),
			       .d_bank1_enable	(d_bank1_enable),
			       .d_bank2_enable	(d_bank2_enable),
			       .d_bank3_enable	(d_bank3_enable),
			       .u_channel_0_rsp_valid(u_channel_0_rsp_valid),
			       .u_channel_0_rsp_data(u_channel_0_rsp_data[127:0]),
			       .u_channel_0_rsp_bank_id(u_channel_0_rsp_bank_id[1:0]),
			       .u_channel_0_rsp_rob_id(u_channel_0_rsp_rob_id[`ROB_WIDTH-1:0]),
			       .u_channel_1_rsp_valid(u_channel_1_rsp_valid),
			       .u_channel_1_rsp_data(u_channel_1_rsp_data[127:0]),
			       .u_channel_1_rsp_bank_id(u_channel_1_rsp_bank_id[1:0]),
			       .u_channel_1_rsp_rob_id(u_channel_1_rsp_rob_id[`ROB_WIDTH-1:0]),
			       .u_channel_2_rsp_valid(u_channel_2_rsp_valid),
			       .u_channel_2_rsp_data(u_channel_2_rsp_data[127:0]),
			       .u_channel_2_rsp_bank_id(u_channel_2_rsp_bank_id[1:0]),
			       .u_channel_2_rsp_rob_id(u_channel_2_rsp_rob_id[`ROB_WIDTH-1:0]),
			       // Inputs
			       .clk		(clk),
			       .rstn		(rstn),
			       .d_bank0_valid	(d_bank0_valid),
			       .d_bank0_chl_id	(d_bank0_chl_id[1:0]),
			       .d_bank0_rob_id	(d_bank0_rob_id[`ROB_WIDTH-1:0]),
			       .d_bank0_data	(d_bank0_data[127:0]),
			       .d_bank1_valid	(d_bank1_valid),
			       .d_bank1_chl_id	(d_bank1_chl_id[1:0]),
			       .d_bank1_rob_id	(d_bank1_rob_id[`ROB_WIDTH-1:0]),
			       .d_bank1_data	(d_bank1_data[127:0]),
			       .d_bank2_valid	(d_bank2_valid),
			       .d_bank2_chl_id	(d_bank2_chl_id[1:0]),
			       .d_bank2_rob_id	(d_bank2_rob_id[`ROB_WIDTH-1:0]),
			       .d_bank2_data	(d_bank2_data[127:0]),
			       .d_bank3_valid	(d_bank3_valid),
			       .d_bank3_chl_id	(d_bank3_chl_id[1:0]),
			       .d_bank3_rob_id	(d_bank3_rob_id[`ROB_WIDTH-1:0]),
			       .d_bank3_data	(d_bank3_data[127:0]),
			       .u_channel_0_rsp_ready(1'b1),//always 1 because SWB write is contrained by ISU credict
			       .u_channel_1_rsp_ready(1'b1),
			       .u_channel_2_rsp_ready(1'b1));




   
   
   

endmodule // Xbar
