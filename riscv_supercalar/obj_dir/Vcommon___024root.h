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
    VL_INW(if_instr,108,0,4);
    VL_OUTW(control,114,0,4);

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
