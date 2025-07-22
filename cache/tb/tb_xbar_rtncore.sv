module tb_rtn_xbar_core;
`include "define.sv"



logic                        clk                  ;
logic                        rstn                ;
logic                        d_bank0_valid         ;
logic                        d_bank0_enable         ;
logic          [127: 0]      d_bank0_data          ;
logic          [  1: 0]      d_bank0_chl_id    ;
logic [`ROB_WIDTH-1:0]       d_bank0_rob_id        ;

logic                        d_bank1_valid         ;
logic                        d_bank1_enable         ;
logic          [127: 0]      d_bank1_data          ;
logic          [  1: 0]      d_bank1_chl_id    ;
logic [`ROB_WIDTH-1:0]       d_bank1_rob_id        ;

logic                        d_bank2_valid         ;
logic                        d_bank2_enable         ;
logic          [127: 0]      d_bank2_data          ;
logic          [  1: 0]      d_bank2_chl_id    ;
logic [`ROB_WIDTH-1:0]       d_bank2_rob_id        ;
   
logic                        d_bank3_valid         ;
logic                        d_bank3_enable         ;
logic          [127: 0]      d_bank3_data          ;
logic          [  1: 0]      d_bank3_chl_id    ;
logic [`ROB_WIDTH-1:0]       d_bank3_rob_id        ;

logic                        u_channel_0_rsp_valid      ;
logic                        u_channel_0_rsp_ready      ;
logic          [127: 0]      u_channel_0_rsp_data       ;
logic          [  1: 0]      u_channel_0_rsp_bank_id    ;
   logic [`ROB_WIDTH-1:0]    u_channel_0_rsp_rob_id     ;

logic                        u_channel_1_rsp_valid      ;
logic                        u_channel_1_rsp_ready      ;
logic          [127: 0]      u_channel_1_rsp_data       ;
logic          [  1: 0]      u_channel_1_rsp_bank_id    ;
logic [`ROB_WIDTH-1:0]                u_channel_1_rsp_rob_id     ;

logic                        u_channel_2_rsp_valid      ;
logic                        u_channel_2_rsp_ready      ;
logic          [127: 0]      u_channel_2_rsp_data       ;
logic          [  1: 0]      u_channel_2_rsp_bank_id    ;
logic [`ROB_WIDTH-1:0]               u_channel_2_rsp_rob_id     ;

always# 10  clk = ~clk;



initial begin
    clk     = 1'b0;
    rstn   = 1'b0;
    u_channel_0_rsp_ready = 1'b1;
    u_channel_1_rsp_ready = 1'b1;
    u_channel_2_rsp_ready = 1'b1;
    #453
    rstn   = 1'b1;
    u_channel_0_rsp_ready = 1'b1;
    u_channel_1_rsp_ready = 1'b1;
    u_channel_2_rsp_ready = 1'b1;
end

initial begin
    #25000;
    $finish;
end

always @ (posedge clk or negedge rstn) begin
    if (!rstn) begin
        d_bank0_valid <= '0;
        d_bank1_valid <= '0;
        d_bank2_valid <= '0;
        d_bank3_valid <= '0;
    end else begin
        d_bank0_valid <=  $random;
        d_bank1_valid <=  $random;
        d_bank2_valid <=  $random;
        d_bank3_valid <=  $random;
    end
end

always @ (posedge clk or negedge rstn) begin
    if (!rstn) begin
        d_bank0_data <= '0;
        d_bank0_channel_id <= '0;
        d_bank0_rob_id <= '0;
    end else if (d_bank0_valid & d_bank0_ready) begin
        d_bank0_data <= $random;
        d_bank0_channel_id <= $urandom_range(2, 0);
        d_bank0_rob_id <= $random;
    end
end

always @ (posedge clk or negedge rstn) begin
    if (!rstn) begin
        d_bank1_data <= '0;
        d_bank1_channel_id <= '0;
        d_bank1_rob_id <= '0;
    end else if (d_bank1_valid & d_bank1_ready) begin
        d_bank1_data <= $random;
        d_bank1_channel_id <=  $urandom_range(2, 0);
        d_bank1_rob_id <= $random;
    end
end

always @ (posedge clk or negedge rstn) begin
    if (!rstn) begin
        d_bank2_data <= '0;
        d_bank2_channel_id <= '0;
        d_bank2_rob_id <= '0;
    end else if (d_bank2_valid & d_bank2_ready) begin
        d_bank2_data <= $random;
        d_bank2_channel_id <= $urandom_range(2, 0);
        d_bank2_rob_id <= $random;
    end
end

always @ (posedge clk or negedge rstn) begin
    if (!rstn) begin
        d_bank3_data <= '0;
        d_bank3_channel_id <= '0;
        d_bank3_rob_id <= '0;
    end else if (d_bank3_valid & d_bank3_ready) begin
        d_bank3_data <= $random;
        d_bank3_channel_id <=  $urandom_range(2, 0);
        d_bank3_rob_id <= $random;
    end
end

rtn_xbar_core 
 u_rtn_xbar_core (
    .clk                                (clk                       ),
    .rstn                              (rstn                     ),
    .*
);

endmodule
