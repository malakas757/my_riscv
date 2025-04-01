// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommon.h for the primary calling header

#ifndef VERILATED_VCOMMON___024ROOT_H_
#define VERILATED_VCOMMON___024ROOT_H_  // guard

#include "verilated.h"

class Vcommon__Syms;
class Vcommon_if_stage;

VL_MODULE(Vcommon___024root) {
  public:
    // CELLS
    Vcommon_if_stage* if_stage;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_IN8(PC_stall,0,0);
    VL_IN8(PC_flush,0,0);
    VL_IN8(IF_stall,0,0);
    VL_OUT8(imem_miss,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUTW(instr_req,64,0,3);
    VL_INW(instr_resp,64,0,3);
    VL_OUTW(instr0_if_id,108,0,4);
    VL_OUTW(instr1_if_id,108,0,4);
    VL_INW(ex_branch_in,76,0,3);

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
