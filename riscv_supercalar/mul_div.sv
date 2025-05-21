import common::*;
module mul_div (/*AUTOARG*/
   // Outputs
   result, busy, out_valid, out_rob_id, out_prf_id,
   // Inputs
   clk, reset_n, start, left_operand, right_operand, rob_id,
   flush_robid, prf_id, flush_valid, operation
   );

   input 		       clk, reset_n;
   input 		       start;
   input [31:0] 	       left_operand, right_operand;
   input [ROB_WIDTH:0] 	       rob_id;
   input [ROB_WIDTH:0] 	       flush_robid;
   input [PRF_WIDTH-1:0]       prf_id;
   input 		       flush_valid;
   input alu_op_type           operation;

   
   output logic [31:0] 	       result;
   output 		       busy;
   output 		       out_valid;//used to flush
   output [ROB_WIDTH:0]        out_rob_id;
   output [PRF_WIDTH-1:0]      out_prf_id;
 

    // Internal signals
    logic [XLEN_WIDTH-1:0] mul_result;
    logic [2*XLEN_WIDTH-1:0] mul_product;
    logic [XLEN_WIDTH-1:0] div_result;
    logic mul_finish, div_finish;
    logic mul_busy, div_busy;

    // Control signals
   logic  is_multiplication;
   logic  is_multiplication_out;
   logic  is_division;
   logic  is_division_out;
   logic  cal_finish;
   logic  need_to_flush;
   

   //valid and useful info
   logic                 reg_valid;
   logic [ROB_WIDTH:0]   reg_robid;
   logic [PRF_WIDTH-1:0] reg_prf_id;
   alu_op_type 		 reg_op;

   
// need to flush
   assign need_to_flush = (flush_valid & (reg_robid[ROB_WIDTH] ^ flush_robid[ROB_WIDTH] ^ (reg_robid[ROB_WIDTH-1:0] > flush_robid[ROB_WIDTH-1:0])))?1:0;
   
   // valid set and unset
   always_ff@(posedge clk) begin
      if(!reset_n || need_to_flush )
	reg_valid <= '0;
      else if (start & !flush_valid)
	reg_valid <= '1;
      else if (cal_finish & !flush_valid)
	reg_valid <= '0;            
   end
   
   //latch control infor
   always_ff@(posedge clk) begin
      if(!reset_n) begin
	reg_prf_id <= '0;
	reg_robid  <= '0;
	reg_op     <= ALU_ADD;
      end
      else if (start) begin
	reg_prf_id <= prf_id;          
	reg_robid  <= rob_id;          
	reg_op     <= operation;
      end          
   end
   
   
    assign is_multiplication = (operation == ALU_MUL);
    assign is_division = (operation == ALU_DIV || operation == ALU_DIVU || operation == ALU_REM || operation == ALU_REMU);
   
   assign is_multiplication_out = (reg_op == ALU_MUL);
   assign is_division_out = (reg_op == ALU_DIV || reg_op == ALU_DIVU || reg_op == ALU_REM || reg_op == ALU_REMU);
   assign mul_result = mul_product[31:0];
   

   //valid reg and info of instr
   

    mult inst_multiplier (
			  // Outputs
			  .product		(mul_product),
			  .done			(mul_finish),
			  .busy			(mul_busy),
			  // Inputs
			  .clock		(clk),
			  .reset_n		(reset_n & ~need_to_flush),
			  .start		(is_multiplication && start),
			  .flush_valid		(flush_valid),
			  .sign			('1),
			  .mcand		(left_operand),
			  .mplier		(right_operand));


    // Divider
    divider inst_divider (
			  // Outputs
			  .result		(div_result),
			  .finish		(div_finish),
			  .busy		        (div_busy),
			  // Inputs
			  .clk			(clk),
			  .reset_n		(reset_n & ~need_to_flush),//
			  .start		(is_division && start),
			  .operation_in		(operation),// from ex buf
			  .operation_out	(reg_op),//from reg
			  .flush_valid		(flush_valid),
			  .operand1		(left_operand),
			  .operand2		(right_operand));

    // Output logic
    always_comb begin
        if (is_multiplication_out) begin
            result = mul_result; 
        end else if (is_division_out) begin
            result = div_result;
        end else begin
            result = '0;
        end
    end

   assign busy = div_busy | mul_busy;
   assign cal_finish = div_finish | mul_finish;
   assign out_valid  = cal_finish & reg_valid;
   assign out_rob_id = reg_robid;
   assign out_prf_id = reg_prf_id;
   
   

endmodule
