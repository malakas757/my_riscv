// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon_pipeline___initial__TOP__pipeline__1(Vcommon_pipeline* vlSelf);

VL_ATTR_COLD void Vcommon___024root___eval_initial(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_initial\n"); );
    // Body
    Vcommon_pipeline___initial__TOP__pipeline__1((&vlSymsp->TOP__pipeline));
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__1(Vcommon_if_stage* vlSelf);
VL_ATTR_COLD void Vcommon_pipeline___settle__TOP__pipeline__2(Vcommon_pipeline* vlSelf);
VL_ATTR_COLD void Vcommon_pipeline___settle__TOP__pipeline__3(Vcommon_pipeline* vlSelf);
VL_ATTR_COLD void Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__2(Vcommon_if_stage* vlSelf);
void Vcommon___024root___settle__TOP__1(Vcommon___024root* vlSelf);

VL_ATTR_COLD void Vcommon___024root___eval_settle(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_settle\n"); );
    // Body
    Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__1((&vlSymsp->TOP__pipeline__inst_if_stage));
    Vcommon_pipeline___settle__TOP__pipeline__2((&vlSymsp->TOP__pipeline));
    Vcommon_pipeline___settle__TOP__pipeline__3((&vlSymsp->TOP__pipeline));
    Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__2((&vlSymsp->TOP__pipeline__inst_if_stage));
    Vcommon___024root___settle__TOP__1(vlSelf);
}
