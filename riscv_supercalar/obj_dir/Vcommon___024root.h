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
    VL_IN8(IQ0_rs1_addr,5,0);
    VL_IN8(IQ0_rs2_addr,5,0);
    VL_IN8(IQ1_rs1_addr,5,0);
    VL_IN8(IQ1_rs2_addr,5,0);
    VL_IN8(MEM_rs1_addr,5,0);
    VL_IN8(MEM_rs2_addr,5,0);
    VL_IN8(writeback0_need_to_wb,0,0);
    VL_IN8(writeback1_need_to_wb,0,0);
    VL_IN8(writeback2_need_to_wb,0,0);
    VL_IN8(writeback3_need_to_wb,0,0);
    VL_IN8(writeback0_prd,5,0);
    VL_IN8(writeback1_prd,5,0);
    VL_IN8(writeback2_prd,5,0);
    VL_IN8(writeback3_prd,5,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(IQ0_rs1_data,31,0);
    VL_OUT(IQ0_rs2_data,31,0);
    VL_OUT(IQ1_rs1_data,31,0);
    VL_OUT(IQ1_rs2_data,31,0);
    VL_OUT(MEM_rs1_data,31,0);
    VL_OUT(MEM_rs2_data,31,0);
    VL_IN(writeback0_data,31,0);
    VL_IN(writeback1_data,31,0);
    VL_IN(writeback2_data,31,0);
    VL_IN(writeback3_data,31,0);
    VL_OUT(prf_debug[64],31,0);
    VlUnpacked<IData/*31:0*/, 64> phyreg64__DOT__prf_file;

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
