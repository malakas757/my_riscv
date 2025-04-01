`timescale 1ns / 1ps
import common::*;



module id_stage(/*AUTOARG*/
   // Outputs
   dec_instr0, dec_instr1,
   // Inputs
   clk, reset_n, if_instr0, if_instr1
   );


    input clk;
    input reset_n;
    input if_id_type if_instr0;    
    input if_id_type if_instr1; 
    output control_type dec_instr0;
    output control_type dec_instr1;
   

    
  //  control_type control0;
   // control_type control1;
        
/////////////////////////////////////////////////////////////////////

                             //DECODER//
   
//////////////////////////////////////////////////////////////////////  
     
   /* control_unit AUTO_TEMPLATE(
    .if_instr(if_instr0),
    .control(dec_instr0),);
   */
    control_unit inst_control0(/*AUTOINST*/
			       // Outputs
			       .control		(dec_instr0),	 // Templated
			       // Inputs
			       .clk		(clk),
			       .reset_n		(reset_n),
			       .if_instr	(if_instr0));	 // Templated

     /* control_unit AUTO_TEMPLATE(
    .if_instr(if_instr1),  
    .control(dec_instr1),);
   */
    control_unit inst_control1(/*AUTOINST*/
			       // Outputs
			       .control		(dec_instr1),	 // Templated
			       // Inputs
			       .clk		(clk),
			       .reset_n		(reset_n),
			       .if_instr	(if_instr1));	 // Templated

    
   

   
    
endmodule
