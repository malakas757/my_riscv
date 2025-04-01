`timescale 1ns / 1ps

import common::*;

module program_memory (
    input clk,
    input [XLEN_WIDTH-1:0] byte_address0,
    input [XLEN_WIDTH-1:0] byte_address1,
    input write_enable,         
    input [XLEN_WIDTH-1:0] write_data, 
    output logic [XLEN_WIDTH-1:0] read_data0,
    output logic [XLEN_WIDTH-1:0] read_data1
);

    logic [31:0] ram [256];
    logic [7:0] word_address0;
    logic [7:0] word_address1;
    
    
    assign word_address0 = byte_address0[9:2];    
    assign word_address1 = byte_address1[9:2];    
    
    
    initial begin
        $readmemh("instruction_mem.mem", ram);
    end
    
    
    always @(posedge clk) begin
        if (write_enable) begin
            ram[word_address0] <= write_data;
        end 
    end
    
    assign read_data0 = ram[word_address0];
    assign read_data1 = ram[word_address1];

endmodule
