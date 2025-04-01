`timescale 1ns / 1ps

import common::*;


module bju(
    /*AUTOARG*/
   // Outputs
   j_next_pc, branch_pc, branch_taken, flush,
   // Inputs
   left_operand, right_operand, pc, control, immediate_data,
   branch_predict
   );

   input [31:0] left_operand;
   
   input [31:0] right_operand;
   input [31:0] pc;
   input control_type control;
   
   input [31:0] immediate_data;
   input 	branch_predict;
   
   
   output logic [31:0] j_next_pc;// result for jal and jalr next pc
   output logic [31:0] branch_pc;// branch tagart pc
   output logic        branch_taken;// branch taken flag
   output logic        flush;// branch flush flag
   
   logic [31:0]   pc_plus_4                     ;  // PC+4           
   logic [31:0]   pc_plus_imm                   ;  // PC+immJ and PC+immB        
   logic [31:0]   rs1_plus_imm                  ;  // op0+immI  

   assign pc_plus_4    = pc  + 32'(4) ;
   assign j_next_pc    = pc_plus_4    ;
   assign pc_plus_imm  = pc  + immediate_data      ;
   assign rs1_plus_imm = left_operand + immediate_data      ;
   assign is_rs1_eq_rs2        = (left_operand == right_operand)                  ;
   assign is_rs1_lt_rs2        = (left_operand < right_operand)                   ;  // Unsigned comparison
   assign is_sign_rs1_lt_rs2   = (signed'(left_operand) < signed'(right_operand)) ;  // Signed comparison
   assign is_branch_taken_diff = branch_taken ^ branch_predict     ;  // Compare current and computed status and flag if different 
  
   

    
    always_comb begin: operand_selector

       // BRANCH
       if (control.is_branch) begin
	   case (control.funct3)
             F3_BEQ  : begin
                branch_taken = is_rs1_eq_rs2 ;
                branch_pc    = branch_taken ? pc_plus_imm : pc_plus_4 ;
                flush        = is_branch_taken_diff ;                  
             end                       
             F3_BNE  : begin
                branch_taken = ~is_rs1_eq_rs2 ; 
                branch_pc    = branch_taken ? pc_plus_imm : pc_plus_4 ;
                flush        = is_branch_taken_diff ;  
             end
             F3_BLT  : begin
                branch_taken = is_sign_rs1_lt_rs2 ;
                branch_pc    = branch_taken ? pc_plus_imm : pc_plus_4 ;
                flush        = is_branch_taken_diff ;
             end
             F3_BGE  : begin
                branch_taken = ~is_sign_rs1_lt_rs2 ; 
                branch_pc    = branch_taken ? pc_plus_imm : pc_plus_4 ;
                flush        = is_branch_taken_diff ;
             end
             F3_BLTU : begin
                branch_taken = is_rs1_lt_rs2 ;
                branch_pc    = branch_taken ? pc_plus_imm : pc_plus_4 ;
                flush        = is_branch_taken_diff ;
             end
             F3_BGEU : begin
                branch_taken = ~is_rs1_lt_rs2 ; 
                branch_pc    = branch_taken ? pc_plus_imm : pc_plus_4 ;
                flush        = is_branch_taken_diff ;
             end
             default : begin  // Illegal Branch instruction
                branch_taken = 1'b0      ;
                branch_pc    = pc_plus_4 ;
                flush        = 1'b0      ;     
             end            
	   endcase            
       end // if (control.is_branch)

       //JAL & JALR
       else if (control.is_jump) begin
	  branch_taken = 1'b1         ;
	  branch_pc    = pc_plus_imm  ;
	  flush        = is_branch_taken_diff         ;
       end

       else if (control.is_jumpr) begin
	  branch_taken = 1'b1 ;
	  branch_pc    = rs1_plus_imm & {{31{1'b1}}, 1'b0} ;  // LSb should be cleared to 0 for JALR
	  flush        = is_branch_taken_diff ;  
       end
       
       else begin
	  branch_taken = 1'b0      ;
	  branch_pc    = pc_plus_4 ;  
	  flush        = 1'b0      ; 
       end       
       
       end
    
    
endmodule
