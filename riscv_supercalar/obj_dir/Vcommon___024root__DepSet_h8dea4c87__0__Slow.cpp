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
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->imem_en = VL_RAND_RESET_I(1);
    vlSelf->imem_data_in = VL_RAND_RESET_I(32);
    vlSelf->write_address = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ram_debug[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->prf_debug[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->RRAT_debug[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->branch_times_debug = VL_RAND_RESET_I(1);
    vlSelf->flush_times_debug = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__pipeline__read_data0 = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__pipeline__read_data1 = VL_RAND_RESET_I(32);
}
