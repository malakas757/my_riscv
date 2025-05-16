package common;
`define debug
`define NOP_CONTROL {ALU_PASS, I_TYPE, 5'b0, 5'b0, 3'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0}

   localparam int XLEN_WIDTH = 32;
   localparam int ADDR_WIDTH = 32;
   localparam [31:0] INSTRUCTION_NOP = 32'h00000013;
   localparam [31:0] PC_INIT         = 32'h00000000;


   // data_ram_depth
   localparam int  DATA_RAM_DEPTH = 16;

   //ROB state
   localparam [1:0]  rob_idle = 2'b00;
   localparam [1:0]  rob_rollback = 2'b01;
   localparam [1:0]  rob_walk = 2'b10;
   
   


   localparam int PRF_NUM   = 64;
   localparam int PRF_WIDTH = 6;
   localparam int ARF_NUM   = 32;
   localparam int ARF_WIDTH = 5;
   localparam int FL_NUM    = 32;
   localparam int FL_WIDTH  = 5;
   
   localparam int ROB_WIDTH  = 6;
   localparam int ROB_NUM  = 64;
   localparam int ROBID_WIDTH  = 7;
   
   localparam int SQ_WIDTH  = 2;
   localparam int SQ_NUM  = 4;
   
   localparam int INTISQ_WIDTH  = 3;
   localparam int INTISQ_NUM  = 8;

   localparam int MEMISQ_WIDTH  = 2;
   localparam int MEMISQ_NUM  = 4; 

   localparam int GHT_WIDTH  = 3;//GHSR checkpoint table
   localparam int GHT_NUM  = 8;//GHSR checkpoint table   
   
   

   localparam [2:0] F3_ADDX  = 3'b000 ;
   localparam [2:0] F3_SUB   = 3'b000 ;
   localparam [2:0] F3_SLTX  = 3'b010 ;
   localparam [2:0] F3_SLTUX = 3'b011 ;
   localparam [2:0] F3_XORX  = 3'b100 ;
   localparam [2:0] F3_ORX   = 3'b110 ;
   localparam [2:0] F3_ANDX  = 3'b111 ;
   localparam [2:0] F3_SLLX  = 3'b001 ;
   localparam [2:0] F3_SRXX  = 3'b101 ;

   localparam [2:0] F3_JALR = 3'b000 ;
   localparam [2:0] F3_BEQ  = 3'b000 ;
   localparam [2:0] F3_BNE  = 3'b001 ;
   localparam [2:0] F3_BLT  = 3'b100 ;
   localparam [2:0] F3_BGE  = 3'b101 ;  
   localparam [2:0] F3_BLTU = 3'b110 ;
   localparam [2:0] F3_BGEU = 3'b111 ;

   localparam [2:0] F3_LB   = 3'b000 ;
   localparam [2:0] F3_LH   = 3'b001 ;
   localparam [2:0] F3_LW   = 3'b010 ;
   localparam [2:0] F3_LBU  = 3'b100 ;
   localparam [2:0] F3_LHU  = 3'b101 ;
   localparam [2:0] F3_SB   = 3'b000 ;
   localparam [2:0] F3_SH   = 3'b001 ;
   localparam [2:0] F3_SW   = 3'b010 ;


   localparam int GSHARE_GHSR_WIDTH = 10;
   localparam int GSHARE_PHT_SIZE = 1024;
   localparam int GSHARE_PHT_WIDTH = 10; // max ( log2(GSHARE_ENTRY_SIZE) , GSHARE_BHSR_WIDTH)

   localparam int   BTB_ENTRY_NUM = 512;


   
    typedef enum logic [3:0] 
    {
        ALU_ADD  = 4'b0000 , 
        ALU_SUB  = 4'b0001 , 
        ALU_SLT  = 4'b0100 , 
        ALU_SLTU = 4'b0110 , 
        ALU_XOR  = 4'b1000 , 
        ALU_OR   = 4'b1100 , 
        ALU_AND  = 4'b1110 , 
        ALU_SLL  = 4'b0010 , 
        ALU_SRL  = 4'b1010 , 
        ALU_SRA  = 4'b1011 , 
        ALU_PASS = 4'b1111 
    } alu_op_type;
   
    
    typedef enum logic [2:0]
    {
        R_TYPE,
        I_TYPE,
        S_TYPE,
        B_TYPE,
        U_TYPE,
        J_TYPE
    } encoding_type;

       typedef struct packed
    {
       logic                  	        taken       ;
       logic [GSHARE_GHSR_WIDTH-1:0] 	current_GHSR        ;
       logic 				btb_hit             ;
       logic [XLEN_WIDTH-1:0] 		btb_addr            ;

    } branch_predict_type;
    
    
    typedef struct packed
    {
        alu_op_type alu_op;
        encoding_type encoding;
        logic 	   is_valid;
        logic [4:0] rs1_id;
        logic 	    rs1_valid;
        logic 	    rs2_valid;
        logic [4:0] rs2_id;
        logic [4:0] rd_id;
        logic [2:0] funct3;
        logic alu_src; // 1 means rs2 is imm, 0 means rs2 from reg
        logic mem_read;
        logic mem_write;
        logic reg_write;
        logic mem_to_reg;
        logic is_branch;
        logic is_jump;
        logic is_jumpr;
        logic is_lui;
        logic is_auipc;
        logic is_mul;
        branch_predict_type predict;
        logic [XLEN_WIDTH-1:0] imm_data;
    } control_type;
    


   
    typedef struct packed
    {
        logic [6:0] funct7;
        logic [4:0] rs2;
        logic [4:0] rs1;
        logic [2:0] funct3;
        logic [4:0] rd;
        logic [6:0] opcode;
    } instruction_type;
    
        
    typedef struct  packed
    {
       logic [31:0]               pc;
       logic 			  instr_valid;
       branch_predict_type        predict;       
       instruction_type           instruction;
    } if_id_type;
    

    


       typedef struct packed
    {
        logic [PRF_WIDTH-1:0]       T; // The current PRF id in ROB
        logic [PRF_WIDTH-1:0]       T_old; //To ROB for FL to release PRF
        logic [PRF_WIDTH-1:0]       prf_rs1;
        logic [PRF_WIDTH-1:0]       prf_rs2;
        control_type                control;
       
    } ir_is_type;

    typedef struct packed
    {
        logic [4:0] reg_rd_id;       
        control_type control;
        logic [31:0] alu_data;
        logic [31:0] memory_data;

    } ex_mem_type;
    
    
    typedef struct packed
    {
       
        logic [4:0] reg_rd_id;
        logic [31:0] memory_data;
        logic [31:0] alu_data;
        control_type control;
    } mem_wb_type;


       typedef struct packed
    {
       logic 	      detect;
       logic 	      id_ex_harzard_control;
       logic 	      pc_harzard_control;
       logic 	      id_nop_harzard_control;
       
    } hazard_control_type;


   
       typedef struct packed
    {
       //from decoder
       logic [4:0]    rs1_id;           // rename rs1 id read
       logic [4:0]    rs2_id;           // rename rs2 id read
       logic [4:0]    rd_id;           // ARF # to be renamed	
       
       logic [4:0]    retire_arf_id;           // ARF # to be renamed in  RRAT
       logic 	      retire_valid; 	    // The current instr can be retired
       logic 	      retire_wb; 	            // The current instr need to write back
       logic [PRF_WIDTH-1:0] retire_prf_id;           // PRF # to be written renamed in  RRAT

       //from fl :the assigned PRF_NUM
       logic [PRF_WIDTH-1:0] fl_prf_id;      
    } rename_type;



         typedef struct packed
    {
      
       logic 		       valid;
       logic [PRF_WIDTH-1:0]   T;//prf id
       logic [PRF_WIDTH-1:0]   T_old;//old prf id
       logic 		       complete;
       logic 		       is_wb;
       logic [ARF_WIDTH-1:0]   arf_id;// use to update rename and commit
`ifdef debug
       logic [31:0] 	       pc;		       
       instruction_type        instruction;
`endif		       
    } rob_type;



          typedef struct packed
    {
       
       
       logic [ADDR_WIDTH-1:0] 	       instr0; // instr0_pc
       logic [ADDR_WIDTH-1:0] 	       instr1; // 
       logic 			       valid; //       
       
    } instr_req_type;


          typedef struct packed
    {
       
       
       logic [XLEN_WIDTH-1:0] 	       instr0; // instr0_content
       logic [XLEN_WIDTH-1:0] 	       instr1; // 
       logic 			       ready; //       
       //logic 			       instr0_valid; //       
       //logic 			       instr1_valid; //       
       
    } instr_resp_type;

          typedef struct packed
    {
       logic            	       valid; // if it is a branch/jump?
       logic 			       taken;
       logic [ADDR_WIDTH-1:0] 	       addr; // instr pc of branch
       logic [ADDR_WIDTH-1:0] 	       target_addr; 
       logic 			       update_GHSR; //
       logic [GSHARE_GHSR_WIDTH-1:0]   GHSR_restore ;
       
    } ex2if_type;

   function [31:0] immediate_extension(instruction_type instruction, encoding_type inst_encoding);
    case (inst_encoding)
        // I-type 
        I_TYPE: immediate_extension = { {20{instruction[31]}}, instruction[31:20] };
        
        // S-type 
        S_TYPE: immediate_extension = { {20{instruction[31]}}, instruction[31:25], instruction[11:7] };
        
        // B-type 
        B_TYPE: immediate_extension = { {19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0 };
        
        // U-type 
        U_TYPE: immediate_extension = { instruction[31:12], 12'b0 };
        
        // J-type 
        J_TYPE: immediate_extension = { {11{instruction[31]}}, instruction[31], instruction[19:12], instruction[20], instruction[30:21], 1'b0 };
        
        // 
        default: immediate_extension = 32'b0;
    endcase
endfunction

   function logic if_branch_taken (logic [1:0] biomd);
      case(biomd)
	2'b11 : if_branch_taken = 1;
	2'b10 : if_branch_taken = 1;
	2'b01 : if_branch_taken = 0;
	2'b00 : if_branch_taken = 0;
      endcase

   endfunction // if_branch_taken

   function [GSHARE_PHT_WIDTH-1:0] gshare_hash(
    input logic [GSHARE_GHSR_WIDTH-1:0] GHSR,
    input logic [XLEN_WIDTH-1 :0] branch_pc
);
    gshare_hash = GHSR ^ branch_pc[GSHARE_PHT_WIDTH+1:2]; //drop low 2 bit
endfunction
 

   
endpackage
