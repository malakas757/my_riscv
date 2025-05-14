`timescale 1ns / 1ps


module fetch_stage(/*AUTOARG*/
   // Outputs
   address,
   // Inputs
   clk, reset_n, PC_stall, branch_flush, branch_pc
   );
    input clk;
    input reset_n;
    input PC_stall;
    input branch_flush;
    input [31:0] branch_pc;
    output logic [31:0] address;
    
   
   
    logic [31:0] pc_next, pc_reg;
    
    
    always_ff @(posedge clk) begin
        if (!reset_n) begin
            pc_reg <= 0;
        end
        else begin
            pc_reg <= pc_next;
        end 
    end
        
        
    always_comb begin
       if(PC_stall) begin
	 pc_next = pc_reg;
         end
       else if ( branch_flush ) begin
	  pc_next = branch_pc;	  	  
	 end       
       else begin
         pc_next = pc_reg + 4;      
         end  
    end
    
    
    assign address = pc_reg;
    
endmodule
