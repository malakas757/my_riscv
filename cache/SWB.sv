`timescale 1ns/1ps 

`include "define.sv"


module SWB
#(parameter int SWB_DEPTH = 8)
(/*AUTOARG*/
   // Outputs
   u_kob_rob_ack, u_ch_valid, u_ch_data, d_isu_crdt_rtn,
   // Inputs
   clk, rstn, u_kob_rob_req, d_rc_valid, d_rc_swb_id, d_rc_data,
   u_ch_ready
   );


   input  logic                               clk                        ;
   input  logic                               rstn                       ;

   input  logic                               u_kob_rob_req              ;
   output logic                               u_kob_rob_ack              ;

   input  logic                               d_rc_valid                 ;
   input  logic [$clog2(SWB_DEPTH)-1:0]       d_rc_swb_id                ;//swb id is [2:0] of robid
   input  logic [127: 0] 		      d_rc_data                  ;

   output logic                               u_ch_valid                 ;
   input  logic                               u_ch_ready                 ;
   output logic [127: 0] 		      u_ch_data                  ;

   output logic                               d_isu_crdt_rtn             ; 
   
   

   logic 				      SWB_entry_valid[SWB_DEPTH];
   logic [127:0] 			      SWB_entry_data[SWB_DEPTH];

   logic                                      u_kob_hs_reg;//reg to record kob req has been acknowledged
   logic                                      u_kob_hs;   
   logic                                      u_ch_hs;
     

   //////////////////////////////////////////////////////////////
   //////////                 ID_GEN           //////////////////
   //////////////////////////////////////////////////////////////

   logic [$clog2(SWB_DEPTH)-1:0] 		      ID_reg;

   
   

   always_ff@(posedge clk) begin
      if(!rstn) begin
	 ID_reg <= '0;	 
      end
      else begin
	 if(u_ch_hs)
	   ID_reg <= ID_reg + 1;	    	    	       	 	 
      end
   end


   //////////////////////////////////////////////////////////////
   //////////                 SWB           /////////////////////
   //////////////////////////////////////////////////////////////
   
   //handshake logic

   assign u_ch_hs = u_ch_valid & u_ch_ready;
   assign u_kob_hs = u_kob_rob_ack & u_kob_rob_req;

   //valid clr: send bottom data to CHN

     //step1: handshake with kob
   
   assign u_kob_rob_ack = SWB_entry_valid[ID_reg] & ~u_kob_hs_reg;
   
   always_ff@(posedge clk) begin
      if(!rstn) begin
	 u_kob_hs_reg <= '0;	 
      end
      else begin
	 if(u_kob_hs)
	   u_kob_hs_reg <= 1;
	 if(u_ch_hs)
	   u_kob_hs_reg <= 0;	 
      end
   end

   //step 2: handshake with CH
   assign u_ch_valid = u_kob_hs_reg;
   assign u_ch_data = SWB_entry_data[ID_reg];
   assign d_isu_crdt_rtn = u_kob_hs_reg;
   
   
   
   

 
   
   //valid set : downstream input data to SWB
   always_ff@(posedge clk) begin
      if(!rstn) begin
	 for(int i=0; i<SWB_DEPTH;i++) begin
	    SWB_entry_data[i] <= '0;	    
	    SWB_entry_valid[i] <= '0;	

	 end
      end
      else begin
	 if(d_rc_valid) begin
	    SWB_entry_data[d_rc_swb_id] <= d_rc_data;
	    SWB_entry_valid[d_rc_swb_id] <= 1;	    	    
	 end
	 if(u_ch_hs) begin
	    SWB_entry_valid[ID_reg] <= 0;
	 end
      end // else: !if(!rstn)
   end
   
endmodule
