// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon___024root.h"

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
    vlSelf->rstn_cpu = VL_RAND_RESET_I(1);
    vlSelf->rstn_uart = VL_RAND_RESET_I(1);
    vlSelf->io_rx = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(8);
    vlSelf->branch_times_debug = VL_RAND_RESET_I(1);
    vlSelf->flush_times_debug = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top_with_uart__inst_cpu__read_data0 = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__top_with_uart__inst_cpu__read_data1 = VL_RAND_RESET_I(32);
}
