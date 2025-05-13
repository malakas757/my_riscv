`timescale 1ns/1ps
import common::*;
`define debug

module rob(/*AUTOARG*/
   // Outputs
   rob_left, instr0_robid, instr1_robid, retire0_valid, retire1_valid,
   retire0_is_wb, retire1_is_wb, retire0_arf_id, retire1_arf_id,
   retire0_fl_Told, retire1_fl_Told, retire0_T, retire1_T,
   retire0_robid, retire1_robid, rob_state, walk0_valid, walk1_valid,
   walk0_complete, walk1_complete, walk0_arf_id, walk1_arf_id,
   walk0_T, walk1_T,
   // Inputs
   clk, reset_n, instr0_valid, instr1_valid, instr0_is_wb,
   instr1_is_wb, instr0_pc, instr1_pc, instr0_instr, instr1_instr,
   instr0_T, instr1_T, instr0_T_old, instr1_T_old, instr0_arf_id,
   instr1_arf_id, int0alu_wb_valid, int0mul_wb_valid,
   int1alu_wb_valid, int1lsu_wb_valid, int0alu_wb_robid,
   int0mul_wb_robid, int1alu_wb_robid, int1lsu_wb_robid, flush_robid,
   flush_valid
   );
 
   input                 clk;
   input 		 reset_n;
  
   output [1:0] 	 rob_left;//00 means full, 01 means 1, 10 means more than two
 

// from and to dispatch
   input                                instr0_valid;
   input 				instr1_valid;
   input 				instr0_is_wb;
   input 				instr1_is_wb;
`ifdef debug
   input [31:0] 			instr0_pc;
   input [31:0] 			instr1_pc;
   input instruction_type 		instr0_instr;
   input instruction_type 		instr1_instr;
`endif 			
   input [PRF_WIDTH-1:0] 		instr0_T;
   input [PRF_WIDTH-1:0] 		instr1_T;
   input [PRF_WIDTH-1:0] 		instr0_T_old;
   input [PRF_WIDTH-1:0] 		instr1_T_old;
   input [ARF_WIDTH-1:0] 		instr0_arf_id;
   input [ARF_WIDTH-1:0] 		instr1_arf_id;
   output [ROB_WIDTH:0] 		instr0_robid;
   output [ROB_WIDTH:0] 		instr1_robid;


//input from write back
   input 				int0alu_wb_valid;
   input 				int0mul_wb_valid;
   input 				int1alu_wb_valid;
   input 				int1lsu_wb_valid;
   input [ROB_WIDTH:0] 			int0alu_wb_robid;
   input [ROB_WIDTH:0] 			int0mul_wb_robid;
   input [ROB_WIDTH:0] 			int1alu_wb_robid;
   input [ROB_WIDTH:0] 			int1lsu_wb_robid;

//output retire:free fl,change arf RAT
   output 	                        retire0_valid;
   output 	                        retire1_valid;
   output 	                        retire0_is_wb;
   output 	                        retire1_is_wb;
   output [ARF_WIDTH-1:0] 		retire0_arf_id;
   output [ARF_WIDTH-1:0] 		retire1_arf_id;
   output [PRF_WIDTH-1:0] 		retire0_fl_Told;
   output [PRF_WIDTH-1:0] 		retire1_fl_Told;
   output [PRF_WIDTH-1:0] 		retire0_T;
   output [PRF_WIDTH-1:0] 		retire1_T;
   output [ROB_WIDTH:0] 		retire0_robid;
   output [ROB_WIDTH:0] 		retire1_robid;
							
//flush logic
   input [ROB_WIDTH:0] 			flush_robid;
   input 				flush_valid;


//walk logic output
   output [1:0] 			rob_state;				
   output 				walk0_valid;
   output 				walk1_valid;
   output 				walk0_complete;
   output 				walk1_complete;
   output [ARF_WIDTH-1:0] 		walk0_arf_id;
   output [ARF_WIDTH-1:0] 		walk1_arf_id;
   output [PRF_WIDTH-1:0] 		walk0_T;
   output [PRF_WIDTH-1:0] 		walk1_T;


   
   logic [1:0] 				retire_num;
   logic 				retire0_valid;
   logic 				retire1_valid;
   
    
   



   
   
/////////////////////////////////////////
   rob_type              reg_rob[ROB_NUM-1:0];

   logic [ROB_WIDTH:0] 	 rob_head;//one more bit to judge age
   logic [ROB_WIDTH:0] 	 rob_head_plus1;//one more bit to judge age
   logic [ROB_WIDTH:0] 	 rob_tail;//one more bit to judge age
   logic [ROB_WIDTH:0] 	 rob_tail_plus1;//one more bit to judge age
   logic [ROB_WIDTH:0] 	 walk_head;//used to recovery
   logic [ROB_WIDTH:0] 	 walk_head_plus1;//used to recovery
   logic [ROB_WIDTH:0] 	 walk_head_plus2;//used to recovery

   logic [ROB_WIDTH-1:0] head_ptr;//use in arrray logic to avoid bug
   logic [ROB_WIDTH-1:0] head_ptr_plus1;//use in arrray logic to avoid bug
   logic [ROB_WIDTH-1:0] tail_ptr;//
   logic [ROB_WIDTH-1:0] tail_ptr_plus1;//
   logic [ROB_WIDTH-1:0] walk_ptr;//
   logic [ROB_WIDTH-1:0] walk_ptr_plus1;//
   logic [ROB_WIDTH-1:0] walk_ptr_plus2;//
   
   assign rob_head_plus1 = rob_head + 1;   
   assign head_ptr       = rob_head[ROB_WIDTH-1:0];   
   assign head_ptr_plus1 = rob_head_plus1[ROB_WIDTH-1:0];
   assign rob_tail_plus1 = rob_tail + 1;   
   assign tail_ptr       = rob_tail[ROB_WIDTH-1:0];   
   assign tail_ptr_plus1 = rob_tail_plus1[ROB_WIDTH-1:0];
   assign walk_head_plus1 = walk_head + 1;   
   assign walk_head_plus2 = walk_head + 2;   
   assign walk_ptr       = walk_head[ROB_WIDTH-1:0];   
   assign walk_ptr_plus1 = walk_head_plus1[ROB_WIDTH-1:0];
   assign walk_ptr_plus2 = walk_head_plus2[ROB_WIDTH-1:0];


  
   logic 		 is_idle;
   logic 		 is_rollback;
   logic 		 is_walk;

   logic           rollback_valid[ROB_NUM-1:0];
   logic [ROB_WIDTH:0] flush_robid_latch;  // latch the robid from exe stage

   //for debug
   logic [31:0]        retire0_pc;
   logic [31:0]        retire1_pc;
   
   

   
   assign is_idle     = (rob_state == rob_idle);
   assign is_rollback = (rob_state == rob_rollback);
   assign is_walk     = (rob_state == rob_walk);

   
 		 


// head pointer and req valid logic

   logic [1:0] 		 disp_num;
   
 		 

   assign  disp_num = (instr0_valid && instr1_valid)? 2:
		      (instr0_valid || instr1_valid)? 1:0;
   assign  rob_left = (rob_head[ROB_WIDTH] ^ rob_tail[ROB_WIDTH] && rob_head[ROB_WIDTH-1:0] == rob_tail[ROB_WIDTH-1:0])? 2'b00:
		       (rob_head[ROB_WIDTH] ^ rob_tail[ROB_WIDTH] && ((rob_head[ROB_WIDTH-1:0] + 1) == rob_tail[ROB_WIDTH-1:0]) )? 2'b01:2'b10;

   

     
   assign instr0_robid = rob_head;
   assign instr1_robid = rob_head + 1;
   
   

   
   
   always_ff@(posedge clk) begin
      int i;
      
      if(~reset_n) begin
	 for(i=0;i<ROB_NUM;i=i+1) 
	    reg_rob[i].valid <= 1'b0;
      end
      else if (is_rollback) begin
	 for(i=0;i<ROB_NUM;i=i+1)
	   if(rollback_valid[i])
	   reg_rob[i].valid  <= '0;
	 
      end
      else  begin
	 if(instr0_valid) begin
	    reg_rob[head_ptr].valid <= 1'b1;
	   // reg_rob[head_ptr].robid <= rob_head;	    
	    if(instr1_valid)
	      reg_rob[head_ptr_plus1].valid <= 1'b1;	    
	     // reg_rob[head_ptr_plus1].robid <= rob_head+1;	    
	 end
	 else if(instr1_valid) begin
	    reg_rob[head_ptr].valid <= 1'b1;
	   // reg_rob[head_ptr].rob_head <= rob_head;
	 end
	 if(retire_num == 1)
	   reg_rob[tail_ptr].valid <= 1'b0;
         if(retire_num == 2) begin
	    reg_rob[tail_ptr].valid <= 1'b0;
	    reg_rob[tail_ptr_plus1].valid <= 1'b0;
	 end
      end // else: !if(~reset_n)
   end
   
   always_ff@(posedge clk) begin
      if(~reset_n) begin	
	 rob_head <= 'b0;
      end
      else if(is_rollback) begin
	 rob_head <= flush_robid_latch + 1;	 
      end
      else  begin // when walking,stop take in instr by flushing register in ir/is and stall
	 rob_head <= rob_head + disp_num;	 
      end
      
   end // always_ff@ (posedge clk)



// tail logic


   assign retire0_valid = ~flush_valid & is_idle & reg_rob[tail_ptr].valid & reg_rob[tail_ptr].complete;
   assign retire1_valid = retire0_valid & reg_rob[tail_ptr_plus1].valid & reg_rob[tail_ptr_plus1].complete;
   
   
   always_ff@(posedge clk) begin
      if(~reset_n) begin	
	 rob_tail <= 'b0;
      end
      else if (~flush_valid && is_idle) begin // once find flush and in recovery will stop retire
	 rob_tail <= rob_tail + retire_num;	 
      end      
   end // always_ff@ (posedge clk)

   always_comb begin
      retire_num = 0;
      
      if(retire0_valid) begin
	 retire_num = 1;
	 if(retire1_valid)
	   retire_num = 2;
      end
      else
	retire_num = 0;      
   end


   
//retire logic
   assign   retire0_is_wb   = reg_rob[tail_ptr].is_wb;
   assign   retire1_is_wb   = reg_rob[tail_ptr_plus1].is_wb;
   assign   retire0_arf_id  = reg_rob[tail_ptr].arf_id ;
   assign   retire1_arf_id  = reg_rob[tail_ptr_plus1].arf_id ;
   assign   retire0_fl_Told = reg_rob[tail_ptr].T_old ;
   assign   retire1_fl_Told = reg_rob[tail_ptr_plus1].T_old  ;
   assign   retire0_T       = reg_rob[tail_ptr].T;
   assign   retire1_T       = reg_rob[tail_ptr_plus1].T;
   assign   retire0_robid   = rob_tail;
   assign   retire1_robid   = rob_tail+1;
   assign   retire0_pc   = reg_rob[tail_ptr].pc;
   assign   retire1_pc   = reg_rob[tail_ptr_plus1].pc;
   
			
      

// reg_rob write and read
   //write from dispatch
      always_ff@(posedge clk) begin
	 int i;
	 
      if(~reset_n) begin
	 for(i=0;i<ROB_NUM;i=i+1) begin
	    reg_rob[i].T <= 'b0;
	    reg_rob[i].T_old <= 'b0;	   
	    reg_rob[i].is_wb <= 'b0;
	    reg_rob[i].arf_id <= 'b0;
	 end
`ifdef debug
	    reg_rob[i].pc <= 'b0;
	    reg_rob[i].instruction <= 'b0;
`endif	 
      end
      else  begin
	 if(instr0_valid) begin
	    reg_rob[head_ptr].T <= instr0_T;
	    reg_rob[head_ptr].T_old <= instr0_T_old;
	    reg_rob[head_ptr].is_wb <= instr0_is_wb;	   
	    reg_rob[head_ptr].arf_id <= instr0_arf_id;
`ifdef debug
	    reg_rob[head_ptr].pc <= instr0_pc;
	    reg_rob[head_ptr].instruction <= instr0_instr;
`endif	    
	   
	    if(instr1_valid) begin
	      reg_rob[head_ptr_plus1].T <= instr1_T;
	      reg_rob[head_ptr_plus1].T_old <= instr1_T_old;
	      reg_rob[head_ptr_plus1].is_wb <= instr1_is_wb;	     
	      reg_rob[head_ptr_plus1].arf_id <= instr1_arf_id;
`ifdef debug
	      reg_rob[head_ptr_plus1].pc <= instr1_pc;
	      reg_rob[head_ptr_plus1].instruction <= instr1_instr;
`endif	    	    
	    end
	 end
	 else if(instr1_valid) begin
	      reg_rob[head_ptr].T <= instr1_T;
	      reg_rob[head_ptr].T_old <= instr1_T_old;
	      reg_rob[head_ptr].is_wb <= instr1_is_wb;	   
	      reg_rob[head_ptr].arf_id <= instr1_arf_id;
`ifdef debug
	      reg_rob[head_ptr].pc <= instr1_pc;
	      reg_rob[head_ptr].instruction <= instr1_instr;
`endif	    	   
	 end
      end // else: !if(~reset_n)
   end
  

   //write from exe
   always_ff@(posedge clk) begin
      int i;
      
      if(~reset_n) begin
      	 for(i=0;i<ROB_NUM;i=i+1) begin
	    reg_rob[i].complete <= 1'b0;	  
	 end
      end

      else begin
	 if(int0alu_wb_valid)
	   reg_rob[int0alu_wb_robid[ROB_WIDTH-1:0]].complete <= 1'b1;
	 
	 if(int0mul_wb_valid)	 		 
	   reg_rob[int0mul_wb_robid[ROB_WIDTH-1:0]].complete <= 1'b1;
	 
	 if(int1alu_wb_valid)	 		
	   reg_rob[int1alu_wb_robid[ROB_WIDTH-1:0]].complete <= 1'b1;
	 
	 if(int1lsu_wb_valid)	 		
	   reg_rob[int1lsu_wb_robid[ROB_WIDTH-1:0]].complete <= 1'b1;
	 
	 if (is_rollback) begin
	    for(i=0;i<ROB_NUM;i=i+1)
	      if(rollback_valid[i])
		reg_rob[i].complete  <= '0;
	 
	 end

         if(retire_num == 1)
	   reg_rob[tail_ptr].complete <= 1'b0;
         if(retire_num == 2) begin
	    reg_rob[tail_ptr].complete <= 1'b0;
	    reg_rob[tail_ptr_plus1].complete <= 1'b0;
	 end
      end
   end



      

//FSM for recovery
   logic [1:0]  current_state,next_state;

   assign rob_state = current_state;
   
   
   always_ff@(posedge clk) begin
      if (~reset_n) begin
         current_state <= rob_idle;
      end else begin
         current_state <= next_state;
      end
   end

   always_ff@(posedge clk) begin
      if (~reset_n) begin
         flush_robid_latch <= '0;
      end else begin
         flush_robid_latch <= flush_robid;
      end
   end
   
   always_comb begin
      case (current_state)
        rob_idle: begin
           if (flush_valid) begin
              next_state = rob_rollback;
           end else begin
              next_state = rob_idle;
           end
        end
        rob_rollback: begin
           if (flush_valid) begin
              next_state = rob_rollback;
           end else begin
              next_state = rob_walk;
           end
        end
        rob_walk: begin
           if (flush_valid) begin
              next_state = rob_rollback;
           end else if (~reg_rob[walk_ptr_plus1].valid | ~reg_rob[walk_ptr_plus2].valid) begin
              next_state = rob_idle;
           end else begin
              next_state = rob_walk;
           end
        end
        default: begin
	   next_state = rob_idle;	   
        end
      endcase
   end

// when rollback, flush younger instr 

   
   always_comb begin
      int i;      
      for(i=0;i<ROB_NUM;i=i+1)
	rollback_valid[i] = '0;
      for(i=0; i<ROB_NUM;i=i+1) begin
	 if(reg_rob[i].valid == 1) begin 
	    if (rob_tail[ROB_WIDTH-1:0] > flush_robid_latch[ROB_WIDTH-1:0]) begin
	       if(i < rob_tail[ROB_WIDTH-1:0] && i > flush_robid_latch[ROB_WIDTH-1:0])
		 rollback_valid[i] = 1'b1;	    
	    end
	    else begin
	       if( i > flush_robid_latch[ROB_WIDTH-1:0] || i < rob_tail[ROB_WIDTH-1:0])
		 rollback_valid[i] = 1'b1;
	    end
	 end
      end
   end
//walk logic


   assign walk0_valid = is_walk & reg_rob[walk_ptr].valid & reg_rob[walk_ptr].is_wb; //if the ptr at the instruction that is wb and valid instr, restore the rename module
   assign walk1_valid = is_walk & reg_rob[walk_ptr_plus1].valid & reg_rob[walk_ptr_plus1].is_wb;
   assign walk0_complete = reg_rob[walk_ptr].complete;
   assign walk1_complete = reg_rob[walk_ptr_plus1].complete;
   assign walk0_arf_id = reg_rob[walk_ptr].arf_id;
   assign walk1_arf_id = reg_rob[walk_ptr_plus1].arf_id;
   assign walk0_T = reg_rob[walk_ptr].T;
   assign walk1_T = reg_rob[walk_ptr_plus1].T;
   
   always_ff@(posedge clk) begin
      if(~reset_n) begin
	 walk_head <= '0;	 
      end
      else if (is_rollback) begin
	 walk_head <= rob_tail;
      end
      else if (is_walk) begin
	 walk_head <= walk_head + 2;	 
      end 

   end




	 
      








endmodule
   
   
