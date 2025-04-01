`timescale 1ns / 1ps
import common::*;



module id_stage(/*AUTOARG*/
   // Inputs
   clk, reset_n, if_instr0, if_instr1
   );


    input clk;
    input reset_n;
    input if_id_type if_instr0;    
   

    
    control_type control0;
   
        
/////////////////////////////////////////////////////////////////////

                             //DECODER//
   
//////////////////////////////////////////////////////////////////////  
     
   /* control_unit AUTO_TEMPLATE(
    .if_instr(if_instr0),
    .control(control0),);
   */
    control_unit inst_control0(/*AUTOINST*/
			       // Outputs
			       .control		(control0),	 // Templated
			       // Inputs
			       .clk		(clk),
			       .reset_n		(reset_n),
			       .if_instr	(if_instr0));	 // Templated
   

   
    
endmodule
