// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__3(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->instr_req[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__if_stage__inst_pc.pc)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + vlSymsp->TOP__if_stage__inst_pc.pc))))) 
                              << 1U) | (IData)(vlSymsp->TOP__if_stage.__PVT__imem_req));
    vlSelf->instr_req[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__if_stage__inst_pc.pc)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + vlSymsp->TOP__if_stage__inst_pc.pc))))) 
                              >> 0x1fU) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__if_stage__inst_pc.pc)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + vlSymsp->TOP__if_stage__inst_pc.pc)))) 
                                                    >> 0x20U)) 
                                           << 1U));
    vlSelf->instr_req[2U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__if_stage__inst_pc.pc)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + vlSymsp->TOP__if_stage__inst_pc.pc)))) 
                                      >> 0x20U)) >> 0x1fU);
}

VL_INLINE_OPT void Vcommon___024root___combo__TOP__4(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->instr1_if_id[0U] = vlSymsp->TOP__if_stage.instr1_if_id[0U];
    vlSelf->instr1_if_id[1U] = vlSymsp->TOP__if_stage.instr1_if_id[1U];
    vlSelf->instr1_if_id[2U] = vlSymsp->TOP__if_stage.instr1_if_id[2U];
    vlSelf->instr1_if_id[3U] = vlSymsp->TOP__if_stage.instr1_if_id[3U];
    vlSelf->instr0_if_id[0U] = vlSymsp->TOP__if_stage.instr0_if_id[0U];
    vlSelf->instr0_if_id[1U] = vlSymsp->TOP__if_stage.instr0_if_id[1U];
    vlSelf->instr0_if_id[2U] = vlSymsp->TOP__if_stage.instr0_if_id[2U];
    vlSelf->instr0_if_id[3U] = vlSymsp->TOP__if_stage.instr0_if_id[3U];
}

void Vcommon___024root___combo__TOP__2(Vcommon___024root* vlSelf);
void Vcommon_if_stage___combo__TOP__if_stage__2(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__if_stage__4(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__if_stage__5(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__if_stage__6(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__if_stage__7(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__if_stage__8(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___sequent__TOP__if_stage__9(Vcommon_if_stage* vlSelf);
void Vcommon_pc_counter___sequent__TOP__if_stage__inst_pc__1(Vcommon_pc_counter* vlSelf);
void Vcommon_if_stage___sequent__TOP__if_stage__10(Vcommon_if_stage* vlSelf);
void Vcommon_if_stage___combo__TOP__if_stage__11(Vcommon_if_stage* vlSelf);

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    Vcommon___024root___combo__TOP__2(vlSelf);
    Vcommon_if_stage___combo__TOP__if_stage__2((&vlSymsp->TOP__if_stage));
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommon_if_stage___sequent__TOP__if_stage__4((&vlSymsp->TOP__if_stage));
        Vcommon_if_stage___sequent__TOP__if_stage__5((&vlSymsp->TOP__if_stage));
        Vcommon_if_stage___sequent__TOP__if_stage__6((&vlSymsp->TOP__if_stage));
        Vcommon_if_stage___sequent__TOP__if_stage__7((&vlSymsp->TOP__if_stage));
        Vcommon_if_stage___sequent__TOP__if_stage__8((&vlSymsp->TOP__if_stage));
        Vcommon_if_stage___sequent__TOP__if_stage__9((&vlSymsp->TOP__if_stage));
        Vcommon_pc_counter___sequent__TOP__if_stage__inst_pc__1((&vlSymsp->TOP__if_stage__inst_pc));
        Vcommon___024root___sequent__TOP__3(vlSelf);
        Vcommon_if_stage___sequent__TOP__if_stage__10((&vlSymsp->TOP__if_stage));
    }
    Vcommon_if_stage___combo__TOP__if_stage__11((&vlSymsp->TOP__if_stage));
    Vcommon___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}
