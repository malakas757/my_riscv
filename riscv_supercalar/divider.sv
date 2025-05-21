import common::*;
module divider (
    input logic 		  clk,
    input logic 		  reset_n,
    input logic 		  start,
    input 			  alu_op_type operation_in, // from ex buffer
    input 			  alu_op_type operation_out, // from mul_div reg
    input 			  flush_valid, 
    input logic [XLEN_WIDTH-1:0]  operand1,
    input logic [XLEN_WIDTH-1:0]  operand2,
    output logic [XLEN_WIDTH-1:0] result,
    output logic 		  busy,
    output logic 		  finish
);

    typedef enum logic [1:0] {
        IDLE,
        CALC,
        DONE
    } state_t;

    state_t state, next_state;

    logic [XLEN_WIDTH-1:0] quotient, remainder;
    logic [5:0] bit_cnt;
    logic [XLEN_WIDTH-1:0] last_remainder;
    logic is_signed;
    logic dividend_sign, divisor_sign;
    logic [XLEN_WIDTH-1:0] abs_dividend, abs_divisor;
    logic [XLEN_WIDTH-1:0] operand1_tmp, operand2_tmp;
    logic [XLEN_WIDTH-1:0] final_quotient, final_remainder;


    always_comb begin
        case (operation_in)
            ALU_DIV, ALU_REM:   is_signed = 1;
            ALU_DIVU, ALU_REMU: is_signed = 0;
            default:            is_signed = 0;
        endcase
    end

    always_ff @(posedge clk) begin
        if (!reset_n)
            state <= IDLE;
        else if(!flush_valid)
            state <= next_state;
    end

    always_comb begin
        case (state)
            IDLE:  next_state = (start) ? CALC : IDLE;
            CALC:  next_state = (bit_cnt == 1) ? DONE : CALC;
            DONE:  next_state = IDLE ; 
            default: next_state = IDLE;
        endcase
    end

   assign finish = (state == DONE)? 1:0;
   assign busy   = (state == CALC | start)? 1:0;// "| start" means if inside ex buffer is a div instr, can not issue to this block 
   

    always_ff @(posedge clk) begin
        if (!reset_n) begin
            quotient    <= 0;
            remainder   <= 0;
            bit_cnt     <= 0;
            last_remainder <= 0;
            operand1_tmp <= 0;
            operand2_tmp <= 0;
            dividend_sign <= 0;
            divisor_sign  <= 0;
            abs_dividend  <= 0;
            abs_divisor   <= 0;
        end else if (!flush_valid)begin
            case (state)
                IDLE: begin
                    if (start) begin
                        operand1_tmp   <= operand1;
                        operand2_tmp   <= operand2;
                        dividend_sign  <= is_signed && operand1[XLEN_WIDTH-1];
                        divisor_sign   <= is_signed && operand2[XLEN_WIDTH-1];
                        abs_dividend   <= (is_signed && operand1[XLEN_WIDTH-1]) ? -operand1 : operand1;
                        abs_divisor    <= (is_signed && operand2[XLEN_WIDTH-1]) ? -operand2 : operand2;
                        quotient       <= 0;
                        remainder      <= 0;
                        bit_cnt        <= XLEN_WIDTH;
                        last_remainder <= 0;
                    end
                end

                CALC: begin
                    int index = bit_cnt - 1;
                    logic bit_in = (bit_cnt > 0) ? abs_dividend[index] : 1'b0;
                    logic [XLEN_WIDTH:0] temp_calc = {remainder[XLEN_WIDTH-2:0], bit_in};
                    if (temp_calc >= {1'b0, abs_divisor}) begin
                        quotient[index] <= 1'b1;
                        temp_calc = temp_calc - {1'b0, abs_divisor};
                    end else begin
                        quotient[index] <= 1'b0;
                    end
                    remainder <= temp_calc[XLEN_WIDTH-1:0];
                    bit_cnt <= bit_cnt - 1;

                    if (bit_cnt == 1) begin
                        last_remainder <= temp_calc[XLEN_WIDTH-1:0];
                    end
                end

                DONE: begin

                end
	      
	        default :begin

		end
            endcase
        end
    end

   always_comb begin
      case (operation_out)
        ALU_DIV:  result = (operand2_tmp == 0) ? 32'hFFFFFFFF : ((dividend_sign ^ divisor_sign) ? -quotient : quotient);
        ALU_DIVU: result = (operand2_tmp == 0) ? 32'hFFFFFFFF : quotient;
        ALU_REM:  result = (operand2_tmp == 0) ? operand1_tmp : (dividend_sign ? -last_remainder : last_remainder);
        ALU_REMU: result = (operand2_tmp == 0) ? operand1_tmp : last_remainder;
        default:  result = 0;
      endcase

   end

endmodule
