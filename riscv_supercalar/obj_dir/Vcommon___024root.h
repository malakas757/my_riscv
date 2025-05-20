// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommon.h for the primary calling header

#ifndef VERILATED_VCOMMON___024ROOT_H_
#define VERILATED_VCOMMON___024ROOT_H_  // guard

#include "verilated.h"

class Vcommon__Syms;
class Vcommon_pipeline;

VL_MODULE(Vcommon___024root) {
  public:
    // CELLS
    Vcommon_pipeline* pipeline;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_IN8(imem_en,0,0);
    VL_OUT8(branch_times_debug,0,0);
    VL_OUT8(flush_times_debug,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(imem_data_in,31,0);
    VL_IN(write_address,31,0);
    IData/*31:0*/ __Vchglast__TOP__pipeline__read_data0;
    IData/*31:0*/ __Vchglast__TOP__pipeline__read_data1;
    VL_OUT8(ram_debug[64],7,0);
    VL_OUT(prf_debug[64],31,0);
    VL_OUT8(RRAT_debug[32],5,0);

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
