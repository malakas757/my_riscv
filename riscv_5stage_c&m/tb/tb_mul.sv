/* import common::*;

module tb_mul_div;

    // Parameters
    localparam XLEN_WIDTH = 32;

    // Inputs
    logic clk;
    logic reset_n;
    logic start;
    alu_op_type operation;
    logic [XLEN_WIDTH-1:0] operand1;
    logic [XLEN_WIDTH-1:0] operand2;

    // Outputs
    logic [XLEN_WIDTH-1:0] result;
    logic ready;

    // Instantiate the DUT
    mul_div #(
        .XLEN_WIDTH(XLEN_WIDTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .start(start),
        .operation(operation),
        .operand1(operand1),
        .operand2(operand2),
        .result(result),
        .ready(ready)
    );

    // Clock generation
    always #5 clk = ~clk; // 10ns clock period

    // Reset task
    task reset_dut();
        begin
            reset_n = 0;
            @(posedge clk);
            @(posedge clk);
            reset_n = 1;
        end
    endtask

    // Test task
    int fail_count = 0; // Counter for failed tests

    task automatic do_test(
        input alu_op_type op,
        input logic [XLEN_WIDTH-1:0] a,
        input logic [XLEN_WIDTH-1:0] b,
        input logic [XLEN_WIDTH-1:0] expected,
        input string msg
    );
        operation = op;
        operand1 = a;
        operand2 = b;
        start = 1;
        @(posedge clk);
        start = 0;

        // Wait for ready signal
        wait (ready);
        @(posedge clk); // Ensure result is stable
        if (result !== expected) begin
            $error("Test failed: %0s, Operand1: %0d, Operand2: %0d, Result: %0d, Expected: %0d", msg, a, b, result, expected);
            fail_count++;
        end else begin
            $display("Test passed: %0s, Operand1: %0d, Operand2: %0d, Result: %0d", msg, a, b, result);
        end
    endtask

    // Main test
    initial begin
        $display("Starting testbench...");
        clk = 0;
        reset_dut();

        // Multiplication tests
        do_test(ALU_MUL, 32'h0000_000A, 32'h0000_0005, 32'd50, "MUL Test 1");
        do_test(ALU_MUL, 32'hFFFF_0001, 32'h0000_FFFF, 32'hFFFE_FFFF, "MUL Test 2");
        do_test(ALU_MUL, 0, 32'hABCD_EF01, 0, "MUL Test 3");
        do_test(ALU_MUL, 32'h7FFF_FFFF, 32'h7FFF_FFFF, 32'h0000_0001, "MUL Test 4"); // Low 32 bits
        do_test(ALU_MUL, 32'h8000_0000, 32'h8000_0000, 32'h0000_0000, "MUL Test 5"); // Low 32 bits

        // Division tests
        do_test(ALU_DIV, 32'h0000_000A, 32'h0000_0005, 32'd2, "DIV Test 1");
        do_test(ALU_DIV, 32'hFFFF_0001, 32'h0000_FFFF, 32'hFFFF, "DIV Test 2");
        do_test(ALU_DIV, 32'h7FFF_FFFF, 32'h0000_0001, 32'h7FFF_FFFF, "DIV Test 3");
        do_test(ALU_DIV, 32'h8000_0000, 32'hFFFF_FFFF, 32'h8000_0000, "DIV Test 4");

        // Remainder tests
        do_test(ALU_REM, 32'h0000_000A, 32'h0000_0005, 32'd0, "REM Test 1");
        do_test(ALU_REM, 32'hFFFF_0001, 32'h0000_FFFF, 32'h0000_FFFE, "REM Test 2");
        do_test(ALU_REM, 32'h7FFF_FFFF, 32'h0000_0002, 32'h0000_0001, "REM Test 3");

        // Summary
        if (fail_count > 0) begin
            $display("Testbench completed with %0d failures.", fail_count);
        end else begin
            $display("All test cases passed.");
        end
        $finish;
    end

endmodule */

import common::*;
module tb_mul_div;

    // 输入信号（此处只测试除法/取余，所以只给出 division 操作码）
    logic clk;
    logic reset_n;
    logic start;
    alu_op_type operation;  // 只用 ALU_DIV, ALU_DIVU, ALU_REM, ALU_REMU
    logic [XLEN_WIDTH-1:0] operand1; // dividend
    logic [XLEN_WIDTH-1:0] operand2; // divisor

    // 输出信号
    logic [XLEN_WIDTH-1:0] result;
    logic ready;

    // 实例化 DUT（mul_div 模块内部包含 iterative divider 部分）
    mul_div #(
        .XLEN_WIDTH(XLEN_WIDTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .start(start),
        .operation(operation),
        .operand1(operand1),
        .operand2(operand2),
        .result(result),
        .ready(ready)
    );

    // 时钟生成（10ns周期）
    always #5 clk = ~clk;

    // 复位任务
    task reset_dut();
        begin
            reset_n = 0;
            repeat (2) @(posedge clk);
            reset_n = 1;
        end
    endtask

    // 失败计数器
    int fail_count = 0;

    // 测试任务：只对除法指令进行测试
    task automatic do_test(
        input alu_op_type op, 
        input logic [XLEN_WIDTH-1:0] a, 
        input logic [XLEN_WIDTH-1:0] b, 
        input logic [XLEN_WIDTH-1:0] expected, 
        input string msg
    );
        begin
            operation = op;
            operand1  = a;
            operand2  = b;
            start     = 1;
            @(posedge clk);
            start = 0;

            // 等待迭代除法器计算完毕（ready置1）
            wait (ready);
            @(posedge clk); // 确保结果稳定

            if (result !== expected) begin
                $error("Test failed: %0s, a:%0h, b:%0h, result:%0h, expected:%0h", 
                        msg, a, b, result, expected);
                fail_count++;
            end else begin
                $display("Test passed: %0s, a:%0h, b:%0h, result:%0h", 
                        msg, a, b, result);
            end
        end
    endtask

    // 主测试程序：只测试除法和求余功能
    initial begin
        $display("Starting mul_div divider tests...");
        clk = 0;
        reset_dut();

        // --- 有符号除法测试 ---
        // 例1：10 / 5 = 2
        do_test(ALU_DIV, 32'h0000_000A, 32'h0000_0005, 32'd2, "Signed DIV Test 1");
        // 例2：(-10) / 5 = -2   －10 的32位补码为 0xFFFF_FFF6，期望输出为 0xFFFF_FFFE
        do_test(ALU_DIV, 32'hFFFF_FFF6, 32'h0000_0005, 32'hFFFF_FFFE, "Signed DIV Test 2");

        // --- 有符号余数测试 ---
        // 例3：10 % 5 = 0
        do_test(ALU_REM, 32'h0000_000A, 32'h0000_0005, 32'd0, "Signed REM Test 1");
        // 例4：(-13) % 5：-13补码为0xFFFF_FFF3，期望余数为 -3，即0xFFFF_FFFD
        do_test(ALU_REM, 32'hFFFF_FFF3, 32'h0000_0005, 32'hFFFF_FFFD, "Signed REM Test 2");

        // --- 无符号除法测试 ---
        // 例5：10 / 5 = 2
        do_test(ALU_DIVU, 32'h0000_000A, 32'h0000_0005, 32'd2, "Unsigned DIVU Test 1");

        // --- 无符号余数测试 ---
        // 例6：10 % 5 = 0
        do_test(ALU_REMU, 32'h0000_000A, 32'h0000_0005, 32'd0, "Unsigned REMU Test 1");

        if (fail_count > 0) begin
            $display("Testbench completed with %0d failures.", fail_count);
        end else begin
            $display("All divider tests passed.");
        end
        $finish;
    end

endmodule