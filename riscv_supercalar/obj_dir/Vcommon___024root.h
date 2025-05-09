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
    VL_IN8(flush_valid,0,0);
    VL_IN8(IF_instr0_hit,0,0);
    VL_IN8(IF_instr1_hit,0,0);
    VL_IN8(IF_instr0_resp,0,0);
    VL_OUT8(instr0_predict_taken,0,0);
    VL_OUT8(instr1_predict_taken,0,0);
    VL_OUT8(current_instr0_GHSR,4,0);
    VL_OUT8(current_instr1_GHSR,4,0);
    VL_IN8(EXE_is_BJ,0,0);
    VL_IN8(EXE_update_GHSR,0,0);
    VL_IN8(EXE_branch_taken,0,0);
    VL_IN8(EXE_GHSR_restore,4,0);
    CData/*4:0*/ gshare__DOT__GHSR;
    CData/*4:0*/ gshare__DOT__GHSR_next;
    CData/*4:0*/ gshare__DOT__GHSR_restore_next;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(IF_instr0_pc,31,0);
    VL_IN(IF_instr1_pc,31,0);
    VL_IN(EXE_branch_addr,31,0);
    VlUnpacked<CData/*1:0*/, 32> gshare__DOT__GSHARE_PHT;

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
