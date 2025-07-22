`timescale 1ns/1ps








module KOB
#(parameter int KOB_DEPTH = 8)  
(/*AUTOARG*/
   // Outputs
   u_channel_0_req_ready, u_channel_1_req_ready,
   u_channel_2_req_ready, d_ch_0_rob_req, d_ch_0_rob_bank_id,
   d_ch_1_rob_req, d_ch_1_rob_bank_id, d_ch_2_rob_req,
   d_ch_2_rob_bank_id,
   // Inputs
   clk, rstn, u_channel_0_req_valid, u_channel_0_req_op,
   u_channel_0_req_bank_id, u_channel_1_req_valid, u_channel_1_req_op,
   u_channel_1_req_bank_id, u_channel_2_req_valid, u_channel_2_req_op,
   u_channel_2_req_bank_id, d_ch_0_rob_ack, d_ch_1_rob_ack,
   d_ch_2_rob_ack
   );
    input  logic                        clk                            ; 
    input  logic                        rstn                           ; 
								       	
								       	
    input  logic                        u_channel_0_req_valid          ; 
   output  logic                        u_channel_0_req_ready          ; 
    input  logic [1:0]			u_channel_0_req_op             ; 
    input  logic [1:0]			u_channel_0_req_bank_id        ;  // addr[9:8] 
								       	
    input  logic                        u_channel_1_req_valid          ; 
   output  logic                        u_channel_1_req_ready          ; 
    input  logic [1:0]                  u_channel_1_req_op             ; 
    input  logic [1:0]                  u_channel_1_req_bank_id        ; 
								       	
    input  logic                        u_channel_2_req_valid          ; 
   output  logic                        u_channel_2_req_ready          ; 
    input  logic [1:0]                  u_channel_2_req_op             ; 
    input  logic [1:0]                  u_channel_2_req_bank_id        ; 
								       	
    output logic                        d_ch_0_rob_req                 ; 
    input  logic                        d_ch_0_rob_ack                 ; 
    output logic           [  1: 0]     d_ch_0_rob_bank_id             ; 
								       	
    output logic                        d_ch_1_rob_req                 ; 
    input  logic                        d_ch_1_rob_ack                 ; 
    output logic           [  1: 0]     d_ch_1_rob_bank_id             ; 
								       	
    output logic                        d_ch_2_rob_req                 ; 
    input  logic                        d_ch_2_rob_ack                 ; 
    output logic           [  1: 0]     d_ch_2_rob_bank_id             ; 
								       	


   logic [1:0]				kob_req_bank_id[3];   
   logic [$clog2(KOB_DEPTH):0]		kob_head_ptr[3];
   logic [$clog2(KOB_DEPTH):0]		kob_head_ptr_next[3];
   logic [$clog2(KOB_DEPTH):0]		kob_tail_ptr[3];
   logic [$clog2(KOB_DEPTH):0]		kob_tail_ptr_next[3];
   logic [2:0]				kob_entry[3][KOB_DEPTH];    // bit [2] is valid bit, bit[1:0] is bank id
   logic				kob_full[3];

   logic				u_chn_set_valid[3];     //handshake
   logic				d_chn_clr_valid[3];     //handshake
   logic 				ch_0_kob_full                  ; //when kob is full, back press upstream
   logic 				ch_1_kob_full                  ; 
   logic 				ch_2_kob_full                  ; 


   
   //upstream set valid
   assign u_channel_0_req_ready = !ch_0_kob_full;
   assign u_channel_1_req_ready = !ch_1_kob_full;
   assign u_channel_2_req_ready = !ch_2_kob_full;
   
   assign  u_chn_set_valid[0] = u_channel_0_req_valid & u_channel_0_req_ready & u_channel_0_req_op == 0;
   assign  u_chn_set_valid[1] = u_channel_1_req_valid & u_channel_1_req_ready & u_channel_1_req_op == 0;
   assign  u_chn_set_valid[2] = u_channel_2_req_valid & u_channel_2_req_ready & u_channel_2_req_op == 0;

   //downstream clr valid
   assign  d_chn_clr_valid[0] = d_ch_0_rob_ack & d_ch_0_rob_req;
   assign  d_chn_clr_valid[1] = d_ch_1_rob_ack & d_ch_1_rob_req;
   assign  d_chn_clr_valid[2] = d_ch_2_rob_ack & d_ch_2_rob_req;
   
   //ptr logic
   always_comb begin
      foreach(kob_full[i])	
	kob_full[i] = (kob_head_ptr[i][$clog2(KOB_DEPTH)] ^ kob_tail_ptr[i][$clog2(KOB_DEPTH)]) & (kob_head_ptr[i][$clog2(KOB_DEPTH)-1:0] == kob_tail_ptr[i][$clog2(KOB_DEPTH)-1:0]);
   end
   
   assign ch_0_kob_full = kob_full[0];
   assign ch_1_kob_full = kob_full[1];
   assign ch_2_kob_full = kob_full[2];
   assign kob_req_bank_id[0] = u_channel_0_req_bank_id;
   assign kob_req_bank_id[1] = u_channel_1_req_bank_id;
   assign kob_req_bank_id[2] = u_channel_2_req_bank_id;
   
   
			     
   always_ff@(posedge clk) begin:ptr
      if(!rstn) begin
	 for(int i=0; i<3;i++) begin : rest
	    kob_head_ptr[i] <= '0;
	    kob_tail_ptr[i] <= '0;	    
	 end
      end
      else begin
	 for(int i=0; i<3;i++) begin :ptr_set
	    kob_head_ptr[i] <= kob_head_ptr_next[i];
	    kob_tail_ptr[i] <= kob_tail_ptr_next[i];	    
	 end	 	 
      end
   end


   
   always_comb begin
      
      kob_head_ptr_next = kob_head_ptr;
      kob_tail_ptr_next = kob_tail_ptr;
      
      
      foreach(u_chn_set_valid[i]) begin
	 if(u_chn_set_valid[i])
	 kob_head_ptr_next[i] = kob_head_ptr[i] + 1;
      end
      foreach(d_chn_clr_valid[i]) begin
	 if(d_chn_clr_valid[i])
	 kob_tail_ptr_next[i] = kob_tail_ptr[i] + 1;
      end
     
   end
      

//set and clear data
      
   always_ff@(posedge clk) begin:entry
      if(!rstn) begin
	 for(int i=0; i<KOB_DEPTH;i++) begin
	    kob_entry[i] <= '{default:'0};	    
	 end
      end
      else begin
	 for(int i=0; i<KOB_DEPTH; i++) begin
	    if(u_chn_set_valid[i])
	      kob_entry[i][kob_head_ptr[i]] <= {1'b1,kob_req_bank_id[i]};
	    if(d_chn_clr_valid[i])
	      kob_entry[i][kob_tail_ptr[i]] <= '0;	    	    	       
	 end	 	 
      end
   end

      assign d_ch_0_rob_req = kob_entry[0][kob_tail_ptr[0]][2];
      assign d_ch_1_rob_req = kob_entry[1][kob_tail_ptr[1]][2];
      assign d_ch_2_rob_req = kob_entry[2][kob_tail_ptr[2]][2];
      assign d_ch_0_rob_bank_id = kob_entry[0][kob_tail_ptr[0]][1:0];
      assign d_ch_1_rob_bank_id = kob_entry[1][kob_tail_ptr[1]][1:0];
      assign d_ch_2_rob_bank_id = kob_entry[2][kob_tail_ptr[2]][1:0];
      




endmodule

   
