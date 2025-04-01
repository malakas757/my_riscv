`timescale 1ns / 1ps

import common::*;


module pipeline(/*AUTOARG*/);
   input clk;
   input reset_n;
   output debug_flush;
   output debug_is_bj;


   /*AUTOWIRE*/


  /////////////////////////////////////////////////////////////////////

                              //Stall Flush control//

   ///////////////////////////////////////////////////////////////////

   /* stall_flush_control AUTO_TEMPLATE(
    );*/

   stall_flush_control inst_stall_flush(/*AUTOINST*/
					// Outputs
					.PC_stall	(PC_stall),
					.PC_flush	(PC_flush),
					.IF_stall	(IF_stall),
					// Inputs
					.imem_miss	(imem_miss));
   


  /////////////////////////////////////////////////////////////////////

                              //IF STAGE//

   ///////////////////////////////////////////////////////////////////
   
   if_id_type         if_id_reg_0;
   if_id_type         instr0_if_id;


   
   
   /* if_stage AUTO_TEMPLATE(
    .instr1_if_id(),
    );*/

   if_stage inst_if_stage(/*AUTOINST*/
			  // Outputs
			  .instr_req		(instr_req),
			  .instr0_if_id		(instr0_if_id),
			  .instr1_if_id		(),		 // Templated
			  .imem_miss		(imem_miss),
			  // Inputs
			  .clk			(clk),
			  .reset_n		(reset_n),
			  .instr_resp		(instr_resp),
			  .ex_branch_in		(ex_branch_in),
			  .PC_stall		(PC_stall),
			  .PC_flush		(PC_flush),
			  .IF_stall		(IF_stall));


   always_ff @(posedge clk) begin


	   if(IF_flush || ~reset_n) begin
	      if_id_reg0.pc            <= '0;	     
	      if_id_reg0.instr_valid   <= '0;	     
	      if_id_reg0.instruction   <= 32'h00000013;	     
	      end
	   else if (IF_stall) begin
	      if_id_reg0.pc            <= if_id_reg0.pc;	     
	      if_id_reg0.instr_valid   <= if_id_reg0.instr_valid;	     
	      if_id_reg0.instruction   <= if_id_reg0.instruction;	     
	      end
	   else begin
	      if_id_reg0.pc            <= instr0_if_id.pc;	     
	      if_id_reg0.instr_valid   <= instr0_if_id.instr_valid;	      
	      if_id_reg0.instruction   <= instr0_if_id.instruction;	      
	   end
   end

   
  /////////////////////////////////////////////////////////////////////

                              //ID STAGE//

   ///////////////////////////////////////////////////////////////////













   ///////////////////////////////////////////////////////////////////
   
    
    
    
    

  
endmodule
