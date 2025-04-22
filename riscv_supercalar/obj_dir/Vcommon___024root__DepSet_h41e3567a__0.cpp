// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___settle__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->prf_debug[__Vilp] = vlSymsp->TOP__pipeline.prf_debug
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0xffU)) {
        vlSelf->ram_debug[__Vilp] = vlSymsp->TOP__pipeline.ram_debug
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->RRAT_debug[0x1fU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x1fU];
    vlSelf->RRAT_debug[0x1eU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x1eU];
    vlSelf->RRAT_debug[0x1dU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x1dU];
    vlSelf->RRAT_debug[0x1cU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x1cU];
    vlSelf->RRAT_debug[0x1bU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x1bU];
    vlSelf->RRAT_debug[0x1aU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x1aU];
    vlSelf->RRAT_debug[0x19U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x19U];
    vlSelf->RRAT_debug[0x18U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x18U];
    vlSelf->RRAT_debug[0x17U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x17U];
    vlSelf->RRAT_debug[0x16U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x16U];
    vlSelf->RRAT_debug[0x15U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x15U];
    vlSelf->RRAT_debug[0x14U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x14U];
    vlSelf->RRAT_debug[0x13U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x13U];
    vlSelf->RRAT_debug[0x12U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x12U];
    vlSelf->RRAT_debug[0x11U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x11U];
    vlSelf->RRAT_debug[0x10U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0x10U];
    vlSelf->RRAT_debug[0xfU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0xfU];
    vlSelf->RRAT_debug[0xeU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0xeU];
    vlSelf->RRAT_debug[0xdU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0xdU];
    vlSelf->RRAT_debug[0xcU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0xcU];
    vlSelf->RRAT_debug[0xbU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0xbU];
    vlSelf->RRAT_debug[0xaU] = vlSymsp->TOP__pipeline.RRAT_debug
        [0xaU];
    vlSelf->RRAT_debug[9U] = vlSymsp->TOP__pipeline.RRAT_debug
        [9U];
    vlSelf->RRAT_debug[8U] = vlSymsp->TOP__pipeline.RRAT_debug
        [8U];
    vlSelf->RRAT_debug[7U] = vlSymsp->TOP__pipeline.RRAT_debug
        [7U];
    vlSelf->RRAT_debug[6U] = vlSymsp->TOP__pipeline.RRAT_debug
        [6U];
    vlSelf->RRAT_debug[5U] = vlSymsp->TOP__pipeline.RRAT_debug
        [5U];
    vlSelf->RRAT_debug[4U] = vlSymsp->TOP__pipeline.RRAT_debug
        [4U];
    vlSelf->RRAT_debug[3U] = vlSymsp->TOP__pipeline.RRAT_debug
        [3U];
    vlSelf->RRAT_debug[2U] = vlSymsp->TOP__pipeline.RRAT_debug
        [2U];
    vlSelf->RRAT_debug[1U] = vlSymsp->TOP__pipeline.RRAT_debug
        [1U];
    vlSelf->RRAT_debug[0U] = vlSymsp->TOP__pipeline.RRAT_debug
        [0U];
}

void Vcommon_pipeline___sequent__TOP__pipeline__4(Vcommon_pipeline* vlSelf);
void Vcommon_pipeline___sequent__TOP__pipeline__5(Vcommon_pipeline* vlSelf);
void Vcommon_pipeline___sequent__TOP__pipeline__6(Vcommon_pipeline* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__4(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__5(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__6(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__7(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__8(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__9(Vcommon_if_stage* vlSelf);
void Vcommon_pc_counter___sequent__TOP__pipeline__inst_if_stage__inst_pc__1(Vcommon_pc_counter* vlSelf);
void Vcommon_pipeline___sequent__TOP__pipeline__7(Vcommon_pipeline* vlSelf);
void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__10(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___combo__TOP__pipeline__inst_if_stage__11(Vcommon_if_stage* vlSelf);
void Vcommon_pipeline___combo__TOP__pipeline__8(Vcommon_pipeline* vlSelf);

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommon_pipeline___sequent__TOP__pipeline__4((&vlSymsp->TOP__pipeline));
        Vcommon_pipeline___sequent__TOP__pipeline__5((&vlSymsp->TOP__pipeline));
        Vcommon_pipeline___sequent__TOP__pipeline__6((&vlSymsp->TOP__pipeline));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__4((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__5((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__6((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__7((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__8((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__9((&vlSymsp->TOP__pipeline__inst_if_stage));
        Vcommon_pc_counter___sequent__TOP__pipeline__inst_if_stage__inst_pc__1((&vlSymsp->TOP__pipeline__inst_if_stage__inst_pc));
        Vcommon___024root___settle__TOP__1(vlSelf);
        Vcommon_pipeline___sequent__TOP__pipeline__7((&vlSymsp->TOP__pipeline));
        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__10((&vlSymsp->TOP__pipeline__inst_if_stage));
    }
    Vcommon_if_stage___combo__TOP__pipeline__inst_if_stage__11((&vlSymsp->TOP__pipeline__inst_if_stage));
    Vcommon_pipeline___combo__TOP__pipeline__8((&vlSymsp->TOP__pipeline));
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
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__pipeline.__PVT__read_data0 ^ vlSelf->__Vchglast__TOP__pipeline__read_data0))) VL_DBG_MSGF("        CHANGE: /mnt/hgfs/riscv/riscv_supercalar/pipeline.sv:163: read_data0\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__pipeline.__PVT__read_data1 ^ vlSelf->__Vchglast__TOP__pipeline__read_data1))) VL_DBG_MSGF("        CHANGE: /mnt/hgfs/riscv/riscv_supercalar/pipeline.sv:164: read_data1\n"); );
    // Final
    vlSelf->__Vchglast__TOP__pipeline__read_data0 = vlSymsp->TOP__pipeline.__PVT__read_data0;
    vlSelf->__Vchglast__TOP__pipeline__read_data1 = vlSymsp->TOP__pipeline.__PVT__read_data1;
    return __req;
}
