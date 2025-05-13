`timescale 1ns/1ps


module xbar_core(/*AUTOARG*/
   // Outputs
   mpc_channel0_enable, mpc_channel1_enable, mpc_channel2_enable,
   mpc_xbar_htu_valid, mpc_xbar_htu_channel_id, mpc_xbar_htu_op_code,
   mpc_xbar_htu_addr, mpc_xbar_htu_set, mpc_xbar_htu_wbuffer_id,
   mpc_xbar_wbuf_req_valid, mpc_xbar_wbuf_req_channel_id,
   mpc_xbar_wbuf_req_data, mpc_xbar_wbuf_req_wbuffer_id,
   // Inputs
   clk, rstn, mpc_channel0_valid, mpc_channel0_op,
   mpc_channel0_address, mpc_channel0_data, mpc_channel1_valid,
   mpc_channel1_op, mpc_channel1_address, mpc_channel1_data,
   mpc_channel2_valid, mpc_channel2_op, mpc_channel2_address,
   mpc_channel2_data, mpc_xbar_htu_enable, mpc_xbar_wbuf_req_enable,
   mpc_xbar_wbuf_rtn_free_id
   );

   input                  clk;
   input                  rstn;



   input 		  mpc_channel0_valid;   
   output 		  mpc_channel0_enable;   
   input [2:0] 		  mpc_channel0_op; //0 = (read)1 = (write)2 = (flush)3 = (invalidate)
   input [31:4] 	  mpc_channel0_address;   
   input [127:0] 	  mpc_channel0_data;
   
   input 		  mpc_channel1_valid;   
   output 		  mpc_channel1_enable;   
   input [2:0] 		  mpc_channel1_op; //0 = (read)1 = (write)2 = (flush)3 = (invalidate)
   input [31:4] 	  mpc_channel1_address;   
   input [127:0] 	  mpc_channel1_data;

   input 		  mpc_channel2_valid;   
   output 		  mpc_channel2_enable;   
   input [2:0] 		  mpc_channel2_op; //0 = (read)1 = (write)2 = (flush)3 = (invalidate)
   input [31:4] 	  mpc_channel2_address;   
   input [127:0] 	  mpc_channel2_data;

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
   



///////////////////////////////////////////////////////////   
   logic [2:0] 		  ch0_wptr;
   logic [2:0] 		  ch1_wptr;
   logic [2:0] 		  ch2_wptr;
   logic [2:0] 		  n_ch0_wptr;
   logic [2:0] 		  n_ch1_wptr;
   logic [2:0] 		  n_ch2_wptr;
   logic [2:0] 		  ch0_rptr;
   logic [2:0] 		  ch1_rptr;
   logic [2:0] 		  ch2_rptr;
   logic [2:0] 		  ch_rptr[2:0];
   logic [2:0] 		  n_ch0_rptr;
   logic [2:0] 		  n_ch1_rptr;
   logic [2:0] 		  n_ch2_rptr;   
   logic [2:0] 		  ch0_used_entry;
   logic [2:0] 		  ch1_used_entry;
   logic [2:0] 		  ch2_used_entry;
   logic [2:0] 		  n_ch0_used_entry;
   logic [2:0] 		  n_ch1_used_entry;
   logic [2:0] 		  n_ch2_used_entry;
   logic [31:4] 	  ce_buffer_addr[2:0][4:0];
   logic [2:0] 		  ce_buffer_op[2:0][4:0];
   logic [127:0] 	  ce_buffer_data[2:0][4:0];

   

   logic 		  upstream_ch0_kickoff;
   logic 		  upstream_ch1_kickoff;
   logic 		  upstream_ch2_kickoff;
   logic 		  ch0_last_entry_already_pop;
   logic 		  ch1_last_entry_already_pop;
   logic 		  ch2_last_entry_already_pop;

   //logic [4:0] 		  cbe_array_valid [2:0][3:0];
   //logic [4:0] 		  cbe_array_invalidate [2:0][3:0];
   //logic [4:0] 		  n_cbe_array_valid [2:0][3:0];

   logic  		  cbe_array_valid [2:0][3:0][4:0];
   logic  		  cbe_array_invalidate [2:0][3:0][4:0];
   logic  		  n_cbe_array_valid [2:0][3:0][4:0];

   
   logic [1:0] 		  ch0_bank_map;
   logic [1:0] 		  ch1_bank_map;
   logic [1:0] 		  ch2_bank_map;


   logic                  can_send_to_bank[3:0];

   logic                  htu_already_kickoff[3:0];
   logic                  htu_kickoff[3:0];
   logic                  n_htu_already_kickoff[3:0];
   logic                  n_wbuf_already_kickoff[3:0];
   logic                  wbuf_already_kickoff[3:0];
   logic                  wbuf_kickoff[3:0];
   logic                  upstream_bank_valid[3:0];
   logic                  upstream_bank_enable[3:0];
   logic                  upstream_bank_kickoff[3:0];

   logic [1:0] 		  channel_selected[3:0];//channel_selected by bank 0 to 3
   logic [2:0] 		  entry_selected[3:0];//channel_selected by bank 0 to 3
   logic [2:0] 		  channel_num_found[3:0];
   int 			  channel_num_int[3:0];
   
   
 
   

   
   
   
   
   
   
   assign                 upstream_ch0_kickoff = mpc_channel0_enable & mpc_channel0_valid;
   assign                 upstream_ch1_kickoff = mpc_channel1_enable & mpc_channel1_valid;
   assign                 upstream_ch2_kickoff = mpc_channel2_enable & mpc_channel2_valid;

   assign                 ch_rptr[0] = ch0_rptr;
   assign                 ch_rptr[1] = ch1_rptr;
   assign                 ch_rptr[2] = ch2_rptr;
   

   logic [2:0] 		  cbe_sel_current_channel_entryid_want_send_to_bank [2:0][3:0];
   logic 		  cbe_sel_current_channel_have_entry_want_send_to_bank [2:0][3:0];
   logic 		  cbe_sel_current_bank_have_entry_want_send[3:0][2:0];
   logic [1:0]		  cbe_sel_current_bank_channel_num_want_send[3:0];
   logic [1:0]		  n_cbe_sel_current_bank_channel_num_want_send[3:0]; //need n_* because need previous arbitration result
   

   always_ff@(posedge clk) begin
      if (!rstn) begin
	 ch0_wptr <= '0;
	 ch1_wptr <= '0;
	 ch2_wptr <= '0;
	 ch0_rptr <= '0;
	 ch1_rptr <= '0;
	 ch2_rptr <= '0;
	 ch0_used_entry <= '0;
	 ch1_used_entry <= '0;
	 ch2_used_entry <= '0;	 
      end
      else begin
	 ch0_rptr <= n_ch0_rptr;
	 ch1_rptr <= n_ch1_rptr;
	 ch2_rptr <= n_ch2_rptr;
         ch0_wptr <= n_ch0_wptr;
	 ch1_wptr <= n_ch1_wptr;
	 ch2_wptr <= n_ch2_wptr;
	 ch0_used_entry <= n_ch0_used_entry;
	 ch1_used_entry <= n_ch1_used_entry;
	 ch2_used_entry <= n_ch2_used_entry;
      end
   end // always_ff@ (posedge clk)
   
   always_ff@(posedge clk) begin
      if (!rstn) begin
	 ce_buffer_data <= '{default: '{default: 'b0}};
	 ce_buffer_addr <= '{default: '{default: 'b0}};
	 ce_buffer_op   <= '{default: '{default: 'b0}};	 
      end
      else begin
	 if(upstream_ch0_kickoff) begin
	    ce_buffer_data[0][ch0_wptr] <= mpc_channel0_data;
	    ce_buffer_addr[0][ch0_wptr] <= mpc_channel0_address;
	    ce_buffer_op[0][ch0_wptr]   <= mpc_channel0_op;
	 end
	 if(upstream_ch1_kickoff) begin
	    ce_buffer_data[1][ch1_wptr] <= mpc_channel1_data;
	    ce_buffer_addr[1][ch1_wptr] <= mpc_channel1_address;
	    ce_buffer_op[1][ch1_wptr]   <= mpc_channel1_op;
	 end
	 if(upstream_ch2_kickoff) begin
	    ce_buffer_data[2][ch2_wptr] <= mpc_channel2_data;
	    ce_buffer_addr[2][ch2_wptr] <= mpc_channel2_address;
	    ce_buffer_op[2][ch2_wptr]   <= mpc_channel2_op;
	 end
      end
   end // always_ff@ (posedge clk)
   
   assign mpc_channel0_enable =  (ch0_used_entry == 'd5)? 0 : 1'd1;
   assign mpc_channel1_enable =  (ch1_used_entry == 'd5)? 0 : 1'd1;
   assign mpc_channel2_enable =  (ch2_used_entry == 'd5)? 0 : 1'd1;
   

   always@(*)begin
      n_ch0_wptr = ch0_wptr;
      n_ch0_rptr = ch0_rptr;
      n_ch0_used_entry = ch0_used_entry;
      n_ch1_wptr = ch1_wptr;
      n_ch1_rptr = ch1_rptr;
      n_ch1_used_entry = ch1_used_entry;
      n_ch2_wptr = ch2_wptr;
      n_ch2_rptr = ch2_rptr;
      n_ch2_used_entry = ch2_used_entry;      
      if(upstream_ch0_kickoff)begin //
	   n_ch0_used_entry = n_ch0_used_entry + 1 ;
	 if(ch0_wptr == 'd4)
	   n_ch0_wptr = 'd0;
	 else
	   n_ch0_wptr = ch0_wptr + 'd1;
      end
      if((ch0_used_entry!='d0) && (ch0_last_entry_already_pop))begin //
	   n_ch0_used_entry = n_ch0_used_entry - 1;
	 if(ch0_rptr == 'd4)
	   n_ch0_rptr = 'd0;
	 else
	   n_ch0_rptr = ch0_rptr + 'd1;
      end
      
      if(upstream_ch1_kickoff)begin //
	   n_ch1_used_entry = n_ch1_used_entry + 1 ;
	 if(ch1_wptr == 'd4)
	   n_ch1_wptr = 'd0;
	 else
	   n_ch1_wptr = ch1_wptr + 'd1;
      end
      if((ch1_used_entry!='d0) && (ch1_last_entry_already_pop))begin //
	   n_ch1_used_entry = n_ch1_used_entry - 1;
	 if(ch1_rptr == 'd4)
	   n_ch1_rptr = 'd0;
	 else
	   n_ch1_rptr = ch1_rptr + 'd1;
      end

      
      if(upstream_ch2_kickoff)begin //
	   n_ch2_used_entry = n_ch2_used_entry + 1 ;
	 if(ch2_wptr == 'd4)
	   n_ch2_wptr = 'd0;
	 else
	   n_ch2_wptr = ch2_wptr + 'd1;
      end
      if((ch2_used_entry!='d0) && (ch2_last_entry_already_pop))begin //
	   n_ch2_used_entry = n_ch2_used_entry - 1;
	 if(ch2_rptr == 'd4)
	   n_ch2_rptr = 'd0;
	 else
	   n_ch2_rptr = ch2_rptr + 'd1;
      end      
   end
   assign ch0_last_entry_already_pop =
				      (cbe_array_valid[0][0][ch0_rptr] == 0) &&
				      (cbe_array_valid[0][1][ch0_rptr] == 0) &&
				      (cbe_array_valid[0][2][ch0_rptr] == 0) &&
				      (cbe_array_valid[0][3][ch0_rptr] == 0 ); //channel0 

   assign ch1_last_entry_already_pop =
				      (cbe_array_valid[0][0][ch1_rptr] == 0) &&
				      (cbe_array_valid[0][1][ch1_rptr] == 0) &&
				      (cbe_array_valid[0][2][ch1_rptr] == 0) &&
				      (cbe_array_valid[0][3][ch1_rptr] == 0 ); //channel1 
   
   assign ch2_last_entry_already_pop =
				      (cbe_array_valid[0][0][ch2_rptr] == 0) &&
				      (cbe_array_valid[0][1][ch2_rptr] == 0) &&
				      (cbe_array_valid[0][2][ch2_rptr] == 0) &&
				      (cbe_array_valid[0][3][ch2_rptr] == 0 ); //channel2 


   // valid array
     //bank map
   assign ch0_bank_map = mpc_channel0_address[9:8];
   assign ch1_bank_map = mpc_channel1_address[9:8];
   assign ch2_bank_map = mpc_channel2_address[9:8];
   

   
      
   always_ff@(posedge clk) begin
      if (!rstn) begin
	 cbe_array_valid <= '{default: '{default: '{default: 1'b0}}};
 
      end
      else begin
	 cbe_array_valid <= n_cbe_array_valid;	 
      end
   end // always_ff@ (posedge clk)

   
   always_comb begin
      int i,j,k;
      
      n_cbe_array_valid = cbe_array_valid;
      for (i = 0; i < 3; i++) begin
	 for (j = 0; j < 4; j++) begin
	    for (k = 0; k < 5; k++) begin
	       n_cbe_array_valid[i][j][k] = cbe_array_valid[i][j][k] & ~cbe_array_invalidate[i][j][k];
	    end
	 end
      end  
      if(upstream_ch0_kickoff)
	n_cbe_array_valid[0][ch0_bank_map][ch0_wptr] = 1'b1;
      if(upstream_ch1_kickoff)
	n_cbe_array_valid[1][ch1_bank_map][ch1_wptr] = 1'b1;
      if(upstream_ch2_kickoff)
	n_cbe_array_valid[2][ch2_bank_map][ch2_wptr] = 1'b1;      
   end


   //for each channel, find the oldest entryid to each bank
         //oldest id that channel 0 want to send to bank i
   /*
         always_comb begin
	    cbe_sel_current_channel_entryid_want_send_to_bank[0][0] = find_round_robin(ch0_rptr,cbe_array_valid[0][0][4:0]);
	    cbe_sel_current_channel_entryid_want_send_to_bank[0][1] = find_round_robin(ch0_rptr,cbe_array_valid[0][1][4:0]);
	    cbe_sel_current_channel_entryid_want_send_to_bank[0][2] = find_round_robin(ch0_rptr,cbe_array_valid[0][2][4:0]);
	    cbe_sel_current_channel_entryid_want_send_to_bank[0][3] = find_round_robin(ch0_rptr,cbe_array_valid[0][3][4:0]);
	    //oldest id that channel 1 want to send to bank i
	    cbe_sel_current_channel_entryid_want_send_to_bank[1][0] = find_round_robin(ch1_rptr,cbe_array_valid[1][0][4:0]);
	    cbe_sel_current_channel_entryid_want_send_to_bank[1][1] = find_round_robin(ch1_rptr,cbe_array_valid[1][1][4:0]);
	    cbe_sel_current_channel_entryid_want_send_to_bank[1][2] = find_round_robin(ch1_rptr,cbe_array_valid[1][2][4:0]);
	    cbe_sel_current_channel_entryid_want_send_to_bank[1][3] = find_round_robin(ch1_rptr,cbe_array_valid[1][3][4:0]);
	    //oldest id that channel 2 want to send to bank i
	    cbe_sel_current_channel_entryid_want_send_to_bank[2][0] = find_round_robin(ch2_rptr,cbe_array_valid[2][0][4:0]);
	    cbe_sel_current_channel_entryid_want_send_to_bank[2][1] = find_round_robin(ch2_rptr,cbe_array_valid[2][1][4:0]);
	    cbe_sel_current_channel_entryid_want_send_to_bank[2][2] = find_round_robin(ch2_rptr,cbe_array_valid[2][2][4:0]);
	    cbe_sel_current_channel_entryid_want_send_to_bank[2][3] = find_round_robin(ch2_rptr,cbe_array_valid[2][3][4:0]);
	 end // always_comb
    */

   genvar i;
   genvar j;
   generate
      for (i = 0; i < 3; i = i + 1) begin : find_entryid_c
	 for (j = 0; j < 4; j = j + 1) begin : find_entryid_b
	 f_bottom inst_frr(
				.bottom_ptr(ch_rptr[i]),
				.valid_array({3'b0,cbe_array_valid[i][j][4],cbe_array_valid[i][j][3],cbe_array_valid[i][j][2],cbe_array_valid[i][j][1],cbe_array_valid[i][j][0]}),
				.find_round_robin(cbe_sel_current_channel_entryid_want_send_to_bank[i][j])	  	
				);	 	 
	 end
      end
   endgenerate
   
   //for each channel, to bank i , is there any data need to send
   /*
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[0][0] = |cbe_array_valid[0][0][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[0][1] = |cbe_array_valid[0][1][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[0][2] = |cbe_array_valid[0][2][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[0][3] = |cbe_array_valid[0][3][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[1][0] = |cbe_array_valid[1][0][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[1][1] = |cbe_array_valid[1][1][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[1][2] = |cbe_array_valid[1][2][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[1][3] = |cbe_array_valid[1][3][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[2][0] = |cbe_array_valid[2][0][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[2][1] = |cbe_array_valid[2][1][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[2][2] = |cbe_array_valid[2][2][4:0];
   assign cbe_sel_current_channel_have_entry_want_send_to_bank[2][3] = |cbe_array_valid[2][3][4:0];
    */
   always_comb begin
      for (int i=0; i<3; i=i+1) begin
	for (int j=0; j<4; j=j+1)
	  cbe_sel_current_channel_have_entry_want_send_to_bank[i][j] = cbe_array_valid[i][j][0] | cbe_array_valid[i][j][1] |cbe_array_valid[i][j][2] | cbe_array_valid[i][j][3]| cbe_array_valid[i][j][4];  
      end
   end

	 
   
   //reverse matrix
   always_comb begin
      for(int i=0; i<3; i=i+1)   //channel
	for (int j=0; j<4; j=j+1) //bank
	  cbe_sel_current_bank_have_entry_want_send[j][i] = cbe_sel_current_channel_have_entry_want_send_to_bank[i][j];            
   end
   //for each bank, by arbitration, find the channel that want to send the data
   /*
   assign n_cbe_sel_current_bank_channel_num_want_send[0] = find_round_robin(cbe_sel_current_bank_channel_num_want_send[0],cbe_sel_current_bank_have_entry_want_send[0][2:0]); 
   assign n_cbe_sel_current_bank_channel_num_want_send[1] = find_round_robin(cbe_sel_current_bank_channel_num_want_send[1],cbe_sel_current_bank_have_entry_want_send[1][2:0]); 
   assign n_cbe_sel_current_bank_channel_num_want_send[2] = find_round_robin(cbe_sel_current_bank_channel_num_want_send[2],cbe_sel_current_bank_have_entry_want_send[2][2:0]); 
   assign n_cbe_sel_current_bank_channel_num_want_send[3] = find_round_robin(cbe_sel_current_bank_channel_num_want_send[3],cbe_sel_current_bank_have_entry_want_send[3][2:0]);
    */

   
   genvar k;
   generate
      for (k = 0; k < 4; k = k + 1) begin : find_channel_num
	 f_round_robin inst_frr(
				.bottom_ptr({1'b0,cbe_sel_current_bank_channel_num_want_send[k]}),
				.valid_array({5'b0,cbe_sel_current_bank_have_entry_want_send[k][2],cbe_sel_current_bank_have_entry_want_send[k][1],cbe_sel_current_bank_have_entry_want_send[k][0]}),
				.find_round_robin(channel_num_found[k][2:0])	  	
				);	 	 
      end
   endgenerate

   assign  n_cbe_sel_current_bank_channel_num_want_send[0] = channel_num_found[0][1:0];
   assign  n_cbe_sel_current_bank_channel_num_want_send[1] = channel_num_found[1][1:0];
   assign  n_cbe_sel_current_bank_channel_num_want_send[2] = channel_num_found[2][1:0];
   assign  n_cbe_sel_current_bank_channel_num_want_send[3] = channel_num_found[3][1:0];
   

   always_ff@(posedge clk) begin
      if(!rstn) begin
	 cbe_sel_current_bank_channel_num_want_send <= '{default:'d0};
      end
      else begin
	 if (upstream_bank_kickoff[0])
	   cbe_sel_current_bank_channel_num_want_send[0] <= n_cbe_sel_current_bank_channel_num_want_send[0];
	 if (upstream_bank_kickoff[1])
	   cbe_sel_current_bank_channel_num_want_send[1] <= n_cbe_sel_current_bank_channel_num_want_send[1];
	 if (upstream_bank_kickoff[2])
	   cbe_sel_current_bank_channel_num_want_send[2] <= n_cbe_sel_current_bank_channel_num_want_send[2];
	 if (upstream_bank_kickoff[3])
	   cbe_sel_current_bank_channel_num_want_send[3] <= n_cbe_sel_current_bank_channel_num_want_send[3];	 	
      end
   end // always_ff@ (posedge clk)


   //if the entryid found by arbitration is valid?

      // choose channel and entry
   always_comb begin
      for (int i = 0; i < 4; i++) begin
	 channel_selected[i] = n_cbe_sel_current_bank_channel_num_want_send[i];
	// entry_selected[i]   = cbe_sel_current_channel_entryid_want_send_to_bank[channel_selected[i]][i];	 
       end
   end

   assign  channel_num_int[0] = channel_selected[0];
   assign  channel_num_int[1] = channel_selected[1];
   assign  channel_num_int[2] = channel_selected[2];
   assign  channel_num_int[3] = channel_selected[3];
   
   
   always_comb begin
      entry_selected   = '{default:'d0};
   //   can_send_to_bank = '{default:'d0};
      for (int m = 0; m < 4; m++) begin
	 case(channel_selected[m])
	 2'd0: begin
	    entry_selected[m]   = cbe_sel_current_channel_entryid_want_send_to_bank[0][m];
//	    can_send_to_bank[m] = cbe_array_valid[0][m][entry_selected[m]]; 
	 end
	 2'd1:begin
	    entry_selected[m]   = cbe_sel_current_channel_entryid_want_send_to_bank[1][m];
//	    can_send_to_bank[m] = cbe_array_valid[1][m][entry_selected[m]]; 
	 end
	 2'd2:begin
	    entry_selected[m]   = cbe_sel_current_channel_entryid_want_send_to_bank[2][m];
//	    can_send_to_bank[m] = cbe_array_valid[2][m][entry_selected[m]]; 
	 end
	 default: begin
	    entry_selected   = '{default:'d0};
//	    can_send_to_bank = '{default:'d0};
	 end
	 endcase
	 end   
   end

   
   assign can_send_to_bank[0] = cbe_array_valid[channel_selected[0]][0][entry_selected[0]];
   assign can_send_to_bank[1] = cbe_array_valid[channel_selected[1]][1][entry_selected[1]];
   assign can_send_to_bank[2] = cbe_array_valid[channel_selected[2]][2][entry_selected[2]];
   assign can_send_to_bank[3] = cbe_array_valid[channel_selected[3]][3][entry_selected[3]];

   //**************** now find the entry id and channel id for each bank i
   //**************** channel id  : n_cbe_sel_current_bank_channel_num_want_send[i]
   //**************** entry id    : cbe_sel_current_channel_entryid_want_send_to_bank[[n_cbe_sel_current_bank_channel_num_want_send][i]]
   // !!! use n_cbe_sel_current_bank_... rather than cbe_sel......  because need to record the channel result of last time to do "round_robin" arbitration !!!  
   
   //after downstream_bank_kickoff,invalidate valid array
   always_comb begin
      cbe_array_invalidate = '{default: '{default: '{default: 1'b0}}};
      for (int i = 0; i < 4; i++) begin
	 cbe_array_invalidate[channel_selected[i]][i][entry_selected[i]] = 1'd1;
      end

   end

   //downstream_kickoff_logic, xbar ----> htu & srambuffer, 2 donwnstream and 1 upstream
   
   
   

   always_ff@(posedge clk) begin
      if(!rstn) begin
	 htu_already_kickoff  <= '{default:'d0};
	 wbuf_already_kickoff <= '{default:'d0};
      end
      else begin
	 htu_already_kickoff  <= n_htu_already_kickoff;
	 wbuf_already_kickoff <= n_wbuf_already_kickoff;
      end
   end


   assign upstream_bank_valid[0] = can_send_to_bank[0];
   assign upstream_bank_valid[1] = can_send_to_bank[1];
   assign upstream_bank_valid[2] = can_send_to_bank[2];
   assign upstream_bank_valid[3] = can_send_to_bank[3];
   assign upstream_bank_enable[0] = !(mpc_xbar_htu_valid[0] & !mpc_xbar_htu_enable[0]) & !(mpc_xbar_wbuf_req_valid[0] & !mpc_xbar_wbuf_req_enable[0]);
   assign upstream_bank_enable[1] = !(mpc_xbar_htu_valid[1] & !mpc_xbar_htu_enable[1]) & !(mpc_xbar_wbuf_req_valid[1] & !mpc_xbar_wbuf_req_enable[1]);
   assign upstream_bank_enable[2] = !(mpc_xbar_htu_valid[2] & !mpc_xbar_htu_enable[2]) & !(mpc_xbar_wbuf_req_valid[2] & !mpc_xbar_wbuf_req_enable[2]);
   assign upstream_bank_enable[3] = !(mpc_xbar_htu_valid[3] & !mpc_xbar_htu_enable[3]) & !(mpc_xbar_wbuf_req_valid[3] & !mpc_xbar_wbuf_req_enable[3]);
   assign upstream_bank_kickoff[0] = upstream_bank_enable[0] & upstream_bank_valid[0];
   assign upstream_bank_kickoff[1] = upstream_bank_enable[1] & upstream_bank_valid[1];
   assign upstream_bank_kickoff[2] = upstream_bank_enable[2] & upstream_bank_valid[2];
   assign upstream_bank_kickoff[3] = upstream_bank_enable[3] & upstream_bank_valid[3];
   
 

   //downstream_valid
  
   
   
   always_comb begin //downstream_kickoff
      

      for(int i=0;i<4;i=i+1) begin
	 mpc_xbar_htu_valid[i] = upstream_bank_valid[i] & !htu_already_kickoff[i];
	 mpc_xbar_wbuf_req_valid[i] = upstream_bank_valid[i] & !wbuf_already_kickoff[i];
	 
      end
      
      for(int i=0;i<4;i=i+1) begin
	 htu_kickoff[i]  = mpc_xbar_htu_valid[i] & mpc_xbar_htu_enable[i];
	 wbuf_kickoff[i] = mpc_xbar_wbuf_req_valid[i] & mpc_xbar_wbuf_req_enable[i];	 
      end
      
      for(int i=0;i<4;i=i+1) begin
	 n_htu_already_kickoff[i]  = !(upstream_bank_kickoff[i]) && (htu_already_kickoff[i]  || htu_kickoff[i]) ;
	 n_wbuf_already_kickoff[i] = !(upstream_bank_kickoff[i]) && (wbuf_already_kickoff[i] || wbuf_kickoff[i]) ;
	 
      end      
   end // always_comb
   
   //read out data and send to corresponding bank
   //bank 0
   always_comb begin
      for(int i=0;i<4;i=i+1) begin
	 mpc_xbar_htu_op_code[i]       = ce_buffer_op[channel_selected[i]][entry_selected[i]];
	 mpc_xbar_htu_addr[i]          = ce_buffer_addr[channel_selected[i]][entry_selected[i]];
	 mpc_xbar_htu_channel_id[i]    = channel_selected[i];
	 mpc_xbar_htu_set[i]           = ce_buffer_addr[channel_selected[i]][entry_selected[i]][7:5];
	 
	 mpc_xbar_wbuf_req_channel_id[i] = channel_selected[i];
	 mpc_xbar_wbuf_req_data[i]       = ce_buffer_data[channel_selected[i]][entry_selected[i]];
	 mpc_xbar_wbuf_req_wbuffer_id[i] ='0;
 


      end

   end  
      

   
   



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



