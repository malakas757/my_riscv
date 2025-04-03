`timescale 1ns/1ps



import common::*;

module Picker2_1 (
    input logic [INTISQ_WIDTH-1:0] in_id[2],
    input logic [INTISQ_WIDTH:0] in_age[2],
    input logic in_valid[2],
    output logic [INTISQ_WIDTH-1:0] out_id,
    output logic [INTISQ_WIDTH:0] out_age,
    output logic out_valid
);
    always_comb begin
        if ( (in_age[1] >= in_age[0] || ~in_valid[0]) && in_valid[1]) begin
            out_valid = 1;
            out_age = in_age[1];
            out_id = in_id[1];
        end else begin
            out_valid = in_valid[0];
            out_age = in_age[0];
            out_id = in_id[0];
        end
    end
endmodule

module Picker8_1 (
    input logic [INTISQ_WIDTH:0] in_age[8],
    input logic in_valid[8],
    output logic [INTISQ_WIDTH-1:0] out_id,
    output logic out_valid
);
    integer i;
    logic [INTISQ_WIDTH-1:0] id[8];

    always_comb begin
        for (i = 0 ; i < 8 ; i = i + 1)
            id[i] = i;
    end
    logic [INTISQ_WIDTH:0] l1_age[4];
    logic [INTISQ_WIDTH-1:0] l1_id[4];
    logic l1_valid[4];

    genvar j;
    generate
    for (j = 0 ; j < 8 ; j = j + 2) begin: gen_Picker_l1
        Picker2_1 l1_picker(
            .in_id(id[j : j+1]),
            .in_age(in_age[j : j+1]),
            .in_valid(in_valid[j : j+1]),
            .out_id(l1_id[j/2]),
            .out_age(l1_age[j/2]),
            .out_valid(l1_valid[j/2])
        );
    end
    endgenerate

    logic [INTISQ_WIDTH:0] l2_age[2];
    logic [INTISQ_WIDTH-1:0] l2_id[2];
    logic l2_valid[2];

    generate
    for (j = 0 ; j < 4 ; j = j + 2) begin: gen_Picker_l2
        Picker2_1 l2_picker(
            .in_id(l1_id[j : j+1]),
            .in_age(l1_age[j : j+1]),
            .in_valid(l1_valid[j : j+1]),
            .out_id(l2_id[j/2]),
            .out_age(l2_age[j/2]),
            .out_valid(l2_valid[j/2])
        );
    end
    endgenerate

    Picker2_1 l3_picker(
        .in_id(l2_id[0:1]),
        .in_age(l2_age[0:1]),
        .in_valid(l2_valid[0:1]),
        .out_id(out_id),
        .out_age(),
        .out_valid(out_valid)
    );

endmodule

module Picker2_2 (
    input logic [INTISQ_WIDTH-1:0] in_id[2],
    input logic [INTISQ_WIDTH:0] in_age[2],
    input logic in_valid[2],
    output logic [INTISQ_WIDTH-1:0] out_big_id,
    output logic [INTISQ_WIDTH-1:0] out_small_id,
    output logic [INTISQ_WIDTH:0] out_big_age,
    output logic [INTISQ_WIDTH:0] out_small_age,
    output logic out_big_valid,
    output logic out_small_valid
);
    always_comb begin
        if ( (in_age[1] >= in_age[0] || ~in_valid[0]) && in_valid[1]) begin
            out_big_valid = in_valid[1];
            out_big_age = in_age[1];
            out_big_id = in_id[1];
            out_small_valid = in_valid[0];
            out_small_age = in_age[0];
            out_small_id = in_id[0];
        end else begin
            out_big_valid = in_valid[0];
            out_big_age = in_age[0];
            out_big_id = in_id[0];
            out_small_valid = in_valid[1];
            out_small_age = in_age[1];
            out_small_id = in_id[1];
        end
    end
endmodule


module Picker4_2 (
    input logic [INTISQ_WIDTH-1:0] in_big_id[2],
    input logic [INTISQ_WIDTH:0] in_big_age[2],
    input logic in_big_valid[2],
    input logic [INTISQ_WIDTH-1:0] in_small_id[2],
    input logic [INTISQ_WIDTH:0] in_small_age[2],
    input logic in_small_valid[2],
    output logic [INTISQ_WIDTH-1:0] out_big_id,
    output logic [INTISQ_WIDTH-1:0] out_small_id,
    output logic [INTISQ_WIDTH:0] out_big_age,
    output logic [INTISQ_WIDTH:0] out_small_age,
    output logic out_big_valid,
    output logic out_small_valid
);
    logic [INTISQ_WIDTH+1:0] big_cmp[2];
    logic [INTISQ_WIDTH+1:0] small_cmp[2];

    always_comb begin
        big_cmp[0] = {in_big_valid[0],in_big_age[0]};
        big_cmp[1] = {in_big_valid[1],in_big_age[1]};
        small_cmp[0] = {in_small_valid[0],in_small_age[0]};
        small_cmp[1] = {in_small_valid[1],in_small_age[1]};
    end
    // It's impossible to happen (small small) case
    always_comb begin
        if ( big_cmp[0] >= big_cmp[1] && small_cmp[0] >= big_cmp[1]) begin
            out_big_valid = in_big_valid[0];
            out_big_age = in_big_age[0];
            out_big_id = in_big_id[0];
            out_small_valid = in_small_valid[0];
            out_small_age = in_small_age[0];
            out_small_id = in_small_id[0];
        end else if (big_cmp[0] >= big_cmp[1] && big_cmp[1] > small_cmp[0])begin
            out_big_valid = in_big_valid[0];
            out_big_age = in_big_age[0];
            out_big_id = in_big_id[0];
            out_small_valid = in_big_valid[1];
            out_small_age = in_big_age[1];
            out_small_id = in_big_id[1];
        end else if (big_cmp[1] > big_cmp[0] && big_cmp[0] >= small_cmp[1]) begin
            out_big_valid = in_big_valid[1];
            out_big_age = in_big_age[1];
            out_big_id = in_big_id[1];
            out_small_valid = in_big_valid[0];
            out_small_age = in_big_age[0];
            out_small_id = in_big_id[0]; 
        end else begin
            out_big_valid = in_big_valid[1];
            out_big_age = in_big_age[1];
            out_big_id = in_big_id[1];
            out_small_valid = in_small_valid[1];
            out_small_age = in_small_age[1];
            out_small_id = in_small_id[1]; 
        end
    end
endmodule


module Picker8_2 (
    input logic [INTISQ_WIDTH:0] in_age[8],
    input logic in_valid[8],
    output logic [INTISQ_WIDTH-1:0] out_id_1,
    output logic [INTISQ_WIDTH-1:0] out_id_0,
    output logic out_valid_0,
    output logic out_valid_1
);
    integer i;
    logic [INTISQ_WIDTH-1:0] id[8];

    always_comb begin
        for (i = 0 ; i < 8 ; i = i + 1)
            id[i] = i;
    end
    logic [INTISQ_WIDTH:0] l1_big_age[4];
    logic [INTISQ_WIDTH-1:0] l1_big_id[4];
    logic l1_big_valid[4];
    logic [INTISQ_WIDTH:0] l1_small_age[4];
    logic [INTISQ_WIDTH-1:0] l1_small_id[4];
    logic l1_small_valid[4];

    genvar j;
    generate
    for (j = 0 ; j < 8 ; j = j + 2) begin: gen_Picker_l1
        Picker2_2 l1_picker(
            .in_id(id[j : j+1]),
            .in_age(in_age[j : j+1]),
            .in_valid(in_valid[j : j+1]),
            .out_big_id(l1_big_id[j/2]),
            .out_small_id(l1_small_id[j/2]),
            .out_big_age(l1_big_age[j/2]),
            .out_small_age(l1_small_age[j/2]),
            .out_big_valid(l1_big_valid[j/2]),
            .out_small_valid(l1_small_valid[j/2])
        );
    end
    endgenerate

    logic [INTISQ_WIDTH:0] l2_big_age[2];
    logic [INTISQ_WIDTH-1:0] l2_big_id[2];
    logic l2_big_valid[2];
    logic [INTISQ_WIDTH:0] l2_small_age[2];
    logic [INTISQ_WIDTH-1:0] l2_small_id[2];
    logic l2_small_valid[2];

    generate
    for (j = 0 ; j < 4 ; j = j + 2) begin: gen_Picker_l2
        Picker4_2 l2_picker(
            .in_big_id(l1_big_id[j : j+1]),
            .in_big_age(l1_big_age[j : j+1]),
            .in_big_valid(l1_big_valid[j : j+1]),
            .in_small_id(l1_small_id[j : j+1]),
            .in_small_age(l1_small_age[j : j+1]),
            .in_small_valid(l1_small_valid[j : j+1]),
            .out_big_id(l2_big_id[j/2]),
            .out_small_id(l2_small_id[j/2]),
            .out_big_age(l2_big_age[j/2]),
            .out_small_age(l2_small_age[j/2]),
            .out_big_valid(l2_big_valid[j/2]),
            .out_small_valid(l2_small_valid[j/2])
        );
    end
    endgenerate

    Picker4_2 l3_picker(
        .in_big_id(l2_big_id),
        .in_big_age(l2_big_age),
        .in_big_valid(l2_big_valid),
        .in_small_id(l2_small_id),
        .in_small_age(l2_small_age),
        .in_small_valid(l2_small_valid),
        .out_big_id(out_id_0),
        .out_small_id(out_id_1),
        .out_big_age(),
        .out_small_age(),
        .out_big_valid(out_valid_0),
        .out_small_valid(out_valid_1)
    );


endmodule
