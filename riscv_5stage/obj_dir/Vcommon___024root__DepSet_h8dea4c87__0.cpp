// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___combo__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->hazard = ((((0x1fU & (vlSelf->if_id_reg[0U] 
                                  >> 0xfU)) == (0x1fU 
                                                & ((vlSelf->id_ex_reg[5U] 
                                                    << 1U) 
                                                   | (vlSelf->id_ex_reg[4U] 
                                                      >> 0x1fU)))) 
                       | ((0x1fU & (vlSelf->if_id_reg[0U] 
                                    >> 0x14U)) == (0x1fU 
                                                   & ((vlSelf->id_ex_reg[5U] 
                                                       << 1U) 
                                                      | (vlSelf->id_ex_reg[4U] 
                                                         >> 0x1fU))))) 
                      & (vlSelf->id_ex_reg[0U] >> 8U));
}

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    Vcommon___024root___combo__TOP__1(vlSelf);
}

#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
