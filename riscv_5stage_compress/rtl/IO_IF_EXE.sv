import common::*;

interface IO_IF_EXE;
   logic 	                   io_branch_valid;   // if it is a branch/jump?
   logic 			   io_branch_taken;
   logic [31:0] 		   io_branch_addr;
   logic [31:0] 		   io_branch_target_addr;  
   logic 			   io_branch_is_mispred; //include not hit btb
   logic 			   io_branch_taken;
   logic [31:0] 		   io_branch_instr_pc;
   logic [GSHARE_GHSR_WIDTH-1:0]   io_GHSR_restore ;

    modport IF_stage(

   input io_branch_valid, // 
   input io_branch_taken, 
   input io_branch_addr, 
   input io_branch_target_addr,
   input io_branch_is_mispred, 
   input io_branch_taken, 
   input io_branch_instr_pc, 
   input io_GHSR_restore      
		     
    );
    modport EX_stage(
   output io_branch_valid, // 
   output io_branch_taken, 
   output io_branch_addr, 
   output io_branch_target_addr,
   output io_branch_is_mispred, 
   output io_branch_taken, 
   output io_branch_instr_pc, 
   output io_GHSR_restore      
    );


endinterface //IF_EXE
