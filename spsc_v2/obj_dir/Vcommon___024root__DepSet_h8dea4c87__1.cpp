// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___combo__TOP__3(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__3\n"); );
    // Init
    CData/*1:0*/ Icache1__DOT__way_to_evt;
    // Body
    if (vlSelf->refill_valid) {
        vlSelf->Icache1__DOT__cache_index[0U] = (0x3fU 
                                                 & (IData)(vlSelf->refill_set));
        vlSelf->Icache1__DOT__cache_index[1U] = (0x3fU 
                                                 & (IData)(vlSelf->refill_set));
        vlSelf->Icache1__DOT__cache_index[2U] = (0x3fU 
                                                 & (IData)(vlSelf->refill_set));
        vlSelf->Icache1__DOT__cache_index[3U] = (0x3fU 
                                                 & (IData)(vlSelf->refill_set));
    } else {
        vlSelf->Icache1__DOT__cache_index[0U] = (0x3fU 
                                                 & vlSelf->pc);
        vlSelf->Icache1__DOT__cache_index[1U] = (0x3fU 
                                                 & vlSelf->pc);
        vlSelf->Icache1__DOT__cache_index[2U] = (0x3fU 
                                                 & vlSelf->pc);
        vlSelf->Icache1__DOT__cache_index[3U] = (0x3fU 
                                                 & vlSelf->pc);
    }
    vlSelf->tos2_pc = ((IData)(vlSelf->Icachestop) ? 0U
                        : vlSelf->Icache1__DOT__reg_pc);
    vlSelf->tos2_valid = ((~ (IData)(vlSelf->Icachestop)) 
                          & (IData)(vlSelf->Icache1__DOT__reg_pc_valid));
    Icache1__DOT__way_to_evt = ((((vlSelf->Icache1__DOT__CountWay1
                                   [vlSelf->refill_set] 
                                   >= vlSelf->Icache1__DOT__CountWay2
                                   [vlSelf->refill_set]) 
                                  & (vlSelf->Icache1__DOT__CountWay1
                                     [vlSelf->refill_set] 
                                     >= vlSelf->Icache1__DOT__CountWay3
                                     [vlSelf->refill_set])) 
                                 & (vlSelf->Icache1__DOT__CountWay1
                                    [vlSelf->refill_set] 
                                    >= vlSelf->Icache1__DOT__CountWay4
                                    [vlSelf->refill_set]))
                                 ? 0U : ((((vlSelf->Icache1__DOT__CountWay2
                                            [vlSelf->refill_set] 
                                            >= vlSelf->Icache1__DOT__CountWay1
                                            [vlSelf->refill_set]) 
                                           & (vlSelf->Icache1__DOT__CountWay2
                                              [vlSelf->refill_set] 
                                              >= vlSelf->Icache1__DOT__CountWay3
                                              [vlSelf->refill_set])) 
                                          & (vlSelf->Icache1__DOT__CountWay2
                                             [vlSelf->refill_set] 
                                             >= vlSelf->Icache1__DOT__CountWay4
                                             [vlSelf->refill_set]))
                                          ? 1U : ((
                                                   ((vlSelf->Icache1__DOT__CountWay3
                                                     [vlSelf->refill_set] 
                                                     >= 
                                                     vlSelf->Icache1__DOT__CountWay1
                                                     [vlSelf->refill_set]) 
                                                    & (vlSelf->Icache1__DOT__CountWay3
                                                       [vlSelf->refill_set] 
                                                       >= 
                                                       vlSelf->Icache1__DOT__CountWay1
                                                       [vlSelf->refill_set])) 
                                                   & (vlSelf->Icache1__DOT__CountWay3
                                                      [vlSelf->refill_set] 
                                                      >= 
                                                      vlSelf->Icache1__DOT__CountWay4
                                                      [vlSelf->refill_set]))
                                                   ? 2U
                                                   : 
                                                  ((((vlSelf->Icache1__DOT__CountWay4
                                                      [vlSelf->refill_set] 
                                                      >= 
                                                      vlSelf->Icache1__DOT__CountWay1
                                                      [vlSelf->refill_set]) 
                                                     & (vlSelf->Icache1__DOT__CountWay4
                                                        [vlSelf->refill_set] 
                                                        >= 
                                                        vlSelf->Icache1__DOT__CountWay2
                                                        [vlSelf->refill_set])) 
                                                    & (vlSelf->Icache1__DOT__CountWay4
                                                       [vlSelf->refill_set] 
                                                       >= 
                                                       vlSelf->Icache1__DOT__CountWay3
                                                       [vlSelf->refill_set]))
                                                    ? 3U
                                                    : 0U))));
    vlSelf->Icache1__DOT__cache_wea[0U] = (((IData)(vlSelf->refill_valid) 
                                            & (0U == (IData)(Icache1__DOT__way_to_evt)))
                                            ? 1U : 0U);
    vlSelf->Icache1__DOT__cache_wea[1U] = (((IData)(vlSelf->refill_valid) 
                                            & (1U == (IData)(Icache1__DOT__way_to_evt)))
                                            ? 1U : 0U);
    vlSelf->Icache1__DOT__cache_wea[2U] = (((IData)(vlSelf->refill_valid) 
                                            & (2U == (IData)(Icache1__DOT__way_to_evt)))
                                            ? 1U : 0U);
    vlSelf->Icache1__DOT__cache_wea[3U] = (((IData)(vlSelf->refill_valid) 
                                            & (3U == (IData)(Icache1__DOT__way_to_evt)))
                                            ? 1U : 0U);
}

void Vcommon___024root___sequent__TOP__1(Vcommon___024root* vlSelf);

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommon___024root___sequent__TOP__1(vlSelf);
    }
    Vcommon___024root___combo__TOP__3(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->Icachestop & 0xfeU))) {
        Verilated::overWidthError("Icachestop");}
    if (VL_UNLIKELY((vlSelf->Icacheflush & 0xfeU))) {
        Verilated::overWidthError("Icacheflush");}
    if (VL_UNLIKELY((vlSelf->pc_valid & 0xfeU))) {
        Verilated::overWidthError("pc_valid");}
    if (VL_UNLIKELY((vlSelf->hit_valid & 0xfeU))) {
        Verilated::overWidthError("hit_valid");}
    if (VL_UNLIKELY((vlSelf->hit_set & 0xc0U))) {
        Verilated::overWidthError("hit_set");}
    if (VL_UNLIKELY((vlSelf->hit_way & 0xfcU))) {
        Verilated::overWidthError("hit_way");}
    if (VL_UNLIKELY((vlSelf->refill_valid & 0xfeU))) {
        Verilated::overWidthError("refill_valid");}
    if (VL_UNLIKELY((vlSelf->refill_set & 0xc0U))) {
        Verilated::overWidthError("refill_set");}
    if (VL_UNLIKELY((vlSelf->refill_tag & 0xfff00000U))) {
        Verilated::overWidthError("refill_tag");}
}
#endif  // VL_DEBUG
