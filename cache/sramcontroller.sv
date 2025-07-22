`timescale 1ns/1ps

module sramcontroller(/*AUTOARG*/
   // Outputs
   mpc_isu_rc_enable, mpc_rc_xbar_valid, mpc_rc_xbar_channel_id,
   mpc_rc_xbar_rob_num, mpc_rc_xbar_data, mpc_rc_subm_valid,
   mpc_rc_subm_data, mpc_rc_subm_offset, mpc_rc_subm_all_offset,
   mpc_rc_subm_set_way_offset, mpc_rc_wbuf_req_valid,
   mpc_rc_wbuf_req_channel_id, mpc_rc_wbuf_req_wbuffer_id,
   mpc_rc_wbuf_rtn_enable,
   // Inputs
   clk, rstn, mpc_isu_rc_valid, mpc_isu_rc_channel_id,
   mpc_isu_rc_op_code, mpc_isu_rc_set_way_offset,
   mpc_isu_rc_wbuffer_id, mpc_isu_rc_xbar_rob_num,
   mpc_isu_rc_cacheLine_dirty, mpc_isu_rc_linefill_data,
   mpc_rc_xbar_enable, mpc_rc_subm_enable, mpc_rc_wbuf_req_enable,
   mpc_rc_wbuf_rtn_valid, mpc_rc_wbuf_rtn_data
   );

   localparam   DATA_WIDTH = 128;
   localparam   ADDR       = 128;
   


   input                   clk;
   input                   rstn;
   
   // ISU interface
   input                   mpc_isu_rc_valid;
   output logic		   mpc_isu_rc_enable;
   input  logic [1:0] 	   mpc_isu_rc_channel_id;
   input  logic [2:0] 	   mpc_isu_rc_op_code;
   input  logic [6:0] 	   mpc_isu_rc_set_way_offset;
   input  logic [7:0] 	   mpc_isu_rc_wbuffer_id;
   input  logic [2:0] 	   mpc_isu_rc_xbar_rob_num;
   input  logic [1:0] 	   mpc_isu_rc_cacheLine_dirty[1:0];
   input  logic [255:0]    mpc_isu_rc_linefill_data;

   //xbar interface
   output logic		   mpc_rc_xbar_valid;
   input 		   mpc_rc_xbar_enable;
   output logic [1:0] 	   mpc_rc_xbar_channel_id;
   output logic [2:0] 	   mpc_rc_xbar_rob_num;
   output logic [127:0]    mpc_rc_xbar_data;

   //submem interface
   output logic		   mpc_rc_subm_valid;
   input 		   mpc_rc_subm_enable;
   output logic [127:0]    mpc_rc_subm_data;
   output logic            mpc_rc_subm_offset;
   output logic            mpc_rc_subm_all_offset;
   output logic [6:0] 	   mpc_rc_subm_set_way_offset;

   //wbuffer req interface
   output logic		   mpc_rc_wbuf_req_valid;
   input 		   mpc_rc_wbuf_req_enable;
   output logic[1:0] 	   mpc_rc_wbuf_req_channel_id;
   output logic[7:0] 	   mpc_rc_wbuf_req_wbuffer_id;

   //wbuffer resp interface
   input 		   mpc_rc_wbuf_rtn_valid;
   output logic		   mpc_rc_wbuf_rtn_enable;
   input logic [127:0] 	   mpc_rc_wbuf_rtn_data;




   ////////////////////////////////////////////////////////

   logic [1:0] 		   pcnt; // process count
   logic [1:0] 		   pcnt_next; // process count
   logic                   xbar_kick;
   logic                   wbuffer_reqkick;
   logic                   wbuffer_rtnkick;
   logic                   subm_wr_kick;

   logic                   sram_wr_en;
   logic                   sram_rd_en;
   logic [6:0] 		   sram_addr;
   logic [127:0] 	   sram_din;
   logic [255:128] 	   sram_dout;

   logic [127:0] 	   xbar_data_latch;
   logic [255:0] 	   subm_data_latch;
   logic                   xbar_latch_en;
   logic [1:0] 		   subm_latch_en; // first bit latch 127: 0 ; second bit latch 255:128
   logic [1:0] 		   subm_latch_en_next; // first bit latch 127: 0 ; second bit latch 255:128

   reg [DATA_WIDTH-1:0]    ram_reg[ADDR-1:0];
   
   

   
		   
   



   //////////////////////kick off signal /////////////////////////////////

   assign  wbuffer_reqkick = mpc_rc_wbuf_req_enable & mpc_rc_wbuf_req_valid;
   assign  wbuffer_rtnkick = mpc_rc_wbuf_rtn_enable & mpc_rc_wbuf_rtn_valid;
   assign  xbar_kick       = mpc_rc_xbar_enable     & mpc_rc_xbar_valid;
   assign  subm_wr_kick    = mpc_rc_subm_enable     & mpc_rc_subm_valid;

   //////////////////////comtromller/////////////////////////////////

   always_ff@(posedge clk) begin
      if (!rstn) begin
	 pcnt <= '0;

	 
      end
      else begin
	 pcnt <= pcnt_next;
	 
	 
      end             
   end

   always_comb begin
      mpc_rc_xbar_valid = '0;
      mpc_rc_xbar_data  = '0;      
      sram_wr_en = '0;
      sram_rd_en = '0;
      sram_din = mpc_isu_rc_linefill_data[127:0];
      pcnt_next = pcnt;
      mpc_isu_rc_enable = 0;
      sram_addr = mpc_isu_rc_set_way_offset;
      xbar_latch_en = 0;
      mpc_rc_wbuf_req_valid = 0;
      mpc_rc_wbuf_rtn_enable = 0;
      subm_latch_en_next = '0;
      mpc_rc_subm_valid = 0;
      mpc_rc_subm_set_way_offset = mpc_isu_rc_set_way_offset;
      mpc_rc_subm_data = sram_dout;
      
      
      
      
      

      

      if(mpc_isu_rc_valid) begin
	 case(mpc_isu_rc_op_code[1:0])
	   2'b10: begin // case1 LF+R (E,E)
	      if(mpc_isu_rc_cacheLine_dirty[1] == '0 & mpc_isu_rc_cacheLine_dirty[0] == '0) begin
		 //step 1 write to sram and transfer to xbar
		 if(pcnt == 2'b00) begin
		    mpc_rc_xbar_valid = 1;
		    mpc_rc_xbar_data  = mpc_isu_rc_set_way_offset[0]? mpc_isu_rc_linefill_data[255:128] : mpc_isu_rc_linefill_data[127:0];		    
		    sram_wr_en = 1;
		    sram_addr = {mpc_isu_rc_set_way_offset[6:1],1'b0};		    
		    sram_din = mpc_isu_rc_linefill_data[127:0];
		    if(xbar_kick) 
		      pcnt_next = pcnt + 1;		  		  		 
		 end
		 //step 2 write another offset to sram
		 else begin
		    sram_wr_en = 1;
		    sram_addr = {mpc_isu_rc_set_way_offset[6:1],1'b1};
		    sram_din = mpc_isu_rc_linefill_data[255:128];
		    pcnt_next = 2'b00;
		    mpc_isu_rc_enable = 1;		  
		 end // else: !if(pcnt == 2'b00)	       	       	       
	      end

	      // case 2 LF+R(E,D)
	      else  begin
		 // write to sram and return to xbar
		 mpc_rc_xbar_valid = 1;
		 mpc_rc_xbar_data  = mpc_isu_rc_set_way_offset[0]? mpc_isu_rc_linefill_data[255:128] : mpc_isu_rc_linefill_data[127:0];
		 sram_wr_en = 1;
		 sram_din = mpc_isu_rc_set_way_offset[0]?mpc_isu_rc_linefill_data[255:128] : mpc_isu_rc_linefill_data[127:0];
		 if(xbar_kick) begin
		    mpc_isu_rc_enable = 1;		  		  		 
		 end 
       		 
	      end	    
	   end // case: 2'b10

	   //case 3  RD
	   2'b01: begin
	      //step 1 read data 
	      if(pcnt == 2'b00) begin 
		 sram_rd_en = 1;
		 pcnt_next = pcnt + 1;		 
	      end
	      // rtn to xbar, need reg to store the data in case xbar is busy
	      if(pcnt == 2'b01) begin
		 mpc_rc_xbar_valid = 1;
		 mpc_rc_xbar_data  = sram_dout;  
		 xbar_latch_en = 1;
		 
		 if(xbar_kick) begin
		    pcnt_next = '0;
		    mpc_isu_rc_enable = 1;	      		    
		 end
		 else begin
		    pcnt_next = pcnt + 1;		    
		 end 		    		 
	      end
	      
	      if(pcnt == 2'b10) begin
		 mpc_rc_xbar_valid = 1;	
		 mpc_rc_xbar_data = xbar_data_latch;		 
		 if(xbar_kick) begin
		    pcnt_next = '0;
		    mpc_isu_rc_enable = 1;	      		  		    
		 end 		    		 
	      end
	   end // case: 2'b01

	   //case 4 WR
	   2'b00:begin
	      if(pcnt == 0)  begin
		 mpc_rc_wbuf_req_valid = 1;
		 if(wbuffer_reqkick)
		   pcnt_next = pcnt + 1;
	      end
	      else begin
		 mpc_rc_wbuf_rtn_enable = 1;
		 if(wbuffer_rtnkick) begin
		    pcnt_next = 0;
		    sram_rd_en = 1;
		    sram_din = mpc_rc_wbuf_rtn_data;
		    mpc_isu_rc_enable = 1;		    		    		    
		 end		 
	      end // else: !if(pcnt == 0)
	      	      		 		 	      
	   end // case: 2'b00

	   //case 5 : RAE or WAE (only one dirty & two dirty offset)
	   2'b11: begin
	       if(mpc_isu_rc_cacheLine_dirty[1] == 2'd1 & mpc_isu_rc_cacheLine_dirty[0] == 2'd1) begin // two dirty
		  if(pcnt == 0) begin
		     sram_rd_en = 1;
		     sram_addr = {mpc_isu_rc_set_way_offset[6:1],1'b0};
		     subm_latch_en_next[0] = 1; 
		     pcnt_next = pcnt + 1;		     		     
		  end
		  else if ( pcnt == 1) begin
		     mpc_rc_subm_valid = 1;
		     mpc_rc_subm_data  = subm_latch_en[0]? sram_dout : subm_data_latch[127:0];
		     mpc_rc_subm_set_way_offset = {mpc_isu_rc_set_way_offset[6:1],1'b0};
		     sram_rd_en = 1;
		     sram_addr = {mpc_isu_rc_set_way_offset[6:1],1'b1};	
		     subm_latch_en_next[1] = 1; 
		     if(subm_wr_kick)
		       pcnt_next = pcnt + 1;		     		     		     
		  end
		  else begin
		     mpc_rc_subm_valid = 1;
		     mpc_rc_subm_data  = subm_latch_en[1]? sram_dout : subm_data_latch[255:128];
		     mpc_rc_subm_set_way_offset = {mpc_isu_rc_set_way_offset[6:1],1'b1};
		     if(subm_wr_kick) begin
			pcnt_next = '0;
			mpc_isu_rc_enable = 1;			
		     end
		     
		  end
		     		  		  
	       end // if (mpc_isu_rc_cacheLine_dirty[1] == 2'd1 & mpc_isu_rc_cacheLine_dirty[0] == 2'd1)
	       else begin
		  if(pcnt == 0) begin
		     sram_rd_en = 1;
		     sram_addr = mpc_isu_rc_set_way_offset;
		     subm_latch_en_next[0] = 1;
		     pcnt_next = pcnt + 1;		     		     
		  end
		  else begin
		     mpc_rc_subm_valid          = 1;
		     mpc_rc_subm_data           = subm_latch_en[0]? sram_dout : subm_data_latch[127:0];
		     mpc_rc_subm_set_way_offset = mpc_isu_rc_set_way_offset;

		     if(subm_wr_kick) begin
			pcnt_next = '0;
			mpc_isu_rc_enable = 1;			
		     end
		     


		  end
		  

		  
	       end
	      


	   end
	   
	   
	   
	     	   
	 endcase // case (mpc_isu_rc_op_code)
	 

      end
   end // always_comb
   
   
      //////////////////////sram_data_read_latch/////////////////////////////////

   always_ff@(posedge clk) begin
      if(xbar_latch_en)
	xbar_data_latch <= sram_dout;      
   end

   always_ff@(posedge clk) begin
      subm_latch_en <= subm_latch_en_next;      
      if(subm_latch_en[0])
	subm_data_latch[127:0]  <= sram_dout;
      if(subm_latch_en[1])
	subm_data_latch[255:128] <= sram_dout;    
   end
   
   
		   
   //////////////////////sp_sram/////////////////////////////////   

   integer 		i;
   always_ff @(posedge clk)begin
      if(!rstn)begin
	 for (i=0;i<ADDR;i=i+1)begin
	    ram_reg[i] <= {DATA_WIDTH{1'b0}};
	 end
      end
      else if(sram_wr_en)begin
	 ram_reg[sram_addr] <= sram_din[DATA_WIDTH-1:0];
      end
   end
   always_ff @(posedge clk)begin
      if(!rstn)begin
	 sram_dout <= {DATA_WIDTH{1'b0}};
   end
      else if(sram_rd_en)begin
	 sram_dout <= ram_reg[sram_addr];
      end
   end	   
   
   
   
   
   
endmodule   
   
   
   
  
   
   
