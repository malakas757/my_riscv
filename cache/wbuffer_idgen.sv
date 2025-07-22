//轮流的分配一个 ID，当 ID 已经被分配后，需要回收之后才能再次被分配。
//当内部有剩余 ID 可用时，会拉高 Valid。并携带一个 ID
//当内部没有剩余的 ID 可用时，会置低 Valid。
module wbuffer_idgen(
		   input logic 	      clk,
		   input logic 	      rstn,
		   //gen tags
		   output logic       tag_valid,
		   output logic [7:0] tag,
		   input logic 	      tag_enable,
		   //free tags
		   input logic [255:0] tag_free //1cycle pulse
		   );
   logic [255:0] 		      tag_inflight;
   logic [255:0] 		      n_tag_inflight;
   logic [7:0] 			      n_tag;
   logic [7:0] 			      n_tag_t;

   logic 			      n_tag_valid;
   logic 			      switch_data;

   
   assign switch_data = (tag_valid && tag_enable) || (!tag_valid && n_tag_valid); //下一拍需要切换 ID 的场景：1.当前拍的 ID 被用掉。2.当前拍没有 ID 可以分配，但有 ID 回收，下一拍可以分配出去。
       always@(posedge clk)
	 if(!rstn)begin
	    tag_valid <= '0;
	    tag <= '1;
	 end else if(switch_data)begin
	    tag_valid <= n_tag_valid;
	    tag <= n_tag_t;
	 end
   //找一个未使用的 TAG 分配出去，如果未找到则拉低 n_tag_valid
   always@(*)begin
      n_tag_valid = 'd0;
      n_tag = 'd0;
      for(int i=31; i>0; i=i-1)begin
	 if(tag_inflight[i] == 'd0) begin
	    n_tag_valid = 1'b1;
	    n_tag = i;
	 end
      end
   end
   //in-flight 标志更新
   always@(*)begin
      n_tag_t = tag;
      n_tag_inflight = tag_inflight & (~tag_free); //clear-当前拍回收了一些 ID
      if(n_tag_valid & !(tag_valid & !tag_enable)) begin//set-下一拍 ID 被用掉：1.当前拍没有 ID可以分配，但是有 ID 回收,导致下一拍可以分配 ID。2.当前拍分配的 ID 被用掉，但也还有 ID 可用，导致下一拍可以分配 ID。
	 n_tag_inflight[n_tag] = 1'b1;
	 n_tag_t = n_tag;
      end
   end
   always@(posedge clk)
     if(!rstn)begin
	tag_inflight <= '0;
     end else begin
	tag_inflight <= n_tag_inflight;

     end

endmodule
   
