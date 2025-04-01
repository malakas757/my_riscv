// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommon.h for the primary calling header

#ifndef VERILATED_VCOMMON_PC_COUNTER_H_
#define VERILATED_VCOMMON_PC_COUNTER_H_  // guard

#include "verilated.h"

class Vcommon__Syms;
VL_MODULE(Vcommon_pc_counter) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_IN8(__PVT__stall,0,0);
    VL_IN8(__PVT__ex_branch_flush,0,0);
    VL_IN8(__PVT__predict_taken,0,0);
    VL_IN(__PVT__ex_branch_target_addr,31,0);
    VL_IN(__PVT__predict_pc,31,0);
    VL_OUT(pc,31,0);

    // INTERNAL VARIABLES
    Vcommon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vcommon_pc_counter(const char* name);
    ~Vcommon_pc_counter();
    VL_UNCOPYABLE(Vcommon_pc_counter);

    // INTERNAL METHODS
    void __Vconfigure(Vcommon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
