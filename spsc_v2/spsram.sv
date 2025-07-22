module spsram #(
    parameter ADDR_WIDTH = 6,               // 支持 2^ADDR_WIDTH 行
    parameter DATA_WIDTH = 512              // 每行数据宽度
)(
    input  logic                     clka,   // 时钟
    input  logic                     rstn,   // 时钟
    input  logic                     ena,    // 总体使能
    input  logic                     wea,    // 写使能
    input  logic [ADDR_WIDTH-1:0]    addra,  // 地址
    input  logic [DATA_WIDTH-1:0]    dina,   // 写入数据
    output logic [DATA_WIDTH-1:0]    douta   // 输出数据
);

    // 内部 RAM 存储器
    logic [DATA_WIDTH-1:0] mem [0:(1<<ADDR_WIDTH)-1];

    always_ff @(posedge clka) begin
       if (!rstn) begin
	  for (int i = 0; i < (1 << ADDR_WIDTH); i = i + 1)
		   mem[i] <= '0;       
       end
       else if (ena) begin
            if (wea)
                mem[addra] <= dina;     // 写入
            else
                douta <= mem[addra];    // 读取
        end
    end

endmodule
