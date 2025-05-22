import common::*;
module tb_divider;

    localparam XLEN_WIDTH = 32;

    // DUT I/Os
    logic clk;
    logic reset_n;
    // 确保 start 在无输入时始终拉低（默认赋�??0，不出高阻抗�?
    logic start = 1'b0;
    alu_op_type operation; // DIV, DIVU, REM, REMU
    logic [XLEN_WIDTH-1:0] operand1; // dividend
    logic [XLEN_WIDTH-1:0] operand2; // divisor
    logic [XLEN_WIDTH-1:0] result;
    logic ready;

    // Instantiate divider
    divider dut (
        .clk(clk),
        .reset_n(reset_n),
        .start(start),
        .operation(operation),
        .operand1(operand1),
        .operand2(operand2),
        .result(result),
        .ready(ready)
    );

    // Clock generation: 10ns period
    always #5 clk = ~clk;

    // Reset task
    task reset_dut();
        begin
            reset_n = 0;
            repeat(2) @(posedge clk);
            reset_n = 1;
            // 确保复位后，start处于低电�?
            start = 0;
        end
    endtask

    int fail_count = 0;

    // Test task: drives operation, operands and checks the result once ready
    // 注意：start 信号�? reset 信号之间确保有一个时钟周期的间隔
    task automatic do_test(
        input alu_op_type op,
        input logic [XLEN_WIDTH-1:0] a,
        input logic [XLEN_WIDTH-1:0] b,
        input logic [XLEN_WIDTH-1:0] expected,
        input string msg
    );
        begin
            // 在每次测试前等待�?个时钟周期以确保上一轮结束，并使 start 保持�? 0
            @(posedge clk);
            start = 0;
            operation = op;
            operand1  = a;
            operand2  = b;
            // 驱动 start 高一个时钟周期，然后拉低 start
            start = 1;
            @(posedge clk);
            start = 0;
            // 等待 divider �? ready 拉高
            wait(ready);
            //@(posedge clk); // 确保结果稳定
            if (result !== expected) begin
                $error("Test failed: %s, a: %0h, b: %0h, result: %0h, expected: %0h",
                       msg, a, b, result, expected);
                fail_count++;
            end else begin
                $display("Test passed: %s, a: %0h, b: %0h, result: %0h",
                         msg, a, b, result);
            end
        end
    endtask

    // Main test sequence
    initial begin
        $display("Starting divider testbench...");
        clk = 0;
        reset_dut();
        // 确保 reset 后有�?个时钟周期的空闲
        @(posedge clk);

        // ---------------------------
        // Signed division tests (ALU_DIV)
        do_test(ALU_DIV, 32'h0000000A, 32'h00000005, 32'd2, "Signed DIV Test 1");
        do_test(ALU_DIV, 32'hFFFF_FFF6, 32'h00000005, 32'hFFFF_FFFE, "Signed DIV Test 2");

        // ---------------------------
        // Signed remainder tests (ALU_REM)
        do_test(ALU_REM, 32'h0000000A, 32'h00000005, 32'd0, "Signed REM Test 1");
        do_test(ALU_REM, 32'hFFFF_FFF3, 32'h00000005, 32'hFFFF_FFFD, "Signed REM Test 2");

        // ---------------------------
        // Unsigned division tests (ALU_DIVU)
        do_test(ALU_DIVU, 32'h0000000A, 32'h00000005, 32'd2, "Unsigned DIVU Test 1");

        // ---------------------------
        // Unsigned remainder tests (ALU_REMU)
        do_test(ALU_REMU, 32'h0000000A, 32'h00000005, 32'd0, "Unsigned REMU Test 1");

        // ---------------------------
        // Division-by-zero tests (RISC-V spec)
        do_test(ALU_DIV, 32'h0000000A, 32'h00000000, {XLEN_WIDTH{1'b1}}, "Signed DIV DivByZero");
        do_test(ALU_REM, 32'h0000000A, 32'h00000000, 32'h0000000A, "Signed REM DivByZero");
        do_test(ALU_DIVU, 32'h0000000A, 32'h00000000, {XLEN_WIDTH{1'b1}}, "Unsigned DIVU DivByZero");
        do_test(ALU_REMU, 32'h0000000A, 32'h00000000, 32'h0000000A, "Unsigned REMU DivByZero");

        if (fail_count > 0)
            $display("Testbench completed with %0d failures.", fail_count);
        else
            $display("All divider tests passed.");
        $finish;
    end

endmodule