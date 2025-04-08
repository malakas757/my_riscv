// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon___024root___settle__TOP__2(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->storequeue__DOT__sq_head = vlSelf->storequeue__DOT__sq_tail;
    if ((vlSelf->storequeue__DOT__sq_reg_valid[0U] 
         & (~ vlSelf->storequeue__DOT__sq_reg_valid
            [1U]))) {
        vlSelf->storequeue__DOT__sq_head = 1U;
    }
    if ((vlSelf->storequeue__DOT__sq_reg_valid[1U] 
         & (~ vlSelf->storequeue__DOT__sq_reg_valid
            [2U]))) {
        vlSelf->storequeue__DOT__sq_head = 2U;
    }
    if ((vlSelf->storequeue__DOT__sq_reg_valid[2U] 
         & (~ vlSelf->storequeue__DOT__sq_reg_valid
            [3U]))) {
        vlSelf->storequeue__DOT__sq_head = 3U;
    }
    if ((vlSelf->storequeue__DOT__sq_reg_valid[3U] 
         & (~ vlSelf->storequeue__DOT__sq_reg_valid
            [0U]))) {
        vlSelf->storequeue__DOT__sq_head = 0U;
    }
    vlSelf->retire_sq2mem_data = vlSelf->storequeue__DOT__sq_reg_data
        [vlSelf->storequeue__DOT__sq_tail];
    vlSelf->retire_sq2mem_addr = vlSelf->storequeue__DOT__sq_reg_addr
        [vlSelf->storequeue__DOT__sq_tail];
    vlSelf->storequeue__DOT__sq_empty_num = (7U & ((IData)(vlSelf->storequeue__DOT__sq_empty_num) 
                                                   + 
                                                   vlSelf->storequeue__DOT__sq_reg_valid
                                                   [0U]));
    vlSelf->storequeue__DOT__sq_empty_num = (7U & ((IData)(vlSelf->storequeue__DOT__sq_empty_num) 
                                                   + 
                                                   vlSelf->storequeue__DOT__sq_reg_valid
                                                   [1U]));
    vlSelf->storequeue__DOT__sq_empty_num = (7U & ((IData)(vlSelf->storequeue__DOT__sq_empty_num) 
                                                   + 
                                                   vlSelf->storequeue__DOT__sq_reg_valid
                                                   [2U]));
    vlSelf->storequeue__DOT__sq_empty_num = (7U & ((IData)(vlSelf->storequeue__DOT__sq_empty_num) 
                                                   + 
                                                   vlSelf->storequeue__DOT__sq_reg_valid
                                                   [3U]));
    vlSelf->sq_left = ((1U < (IData)(vlSelf->storequeue__DOT__sq_empty_num))
                        ? 2U : ((0U == (IData)(vlSelf->storequeue__DOT__sq_empty_num))
                                 ? 0U : 1U));
    vlSelf->retire_sq2mem_valid = (vlSelf->storequeue__DOT__sq_reg_valid
                                   [vlSelf->storequeue__DOT__sq_tail] 
                                   & vlSelf->storequeue__DOT__sq_reg_ready
                                   [vlSelf->storequeue__DOT__sq_tail]);
}

VL_ATTR_COLD void Vcommon___024root___eval_initial(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcommon___024root___eval_settle(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_settle\n"); );
    // Body
    Vcommon___024root___settle__TOP__2(vlSelf);
}

VL_ATTR_COLD void Vcommon___024root___final(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___final\n"); );
}

VL_ATTR_COLD void Vcommon___024root___ctor_var_reset(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->sq_left = VL_RAND_RESET_I(2);
    vlSelf->disp2sq_instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->disp2sq_instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->disp2sq_instr0_robid = VL_RAND_RESET_I(7);
    vlSelf->disp2sq_instr1_robid = VL_RAND_RESET_I(7);
    vlSelf->disp2sq_instr0_pc = VL_RAND_RESET_I(7);
    vlSelf->disp2sq_instr1_pc = VL_RAND_RESET_I(7);
    vlSelf->lsuint_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->lsuint_wb_is_store = VL_RAND_RESET_I(1);
    vlSelf->lsuint_wb_data = VL_RAND_RESET_I(32);
    vlSelf->lsuint_wb_addr = VL_RAND_RESET_I(32);
    vlSelf->lsuint_wb_robid = VL_RAND_RESET_I(32);
    vlSelf->retire0_valid = VL_RAND_RESET_I(1);
    vlSelf->retire1_valid = VL_RAND_RESET_I(1);
    vlSelf->retire0_robid = VL_RAND_RESET_I(7);
    vlSelf->retire1_robid = VL_RAND_RESET_I(7);
    vlSelf->retire_sq2mem_data = VL_RAND_RESET_I(32);
    vlSelf->retire_sq2mem_addr = VL_RAND_RESET_I(32);
    vlSelf->retire_sq2mem_valid = VL_RAND_RESET_I(1);
    vlSelf->flush_valid = VL_RAND_RESET_I(1);
    vlSelf->flush_robid = VL_RAND_RESET_I(7);
    vlSelf->storequeue__DOT__sq_head = VL_RAND_RESET_I(2);
    vlSelf->storequeue__DOT__sq_tail = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->storequeue__DOT__sq_reg_robid[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->storequeue__DOT__sq_reg_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->storequeue__DOT__sq_reg_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->storequeue__DOT__sq_reg_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->storequeue__DOT__sq_reg_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->storequeue__DOT__sq_empty_num = VL_RAND_RESET_I(3);
    vlSelf->__Vchglast__TOP__storequeue__DOT__sq_empty_num = VL_RAND_RESET_I(3);
}
