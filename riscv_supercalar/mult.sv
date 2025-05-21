`timescale 1ns/1ps

import common::*;
 
module mult #(parameter XLEN = 32, parameter NUM_STAGE = 4) (
 				input 		       clock, reset_n,
 				input 		       start,
 				input 		       flush_valid,
 				input [1:0] 	       sign,
 				input [XLEN-1:0]       mcand, mplier,
 				
 				output [(2*XLEN)-1:0]  product,
 				output 		       busy, 
 				output 		       done 

 			);
 	logic [(2*XLEN)-1:0] mcand_out, mplier_out, mcand_in, mplier_in;
 	logic [NUM_STAGE:0][2*XLEN-1:0] internal_mcands, internal_mpliers;
 	logic [NUM_STAGE:0][2*XLEN-1:0] internal_products;
 	logic [NUM_STAGE:0] internal_dones;
       
 
 	assign mcand_in  = sign[0] ? {{XLEN{mcand[XLEN-1]}}, mcand}   : {{XLEN{1'b0}}, mcand} ;
 	assign mplier_in = sign[1] ? {{XLEN{mplier[XLEN-1]}}, mplier} : {{XLEN{1'b0}}, mplier};
 

 	assign internal_mcands[0]   = mcand_in;
 	assign internal_mpliers[0]  = mplier_in;
 	assign internal_products[0] = 'h0;
 	assign internal_dones[0]    = start;

 
 	assign done    = internal_dones[NUM_STAGE];        
 	assign product = internal_products[NUM_STAGE];
        assign busy    = |internal_dones[NUM_STAGE-1:0];// except final done: because have ex buffer between mul/div block and intisq, so when final stage's done is set, mul/div is not busy
   

 
 	genvar i;
 	for (i = 0; i < NUM_STAGE; ++i) begin : mstage
 		mult_stage #(.XLEN(XLEN), .NUM_STAGE(NUM_STAGE)) ms (
 			.clock(clock),
 			.reset_n(reset_n),
 			.product_in(internal_products[i]),
 			.mplier_in(internal_mpliers[i]),
 			.mcand_in(internal_mcands[i]),
 			.start(internal_dones[i]),
 			.flush_valid(flush_valid),

 			
								     
 			.product_out(internal_products[i+1]),
 			.mplier_out(internal_mpliers[i+1]),
 			.mcand_out(internal_mcands[i+1]),
 			.out_done(internal_dones[i+1])
 		);
 	end
endmodule
 
module mult_stage #(parameter XLEN = 32, parameter NUM_STAGE = 4) (
 					input 			    clock, reset_n, start,
 					input 			    flush_valid, 
 					input [(2*XLEN)-1:0] 	    mplier_in, mcand_in,
 					input [(2*XLEN)-1:0] 	    product_in,
 										 
 					output logic 		    out_done,
 					output logic [(2*XLEN)-1:0] mplier_out, mcand_out,
 					output logic [(2*XLEN)-1:0] product_out
 				);
 
 	parameter NUM_BITS = (2*XLEN)/NUM_STAGE;
 
 	logic [(2*XLEN)-1:0] prod_in_reg, partial_prod, next_partial_product, partial_prod_unsigned;
 	logic [(2*XLEN)-1:0] next_mplier, next_mcand;


   logic 		     done;

  
 
 	assign product_out = prod_in_reg + partial_prod;
 
 	assign next_partial_product = mplier_in[(NUM_BITS-1):0] * mcand_in;
 
 	assign next_mplier = {{(NUM_BITS){1'b0}},mplier_in[2*XLEN-1:(NUM_BITS)]};
 	assign next_mcand  = {mcand_in[(2*XLEN-1-NUM_BITS):0],{(NUM_BITS){1'b0}}};
 
 	//synopsys sync_set_reset "reset"
 	always_ff @(posedge clock) begin
	   if(start & !flush_valid) begin
 		prod_in_reg      <= product_in;
 		partial_prod     <= next_partial_product;
 		mplier_out       <= next_mplier;
 		mcand_out        <= next_mcand;
	   end
 	end
 
   // synopsys sync_set_reset "reset"
   always_ff @(posedge clock) begin
      if(!reset_n) begin
 	 done     <= 1'b0;

      end 
      else if (~flush_valid) begin  //when ~start, keep value 		   
 	 done      <= start;
      end	        	        
   end
   
  
       // flush

   assign out_done  = done ;
   
endmodule

