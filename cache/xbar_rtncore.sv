`timescale 1ns/1ps

`include "define.sv"


module xbar_rtncore(/*AUTOARG*/
   // Outputs
   d_bank0_enable, d_bank1_enable, d_bank2_enable, d_bank3_enable,
   u_channel_0_rsp_valid, u_channel_0_rsp_data,
   u_channel_0_rsp_bank_id, u_channel_0_rsp_rob_id,
   u_channel_1_rsp_valid, u_channel_1_rsp_data,
   u_channel_1_rsp_bank_id, u_channel_1_rsp_rob_id,
   u_channel_2_rsp_valid, u_channel_2_rsp_data,
   u_channel_2_rsp_bank_id, u_channel_2_rsp_rob_id,
   // Inputs
   clk, rstn, d_bank0_valid, d_bank0_chl_id, d_bank0_rob_id,
   d_bank0_data, d_bank1_valid, d_bank1_chl_id, d_bank1_rob_id,
   d_bank1_data, d_bank2_valid, d_bank2_chl_id, d_bank2_rob_id,
   d_bank2_data, d_bank3_valid, d_bank3_chl_id, d_bank3_rob_id,
   d_bank3_data, u_channel_0_rsp_ready, u_channel_1_rsp_ready,
   u_channel_2_rsp_ready
   );

   input                  clk;
   input                  rstn;



   input 		  d_bank0_valid;   
   output 		  d_bank0_enable;   
   input [1:0] 		  d_bank0_chl_id; //0 = (read)1 = (write)2 = (flush)3 = (invalidate)
   input [`ROB_WIDTH-1:0] d_bank0_rob_id;   
   input [127:0] 	  d_bank0_data;
   
   input 		  d_bank1_valid;   
   output 		  d_bank1_enable;   
   input [1:0] 		  d_bank1_chl_id; //0 = (read)1 = (write)2 = (flush)3 = (invalidate)
   input [`ROB_WIDTH-1:0] d_bank1_rob_id;   
   input [127:0] 	  d_bank1_data;

   input 		  d_bank2_valid;   
   output 		  d_bank2_enable;   
   input [1:0] 		  d_bank2_chl_id; //0 = (read)1 = (write)2 = (flush)3 = (invalidate)
   input [`ROB_WIDTH-1:0] d_bank2_rob_id;   
   input [127:0] 	  d_bank2_data;

   input 		  d_bank3_valid;   
   output 		  d_bank3_enable;   
   input [1:0] 		  d_bank3_chl_id; //0 = (read)1 = (write)2 = (flush)3 = (invalidate)
   input [`ROB_WIDTH-1:0] d_bank3_rob_id;   
   input [127:0] 	  d_bank3_data;

   output logic 	  u_channel_0_rsp_valid      ;
   input  logic 	  u_channel_0_rsp_ready      ;
   output logic [127: 0]  u_channel_0_rsp_data       ;
   output logic [  1: 0]  u_channel_0_rsp_bank_id    ;
   output [`ROB_WIDTH-1:0] u_channel_0_rsp_rob_id     ;

   output logic 	   u_channel_1_rsp_valid      ;
   input  logic 	   u_channel_1_rsp_ready      ;
   output logic [127: 0]   u_channel_1_rsp_data       ;
   output logic [  1: 0]   u_channel_1_rsp_bank_id    ;
   output [`ROB_WIDTH-1:0] u_channel_1_rsp_rob_id     ;

   output logic 	   u_channel_2_rsp_valid      ;
   input  logic 	   u_channel_2_rsp_ready      ;
   output logic [127: 0]   u_channel_2_rsp_data       ;
   output logic [  1: 0]   u_channel_2_rsp_bank_id    ;
   output [`ROB_WIDTH-1:0] u_channel_2_rsp_rob_id     ;
   
   



///////////////////////////////////////////////////////////   
   logic [2:0] 		  bank0_wptr;
   logic [2:0] 		  bank1_wptr;
   logic [2:0] 		  bank2_wptr;
   logic [2:0] 		  bank3_wptr;
   logic [2:0] 		  n_bank0_wptr;
   logic [2:0] 		  n_bank1_wptr;
   logic [2:0] 		  n_bank2_wptr;
   logic [2:0] 		  n_bank3_wptr;
   logic [2:0] 		  bank0_rptr;
   logic [2:0] 		  bank1_rptr;
   logic [2:0] 		  bank2_rptr;
   logic [2:0] 		  bank3_rptr;
   logic [2:0] 		  bank_rptr[3:0];
   logic [2:0] 		  n_bank0_rptr;
   logic [2:0] 		  n_bank1_rptr;
   logic [2:0] 		  n_bank2_rptr;   
   logic [2:0] 		  n_bank3_rptr;   
   logic [2:0] 		  bank0_used_entry;
   logic [2:0] 		  bank1_used_entry;
   logic [2:0] 		  bank2_used_entry;
   logic [2:0] 		  bank3_used_entry;
   logic [2:0] 		  n_bank0_used_entry;
   logic [2:0] 		  n_bank1_used_entry;
   logic [2:0] 		  n_bank2_used_entry;
   logic [2:0] 		  n_bank3_used_entry;
   logic [`ROB_WIDTH-1:0] be_buffer_rob_id[3:0][4:0];
   logic [127:0] 	  be_buffer_data[3:0][4:0];

   

   logic 		  downstream_bank0_kickoff;
   logic 		  downstream_bank1_kickoff;
   logic 		  downstream_bank2_kickoff;
   logic 		  downstream_bank3_kickoff;
   logic 		  bank0_last_entry_already_pop;
   logic 		  bank1_last_entry_already_pop;
   logic 		  bank2_last_entry_already_pop;
   logic 		  bank3_last_entry_already_pop;

   //logic [4:0] 		  bce_array_valid [2:0][3:0];
   //logic [4:0] 		  bce_array_invalidate [2:0][3:0];
   //logic [4:0] 		  n_bce_array_valid [2:0][3:0];

   logic  		  bce_array_valid [3:0][2:0][4:0];
   logic  		  bce_array_invalidate [3:0][2:0][4:0];
   logic  		  n_bce_array_valid [3:0][2:0][4:0];

   
   logic [1:0] 		  bank0_channel_map;
   logic [1:0] 		  bank1_channel_map;
   logic [1:0] 		  bank2_channel_map;
   logic [1:0] 		  bank3_channel_map;
   

   logic                  channel_rtn_kickoff[3];
   


   logic                  can_send_to_channel[2:0];


   logic [1:0] 		  bank_selected[2:0];//
   logic [2:0] 		  entry_selected[2:0];//
   logic [2:0] 		  bank_num_found[2:0];

   
   
 
   


   


   
   assign  channel_rtn_kickoff[0] =  u_channel_0_rsp_valid & u_channel_0_rsp_ready;
   assign  channel_rtn_kickoff[1] =  u_channel_1_rsp_valid & u_channel_1_rsp_ready;
   assign  channel_rtn_kickoff[2] =  u_channel_2_rsp_valid & u_channel_2_rsp_ready;

   
   
   
   assign                 downstream_bank0_kickoff = d_bank0_enable & d_bank0_valid;
   assign                 downstream_bank1_kickoff = d_bank1_enable & d_bank1_valid;
   assign                 downstream_bank2_kickoff = d_bank2_enable & d_bank2_valid;
   assign                 downstream_bank3_kickoff = d_bank3_enable & d_bank3_valid;

   assign                 bank_rptr[0] = bank0_rptr;
   assign                 bank_rptr[1] = bank1_rptr;
   assign                 bank_rptr[2] = bank2_rptr;
   assign                 bank_rptr[3] = bank3_rptr;
   

   logic [2:0] 		  bce_sel_current_bank_entryid_want_send_to_channel[3:0][2:0];
   logic 		  bce_sel_current_bank_have_entry_want_send_to_channel[3:0][2:0];
   logic 		  bce_sel_current_channel_have_entry_want_send[2:0][3:0];
   logic [1:0]		  bce_sel_current_channel_bank_num_want_send[2:0];
   logic [1:0]		  n_bce_sel_current_channel_bank_num_want_send[2:0]; //need n_* because need previous arbitration result
   

   always_ff@(posedge clk) begin
      if (!rstn) begin
	 bank0_wptr <= '0;
	 bank1_wptr <= '0;
	 bank2_wptr <= '0;
	 bank3_wptr <= '0;
	 bank0_rptr <= '0;
	 bank1_rptr <= '0;
	 bank2_rptr <= '0;
	 bank3_rptr <= '0;
	 bank0_used_entry <= '0;
	 bank1_used_entry <= '0;
	 bank2_used_entry <= '0;	 
	 bank3_used_entry <= '0;	 
      end
      else begin
	 bank0_rptr <= n_bank0_rptr;
	 bank1_rptr <= n_bank1_rptr;
	 bank2_rptr <= n_bank2_rptr;
	 bank3_rptr <= n_bank3_rptr;
         bank0_wptr <= n_bank0_wptr;
	 bank1_wptr <= n_bank1_wptr;
	 bank2_wptr <= n_bank2_wptr;
	 bank3_wptr <= n_bank3_wptr;
	 bank0_used_entry <= n_bank0_used_entry;
	 bank1_used_entry <= n_bank1_used_entry;
	 bank2_used_entry <= n_bank2_used_entry;
	 bank3_used_entry <= n_bank3_used_entry;
      end
   end // always_ff@ (posedge clk)
   
   always_ff@(posedge clk) begin
      if (!rstn) begin
	 be_buffer_data <= '{default: '{default: 'b0}};
	 be_buffer_rob_id <= '{default: '{default: 'b0}};	 
      end
      else begin
	 if(downstream_bank0_kickoff) begin
	    be_buffer_data[0][bank0_wptr] <= d_bank0_data;
	    be_buffer_rob_id[0][bank0_wptr] <= d_bank0_rob_id;
	 end
	 if(downstream_bank1_kickoff) begin
	    be_buffer_data[1][bank1_wptr] <= d_bank1_data;
	    be_buffer_rob_id[1][bank1_wptr] <= d_bank1_rob_id;
	 end
	 if(downstream_bank2_kickoff) begin
	    be_buffer_data[2][bank2_wptr] <= d_bank2_data;
	    be_buffer_rob_id[2][bank2_wptr] <= d_bank2_rob_id;
	 end
	 if(downstream_bank3_kickoff) begin
	    be_buffer_data[3][bank3_wptr] <= d_bank3_data;
	    be_buffer_rob_id[3][bank3_wptr] <= d_bank3_rob_id;
	 end	 
      end
   end // always_ff@ (posedge clk)
   
   assign d_bank0_enable =  (bank0_used_entry == 'd5)? 0 : 1'd1;
   assign d_bank1_enable =  (bank1_used_entry == 'd5)? 0 : 1'd1;
   assign d_bank2_enable =  (bank2_used_entry == 'd5)? 0 : 1'd1;
   assign d_bank3_enable =  (bank3_used_entry == 'd5)? 0 : 1'd1;
   

   always@(*)begin
      n_bank0_wptr = bank0_wptr;
      n_bank0_rptr = bank0_rptr;
      n_bank0_used_entry = bank0_used_entry;
      n_bank1_wptr = bank1_wptr;
      n_bank1_rptr = bank1_rptr;
      n_bank1_used_entry = bank1_used_entry;
      n_bank2_wptr = bank2_wptr;
      n_bank2_rptr = bank2_rptr;
      n_bank2_used_entry = bank2_used_entry;  
      n_bank3_wptr = bank3_wptr;
      n_bank3_rptr = bank3_rptr;
      n_bank3_used_entry = bank3_used_entry;      
      if(downstream_bank0_kickoff)begin //
	   n_bank0_used_entry = n_bank0_used_entry + 1 ;
	 if(bank0_wptr == 'd4)
	   n_bank0_wptr = 'd0;
	 else
	   n_bank0_wptr = bank0_wptr + 'd1;
      end
      if((bank0_used_entry!='d0) && (bank0_last_entry_already_pop))begin //
	   n_bank0_used_entry = n_bank0_used_entry - 1;
	 if(bank0_rptr == 'd4)
	   n_bank0_rptr = 'd0;
	 else
	   n_bank0_rptr = bank0_rptr + 'd1;
      end
      
      if(downstream_bank1_kickoff)begin //
	   n_bank1_used_entry = n_bank1_used_entry + 1 ;
	 if(bank1_wptr == 'd4)
	   n_bank1_wptr = 'd0;
	 else
	   n_bank1_wptr = bank1_wptr + 'd1;
      end
      if((bank1_used_entry!='d0) && (bank1_last_entry_already_pop))begin //
	   n_bank1_used_entry = n_bank1_used_entry - 1;
	 if(bank1_rptr == 'd4)
	   n_bank1_rptr = 'd0;
	 else
	   n_bank1_rptr = bank1_rptr + 'd1;
      end

      
      if(downstream_bank2_kickoff)begin //
	   n_bank2_used_entry = n_bank2_used_entry + 1 ;
	 if(bank2_wptr == 'd4)
	   n_bank2_wptr = 'd0;
	 else
	   n_bank2_wptr = bank2_wptr + 'd1;
      end
      
      if((bank2_used_entry!='d0) && (bank2_last_entry_already_pop))begin //
	   n_bank2_used_entry = n_bank2_used_entry - 1;
	 if(bank2_rptr == 'd4)
	   n_bank2_rptr = 'd0;
	 else
	   n_bank2_rptr = bank2_rptr + 'd1;
      end 

      if(downstream_bank3_kickoff)begin //
	   n_bank3_used_entry = n_bank3_used_entry + 1 ;
	 if(bank3_wptr == 'd4)
	   n_bank3_wptr = 'd0;
	 else
	   n_bank3_wptr = bank3_wptr + 'd1;
      end
      
      if((bank3_used_entry!='d0) && (bank3_last_entry_already_pop))begin //
	   n_bank3_used_entry = n_bank3_used_entry - 1;
	 if(bank3_rptr == 'd4)
	   n_bank3_rptr = 'd0;
	 else
	   n_bank3_rptr = bank3_rptr + 'd1;
      end     
   end
   assign bank0_last_entry_already_pop =
				      (bce_array_valid[0][0][bank0_rptr] == 0) &&
				      (bce_array_valid[0][1][bank0_rptr] == 0) &&
				      (bce_array_valid[0][2][bank0_rptr] == 0) ; //channel0 

   assign bank1_last_entry_already_pop =
				      (bce_array_valid[0][0][bank1_rptr] == 0) &&
				      (bce_array_valid[0][1][bank1_rptr] == 0) &&
				      (bce_array_valid[0][2][bank1_rptr] == 0) ; //channel1 
   
   assign bank2_last_entry_already_pop =
				      (bce_array_valid[0][0][bank2_rptr] == 0) &&
				      (bce_array_valid[0][1][bank2_rptr] == 0) &&
				      (bce_array_valid[0][2][bank2_rptr] == 0) ; //channel2 
   assign bank3_last_entry_already_pop =
				      (bce_array_valid[0][0][bank3_rptr] == 0) &&
				      (bce_array_valid[0][1][bank3_rptr] == 0) &&
				      (bce_array_valid[0][2][bank3_rptr] == 0) ; //channel2 

   // valid array
     //bank map
   assign bank0_channel_map = d_bank0_chl_id;
   assign bank1_channel_map = d_bank1_chl_id;
   assign bank2_channel_map = d_bank2_chl_id;
   assign bank3_channel_map = d_bank3_chl_id;
   

   
      
   always_ff@(posedge clk) begin
      if (!rstn) begin
	 bce_array_valid <= '{default: '{default: '{default: 1'b0}}};
 
      end
      else begin
	 bce_array_valid <= n_bce_array_valid;	 
      end
   end // always_ff@ (posedge clk)

   
   always_comb begin
      int i,j,k;
      
      n_bce_array_valid = bce_array_valid;
      for (i = 0; i < 4; i++) begin
	 for (j = 0; j < 4; j++) begin
	    for (k = 0; k < 5; k++) begin
	       n_bce_array_valid[i][j][k] = bce_array_valid[i][j][k] & ~bce_array_invalidate[i][j][k];
	    end
	 end
      end  
      if(downstream_bank0_kickoff)
	n_bce_array_valid[0][bank0_channel_map][bank0_wptr] = 1'b1;
      if(downstream_bank1_kickoff)
	n_bce_array_valid[1][bank1_channel_map][bank1_wptr] = 1'b1;
      if(downstream_bank2_kickoff)
	n_bce_array_valid[2][bank2_channel_map][bank2_wptr] = 1'b1;
      if(downstream_bank3_kickoff)
	n_bce_array_valid[3][bank3_channel_map][bank3_wptr] = 1'b1;       
   end


   //for each channel, find the oldest entryid to each bank
         //oldest id that channel 0 want to send to bank i
   /*
         always_comb begin
	    bce_sel_current_bank_entryid_want_send_to_channel[0][0] = find_round_robin(ch0_rptr,bce_array_valid[0][0][4:0]);
	    bce_sel_current_bank_entryid_want_send_to_channel[0][1] = find_round_robin(ch0_rptr,bce_array_valid[0][1][4:0]);
	    bce_sel_current_bank_entryid_want_send_to_channel[0][2] = find_round_robin(ch0_rptr,bce_array_valid[0][2][4:0]);
	    bce_sel_current_bank_entryid_want_send_to_channel[0][3] = find_round_robin(ch0_rptr,bce_array_valid[0][3][4:0]);
	    //oldest id that channel 1 want to send to bank i
	    bce_sel_current_bank_entryid_want_send_to_channel[1][0] = find_round_robin(ch1_rptr,bce_array_valid[1][0][4:0]);
	    bce_sel_current_bank_entryid_want_send_to_channel[1][1] = find_round_robin(ch1_rptr,bce_array_valid[1][1][4:0]);
	    bce_sel_current_bank_entryid_want_send_to_channel[1][2] = find_round_robin(ch1_rptr,bce_array_valid[1][2][4:0]);
	    bce_sel_current_bank_entryid_want_send_to_channel[1][3] = find_round_robin(ch1_rptr,bce_array_valid[1][3][4:0]);
	    //oldest id that channel 2 want to send to bank i
	    bce_sel_current_bank_entryid_want_send_to_channel[2][0] = find_round_robin(ch2_rptr,bce_array_valid[2][0][4:0]);
	    bce_sel_current_bank_entryid_want_send_to_channel[2][1] = find_round_robin(ch2_rptr,bce_array_valid[2][1][4:0]);
	    bce_sel_current_bank_entryid_want_send_to_channel[2][2] = find_round_robin(ch2_rptr,bce_array_valid[2][2][4:0]);
	    bce_sel_current_bank_entryid_want_send_to_channel[2][3] = find_round_robin(ch2_rptr,bce_array_valid[2][3][4:0]);
	 end // always_comb
    */

   genvar i;
   genvar j;
   generate
      for (i = 0; i < 4; i = i + 1) begin : find_entryid_b
	 for (j = 0; j < 3; j = j + 1) begin : find_entryid_c
	 f_bottom inst_frr(
				.bottom_ptr(bank_rptr[i]),
				.valid_array({3'b0,bce_array_valid[i][j][4],bce_array_valid[i][j][3],bce_array_valid[i][j][2],bce_array_valid[i][j][1],bce_array_valid[i][j][0]}),
				.find_round_robin(bce_sel_current_bank_entryid_want_send_to_channel[i][j])	  	
				);	 	 
	 end
      end
   endgenerate
   
   //for each channel, to bank i , is there any data need to send
   /*
   assign bce_sel_current_channel_have_entry_want_send_to_channel[0][0] = |bce_array_valid[0][0][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[0][1] = |bce_array_valid[0][1][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[0][2] = |bce_array_valid[0][2][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[0][3] = |bce_array_valid[0][3][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[1][0] = |bce_array_valid[1][0][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[1][1] = |bce_array_valid[1][1][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[1][2] = |bce_array_valid[1][2][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[1][3] = |bce_array_valid[1][3][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[2][0] = |bce_array_valid[2][0][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[2][1] = |bce_array_valid[2][1][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[2][2] = |bce_array_valid[2][2][4:0];
   assign bce_sel_current_channel_have_entry_want_send_to_channel[2][3] = |bce_array_valid[2][3][4:0];
    */
   always_comb begin
      for (int i=0; i<4; i=i+1) begin
	for (int j=0; j<3; j=j+1)
	  bce_sel_current_bank_have_entry_want_send_to_channel[i][j] = bce_array_valid[i][j][0] | bce_array_valid[i][j][1] |bce_array_valid[i][j][2] | bce_array_valid[i][j][3]| bce_array_valid[i][j][4];  
      end
   end

	 
   
   //reverse matrix
   always_comb begin
      for(int i=0; i<4; i=i+1)   //bank
	for (int j=0; j<3; j=j+1) //channel
	  bce_sel_current_channel_have_entry_want_send[j][i] = bce_sel_current_bank_have_entry_want_send_to_channel[i][j];            
   end
   //for each bank, by arbitration, find the channel that want to send the data
   /*
   assign n_bce_sel_current_channel_bank_num_want_send[0] = find_round_robin(bce_sel_current_channel_bank_num_want_send[0],bce_sel_current_channel_have_entry_want_send[0][2:0]); 
   assign n_bce_sel_current_channel_bank_num_want_send[1] = find_round_robin(bce_sel_current_channel_bank_num_want_send[1],bce_sel_current_channel_have_entry_want_send[1][2:0]); 
   assign n_bce_sel_current_channel_bank_num_want_send[2] = find_round_robin(bce_sel_current_channel_bank_num_want_send[2],bce_sel_current_channel_have_entry_want_send[2][2:0]); 
   assign n_bce_sel_current_channel_bank_num_want_send[3] = find_round_robin(bce_sel_current_channel_bank_num_want_send[3],bce_sel_current_channel_have_entry_want_send[3][2:0]);
    */

   
   genvar k;
   generate
      for (k = 0; k < 3; k = k + 1) begin : find_bank_num
	 f_round_robin inst_frr(
				.bottom_ptr({1'b0,bce_sel_current_channel_bank_num_want_send[k]}),
				.valid_array({4'b0,bce_sel_current_channel_have_entry_want_send[k][3],bce_sel_current_channel_have_entry_want_send[k][2],bce_sel_current_channel_have_entry_want_send[k][1],bce_sel_current_channel_have_entry_want_send[k][0]}),
				.find_round_robin(bank_num_found[k][2:0])	  	
				);	 	 
      end
   endgenerate

   assign  n_bce_sel_current_channel_bank_num_want_send[0] = bank_num_found[0][1:0];
   assign  n_bce_sel_current_channel_bank_num_want_send[1] = bank_num_found[1][1:0];
   assign  n_bce_sel_current_channel_bank_num_want_send[2] = bank_num_found[2][1:0];

   

   always_ff@(posedge clk) begin
      if(!rstn) begin
	 bce_sel_current_channel_bank_num_want_send <= '{default:'d0};
      end
      else begin
	 if (channel_rtn_kickoff[0])
	   bce_sel_current_channel_bank_num_want_send[0] <= n_bce_sel_current_channel_bank_num_want_send[0];
	 if (channel_rtn_kickoff[1])
	   bce_sel_current_channel_bank_num_want_send[1] <= n_bce_sel_current_channel_bank_num_want_send[1];
	 if (channel_rtn_kickoff[2])
	   bce_sel_current_channel_bank_num_want_send[2] <= n_bce_sel_current_channel_bank_num_want_send[2];	 	
      end
   end // always_ff@ (posedge clk)


   //if the entryid found by arbitration is valid?

      // choose channel and entry
   always_comb begin
      for (int i = 0; i < 3; i++) begin
	 bank_selected[i] = n_bce_sel_current_channel_bank_num_want_send[i];
	// entry_selected[i]   = bce_sel_current_bank_entryid_want_send_to_channel[channel_selected[i]][i];	 
       end
   end



   
   
   always_comb begin
      entry_selected   = '{default:'d0};
   //   can_send_to_bank = '{default:'d0};
      for (int m = 0; m < 3; m++) begin
	 case(bank_selected[m])
	 2'd0: begin
	    entry_selected[m]   = bce_sel_current_bank_entryid_want_send_to_channel[0][m];
//	    can_send_to_bank[m] = bce_array_valid[0][m][entry_selected[m]]; 
	 end
	 2'd1:begin
	    entry_selected[m]   = bce_sel_current_bank_entryid_want_send_to_channel[1][m];
//	    can_send_to_bank[m] = bce_array_valid[1][m][entry_selected[m]]; 
	 end
	 2'd2:begin
	    entry_selected[m]   = bce_sel_current_bank_entryid_want_send_to_channel[2][m];
//	    can_send_to_bank[m] = bce_array_valid[2][m][entry_selected[m]];
	 end
	 2'd3:begin
	    entry_selected[m]   = bce_sel_current_bank_entryid_want_send_to_channel[3][m];
//	    can_send_to_bank[m] = bce_array_valid[2][m][entry_selected[m]]; 	    
	 end
	 default: begin
	    entry_selected   = '{default:'d0};
//	    can_send_to_bank = '{default:'d0};
	 end
	 endcase
	 end   
   end

   
   assign can_send_to_channel[0] = bce_array_valid[bank_selected[0]][0][entry_selected[0]];
   assign can_send_to_channel[1] = bce_array_valid[bank_selected[1]][1][entry_selected[1]];
   assign can_send_to_channel[2] = bce_array_valid[bank_selected[2]][2][entry_selected[2]];

   //**************** now find the entry id and channel id for each bank i
   //**************** channel id  : n_bce_sel_current_channel_bank_num_want_send[i]
   //**************** entry id    : bce_sel_current_bank_entryid_want_send_to_channel[[n_bce_sel_current_channel_bank_num_want_send][i]]
   // !!! use n_bce_sel_current_bank_... rather than bce_sel......  because need to record the channel result of last time to do "round_robin" arbitration !!!  
   
   //after downstream_channel_kickoff,invalidate valid array
   always_comb begin
      bce_array_invalidate = '{default: '{default: '{default: 1'b0}}};
      for (int i = 0; i < 3; i++) begin
	 if(channel_rtn_kickoff[i])
	 bce_array_invalidate[bank_selected[i]][i][entry_selected[i]] = 1'd1;
      end

   end

   //downstream_kickoff_logic, xbar ----> channel
   
   
   



   assign u_channel_0_rsp_valid = can_send_to_channel[0];
   assign u_channel_1_rsp_valid = can_send_to_channel[1];
   assign u_channel_2_rsp_valid = can_send_to_channel[2];
  
   
 

   //downstream_valid
  
   
   
  
   
   //read out data and send to corresponding bank
   //bank 0


	assign u_channel_0_rsp_data    = be_buffer_data[bank_selected[0]][entry_selected[0]];
        assign u_channel_0_rsp_rob_id  = be_buffer_rob_id[bank_selected[0]][entry_selected[0]];
	assign u_channel_0_rsp_bank_id = bank_selected[0];
	assign u_channel_1_rsp_data    = be_buffer_data[bank_selected[1]][entry_selected[1]];
        assign u_channel_1_rsp_rob_id  = be_buffer_rob_id[bank_selected[1]][entry_selected[1]];
	assign u_channel_1_rsp_bank_id = bank_selected[1];
	assign u_channel_2_rsp_data    = be_buffer_data[bank_selected[2]][entry_selected[2]];
        assign u_channel_2_rsp_rob_id  = be_buffer_rob_id[bank_selected[2]][entry_selected[2]];
	assign u_channel_2_rsp_bank_id = bank_selected[2];
   

 




  
      

   



   ////////////////////function//////////////////////


/*
   function logic[2:0] find_round_robin
     (
      input logic [2:0] bottom_ptr,
      input logic [7:0] valid_array
      );
      logic [7:0] 	valid_arrry_aftet_shift;
        valid_arrry_aftet_shift = (valid_array>>bottom_ptr) | valid_array>>(8-bottom_ptr);
      if (valid_arrry_aftet_shift[1])
	find_round_robin = bottom_ptr+1;
      else if (valid_arrry_aftet_shift[2])
	find_round_robin = bottom_ptr+2;
      else if (valid_arrry_aftet_shift[3])
	find_round_robin = bottom_ptr+3;
      else if (valid_arrry_aftet_shift[4])
	find_round_robin = bottom_ptr+4;
      else if (valid_arrry_aftet_shift[5])
	find_round_robin = bottom_ptr+5;
      else if (valid_arrry_aftet_shift[6])
	find_round_robin = bottom_ptr+6;
      else if (valid_arrry_aftet_shift[7])
	find_round_robin = bottom_ptr+7;
      else if (valid_arrry_aftet_shift[0])
	find_round_robin = bottom_ptr;
      else
	find_round_robin = 3'd7;      
      
      
      
   endfunction
*/

   
endmodule // xbar_core

module f_bottom(/*AUTOARG*/
   // Outputs
   find_round_robin,
   // Inputs
   bottom_ptr, valid_array
   );
   input   logic [2:0] bottom_ptr;   
   input   logic [7:0] valid_array;
   output  logic [2:0] find_round_robin;


   logic [7:0] 	valid_arrry_aftet_shift;

   assign     valid_arrry_aftet_shift = (valid_array>>bottom_ptr) | valid_array<<(8-bottom_ptr);
      always_comb begin
	 if (valid_arrry_aftet_shift[0])
	   find_round_robin = bottom_ptr;
	 else if (valid_arrry_aftet_shift[1])
	   find_round_robin = bottom_ptr+1;
	 else if (valid_arrry_aftet_shift[2])
	   find_round_robin = bottom_ptr+2;
	 else if (valid_arrry_aftet_shift[3])
	   find_round_robin = bottom_ptr+3;
	 else if (valid_arrry_aftet_shift[4])
	   find_round_robin = bottom_ptr+4;
	 else if (valid_arrry_aftet_shift[5])
	   find_round_robin = bottom_ptr+5;
	 else if (valid_arrry_aftet_shift[6])
	   find_round_robin = bottom_ptr+6;
	 else if (valid_arrry_aftet_shift[7])
	   find_round_robin = bottom_ptr+7;
	 else
	   find_round_robin = 3'd0;
      end
  
endmodule
module f_round_robin(/*AUTOARG*/
   // Outputs
   find_round_robin,
   // Inputs
   bottom_ptr, valid_array
   );
   input   logic [2:0] bottom_ptr;   
   input   logic [7:0] valid_array;
   output  logic [2:0] find_round_robin;


   logic [7:0] 	valid_arrry_aftet_shift;

   assign     valid_arrry_aftet_shift = (valid_array>>bottom_ptr) | valid_array<<(8-bottom_ptr);
      always_comb begin
	 if (valid_arrry_aftet_shift[1])
	   find_round_robin = bottom_ptr+1;
	 else if (valid_arrry_aftet_shift[2])
	   find_round_robin = bottom_ptr+2;
	 else if (valid_arrry_aftet_shift[3])
	   find_round_robin = bottom_ptr+3;
	 else if (valid_arrry_aftet_shift[4])
	   find_round_robin = bottom_ptr+4;
	 else if (valid_arrry_aftet_shift[5])
	   find_round_robin = bottom_ptr+5;
	 else if (valid_arrry_aftet_shift[6])
	   find_round_robin = bottom_ptr+6;
	 else if (valid_arrry_aftet_shift[7])
	   find_round_robin = bottom_ptr+7;
	 else if (valid_arrry_aftet_shift[0])
	   find_round_robin = bottom_ptr;
	 else
	   find_round_robin = 3'd0;
      end
  
endmodule



