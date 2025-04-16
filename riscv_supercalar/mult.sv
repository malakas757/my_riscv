`timescale 1ns/1ps

import common::*;
 
module mult #(parameter XLEN = 32, parameter NUM_STAGE = 4) (
 				input 		       clock, reset,
 				input 		       start,
 				input [1:0] 	       sign,
 				input [XLEN-1:0]       mcand, mplier,
				input 		       valid,//used to flush
 				input [ROB_WIDTH:0]    rob_id,
 				input [ROB_WIDTH:0]    flush_robid,
 				input [PRF_WIDTH-1:0]  prf_id,
 				input 		       flush_valid, 
 				
 				output [(2*XLEN)-1:0]  product,
 				output 		       done,
				output 		       out_valid,//used to flush
 				output [ROB_WIDTH:0]   out_rob_id,
 				output [PRF_WIDTH-1:0] out_prf_id 

 			);
 	logic [(2*XLEN)-1:0] mcand_out, mplier_out, mcand_in, mplier_in;
 	logic [NUM_STAGE:0][2*XLEN-1:0] internal_mcands, internal_mpliers;
 	logic [NUM_STAGE:0][2*XLEN-1:0] internal_products;
 	logic [NUM_STAGE:0] internal_dones;
 	logic [ROB_WIDTH:0] internal_robid[NUM_STAGE:0];
 	logic [PRF_WIDTH-1:0] internal_T[NUM_STAGE:0];
 	logic [NUM_STAGE:0] internal_valid;
 
 	assign mcand_in  = sign[0] ? {{XLEN{mcand[XLEN-1]}}, mcand}   : {{XLEN{1'b0}}, mcand} ;
 	assign mplier_in = sign[1] ? {{XLEN{mplier[XLEN-1]}}, mplier} : {{XLEN{1'b0}}, mplier};
 
 	assign internal_mcands[0]   = mcand_in;
 	assign internal_mpliers[0]  = mplier_in;
 	assign internal_products[0] = 'h0;
 	assign internal_dones[0]    = start;
 	assign internal_robid[0]    = rob_id;
 	assign internal_T[0]        = prf_id;
 	assign internal_valid[0]    = valid;
 
 	assign done    = internal_dones[NUM_STAGE];
 	assign product = internal_products[NUM_STAGE];
 	assign out_valid = internal_valid[NUM_STAGE];
 	assign out_rob_id = internal_robid[NUM_STAGE];
 	assign out_prf_id = internal_T[NUM_STAGE];
 
 	genvar i;
 	for (i = 0; i < NUM_STAGE; ++i) begin : mstage
 		mult_stage #(.XLEN(XLEN), .NUM_STAGE(NUM_STAGE)) ms (
 			.clock(clock),
 			.reset(reset),
 			.product_in(internal_products[i]),
 			.mplier_in(internal_mpliers[i]),
 			.mcand_in(internal_mcands[i]),
 			.start(internal_dones[i]),
 			.rob_id(internal_robid[i]),
 			.valid(internal_valid[i]),
 			.prf_id(internal_T[i]),
 			.flush_valid(flush_valid),
 			.flush_robid(flush_robid),
 			
								     
 			.product_out(internal_products[i+1]),
 			.mplier_out(internal_mpliers[i+1]),
 			.mcand_out(internal_mcands[i+1]),
 			.out_rob_id(internal_robid[i+1]),
 			.out_prf_id(internal_T[i+1]),
 			.out_valid(internal_valid[i+1]),
 			.out_done(internal_dones[i+1])
 		);
 	end
endmodule
 
module mult_stage #(parameter XLEN = 32, parameter NUM_STAGE = 4) (
 					input 			    clock, reset, start,
 					input [(2*XLEN)-1:0] 	    mplier_in, mcand_in,
 					input [(2*XLEN)-1:0] 	    product_in,
					input 			    valid,//used to flush
 					input [ROB_WIDTH:0] 	    rob_id,
 					input [ROB_WIDTH:0] 	    flush_robid,
 					input [PRF_WIDTH-1:0] 	    prf_id,
 					input 			    flush_valid,
 					
					 
					output 			    out_valid,//used to flush
 					output [ROB_WIDTH:0] 	    out_rob_id,
 					output [PRF_WIDTH-1:0] 	    out_prf_id, 
 					output logic 		    out_done,
 					output logic [(2*XLEN)-1:0] mplier_out, mcand_out,
 					output logic [(2*XLEN)-1:0] product_out
 				);
 
 	parameter NUM_BITS = (2*XLEN)/NUM_STAGE;
 
 	logic [(2*XLEN)-1:0] prod_in_reg, partial_prod, next_partial_product, partial_prod_unsigned;
 	logic [(2*XLEN)-1:0] next_mplier, next_mcand;

   logic 		     reg_valid;
   logic 		     done;
   logic 		     need_to_flush;
   logic [ROB_WIDTH:0] 	     reg_robid;
   logic [PRF_WIDTH-1:0]     reg_prf_id;
   
  
 
 	assign product_out = prod_in_reg + partial_prod;
 
 	assign next_partial_product = mplier_in[(NUM_BITS-1):0] * mcand_in;
 
 	assign next_mplier = {{(NUM_BITS){1'b0}},mplier_in[2*XLEN-1:(NUM_BITS)]};
 	assign next_mcand  = {mcand_in[(2*XLEN-1-NUM_BITS):0],{(NUM_BITS){1'b0}}};
 
 	//synopsys sync_set_reset "reset"
 	always_ff @(posedge clock) begin
	   if(start) begin
 		prod_in_reg      <= product_in;
 		partial_prod     <= next_partial_product;
 		mplier_out       <= next_mplier;
 		mcand_out        <= next_mcand;
	   end
	   else begin
	      prod_in_reg      <= prod_in_reg;
 	      partial_prod     <= partial_prod;
 	      mplier_out       <= mplier_out;
 	      mcand_out        <= mcand_out;
	   end
 	end
 
   // synopsys sync_set_reset "reset"
   always_ff @(posedge clock) begin
      if(reset) begin
 	 done     <= 1'b0;
	 reg_valid <= 1'b0;
 	 reg_prf_id <= '0;
 	 reg_robid <= '0;

      end 
      else if (need_to_flush) begin		   
 	 done      <= 1'b0;
	 reg_valid <= 1'b0;	 
      end
      else if (~flush_valid) begin  //when ~start, keep value 		   
 	 done      <= start;
	 reg_valid <= valid;
 	 reg_prf_id <= prf_id;
 	 reg_robid <= rob_id; 
      end	        	        
   end
   
  
       // flush
   assign need_to_flush = (flush_valid & (reg_robid[ROB_WIDTH] ^ flush_robid[ROB_WIDTH] ^ (reg_robid[ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0])))?1:0;
   assign out_prf_id = reg_prf_id;
   assign out_rob_id = reg_robid;
   assign out_valid  = reg_valid;
   assign out_done  = done ;
   
endmodule

