//sigle_port ram
reg [DATA_WIDTH-1:0] ram_reg[ADDR-1:0];
integer i;
always @(posedge clk or negedge rst_n)begin
if(!rst_n)begin
 for (i=0;i<ADDR;i=i+1)begin
ram_reg[i] <= {DATA_WIDTH{1'b0}};
end
end
else if(wr)begin
ram_reg[addr] <= din[DATA_WIDTH-1:0];
end
end
always @(posedge clk ir negedge rst_n)begin
if(!rst_n)begin
dout <= {DATA_WIDTH{1'b0}};
end
else if(rd)begin
dout <= ram_reg[addr];
end
end
