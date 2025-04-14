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
    VL_OUT8(branch_taken,0,0);
    VL_OUT8(flush,0,0);
    VL_OUT8(update_GHSR,0,0);
    CData/*0:0*/ bju__DOT__is_rs1_eq_rs2;
    CData/*0:0*/ bju__DOT__is_rs1_lt_rs2;
    CData/*0:0*/ bju__DOT__is_sign_rs1_lt_rs2;
    CData/*0:0*/ bju__DOT__is_bj;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT16(GHSR_restore,9,0);
    SData/*10:0*/ bju__DOT__GHSR_checkpoint;
    VL_IN(left_operand,31,0);
    VL_IN(right_operand,31,0);
    VL_IN(pc,31,0);
    VL_IN(immediate_data,31,0);
    VL_OUT(j_next_pc,31,0);
    VL_OUT(branch_target_pc,31,0);
    IData/*31:0*/ bju__DOT__pc_plus_imm;
    VL_INW(control,114,0,4);
    VL_IN64(branch_predict,43,0);

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
