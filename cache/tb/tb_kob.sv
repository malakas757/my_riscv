`timescale 1ns/1ps

module tb_kob;
   



 



logic                        clk                        ;
logic                        rstn                      ;

logic                        u_channel_0_req_valid      ;
logic                        u_channel_0_req_ready      ;

   logic [1:0]		     u_channel_0_req_op             ; 
   logic [1:0]		     u_channel_0_req_bank_id        ;

logic                        u_channel_1_req_valid      ;
logic                        u_channel_1_req_ready      ;

logic [1:0]		     u_channel_1_req_op             ; 
   logic [1:0]		     u_channel_1_req_bank_id        ;

logic                        u_channel_2_req_valid      ;
logic                        u_channel_2_req_ready      ;
logic [1:0]		     u_channel_2_req_op             ; 
   logic [1:0]		     u_channel_2_req_bank_id        ;


logic                        d_ch_0_rob_req             ;
logic                        d_ch_0_rob_ack             ;
logic           [  1: 0]     d_ch_0_rob_bank_id         ;

logic                        d_ch_1_rob_req             ;
logic                        d_ch_1_rob_ack             ;
logic           [  1: 0]     d_ch_1_rob_bank_id         ;

logic                        d_ch_2_rob_req             ;
logic                        d_ch_2_rob_ack             ;
logic           [  1: 0]     d_ch_2_rob_bank_id         ;

logic                        ch_0_kob_full              ;
logic                        ch_1_kob_full              ;
logic                        ch_2_kob_full              ;


always# 10  clk = ~clk;

assign u_channel_0_req_ready = ~ch_0_kob_full;
assign u_channel_1_req_ready = ~ch_1_kob_full;
assign u_channel_2_req_ready = ~ch_2_kob_full;



initial begin
    clk     = 1'b0;
    rstn   = 1'b0;
    #20
    rstn   = 1'b1;
end

initial begin
    #25000;
    $finish;
end

always @ (posedge clk or negedge rstn) begin
    if (!rstn) begin
        u_channel_0_req_valid <= '0;
        u_channel_1_req_valid <= '0;
        u_channel_2_req_valid <= '0;
        d_ch_0_rob_ack        <= '0;
        d_ch_1_rob_ack        <= '0;
        d_ch_2_rob_ack        <= '0;
    end else begin
        u_channel_0_req_valid <=  $random;
        u_channel_1_req_valid <=  $random;
        u_channel_2_req_valid <=  $random;
        d_ch_0_rob_ack        <=  $random;
        d_ch_1_rob_ack        <=  $random;
        d_ch_2_rob_ack        <=  $random;
    end
end

always @ (posedge clk or negedge rstn) begin
    if (!rstn) begin
        u_channel_0_req_op    <= '0;
        u_channel_0_req_bank_id  <= '0;

    end else if (u_channel_0_req_valid & u_channel_0_req_ready) begin
        u_channel_0_req_bank_id  <= $random;
        u_channel_0_req_op  <= $random;
    end
end

always @ (posedge clk or negedge rstn) begin
    if (!rstn) begin
        u_channel_1_req_op    <= '0;
        u_channel_1_req_bank_id  <= '0;

    end else if (u_channel_1_req_valid & u_channel_1_req_ready) begin
        u_channel_1_req_bank_id    <= $random;
        u_channel_1_req_op    <= $random;
    end
end

always @ (posedge clk or negedge rstn) begin
    if (!rstn) begin
        u_channel_2_req_op    <= '0;
        u_channel_2_req_bank_id  <= '0;
     
    end else if (u_channel_2_req_valid & u_channel_2_req_ready) begin
        u_channel_2_req_bank_id  <= $random;
        u_channel_2_req_op  <= $random;
    end
end

always @ (posedge clk or negedge rstn) begin
    if (!rstn) begin
        d_ch_0_rob_ack <= '0;
        d_ch_1_rob_ack <= '0;
        d_ch_2_rob_ack <= '0;
    end else begin
        d_ch_0_rob_ack <= $random;
        d_ch_1_rob_ack <= $random;
        d_ch_2_rob_ack <= $random;
    end
end

KOB # ( 
    .KOB_DEPTH           (16            )

) u_kob (

    .*
);

endmodule
