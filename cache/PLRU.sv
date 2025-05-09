`timescale 1ns/1ps






module PLRU(/*AUTOARG*/
   // Outputs
   alloc_id,
   // Inputs
   clk, rstn, cacheline_access_in, empty_valid_in
   );
   input	          clk;
   input	          rstn;
   input [7:0] 		  cacheline_access_in;
   input [7:0] 		  empty_valid_in; // 1 means empty can alloc
   output logic [2:0] 	  alloc_id;
   
   
   logic [6:0] 		  PLRU_tree_reg;
   logic [6:0] 		  PLRU_tree_reg_n;

   ///////////////FUNCTION////////////////////
   
   function logic [6:0] PLRU_tree_next
  (  input logic [6:0] PLRU_tree,
     input logic [7:0] cacheline_access
     );
   //for point 6
   if(!(|cacheline_access))
     PLRU_tree_next[6] = PLRU_tree[6];     
   else if (|cacheline_access[7:4])
     PLRU_tree_next[6] = 0;
   else
     PLRU_tree_next[6] = 1;
   
   //for ponint 5 & point 4
   if(|cacheline_access[7:4] == 1'b0)
     PLRU_tree_next[5] = PLRU_tree[5];     
   else if (|cacheline_access[7:6])
     PLRU_tree_next[5] = 0;
   else
     PLRU_tree_next[5] = 1;  

   if(|cacheline_access[3:0] == 1'b0)
     PLRU_tree_next[4] = PLRU_tree[4];     
   else if (|cacheline_access[3:2])
     PLRU_tree_next[4] = 0;
   else
     PLRU_tree_next[4] = 1;


   
   //for ponint 0 & point 1  & ponint 2 & point 3
   if(|cacheline_access[7:6] == 1'b0)
     PLRU_tree_next[3] = PLRU_tree[3];     
   else if (cacheline_access[7])
     PLRU_tree_next[3] = 0;
   else
     PLRU_tree_next[3] = 1;  

   if(|cacheline_access[5:4] == 1'b0)
     PLRU_tree_next[2] = PLRU_tree[2];     
   else if (cacheline_access[5])
     PLRU_tree_next[2] = 0;
   else
     PLRU_tree_next[2] = 1;        


   if(|cacheline_access[3:2] == 1'b0)
     PLRU_tree_next[1] = PLRU_tree[1];     
   else if (cacheline_access[3])
     PLRU_tree_next[1] = 0;
   else
     PLRU_tree_next[1] = 1; 


   if(|cacheline_access[1:0] == 1'b0)
     PLRU_tree_next[0] = PLRU_tree[0];     
   else if (cacheline_access[1])
     PLRU_tree_next[0] = 0;
   else
     PLRU_tree_next[0] = 1;   
      
   endfunction    


function logic [2:0] alloc_index
  (
   input [6:0] PLRU_tree,
   input [7:0] empty_flag  // 1 means can alloc   
   );
   logic       empty_7654;
   logic       empty_3210;
   logic       empty_76;
   logic       empty_54;
   logic       empty_32;
   logic       empty_10;
   logic       empty_7;
   logic       empty_6;
   logic       empty_5;
   logic       empty_4;
   logic       empty_3;
   logic       empty_2;
   logic       empty_1;
   logic       empty_0;
   logic [6:0] remap;
   logic [1:0] remap_54;
   logic [3:0] remap_3210;
   
   assign remap_54   = remap[5:4];
   assign remap_3210 = remap[3:0];

   assign empty_7654 = |empty_flag[7:4];
   assign empty_3210 = |empty_flag[3:0];
   assign empty_76   = |empty_flag[7:6];
   assign empty_54   = |empty_flag[5:4];
   assign empty_32   = |empty_flag[3:2];
   assign empty_10   = |empty_flag[1:0];
   assign empty_7    = empty_flag[7];
   assign empty_6    = empty_flag[6];
   assign empty_5    = empty_flag[5];
   assign empty_4    = empty_flag[4];
   assign empty_3    = empty_flag[3];
   assign empty_2    = empty_flag[2];
   assign empty_1    = empty_flag[1];
   assign empty_0    = empty_flag[0];
   

//if empty_7654 == empty_3210 
// use the plru tree    
   if(empty_7654 == empty_3210)
     remap[6] = PLRU_tree[6];
   else if (empty_7654)
     remap[6] = 1;
   else if (empty_3210)
     remap[6] = 0;

   if(empty_76 == empty_54)
     remap[5] = PLRU_tree[5];
   else if (empty_76)
     remap[5] = 1;
   else if (empty_54)
     remap[5] = 0;
   
   if(empty_32 == empty_10)
     remap[4] = PLRU_tree[4];
   else if (empty_32)
     remap[4] = 1;
   else if (empty_10)
     remap[4] = 0;  

   if(empty_7 == empty_6)
     remap[3] = PLRU_tree[3];
   else if (empty_7)
     remap[3] = 1;
   else if (empty_6)
     remap[3] = 0;

   if(empty_5 == empty_4)
     remap[2] = PLRU_tree[2];
   else if (empty_5)
     remap[2] = 1;
   else if (empty_4)
     remap[2] = 0;
   
   if(empty_3 == empty_2)
     remap[1] = PLRU_tree[1];
   else if (empty_3)
     remap[1] = 1;
   else if (empty_2)
     remap[1] = 0;

   if(empty_1 == empty_0)
     remap[0] = PLRU_tree[0];
   else if (empty_1)
     remap[0] = 1;
   else if (empty_0)
     remap[0] = 0;

  
   alloc_index[2] = remap[6];
   alloc_index[1] = remap_54[alloc_index[2]];
   alloc_index[0] = remap_3210[{alloc_index[2],alloc_index[1]}];
 

endfunction // alloc_index

////////////////////////////////   
   
   

   assign PLRU_tree_reg_n = PLRU_tree_next(PLRU_tree_reg,cacheline_access_in);   
   assign alloc_id        = alloc_index(PLRU_tree_reg,empty_valid_in);   
   
   always_ff@(posedge clk) begin
      if (!rstn)
	PLRU_tree_reg <= '0;
      else
	PLRU_tree_reg <= PLRU_tree_reg_n;            
   end
   
  
     
endmodule
