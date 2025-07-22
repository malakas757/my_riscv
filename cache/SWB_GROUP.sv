`timescale 1ns/1ps

`include "define.sv"






module SWB_GROUP
#(parameter int SWB_DEPTH = 8)
   (/*AUTOARG*/
   // Outputs
   u_kob_rob_ack, u_ch_valid, u_ch_data, d_bank_0_crdt_rtn,
   d_bank_1_crdt_rtn, d_bank_2_crdt_rtn, d_bank_3_crdt_rtn,
   // Inputs
   clk, rstn, u_kob_rob_req, u_kob_rob_bank_id, d_rc_valid,
   d_rc_rob_id, d_rc_data, d_rc_bank_id, u_ch_ready
   );

   input  logic                               clk                        ;
   input  logic                               rstn                       ;
   input  logic                               u_kob_rob_req              ;
   output logic                               u_kob_rob_ack              ;
   input  logic [  1: 0] 		      u_kob_rob_bank_id          ;

   input  logic                               d_rc_valid                 ;
   input  logic [`ROB_WIDTH-1:0] 	      d_rc_rob_id                ;
   input  logic [127: 0] 		      d_rc_data                  ;
   input  logic [  1: 0] 		      d_rc_bank_id               ;

   output logic                               u_ch_valid                 ;
   input  logic                               u_ch_ready                 ;
   output logic [127: 0] 		      u_ch_data                  ;

   output logic                               d_bank_0_crdt_rtn          ;
   output logic                               d_bank_1_crdt_rtn          ;
   output logic                               d_bank_2_crdt_rtn          ;
   output logic                               d_bank_3_crdt_rtn          ;
  



   logic 			i_u_kob_rob_req[4]              ;
   logic 			i_u_kob_rob_ack[4]              ;
  
   				 
   logic 			i_d_rc_valid[4]                 ;

   
   logic [  $clog2(SWB_DEPTH)-1: 0] 		i_d_rc_swb_id                   ;
   				 
   logic 			i_u_ch_valid[4]                 ;

   logic [127: 0] 		i_u_ch_data[4]                  ;
   				 
   logic 			i_d_bank_crdt_rtn[4]         ;

   
   assign  d_bank_0_crdt_rtn  = i_d_bank_crdt_rtn[0];
   assign  d_bank_1_crdt_rtn  = i_d_bank_crdt_rtn[1];
   assign  d_bank_2_crdt_rtn  = i_d_bank_crdt_rtn[2];
   assign  d_bank_3_crdt_rtn  = i_d_bank_crdt_rtn[3];
   

   

   genvar 				      ii;

   generate
      for( ii=0;ii<4;ii++) begin: SWB_GROUP_ARRAY
	 SWB  #(.SWB_DEPTH(8)) u_SWB(
				     .clk(clk),                                
				     .rstn(rstn),                         
				     .u_kob_rob_req(i_u_kob_rob_req[ii]),  
				     .u_kob_rob_ack(i_u_kob_rob_ack[ii]),       
				     .d_rc_valid(i_d_rc_valid[ii]),     
				     .d_rc_swb_id(i_d_rc_swb_id),    
				     .d_rc_data(d_rc_data),     
				     .u_ch_valid(i_u_ch_valid[ii]),     
				     .u_ch_ready(u_ch_ready),     
				     .u_ch_data(i_u_ch_data[ii]),       
				     .d_isu_crdt_rtn(i_d_bank_crdt_rtn[ii]) 
				     
				     
				    );
	 
		

      end // block:    
   endgenerate


//index logic
   //downstream
   assign i_d_rc_swb_id = d_rc_rob_id[$clog2(SWB_DEPTH)-1:0];
     
   always_comb begin	 
      i_d_rc_valid  = '{default:'0};	 
      for(int i=0;i<4;i++) begin
	 if(d_rc_bank_id == i) begin		
	    i_d_rc_valid[i] = d_rc_valid;		
	 end	     	     
      end      
   end

   //upstream

       //kob
   
   always_comb begin	 
      i_u_kob_rob_req  = '{default:'0};
      u_kob_rob_ack    = '0;     
      for(int i=0;i<4;i++) begin
	 if(u_kob_rob_bank_id == i) begin		
	    i_u_kob_rob_req[i] = u_ch_valid? 0:u_kob_rob_req;
	    u_kob_rob_ack      = u_ch_valid? 0:i_u_kob_rob_ack[i];//if ch_valid,means there is a kob req has not been sent to CH, backpress kob	    
	 end	     	     
      end      
   end

      //rob

   always_comb begin
      u_ch_valid = i_u_ch_valid[0] | i_u_ch_valid[1] | i_u_ch_valid[2] | i_u_ch_valid[3];
      u_ch_data = i_u_ch_valid[0]? i_u_ch_data[0]:
		  i_u_ch_valid[1]? i_u_ch_data[1]:
		  i_u_ch_valid[2]? i_u_ch_data[2]:i_u_ch_data[3];
      
      

   end









endmodule
