// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon___024root___settle__TOP__2(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__2\n"); );
    // Init
    CData/*0:0*/ __Vfunc_if_branch_taken__0__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__0__biomd;
    CData/*0:0*/ __Vfunc_if_branch_taken__1__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__1__biomd;
    // Body
    vlSelf->gshare__DOT__GHSR_restore_next = ((0x1eU 
                                               & ((IData)(vlSelf->EXE_GHSR_restore) 
                                                  << 1U)) 
                                              | (IData)(vlSelf->EXE_branch_taken));
    vlSelf->current_instr0_GHSR = vlSelf->gshare__DOT__GHSR;
    __Vfunc_if_branch_taken__1__biomd = vlSelf->gshare__DOT__GSHARE_PHT
        [(0x1fU & (vlSelf->IF_instr1_pc >> 2U))];
    __Vfunc_if_branch_taken__1__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__1__biomd) 
                                                  >> 1U));
    vlSelf->instr1_predict_taken = __Vfunc_if_branch_taken__1__Vfuncout;
    __Vfunc_if_branch_taken__0__biomd = vlSelf->gshare__DOT__GSHARE_PHT
        [(0x1fU & (vlSelf->IF_instr0_pc >> 2U))];
    __Vfunc_if_branch_taken__0__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__0__biomd) 
                                                  >> 1U));
    vlSelf->instr0_predict_taken = __Vfunc_if_branch_taken__0__Vfuncout;
    vlSelf->current_instr1_GHSR = vlSelf->gshare__DOT__GHSR;
    vlSelf->current_instr1_GHSR = (((IData)(vlSelf->IF_instr0_hit) 
                                    & (~ (IData)(vlSelf->instr0_predict_taken)))
                                    ? (0x1eU & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                << 1U))
                                    : (IData)(vlSelf->gshare__DOT__GHSR));
    vlSelf->gshare__DOT__GHSR_next = ((IData)(vlSelf->flush_valid)
                                       ? (IData)(vlSelf->gshare__DOT__GHSR_restore_next)
                                       : (((IData)(vlSelf->IF_instr0_resp) 
                                           & ((IData)(vlSelf->IF_instr0_hit) 
                                              | (IData)(vlSelf->IF_instr1_hit)))
                                           ? (((IData)(vlSelf->instr0_predict_taken) 
                                               & (IData)(vlSelf->IF_instr0_hit))
                                               ? ((0x1eU 
                                                   & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->instr0_predict_taken))
                                               : ((
                                                   ((IData)(vlSelf->instr1_predict_taken) 
                                                    & (IData)(vlSelf->IF_instr1_hit)) 
                                                   & (IData)(vlSelf->IF_instr0_hit))
                                                   ? 
                                                  ((0x1cU 
                                                    & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->instr1_predict_taken))
                                                   : 
                                                  (((IData)(vlSelf->instr1_predict_taken) 
                                                    & (IData)(vlSelf->IF_instr1_hit))
                                                    ? 
                                                   ((0x1eU 
                                                     & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->instr1_predict_taken))
                                                    : 
                                                   ((IData)(vlSelf->IF_instr0_hit)
                                                     ? 
                                                    (0x1eU 
                                                     & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                        << 1U))
                                                     : (IData)(vlSelf->gshare__DOT__GHSR)))))
                                           : (((IData)(vlSelf->EXE_is_BJ) 
                                               & (IData)(vlSelf->EXE_update_GHSR))
                                               ? (IData)(vlSelf->gshare__DOT__GHSR_restore_next)
                                               : (IData)(vlSelf->gshare__DOT__GHSR))));
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
    vlSelf->flush_valid = VL_RAND_RESET_I(1);
    vlSelf->IF_instr0_pc = VL_RAND_RESET_I(32);
    vlSelf->IF_instr1_pc = VL_RAND_RESET_I(32);
    vlSelf->IF_instr0_hit = VL_RAND_RESET_I(1);
    vlSelf->IF_instr1_hit = VL_RAND_RESET_I(1);
    vlSelf->IF_instr0_resp = VL_RAND_RESET_I(1);
    vlSelf->instr0_predict_taken = VL_RAND_RESET_I(1);
    vlSelf->instr1_predict_taken = VL_RAND_RESET_I(1);
    vlSelf->current_instr0_GHSR = VL_RAND_RESET_I(5);
    vlSelf->current_instr1_GHSR = VL_RAND_RESET_I(5);
    vlSelf->EXE_is_BJ = VL_RAND_RESET_I(1);
    vlSelf->EXE_update_GHSR = VL_RAND_RESET_I(1);
    vlSelf->EXE_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->EXE_branch_addr = VL_RAND_RESET_I(32);
    vlSelf->EXE_GHSR_restore = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->gshare__DOT__GSHARE_PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gshare__DOT__GHSR = VL_RAND_RESET_I(5);
    vlSelf->gshare__DOT__GHSR_next = VL_RAND_RESET_I(5);
    vlSelf->gshare__DOT__GHSR_restore_next = VL_RAND_RESET_I(5);
}
