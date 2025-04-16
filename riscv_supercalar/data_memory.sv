`timescale 1ns / 1ps


module data_memory (
    input clk,
    input [9:0] read_address,
    input [9:0] write_address,
    input write_enable,         
    input [31:0] write_data, 
    output logic [31:0] read_data
);

    logic [31:0] ram [256];
    logic [7:0] read_word_address;
    logic [7:0] write_word_address;
    
    
    assign read_word_address  = read_address[9:2];
    assign write_word_address = write_address[9:2];
    
    
    always @(posedge clk) begin
        if (write_enable) begin
            ram[write_word_address] <= write_data;
        end 
    end

    
    assign read_data = ram[read_word_address];
    
endmodule
