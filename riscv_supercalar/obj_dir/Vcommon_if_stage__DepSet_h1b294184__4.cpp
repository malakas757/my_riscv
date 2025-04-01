// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_INLINE_OPT void Vcommon_if_stage___combo__TOP__pipeline__inst_if_stage__11(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___combo__TOP__pipeline__inst_if_stage__11\n"); );
    // Body
    vlSelf->__PVT__instr1_if_id[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__instr1_btb_target_addr)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSymsp->TOP__pipeline.__PVT__imem_resp[1U] 
                                                                   << 0x1fU) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__imem_resp[0U] 
                                                                     >> 1U))))));
    vlSelf->__PVT__instr1_if_id[1U] = (IData)(((((QData)((IData)(vlSelf->__PVT__instr1_btb_target_addr)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSymsp->TOP__pipeline.__PVT__imem_resp[1U] 
                                                                    << 0x1fU) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__imem_resp[0U] 
                                                                      >> 1U))))) 
                                               >> 0x20U));
    vlSelf->__PVT__instr1_if_id[2U] = ((0xfffff000U 
                                        & vlSelf->__PVT__instr1_if_id[2U]) 
                                       | ((((IData)(vlSelf->__PVT__instr1_btb_hit) 
                                            & (IData)(vlSelf->__PVT__instr1_predict_taken)) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__instr1_btb_hit))));
    vlSelf->__PVT__instr1_if_id[2U] = ((0xffffefffU 
                                        & vlSelf->__PVT__instr1_if_id[2U]) 
                                       | (0x1000U & 
                                          ((vlSymsp->TOP__pipeline.__PVT__imem_resp[0U] 
                                            & (~ ((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                                  & (IData)(vlSelf->__PVT__instr0_predict_taken)))) 
                                           << 0xcU)));
    vlSelf->__PVT__instr0_if_id[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__instr0_btb_target_addr)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSymsp->TOP__pipeline.__PVT__imem_resp[2U] 
                                                                   << 0x1fU) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__imem_resp[1U] 
                                                                     >> 1U))))));
    vlSelf->__PVT__instr0_if_id[1U] = (IData)(((((QData)((IData)(vlSelf->__PVT__instr0_btb_target_addr)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSymsp->TOP__pipeline.__PVT__imem_resp[2U] 
                                                                    << 0x1fU) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__imem_resp[1U] 
                                                                      >> 1U))))) 
                                               >> 0x20U));
    vlSelf->__PVT__instr0_if_id[2U] = ((0xfffff000U 
                                        & vlSelf->__PVT__instr0_if_id[2U]) 
                                       | ((((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                            & (IData)(vlSelf->__PVT__instr0_predict_taken)) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__instr0_btb_hit))));
}
