// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommon.h for the primary calling header

#ifndef VERILATED_VCOMMON___024ROOT_H_
#define VERILATED_VCOMMON___024ROOT_H_  // guard

#include "verilated.h"

class Vcommon__Syms;
VL_MODULE(Vcommon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_OUT8(can_alloc,0,0);
    VL_IN8(instr0_valid,0,0);
    VL_IN8(instr1_valid,0,0);
    VL_IN8(instr0_is_wb,0,0);
    VL_IN8(instr1_is_wb,0,0);
    VL_IN8(instr0_T,5,0);
    VL_IN8(instr1_T,5,0);
    VL_IN8(instr0_T_old,5,0);
    VL_IN8(instr1_T_old,5,0);
    VL_IN8(instr0_arf_id,4,0);
    VL_IN8(instr1_arf_id,4,0);
    VL_OUT8(instr0_robid,6,0);
    VL_OUT8(instr1_robid,6,0);
    VL_IN8(int0alu_wb_valid,0,0);
    VL_IN8(int0mul_wb_valid,0,0);
    VL_IN8(int1alu_wb_valid,0,0);
    VL_IN8(int1lsu_wb_valid,0,0);
    VL_IN8(int0alu_wb_robid,6,0);
    VL_IN8(int0mul_wb_robid,6,0);
    VL_IN8(int1alu_wb_robid,6,0);
    VL_IN8(int1lsu_wb_robid,6,0);
    VL_OUT8(retire0_valid,0,0);
    VL_OUT8(retire1_valid,0,0);
    VL_OUT8(retire0_is_wb,0,0);
    VL_OUT8(retire1_is_wb,0,0);
    VL_OUT8(retire0_arf_id,4,0);
    VL_OUT8(retire1_arf_id,4,0);
    VL_OUT8(retire0_fl_Told,5,0);
    VL_OUT8(retire1_fl_Told,5,0);
    VL_OUT8(retire0_T,5,0);
    VL_OUT8(retire1_T,5,0);
    VL_OUT8(retire0_robid,5,0);
    VL_OUT8(retire1_robid,5,0);
    VL_IN8(flush_robid,5,0);
    VL_IN8(flush_valid,0,0);
    VL_OUT8(rob_state,1,0);
    VL_OUT8(walk0_valid,0,0);
    VL_OUT8(walk1_valid,0,0);
    VL_OUT8(walk0_complete,0,0);
    VL_OUT8(walk1_complete,0,0);
    VL_OUT8(walk0_arf_id,4,0);
    VL_OUT8(walk1_arf_id,4,0);
    VL_OUT8(walk0_T,5,0);
    VL_OUT8(walk1_T,5,0);
    CData/*6:0*/ rob__DOT__rob_head;
    CData/*6:0*/ rob__DOT__rob_tail;
    CData/*6:0*/ rob__DOT__walk_ptr;
    CData/*6:0*/ rob__DOT__flush_robid_latch;
    CData/*1:0*/ rob__DOT__disp_num;
    CData/*1:0*/ rob__DOT__retire_num;
    CData/*1:0*/ rob__DOT__current_state;
    CData/*1:0*/ rob__DOT__next_state;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(instr0_pc,31,0);
    VL_IN(instr1_pc,31,0);
    VL_IN(instr0_instr,31,0);
    VL_IN(instr1_instr,31,0);
    VlUnpacked<VlWide<3>/*83:0*/, 64> rob__DOT__reg_rob;
    VlUnpacked<CData/*0:0*/, 64> rob__DOT__rollback_valid;

    // INTERNAL VARIABLES
    Vcommon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vcommon___024root(const char* name);
    ~Vcommon___024root();
    VL_UNCOPYABLE(Vcommon___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vcommon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
