`include "define.sv";


module Icache2 (/*AUTOARG*/
   // Outputs
   Icachemiss, hit_valid, hit_set, hit_way, refill_valid, refill_set,
   refill_tag, refill_data, Icache_read_req, Icache_read_addr,
   Icache_out_valid, Icache_out_data, Icache_out_vector,
   Icache_out_pc,
   // Inputs
   clk, rstn, Icachestop, Icacheflush, tos2_valid, tos2_pc, tos2_data,
   tos2_tag, Icache_read_handshank, AXI_resp, AXI_data
   );
   input                          clk;
   input                          rstn;
   //ctrl
   input                          Icachestop;
   input                          Icacheflush;
   output  logic 		  Icachemiss;  
   //from stage1
   input logic 			  tos2_valid;
   input logic [`ADDR_WIDTH-1:0]  tos2_pc;
   input logic [`CACHELINE_WIDTH-1:0] tos2_data[0:3];
   input logic [`CACHE_TAG_WIDTH-1:0] tos2_tag[0:3];
   //to stage 1
   output 			      hit_valid;
   output [$clog2(`CACHE_SET)-1:0]    hit_set;
   output [1:0] 		      hit_way;
   //to refill data
   output logic 		      refill_valid;
   output logic [$clog2(`CACHE_SET)-1:0]    refill_set;
   output logic [`CACHE_TAG_WIDTH-1:0]      refill_tag;
   output logic [`CACHELINE_WIDTH-1:0]      refill_data;
   //axi interface
   output  logic 		      Icache_read_req;   //read req  
   input   logic 		      Icache_read_handshank;//req has handshanked 
   output  logic [`ADDR_WIDTH-1:0]    Icache_read_addr;  
   input   logic 		      AXI_resp  ; 
   input   logic [`CACHELINE_WIDTH-1:0] AXI_data  ;


    //to PreDecode 
   output  logic 		          Icache_out_valid;    
   output  logic [`INSTR_WIDTH*32:0] 	  Icache_out_data ; 
   output  logic [`INSTR_WIDTH-1:0] 	  Icache_out_vector; 
   output  logic [`INSTR_WIDTH*32:0] 	  Icache_out_pc;


   
   //tag comparison

   logic [3:0] 			      hit_vector; //tag hit vc: one-hot
   logic 			      cache_miss; // comb logic
   typedef enum logic [1:0] {IDLE,REQ,WAIT} cache_state_type;
   cache_state_type                   cache_state, cache_state_n;
                      
   

   
   // cache state: 00: IDLE; 01: REQ AXI ; 10: WAIT FOR DATA ;11: REFILL data to cache


   
   always_comb begin
      hit_vector = '0;
      if(tos2_valid) begin
	 for(int i=0; i<4; i++) begin
	    if(tos2_tag[i] == tos2_pc[`ADDR_WIDTH-1:$clog2(`CACHELINE_WIDTH/8)+$clog2(`CACHE_SET)])
	      hit_vector[i] = 1;	    	 
	 end
      end
   end
      
   assign  cache_miss = !tos2_valid & (hit_vector == '0);

   always_ff@(posedge clk) begin
      if(!rstn | Icacheflush) begin
	 cache_state <= IDLE;
      end
      else begin
	 cache_state <= cache_state_n;	    	      			       
      end	 	 
   end
      
   
   always_comb begin
      cache_state_n = cache_state;      
      case(cache_state)
	IDLE: 
	  if(cache_miss)
	    cache_state_n = REQ;
	REQ: 
	  if(Icache_read_handshank)
	    cache_state_n = WAIT;
	WAIT: 
	  if(AXI_resp)
	    cache_state_n = IDLE;
	default:
	  cache_state_n = cache_state;
	
      endcase      
   end
   
   assign Icache_read_req = cache_state == REQ?  1:0;
   assign Icachemiss      = cache_state == IDLE? 0:1;
   assign refill_valid    = AXI_resp; // if encounter flush, still need to refill data to cacheline
         
   
   
   








endmodule
