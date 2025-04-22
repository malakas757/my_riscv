// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_ATTR_COLD void Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__1(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__1\n"); );
    // Init
    CData/*0:0*/ __Vfunc_if_branch_taken__0__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__0__biomd;
    CData/*0:0*/ __Vfunc_if_branch_taken__1__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__1__biomd;
    // Body
    vlSelf->__PVT__instr0_btb_target_addr = (0xfffffffcU 
                                             & vlSelf->__PVT__instr0_btb_target_addr);
    vlSelf->__PVT__instr1_btb_target_addr = (0xfffffffcU 
                                             & vlSelf->__PVT__instr1_btb_target_addr);
    vlSelf->__PVT__instr0_if_id[2U] = (0x1000U | vlSelf->__PVT__instr0_if_id[2U]);
    vlSelf->__PVT__instr0_if_id[2U] = ((0x1fffU & vlSelf->__PVT__instr0_if_id[2U]) 
                                       | (vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc 
                                          << 0xdU));
    vlSelf->__PVT__instr0_if_id[3U] = (vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc 
                                       >> 0x13U);
    vlSelf->__PVT__instr1_if_id[2U] = ((0x1fffU & vlSelf->__PVT__instr1_if_id[2U]) 
                                       | (((IData)(4U) 
                                           + vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc) 
                                          << 0xdU));
    vlSelf->__PVT__instr1_if_id[3U] = (((IData)(4U) 
                                        + vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc) 
                                       >> 0x13U);
    vlSelf->__PVT__instr1_btb_target_addr = ((3U & vlSelf->__PVT__instr1_btb_target_addr) 
                                             | (vlSelf->__PVT__btb_inst__DOT__btb_addr_inst__DOT__history_table
                                                [(0x1ffU 
                                                  & (((IData)(4U) 
                                                      + vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc) 
                                                     >> 2U))] 
                                                << 2U));
    vlSelf->__PVT__instr0_btb_target_addr = ((3U & vlSelf->__PVT__instr0_btb_target_addr) 
                                             | (vlSelf->__PVT__btb_inst__DOT__btb_addr_inst__DOT__history_table
                                                [(0x1ffU 
                                                  & (vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc 
                                                     >> 2U))] 
                                                << 2U));
    __Vfunc_if_branch_taken__1__biomd = vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
        [(0x3ffU & (((IData)(4U) + vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc) 
                    >> 2U))];
    __Vfunc_if_branch_taken__1__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__1__biomd) 
                                                  >> 1U));
    vlSelf->__PVT__instr1_predict_taken = __Vfunc_if_branch_taken__1__Vfuncout;
    __Vfunc_if_branch_taken__0__biomd = vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
        [(0x3ffU & (vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc 
                    >> 2U))];
    __Vfunc_if_branch_taken__0__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__0__biomd) 
                                                  >> 1U));
    vlSelf->__PVT__instr0_predict_taken = __Vfunc_if_branch_taken__0__Vfuncout;
    vlSelf->__PVT__instr1_btb_hit = (vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                                     [(0x1ffU & (((IData)(4U) 
                                                  + vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc) 
                                                 >> 2U))] 
                                     & ((((IData)(4U) 
                                          + vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc) 
                                         >> 0xbU) == 
                                        vlSelf->__PVT__btb_inst__DOT__btb_tag_inst__DOT__history_table
                                        [(0x1ffU & 
                                          (((IData)(4U) 
                                            + vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc) 
                                           >> 2U))]));
    vlSelf->__PVT__instr0_btb_hit = (vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                                     [(0x1ffU & (vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc 
                                                 >> 2U))] 
                                     & ((vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc 
                                         >> 0xbU) == 
                                        vlSelf->__PVT__btb_inst__DOT__btb_tag_inst__DOT__history_table
                                        [(0x1ffU & 
                                          (vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc 
                                           >> 2U))]));
    vlSelf->__PVT__instr1_if_id[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__instr1_btb_target_addr)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__read_data1))));
    vlSelf->__PVT__instr1_if_id[1U] = (IData)(((((QData)((IData)(vlSelf->__PVT__instr1_btb_target_addr)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__read_data1))) 
                                               >> 0x20U));
    vlSelf->__PVT__instr1_if_id[2U] = ((0xfffff000U 
                                        & vlSelf->__PVT__instr1_if_id[2U]) 
                                       | ((((IData)(vlSelf->__PVT__instr1_btb_hit) 
                                            & (IData)(vlSelf->__PVT__instr1_predict_taken)) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__instr1_btb_hit))));
    vlSelf->__PVT__PC_predict_taken = (((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                        & (IData)(vlSelf->__PVT__instr0_predict_taken)) 
                                       | ((IData)(vlSelf->__PVT__instr1_btb_hit) 
                                          & (IData)(vlSelf->__PVT__instr1_predict_taken)));
    vlSelf->__PVT__PC_predict_pc = (((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                     & (IData)(vlSelf->__PVT__instr0_predict_taken))
                                     ? vlSelf->__PVT__instr0_btb_target_addr
                                     : (((IData)(vlSelf->__PVT__instr1_btb_hit) 
                                         & (IData)(vlSelf->__PVT__instr1_predict_taken))
                                         ? vlSelf->__PVT__instr1_btb_target_addr
                                         : 0U));
    vlSelf->__PVT__instr1_if_id[2U] = ((0xffffefffU 
                                        & vlSelf->__PVT__instr1_if_id[2U]) 
                                       | (0x1000U & 
                                          ((~ ((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                               & (IData)(vlSelf->__PVT__instr0_predict_taken))) 
                                           << 0xcU)));
    vlSelf->__PVT__instr0_if_id[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__instr0_btb_target_addr)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__read_data0))));
    vlSelf->__PVT__instr0_if_id[1U] = (IData)(((((QData)((IData)(vlSelf->__PVT__instr0_btb_target_addr)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__read_data0))) 
                                               >> 0x20U));
    vlSelf->__PVT__instr0_if_id[2U] = ((0xfffff000U 
                                        & vlSelf->__PVT__instr0_if_id[2U]) 
                                       | ((((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                            & (IData)(vlSelf->__PVT__instr0_predict_taken)) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__instr0_btb_hit))));
    vlSelf->__PVT__gshare_inst__DOT__spec_update_GHSR 
        = ((IData)(vlSelf->__PVT__instr0_btb_hit) | (IData)(vlSelf->__PVT__instr1_btb_hit));
}

VL_ATTR_COLD void Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__2(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__2\n"); );
    // Init
    SData/*9:0*/ __PVT__gshare_inst__DOT__GHSR_restore_next;
    // Body
    vlSelf->__PVT__btb_inst__DOT__update_BTB = (IData)(
                                                       (0x1800U 
                                                        == 
                                                        (0x1800U 
                                                         & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])));
    __PVT__gshare_inst__DOT__GHSR_restore_next = ((0x3feU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[0U] 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                                                        >> 0xbU)));
    vlSelf->__PVT__gshare_inst__DOT__GHSR_next = ((IData)(vlSymsp->TOP__pipeline.__PVT__flush_valid)
                                                   ? (IData)(__PVT__gshare_inst__DOT__GHSR_restore_next)
                                                   : 
                                                  ((((IData)(vlSelf->__PVT__gshare_inst__DOT__spec_update_GHSR) 
                                                     & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                                                        >> 0xcU)) 
                                                    & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[0U] 
                                                       >> 0xaU))
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__instr0_predict_taken) 
                                                     & (IData)(vlSelf->__PVT__instr0_btb_hit))
                                                     ? 
                                                    ((0x3feU 
                                                      & ((IData)(__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->__PVT__instr0_predict_taken))
                                                     : 
                                                    ((((IData)(vlSelf->__PVT__instr1_predict_taken) 
                                                       & (IData)(vlSelf->__PVT__instr1_btb_hit)) 
                                                      & (IData)(vlSelf->__PVT__instr0_btb_hit))
                                                      ? 
                                                     ((0x3fcU 
                                                       & ((IData)(__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                          << 2U)) 
                                                      | (IData)(vlSelf->__PVT__instr1_predict_taken))
                                                      : 
                                                     (((IData)(vlSelf->__PVT__instr1_predict_taken) 
                                                       & (IData)(vlSelf->__PVT__instr1_btb_hit))
                                                       ? 
                                                      ((0x3feU 
                                                        & ((IData)(__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->__PVT__instr1_predict_taken))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__instr0_btb_hit)
                                                        ? 
                                                       (0x3feU 
                                                        & ((IData)(__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                           << 1U))
                                                        : (IData)(__PVT__gshare_inst__DOT__GHSR_restore_next)))))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__gshare_inst__DOT__spec_update_GHSR)
                                                     ? 
                                                    (((IData)(vlSelf->__PVT__instr0_predict_taken) 
                                                      & (IData)(vlSelf->__PVT__instr0_btb_hit))
                                                      ? 
                                                     ((0x3feU 
                                                       & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->__PVT__instr0_predict_taken))
                                                      : 
                                                     ((((IData)(vlSelf->__PVT__instr1_predict_taken) 
                                                        & (IData)(vlSelf->__PVT__instr1_btb_hit)) 
                                                       & (IData)(vlSelf->__PVT__instr0_btb_hit))
                                                       ? 
                                                      ((0x3fcU 
                                                        & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                                           << 2U)) 
                                                       | (IData)(vlSelf->__PVT__instr1_predict_taken))
                                                       : 
                                                      (((IData)(vlSelf->__PVT__instr1_predict_taken) 
                                                        & (IData)(vlSelf->__PVT__instr1_btb_hit))
                                                        ? 
                                                       ((0x3feU 
                                                         & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                                            << 1U)) 
                                                        | (IData)(vlSelf->__PVT__instr1_predict_taken))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__instr0_btb_hit)
                                                         ? 
                                                        (0x3feU 
                                                         & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                                            << 1U))
                                                         : (IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR)))))
                                                     : 
                                                    (((vlSymsp->TOP__pipeline.__PVT__ex_branch_in[0U] 
                                                       >> 0xaU) 
                                                      & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                                                         >> 0xcU))
                                                      ? (IData)(__PVT__gshare_inst__DOT__GHSR_restore_next)
                                                      : (IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR)))));
}
