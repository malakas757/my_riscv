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
    VL_OUT8(sq_left,1,0);
    VL_IN8(disp2sq_instr0_valid,0,0);
    VL_IN8(disp2sq_instr1_valid,0,0);
    VL_IN8(disp2sq_instr0_robid,6,0);
    VL_IN8(disp2sq_instr1_robid,6,0);
    VL_IN8(disp2sq_instr0_pc,6,0);
    VL_IN8(disp2sq_instr1_pc,6,0);
    VL_IN8(lsuint_wb_valid,0,0);
    VL_IN8(lsuint_wb_is_store,0,0);
    VL_IN8(retire0_valid,0,0);
    VL_IN8(retire1_valid,0,0);
    VL_IN8(retire0_robid,6,0);
    VL_IN8(retire1_robid,6,0);
    VL_OUT8(retire_sq2mem_valid,0,0);
    VL_IN8(flush_valid,0,0);
    VL_IN8(flush_robid,6,0);
    CData/*1:0*/ storequeue__DOT__sq_head;
    CData/*1:0*/ storequeue__DOT__sq_tail;
    CData/*2:0*/ storequeue__DOT__sq_empty_num;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*2:0*/ __Vchglast__TOP__storequeue__DOT__sq_empty_num;
    VL_IN(lsuint_wb_data,31,0);
    VL_IN(lsuint_wb_addr,31,0);
    VL_IN(lsuint_wb_robid,31,0);
    VL_OUT(retire_sq2mem_data,31,0);
    VL_OUT(retire_sq2mem_addr,31,0);
    VlUnpacked<CData/*6:0*/, 4> storequeue__DOT__sq_reg_robid;
    VlUnpacked<IData/*31:0*/, 4> storequeue__DOT__sq_reg_data;
    VlUnpacked<IData/*31:0*/, 4> storequeue__DOT__sq_reg_addr;
    VlUnpacked<CData/*0:0*/, 4> storequeue__DOT__sq_reg_valid;
    VlUnpacked<CData/*0:0*/, 4> storequeue__DOT__sq_reg_ready;

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
