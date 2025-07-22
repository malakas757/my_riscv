
`timescale 1ns/1ps
`include "define.sv"

module Icache1_tb;

  // 时钟和复位
  logic clk = 0;
  logic rstn;

  always #5 clk = ~clk;  // 100MHz 时钟

  // 输入信号
  logic Icachestop;
  logic Icacheflush;
  logic [`ADDR_WIDTH-1:0] pc;
  logic pc_valid;
  logic hit_valid;
  logic [$clog2(`CACHE_SET)-1:0] hit_set;
  logic [1:0] hit_way;
  logic refill_valid;
  logic [$clog2(`CACHE_SET)-1:0] refill_set;
  logic [`CACHE_TAG_WIDTH-1:0] refill_tag;
  logic [`CACHELINE_WIDTH-1:0] refill_data;

  // 输出信号
  logic tos2_valid;
  logic [`ADDR_WIDTH-1:0] tos2_pc;
  logic [`CACHELINE_WIDTH-1:0] tos2_data[0:3];
  logic [`CACHE_TAG_WIDTH-1:0] tos2_tag[0:3];

  // DUT 实例化
  Icache1 dut (
    .clk(clk),
    .rstn(rstn),
    .Icachestop(Icachestop),
    .Icacheflush(Icacheflush),
    .pc(pc),
    .pc_valid(pc_valid),
    .hit_valid(hit_valid),
    .hit_set(hit_set),
    .hit_way(hit_way),
    .refill_valid(refill_valid),
    .refill_set(refill_set),
    .refill_tag(refill_tag),
    .refill_data(refill_data),
    .tos2_valid(tos2_valid),
    .tos2_pc(tos2_pc),
    .tos2_data(tos2_data),
    .tos2_tag(tos2_tag)
  );

  initial begin
    // 初始化信号
    rstn = 0;
    Icachestop = 0;
    Icacheflush = 0;
    pc = 0;
    pc_valid = 0;
    hit_valid = 0;
    refill_valid = 0;

    #20;
    rstn = 1;

    // --------- 模拟 PC 发出请求 ---------
    #10;
    pc = 32'h1000_0000;
    pc_valid = 1;

    #10;
    pc_valid = 0;  // 发出后停止

    // --------- 模拟一次 refill ---------
    #10;
    refill_valid = 1;
    refill_set = pc[5:0];  // 假设 set 为 PC[5:0]
    refill_tag = pc[31:6];
    refill_data = 128'hDEADBEEF_CAFECAFE_12345678_ABCDEF01;

    #10;
    refill_valid = 0;

    // --------- 模拟 hit 更新 ---------
    #20;
    hit_valid = 1;
    hit_set = refill_set;
    hit_way = 2;  // 模拟命中 way 2

    #10;
    hit_valid = 0;

    // --------- 停止仿真 ---------
    #50;
    $display("tos2_valid: %0d, tos2_pc: 0x%08h", tos2_valid, tos2_pc);
    $display("tos2_data[2]: 0x%h", tos2_data[2]);
    $display("tos2_tag[2]: 0x%h", tos2_tag[2]);
    $finish;
  end

endmodule
