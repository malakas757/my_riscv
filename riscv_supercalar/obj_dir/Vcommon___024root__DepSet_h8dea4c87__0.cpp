// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon___024root.h"

QData Vcommon___024root___change_request_1(Vcommon___024root* vlSelf);

VL_INLINE_OPT QData Vcommon___024root___change_request(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___change_request\n"); );
    // Body
    return (Vcommon___024root___change_request_1(vlSelf));
}

#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn_cpu & 0xfeU))) {
        Verilated::overWidthError("rstn_cpu");}
    if (VL_UNLIKELY((vlSelf->rstn_uart & 0xfeU))) {
        Verilated::overWidthError("rstn_uart");}
    if (VL_UNLIKELY((vlSelf->io_rx & 0xfeU))) {
        Verilated::overWidthError("io_rx");}
}
#endif  // VL_DEBUG
