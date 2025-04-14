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
    VL_IN8(branch_predict,0,0);
    VL_OUT8(branch_taken,0,0);
    VL_OUT8(flush,0,0);
    VL_IN(left_operand,31,0);
    VL_IN(right_operand,31,0);
    VL_IN(pc,31,0);
    VL_IN(control,29,0);
    VL_IN(immediate_data,31,0);
    VL_OUT(j_next_pc,31,0);
    VL_OUT(branch_pc,31,0);

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
