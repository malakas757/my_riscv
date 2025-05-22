`timescale 1ns / 1ps


module cpu_tb();

    logic clock = 0;
    logic reset_n = 0;
    logic debug_flush;

    int flush_times = 0;
    int bj_times = 0;
    
    
    always begin
        #10 clock = ~clock;
    end


    initial begin
        #35 reset_n = 1;

    end
    always@(posedge clock) begin
        if (debug_flush) 
            flush_times <= flush_times+1;
        if ( debug_is_bj)   
            bj_times <= bj_times+1;
    end
    
    cpu cpu_inst(
        .clk(clock),
        .reset_n(reset_n),
        .debug_flush(debug_flush),
        .debug_exception(debug_exception),
        .debug_is_bj(debug_is_bj)
    );
    
endmodule