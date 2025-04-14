`timescale 1ns/1ps
import common::*;


module load_forward_unit(
    input logic match[SQ_NUM],
    input logic [SQ_WIDTH - 1:0] push_head,
    output logic hit,
    output logic [SQ_WIDTH-1:0] hit_index
);

integer i;
logic [SQ_WIDTH-1:0] id[SQ_NUM];
always_comb begin
    for (i = 0 ; i < SQ_NUM ; i = i + 1)
        id[i] = i;
end
logic l1_hit[SQ_NUM/2];
logic [SQ_WIDTH-1:0] l1_hit_index[SQ_NUM/2];

genvar j;
generate
for (j = 0 ; j < SQ_NUM ; j = j + 2) begin: gen_matcher_l1
    Latest_Picker_2_1 picker(
        .match(match[j : j +1]),
        .index(id[j : j + 1]),
        .push_head(push_head),
        .hit(l1_hit[j/2]),
        .hit_index(l1_hit_index[j/2])
    );
end
endgenerate

logic l2_hit[SQ_NUM/4];
logic [SQ_WIDTH-1:0] l2_hit_index[SQ_NUM/4];

generate
for (j = 0 ; j < SQ_NUM/2 ; j = j + 2) begin: gen_matcher_l2
    Latest_Picker_2_1 picker(
        .match(l1_hit[j : j +1]),
        .index(l1_hit_index[j : j + 1]),
        .push_head(push_head),
        .hit(l2_hit[j/2]),
        .hit_index(l2_hit_index[j/2])
    );
end
endgenerate



always_comb hit = l2_hit[0];
always_comb hit_index = l2_hit_index[0];

endmodule

module Latest_Picker_2_1(
    input logic match[2],
    input [SQ_WIDTH - 1:0] index[2],
    input logic [SQ_WIDTH - 1:0] push_head,
    output logic hit,
    output logic [SQ_WIDTH-1:0] hit_index
);
    always_comb begin
        if ( (((push_head > index[0]) ^ (push_head > index[1]) ^ (index[0] > index[1])) &&
            match[0]) || ~match[1] ) begin
            hit = match[0];
            hit_index = index[0];
        end else begin
            hit = match[1];
            hit_index = index[1];
        end
    end
endmodule
