`timescale 1ns/1ps
import common::*;



module busytable (
/*AUTOARG*/
   // Outputs
   instr0_rs1_busy, instr0_rs2_busy, instr1_rs1_busy, instr1_rs2_busy,
   // Inputs
   clk, reset_n, instr0_disp2bt_rs1, instr0_disp2bt_rs2,
   instr1_disp2bt_rs1, instr1_disp2bt_rs2, instr0_disp2bt_rs1_valid,
   instr0_disp2bt_rs2_valid, instr1_disp2bt_rs1_valid,
   instr1_disp2bt_rs2_valid, instr0_disp2bt_rd, instr1_disp2bt_rd,
   instr0_disp2bt_rd_en, instr1_disp2bt_rd_en, int0_mul_wb,
   int0_mul_wb_en, int0_alu_wb, int0_alu_wb_en, int1_alu_wb,
   int1_alu_wb_en, mem_alu_wb, mem_alu_wb_en, rob_state,
   rob_walk0_valid, rob_walk0_complete, rob_walk0_prd,
   rob_walk1_valid, rob_walk1_prd, rob_walk1_complete
   );
   input 			     clk;
   input 			     reset_n;

   //input from dispatch
      //read from dispatch
   input [PRF_WIDTH-1:0] 	     instr0_disp2bt_rs1;
   input [PRF_WIDTH-1:0] 	     instr0_disp2bt_rs2;
   input [PRF_WIDTH-1:0] 	     instr1_disp2bt_rs1;
   input [PRF_WIDTH-1:0] 	     instr1_disp2bt_rs2;
   input 			     instr0_disp2bt_rs1_valid;
   input 			     instr0_disp2bt_rs2_valid;
   input 			     instr1_disp2bt_rs1_valid;
   input 			     instr1_disp2bt_rs2_valid;
   output  logic 		     instr0_rs1_busy;
   output  logic 		     instr0_rs2_busy;
   output  logic 		     instr1_rs1_busy;
   output  logic 		     instr1_rs2_busy;
     // write to dipatch
   input [PRF_WIDTH-1:0] 	     instr0_disp2bt_rd;
   input [PRF_WIDTH-1:0] 	     instr1_disp2bt_rd;
   input 			     instr0_disp2bt_rd_en;
   input 			     instr1_disp2bt_rd_en;

   //from CDB
   input [PRF_WIDTH-1:0] 	     int0_mul_wb;
   input 			     int0_mul_wb_en;
   input [PRF_WIDTH-1:0] 	     int0_alu_wb;
   input 			     int0_alu_wb_en;
   input [PRF_WIDTH-1:0] 	     int1_alu_wb;
   input 			     int1_alu_wb_en;
   input [PRF_WIDTH-1:0] 	     mem_alu_wb;
   input 			     mem_alu_wb_en;

   //recovery
 
   input [1:0] 			     rob_state;
   input 			     rob_walk0_valid;
   input 			     rob_walk0_complete;
   input [PRF_WIDTH-1:0] 	     rob_walk0_prd;
   input 			     rob_walk1_valid;
   input [PRF_WIDTH-1:0] 	     rob_walk1_prd;
   input  			     rob_walk1_complete;
   
 	     
   
 	     



   /////////////////////
    wire is_idle;
    wire is_rollback;
    wire is_walking;
    assign is_idle     = (rob_state == rob_idle);
    assign is_rollback = (rob_state == rob_rollback);
    assign is_walking  = (rob_state == rob_walk);

    logic  reg_busy_table[PRF_NUM-1:0];   // 1 means busy,0 means available
      

// busy table write from dispatch/WB/walk

//**** when rollback, wb is still working, Busy table cant set the correct value. But it is fine because wb can set "complete" signal in rob, then use that to recover.    
   always_ff@( posedge clk) begin
        integer i;
        if (!reset_n | is_rollback) begin
            for (i = 0; i < PRF_NUM; i = i + 1) begin
                reg_busy_table[i] <= 1'b0;  //means all ready
            end
        end 
	else begin// be careful when walk and wb occur together!!! the wb operation is the newest, so take wb result
           if (instr0_disp2bt_rd_en) begin
                reg_busy_table[instr0_disp2bt_rd] <= 1'b1;
            end
	   if (instr1_disp2bt_rd_en) begin
	      reg_busy_table[instr1_disp2bt_rd] <= 1'b1;
           end
	   
           if (rob_walk0_valid & ~rob_walk0_complete) begin
              reg_busy_table[rob_walk0_prd] <= 1'b1;
           end

           if (rob_walk1_valid & ~rob_walk1_complete) begin
              reg_busy_table[rob_walk1_prd] <= 1'b1;
           end
           
           if (int0_alu_wb_en) begin
              reg_busy_table[int0_alu_wb] <= 1'b0;
           end
           if (int0_mul_wb_en) begin
              reg_busy_table[int0_mul_wb] <= 1'b0;
	   end
           if (int1_alu_wb_en) begin
              reg_busy_table[int1_alu_wb] <= 1'b0;
	   end
           if (mem_alu_wb_en) begin
              reg_busy_table[mem_alu_wb] <= 1'b0;
	   end            
        end
    end

//reg_busy_table read

// be careful about the src1_state forwarding; if it is to set '0,no problem, but if it is '1,you should check the valid of src1/2 !!! 
    always_comb begin
        if (int0_alu_wb_en && (int0_alu_wb == instr0_disp2bt_rs1)) begin
            instr0_rs1_busy = 'b0;  //bypass logic
        end
	else if (int0_mul_wb_en && (int0_mul_wb == instr0_disp2bt_rs1)) begin
            instr0_rs1_busy = 'b0;  //bypass logic
	end
	else if (int1_alu_wb_en && (int1_alu_wb == instr0_disp2bt_rs1)) begin
           instr0_rs1_busy = 'b0;  //bypass logic
        end
	else if (mem_alu_wb_en && (mem_alu_wb == instr0_disp2bt_rs1)) begin
            instr0_rs1_busy = 'b0;  //bypass logic	   
        end
	else begin
            instr0_rs1_busy = reg_busy_table[instr0_disp2bt_rs1] && instr0_disp2bt_rs1_valid;
        end
    end
    always_comb begin
        if (int0_alu_wb_en && (int0_alu_wb == instr0_disp2bt_rs2)) begin
            instr0_rs2_busy = 'b0;  //bypass logic
        end
	else if (int0_mul_wb_en && (int0_mul_wb == instr0_disp2bt_rs2)) begin
            instr0_rs2_busy = 'b0;  //bypass logic
	end
	else if (int1_alu_wb_en && (int1_alu_wb == instr0_disp2bt_rs2)) begin
           instr0_rs2_busy = 'b0;  //bypass logic
        end
	else if (mem_alu_wb_en && (mem_alu_wb == instr0_disp2bt_rs2)) begin
            instr0_rs2_busy = 'b0;  //bypass logic	   
        end
	else begin
            instr0_rs2_busy = reg_busy_table[instr0_disp2bt_rs2] && instr0_disp2bt_rs2_valid;
        end
    end
    always_comb begin
        if (int0_alu_wb_en && (int0_alu_wb == instr1_disp2bt_rs1)) begin
            instr1_rs1_busy = 'b0;  //bypass logic both for wb and instr0 dispatch
        end
	else if (int0_mul_wb_en && (int0_mul_wb == instr1_disp2bt_rs1)) begin
            instr1_rs1_busy = 'b0;  //bypass logic
	end
	else if (int1_alu_wb_en && (int1_alu_wb == instr1_disp2bt_rs1)) begin
           instr1_rs1_busy = 'b0;  //bypass logic
        end
	else if (mem_alu_wb_en && (mem_alu_wb == instr1_disp2bt_rs1)) begin
            instr1_rs1_busy = 'b0;  //bypass logic	   
        end     
	else begin
            instr1_rs1_busy = reg_busy_table[instr1_disp2bt_rs1] && instr1_disp2bt_rs1_valid;
        end
        if (instr0_disp2bt_rd_en && (instr0_disp2bt_rd == instr1_disp2bt_rs1)) begin
            instr1_rs1_busy = instr1_disp2bt_rs1_valid;  //bypass logic	   
        end 
    end
    always_comb begin
        if (int0_alu_wb_en && (int0_alu_wb == instr1_disp2bt_rs2)) begin
            instr1_rs2_busy = 'b0;  //bypass logic
        end
	else if (int0_mul_wb_en && (int0_mul_wb == instr1_disp2bt_rs2)) begin
            instr1_rs2_busy = 'b0;  //bypass logic
	end
	else if (int1_alu_wb_en && (int1_alu_wb == instr1_disp2bt_rs2)) begin
           instr1_rs2_busy = 'b0;  //bypass logic
        end
	else if (mem_alu_wb_en && (mem_alu_wb == instr1_disp2bt_rs2)) begin
            instr1_rs2_busy = 'b0;  //bypass logic	   
        end
	else begin
            instr1_rs2_busy = reg_busy_table[instr1_disp2bt_rs2] && instr1_disp2bt_rs2_valid;
        end
       if (instr0_disp2bt_rd_en && (instr0_disp2bt_rd == instr1_disp2bt_rs2)) begin
            instr1_rs2_busy = instr1_disp2bt_rs2_valid;  //bypass logic	   
        end 
    end
endmodule
