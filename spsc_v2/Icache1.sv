`include "define.sv";


module Icache1 (/*AUTOARG*/
   // Outputs
   tos2_valid, tos2_pc, tos2_data, tos2_tag,
   // Inputs
   clk, rstn, Icachestop, Icacheflush, pc, pc_valid, hit_valid,
   hit_set, hit_way, refill_valid, refill_set, refill_tag,
   refill_data
   );

   //default 8set ;cacheline 64 bytes;4 way
   
   input                          clk;
   input                          rstn;
   //from ctrl
   input                          Icachestop;
   input 			  Icacheflush;   
   //from pc
   input [`ADDR_WIDTH-1:0] 	  pc;
   input                          pc_valid; 
   //to stage 2
   output logic                   tos2_valid;
   output logic [`ADDR_WIDTH-1:0] tos2_pc;
   output logic [`CACHELINE_WIDTH-1:0] tos2_data[0:3];
   output logic [`CACHE_TAG_WIDTH-1:0] tos2_tag[0:3];
   //update when hit
   input 			       hit_valid;
   input [$clog2(`CACHE_SET)-1:0]      hit_set;
   input [1:0] 			       hit_way;
   //from MHSR when miss to refill
   input 			       refill_valid;
   input [$clog2(`CACHE_SET)-1:0]      refill_set;
   input [`CACHE_TAG_WIDTH-1:0]        refill_tag;
   input [`CACHELINE_WIDTH-1:0]        refill_data;


   //


   //logic                               cache_ena[0:3];
   logic                               cache_wea[0:3];
   logic [$clog2(`CACHE_SET)-1:0]      cache_index[0:3];
   //logic [`CACHELINE_WIDTH-1:0]        cache_din[0:3];
   //logic [`CACHE_TAG_WIDTH-1:0]        cache_tin[0:3]; //tag write
   logic [`CACHELINE_WIDTH-1:0]        cache_dout[0:3];
   logic [`CACHE_TAG_WIDTH-1:0]        cache_tout[0:3];
   
   //
   logic                               reg_pc_valid;
   logic [`ADDR_WIDTH-1:0] 	       reg_pc;
   
   //
   logic [1:0] 			       way_to_evt;
   logic [2:0] 			       CountWay1 [0:`CACHE_SET-1] ;
   logic [2:0] 			       CountWay2 [0:`CACHE_SET-1] ;
   logic [2:0] 			       CountWay3 [0:`CACHE_SET-1] ;
   logic [2:0] 			       CountWay4 [0:`CACHE_SET-1] ;
   
   
   // LRU 
   
    always_ff @(posedge clk) begin
        if(!rstn) begin
            for (int i =0 ;i<`CACHE_SET ;i=i+1 ) begin
                CountWay1[i]    <= 3'd0 ;
                CountWay2[i]    <= 3'd0 ;
                CountWay3[i]    <= 3'd0 ;
                CountWay4[i]    <= 3'd0 ;
            end
        end
        else begin
            if(hit_valid & ~Icachestop) begin
                if(hit_way == 0) begin
                    CountWay1[hit_set] <= 3'd0 ;
                    CountWay2[hit_set] <= (CountWay2[hit_set] != 3'b111) ? CountWay2[hit_set] + 1 : CountWay2[hit_set] ;
                    CountWay3[hit_set] <= (CountWay3[hit_set] != 3'b111) ? CountWay3[hit_set] + 1 : CountWay3[hit_set] ;
                    CountWay4[hit_set] <= (CountWay4[hit_set] != 3'b111) ? CountWay4[hit_set] + 1 : CountWay4[hit_set] ;
                end 
                if(hit_way == 1) begin
                    CountWay1[hit_set] <= (CountWay1[hit_set] != 3'b111) ? CountWay1[hit_set] + 1 : CountWay1[hit_set] ;
                    CountWay2[hit_set] <= 3'd0 ;
                    CountWay3[hit_set] <= (CountWay3[hit_set] != 3'b111) ? CountWay3[hit_set] + 1 : CountWay3[hit_set] ;
                    CountWay4[hit_set] <= (CountWay4[hit_set] != 3'b111) ? CountWay4[hit_set] + 1 : CountWay4[hit_set] ;
                end 
                if(hit_way == 2) begin
                    CountWay1[hit_set] <= (CountWay1[hit_set] != 3'b111) ? CountWay1[hit_set] + 1 : CountWay1[hit_set] ;
                    CountWay2[hit_set] <= (CountWay2[hit_set] != 3'b111) ? CountWay2[hit_set] + 1 : CountWay2[hit_set] ;
                    CountWay3[hit_set] <= 3'd0 ;
                    CountWay4[hit_set] <= (CountWay4[hit_set] != 3'b111) ? CountWay4[hit_set] + 1 : CountWay4[hit_set] ;
                end 
                if(hit_way == 3) begin
                    CountWay1[hit_set] <= (CountWay1[hit_set] != 3'b111) ? CountWay1[hit_set] + 1 : CountWay1[hit_set] ;
                    CountWay2[hit_set] <= (CountWay2[hit_set] != 3'b111) ? CountWay2[hit_set] + 1 : CountWay2[hit_set] ;
                    CountWay3[hit_set] <= (CountWay3[hit_set] != 3'b111) ? CountWay3[hit_set] + 1 : CountWay3[hit_set] ;
                    CountWay4[hit_set] <= 3'd0 ;
                end 
            end
            else begin
                CountWay1[hit_set] <= CountWay1[hit_set] ;
                CountWay2[hit_set] <= CountWay2[hit_set] ;
                CountWay3[hit_set] <= CountWay3[hit_set] ;
                CountWay4[hit_set] <= CountWay4[hit_set] ;
            end
        end
    end
   

   // pipeline reg
    always_ff @(posedge clk) begin
       if (!rstn | Icacheflush) begin
	  reg_pc_valid <= '0;
	  reg_pc       <= '0;	  
       end
       else if (!Icachestop) begin
	  reg_pc_valid <= pc_valid;
	  reg_pc       <= pc;
        end
    end
   
   //refill_data
   always_comb begin
      
      if(((CountWay1[refill_set] >= CountWay2[refill_set]) & (CountWay1[refill_set] >= CountWay3[refill_set]) & 
          (CountWay1[refill_set] >= CountWay4[refill_set])))
	way_to_evt = 0;
      else if(((CountWay2[refill_set] >= CountWay1[refill_set]) & (CountWay2[refill_set] >= CountWay3[refill_set]) & 
          (CountWay2[refill_set] >= CountWay4[refill_set])))
	way_to_evt = 1;
      else if(((CountWay3[refill_set] >= CountWay1[refill_set]) & (CountWay3[refill_set] >= CountWay1[refill_set]) & 
          (CountWay3[refill_set] >= CountWay4[refill_set])))
	way_to_evt = 2;
      else if(((CountWay4[refill_set] >= CountWay1[refill_set]) & (CountWay4[refill_set] >= CountWay2[refill_set]) & 
          (CountWay4[refill_set] >= CountWay3[refill_set])))
	way_to_evt = 3;
      else
	way_to_evt = 0;
      

	      
      for(int i=0;i<4;i++) begin
	 cache_wea[i] = (refill_valid & way_to_evt == i)? 1 : 0;	 	
      end
 	 	
   end
   // read tag and data
   always_comb begin
      for(int i=0; i<4;i++) begin
	 tos2_data[i] = cache_dout[i];
	 tos2_tag[i] =  cache_tout[i];
	 cache_index[i] = refill_valid? refill_set : pc[5:0];
	 
      end

   end

   
   
   genvar 			       i;
   
   generate
      for(i=0; i<4; i++) begin: data_ram
	 spsram #(.ADDR_WIDTH($clog2(`CACHE_SET)), .DATA_WIDTH(`CACHELINE_WIDTH))
	 u_data(	    
		.clka  ( clk             ),
		.rstn  ( rstn            ),
		.ena   ( 1'b1    ),
		.wea   ( cache_wea[i]    ),
		.addra ( cache_index[i]  ),
		.dina  ( refill_data     ),
		.douta ( cache_dout[i]   )
			    );
	 
	   end
   endgenerate

   generate
      for(i=0; i<4; i++) begin: tag_ram
	 spsram #(.ADDR_WIDTH($clog2(`CACHE_SET)), .DATA_WIDTH(`CACHE_TAG_WIDTH))
	 u_tag(	    
		.clka  ( clk             ),
		.rstn  ( rstn            ),
		.ena   ( 1'b1    ),
		.wea   ( cache_wea[i]    ),
		.addra ( cache_index[i]  ),
		.dina  ( refill_tag      ),
		.douta ( cache_tout[i]   )
			    );
	 
      end
   endgenerate

   //stop
   assign tos2_valid = Icachestop? '0 : reg_pc_valid;
   assign tos2_pc    = Icachestop? '0 : reg_pc;
 
   


endmodule
