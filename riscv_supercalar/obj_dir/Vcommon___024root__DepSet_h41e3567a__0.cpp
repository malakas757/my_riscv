// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon___024root.h"

void Vcommon_pipeline___sequent__TOP__pipeline__3(Vcommon_pipeline* vlSelf);
void Vcommon_pipeline___sequent__TOP__pipeline__4(Vcommon_pipeline* vlSelf);
void Vcommon_pipeline___sequent__TOP__pipeline__5(Vcommon_pipeline* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__4(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__5(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__6(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__7(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__8(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__9(Vcommon_if_stage* vlSelf);
void Vcommon_pc_counter___sequent__TOP__pipeline__inst_if_stage__inst_pc__1(Vcommon_pc_counter* vlSelf);
void Vcommon_pipeline___sequent__TOP__pipeline__6(Vcommon_pipeline* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__10(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___combo__TOP__pipeline__inst_if_stage__11(Vcommon_if_stage* vlSelf);
void Vcommon_pipeline___combo__TOP__pipeline__7(Vcommon_pipeline* vlSelf);

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommon_pipeline___sequent__TOP__pipeline__3((&vlSymsp->TOP__pipeline));
        Vcommon_pipeline___sequent__TOP__pipeline__4((&vlSymsp->TOP__pipeline));
        Vcommon_pipeline___sequent__TOP__pipeline__5((&vlSymsp->TOP__pipeline));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__4((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__5((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__6((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__7((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__8((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__9((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_pc_counter___sequent__TOP__pipeline__inst_if_stage__inst_pc__1((&vlSymsp->TOP__pipeline__inst_if_stage__inst_pc));
        Vcommon_pipeline___sequent__TOP__pipeline__6((&vlSymsp->TOP__pipeline));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__10((&vlSymsp->TOP__pipeline__inst_if_stage));
    }
    Vcommon_if_stage___combo__TOP__pipeline__inst_if_stage__11((&vlSymsp->TOP__pipeline__inst_if_stage));
    Vcommon_pipeline___combo__TOP__pipeline__7((&vlSymsp->TOP__pipeline));
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_INLINE_OPT QData Vcommon___024root___change_request_1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__pipeline.__PVT__read_data0 ^ vlSelf->__Vchglast__TOP__pipeline__read_data0)
         | (vlSymsp->TOP__pipeline.__PVT__read_data1 ^ vlSelf->__Vchglast__TOP__pipeline__read_data1));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__pipeline.__PVT__read_data0 ^ vlSelf->__Vchglast__TOP__pipeline__read_data0))) VL_DBG_MSGF("        CHANGE: /mnt/hgfs/riscv/riscv_supercalar/pipeline.sv:154: read_data0\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__pipeline.__PVT__read_data1 ^ vlSelf->__Vchglast__TOP__pipeline__read_data1))) VL_DBG_MSGF("        CHANGE: /mnt/hgfs/riscv/riscv_supercalar/pipeline.sv:155: read_data1\n"); );
    // Final
    vlSelf->__Vchglast__TOP__pipeline__read_data0 = vlSymsp->TOP__pipeline.__PVT__read_data0;
    vlSelf->__Vchglast__TOP__pipeline__read_data1 = vlSymsp->TOP__pipeline.__PVT__read_data1;
    return __req;
}
