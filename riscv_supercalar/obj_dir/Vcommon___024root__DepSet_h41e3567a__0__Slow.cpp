// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon___024root___settle__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->imem_miss = (1U & (~ (IData)(vlSelf->instr_resp_ready)));
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
    vlSelf->instr1_if_id[0U] = vlSymsp->TOP__if_stage.instr1_if_id[0U];
    vlSelf->instr1_if_id[1U] = vlSymsp->TOP__if_stage.instr1_if_id[1U];
    vlSelf->instr1_if_id[2U] = vlSymsp->TOP__if_stage.instr1_if_id[2U];
    vlSelf->instr1_if_id[3U] = vlSymsp->TOP__if_stage.instr1_if_id[3U];
    vlSelf->instr0_if_id[0U] = vlSymsp->TOP__if_stage.instr0_if_id[0U];
    vlSelf->instr0_if_id[1U] = vlSymsp->TOP__if_stage.instr0_if_id[1U];
    vlSelf->instr0_if_id[2U] = vlSymsp->TOP__if_stage.instr0_if_id[2U];
    vlSelf->instr0_if_id[3U] = vlSymsp->TOP__if_stage.instr0_if_id[3U];
}

VL_ATTR_COLD void Vcommon_if_stage___settle__TOP__if_stage__1(Vcommon_if_stage* vlSelf);

VL_ATTR_COLD void Vcommon___024root___eval_settle(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_settle\n"); );
    // Body
    Vcommon_if_stage___settle__TOP__if_stage__1((&vlSymsp->TOP__if_stage));
    Vcommon___024root___settle__TOP__1(vlSelf);
}
