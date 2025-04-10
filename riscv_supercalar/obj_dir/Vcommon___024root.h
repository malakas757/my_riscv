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
    VL_IN8(writeback0_valid,0,0);
    VL_IN8(writeback0_need_to_wb,0,0);
    VL_IN8(writeback0_prd,5,0);
    VL_IN8(writeback1_valid,0,0);
    VL_IN8(writeback1_need_to_wb,0,0);
    VL_IN8(writeback1_prd,5,0);
    VL_IN8(writeback2_valid,0,0);
    VL_IN8(writeback2_need_to_wb,0,0);
    VL_IN8(writeback2_prd,5,0);
    VL_IN8(writeback3_valid,0,0);
    VL_IN8(writeback3_need_to_wb,0,0);
    VL_IN8(writeback3_prd,5,0);
    VL_IN8(writeback0_robid,6,0);
    VL_IN8(writeback1_robid,6,0);
    VL_IN8(writeback2_robid,6,0);
    VL_IN8(writeback3_robid,6,0);
    VL_IN8(writeback3_is_store,0,0);
    VL_IN8(mul_slot_busy,0,0);
    VL_IN8(flush_robid,6,0);
    VL_IN8(flush_valid,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(writeback3_data,31,0);
    VL_IN(writeback3_addr,31,0);
    VlWide<3>/*64:0*/ __Vchglast__TOP__pipeline__imem_resp;

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
