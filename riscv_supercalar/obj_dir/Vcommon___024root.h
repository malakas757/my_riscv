// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommon.h for the primary calling header

#ifndef VERILATED_VCOMMON___024ROOT_H_
#define VERILATED_VCOMMON___024ROOT_H_  // guard

#include "verilated.h"

class Vcommon__Syms;
class Vcommon_top_with_uart;

VL_MODULE(Vcommon___024root) {
  public:
    // CELLS
    Vcommon_top_with_uart* top_with_uart;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN8(io_rx,0,0);
    VL_OUT8(led,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ __Vchglast__TOP__top_with_uart__inst_cpu__read_data0;
    IData/*31:0*/ __Vchglast__TOP__top_with_uart__inst_cpu__read_data1;

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
