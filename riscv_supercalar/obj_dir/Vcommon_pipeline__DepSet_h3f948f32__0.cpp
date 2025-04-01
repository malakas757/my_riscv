// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_pipeline.h"

VL_INLINE_OPT void Vcommon_pipeline___settle__TOP__pipeline__3(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___settle__TOP__pipeline__3\n"); );
    // Body
    vlSelf->__PVT__imem_resp[0U] = (1U | ((IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__inst_imem__DOT__ram
                                                                    [
                                                                    (0xffU 
                                                                     & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr0_if_id[2U] 
                                                                        >> 0xfU))])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__inst_imem__DOT__ram
                                                                     [
                                                                     (0xffU 
                                                                      & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr1_if_id[2U] 
                                                                         >> 0xfU))])))) 
                                          << 1U));
    vlSelf->__PVT__imem_resp[1U] = (((IData)((((QData)((IData)(
                                                               vlSelf->__PVT__inst_imem__DOT__ram
                                                               [
                                                               (0xffU 
                                                                & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr0_if_id[2U] 
                                                                   >> 0xfU))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__inst_imem__DOT__ram
                                                                [
                                                                (0xffU 
                                                                 & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr1_if_id[2U] 
                                                                    >> 0xfU))])))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->__PVT__inst_imem__DOT__ram
                                                                             [
                                                                             (0xffU 
                                                                              & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr0_if_id[2U] 
                                                                                >> 0xfU))])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__inst_imem__DOT__ram
                                                                              [
                                                                              (0xffU 
                                                                               & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr1_if_id[2U] 
                                                                                >> 0xfU))]))) 
                                                           >> 0x20U)) 
                                                  << 1U));
    vlSelf->__PVT__imem_resp[2U] = ((IData)(((((QData)((IData)(
                                                               vlSelf->__PVT__inst_imem__DOT__ram
                                                               [
                                                               (0xffU 
                                                                & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr0_if_id[2U] 
                                                                   >> 0xfU))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__inst_imem__DOT__ram
                                                                [
                                                                (0xffU 
                                                                 & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr1_if_id[2U] 
                                                                    >> 0xfU))]))) 
                                             >> 0x20U)) 
                                    >> 0x1fU);
}
