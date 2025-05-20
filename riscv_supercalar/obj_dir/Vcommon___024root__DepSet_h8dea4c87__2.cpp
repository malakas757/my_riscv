// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___combo__TOP__7(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__7\n"); );
    // Init
    CData/*0:0*/ __Vfunc_if_branch_taken__0__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__0__biomd;
    CData/*0:0*/ __Vfunc_if_branch_taken__1__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__1__biomd;
    // Body
    __Vfunc_if_branch_taken__1__biomd = vlSelf->gshare__DOT__GSHARE_PHT
        [(0x3ffU & (vlSelf->IF_instr1_pc >> 2U))];
    __Vfunc_if_branch_taken__1__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__1__biomd) 
                                                  >> 1U));
    vlSelf->instr1_predict_taken = __Vfunc_if_branch_taken__1__Vfuncout;
    __Vfunc_if_branch_taken__0__biomd = vlSelf->gshare__DOT__GSHARE_PHT
        [(0x3ffU & (vlSelf->IF_instr0_pc >> 2U))];
    __Vfunc_if_branch_taken__0__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__0__biomd) 
                                                  >> 1U));
    vlSelf->instr0_predict_taken = __Vfunc_if_branch_taken__0__Vfuncout;
    vlSelf->current_instr1_GHSR = vlSelf->gshare__DOT__GHSR;
    vlSelf->current_instr1_GHSR = (((IData)(vlSelf->IF_instr0_hit) 
                                    & (~ (IData)(vlSelf->instr0_predict_taken)))
                                    ? (0x3feU & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                 << 1U))
                                    : (IData)(vlSelf->gshare__DOT__GHSR));
    vlSelf->gshare__DOT__GHSR_next = ((IData)(vlSelf->flush_valid)
                                       ? ((0x3feU & 
                                           ((IData)(vlSelf->EXE_GHSR_restore) 
                                            << 1U)) 
                                          | (IData)(vlSelf->EXE_branch_taken))
                                       : (((IData)(vlSelf->IF_instr0_resp) 
                                           & ((IData)(vlSelf->IF_instr0_hit) 
                                              | (IData)(vlSelf->IF_instr1_hit)))
                                           ? (((IData)(vlSelf->instr0_predict_taken) 
                                               & (IData)(vlSelf->IF_instr0_hit))
                                               ? ((0x3feU 
                                                   & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->instr0_predict_taken))
                                               : ((
                                                   ((IData)(vlSelf->instr1_predict_taken) 
                                                    & (IData)(vlSelf->IF_instr1_hit)) 
                                                   & (IData)(vlSelf->IF_instr0_hit))
                                                   ? 
                                                  ((0x3fcU 
                                                    & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->instr1_predict_taken))
                                                   : 
                                                  (((IData)(vlSelf->instr1_predict_taken) 
                                                    & (IData)(vlSelf->IF_instr1_hit))
                                                    ? 
                                                   ((0x3feU 
                                                     & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->instr1_predict_taken))
                                                    : 
                                                   ((IData)(vlSelf->IF_instr0_hit)
                                                     ? 
                                                    (0x3feU 
                                                     & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                        << 1U))
                                                     : (IData)(vlSelf->gshare__DOT__GHSR)))))
                                           : (IData)(vlSelf->gshare__DOT__GHSR)));
}

void Vcommon___024root___sequent__TOP__2(Vcommon___024root* vlSelf);
void Vcommon___024root___sequent__TOP__3(Vcommon___024root* vlSelf);
void Vcommon___024root___sequent__TOP__4(Vcommon___024root* vlSelf);
void Vcommon___024root___sequent__TOP__5(Vcommon___024root* vlSelf);

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommon___024root___sequent__TOP__2(vlSelf);
        Vcommon___024root___sequent__TOP__3(vlSelf);
        Vcommon___024root___sequent__TOP__4(vlSelf);
        Vcommon___024root___sequent__TOP__5(vlSelf);
    }
    Vcommon___024root___combo__TOP__7(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelf->flush_valid & 0xfeU))) {
        Verilated::overWidthError("flush_valid");}
    if (VL_UNLIKELY((vlSelf->IF_instr0_hit & 0xfeU))) {
        Verilated::overWidthError("IF_instr0_hit");}
    if (VL_UNLIKELY((vlSelf->IF_instr1_hit & 0xfeU))) {
        Verilated::overWidthError("IF_instr1_hit");}
    if (VL_UNLIKELY((vlSelf->IF_instr0_resp & 0xfeU))) {
        Verilated::overWidthError("IF_instr0_resp");}
    if (VL_UNLIKELY((vlSelf->EXE_is_BJ & 0xfeU))) {
        Verilated::overWidthError("EXE_is_BJ");}
    if (VL_UNLIKELY((vlSelf->EXE_update_GHSR & 0xfeU))) {
        Verilated::overWidthError("EXE_update_GHSR");}
    if (VL_UNLIKELY((vlSelf->EXE_branch_taken & 0xfeU))) {
        Verilated::overWidthError("EXE_branch_taken");}
    if (VL_UNLIKELY((vlSelf->EXE_GHSR_restore & 0xfc00U))) {
        Verilated::overWidthError("EXE_GHSR_restore");}
}
#endif  // VL_DEBUG
