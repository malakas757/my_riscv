`timescale 1ns / 1ps

import common ::*;



module data_memory (
    input clk,
    input [9:0] read_address,
    input [9:0] write_address,
    input write_enable,         
    input [31:0] write_data, 
    output logic [31:0] read_data,
    output logic [31:0] ram_debug[DATA_RAM_DEPTH]
);

   (* MARK_DEBUG = "ture" *) logic [31:0] ram [DATA_RAM_DEPTH] = '{default:0};
    logic [$clog2(DATA_RAM_DEPTH)-1:0] read_word_address;
    logic [$clog2(DATA_RAM_DEPTH)-1:0] write_word_address;
    
    
   assign read_word_address  = read_address[$clog2(DATA_RAM_DEPTH)+1:2];
   assign write_word_address = write_address[$clog2(DATA_RAM_DEPTH)+1:2];
   assign ram_debug = ram;
   
    
    always @(posedge clk) begin
        if (write_enable) begin
            ram[write_word_address] <= write_data;
        end 
    end

    
    assign read_data = ram[read_word_address];
    
endmodule
