`timescale 1ns / 1ps

import common::*;

module program_memory (
    input clk,
    input [XLEN_WIDTH-1:0] byte_address,
    input write_enable,         
    input [XLEN_WIDTH-1:0] write_data, 
    output logic [XLEN_WIDTH-1:0] read_data
);

    logic [31:0] ram [256];
    logic [7:0] word_address;
    
    
    assign word_address = byte_address[9:2];    
    
    
    initial begin
        $readmemh("instruction_mem.mem", ram);
    end
    
    
    always @(posedge clk) begin
        if (write_enable) begin
            ram[word_address] <= write_data;
        end 
    end
    
    assign read_data = ram[word_address];

endmodule
