// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_ATTR_COLD void Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__2(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__2\n"); );
    // Init
    SData/*9:0*/ __PVT__gshare_inst__DOT__instr0_pht_addr;
    SData/*9:0*/ __PVT__gshare_inst__DOT__instr1_pht_addr;
    SData/*9:0*/ __Vfunc_gshare_hash__0__Vfuncout;
    SData/*9:0*/ __Vfunc_gshare_hash__0__GHSR;
    IData/*31:0*/ __Vfunc_gshare_hash__0__branch_pc;
    SData/*9:0*/ __Vfunc_gshare_hash__1__Vfuncout;
    SData/*9:0*/ __Vfunc_gshare_hash__1__GHSR;
    IData/*31:0*/ __Vfunc_gshare_hash__1__branch_pc;
    SData/*9:0*/ __Vfunc_gshare_hash__2__Vfuncout;
    SData/*9:0*/ __Vfunc_gshare_hash__2__GHSR;
    IData/*31:0*/ __Vfunc_gshare_hash__2__branch_pc;
    CData/*0:0*/ __Vfunc_if_branch_taken__3__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__3__biomd;
    CData/*0:0*/ __Vfunc_if_branch_taken__4__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__4__biomd;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__2;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__3;
    // Body
    vlSelf->__PVT__instr0_if_id[2U] = ((0xffffefffU 
                                        & vlSelf->__PVT__instr0_if_id[2U]) 
                                       | (0x1000U & 
                                          (vlSymsp->TOP__pipeline.__PVT__imem_resp[0U] 
                                           << 0xcU)));
    vlSelf->__PVT__instr0_btb_target_addr = (0xfffffffcU 
                                             & vlSelf->__PVT__instr0_btb_target_addr);
    vlSelf->__PVT__instr1_btb_target_addr = (0xfffffffcU 
                                             & vlSelf->__PVT__instr1_btb_target_addr);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__0, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__PVT__btb_inst__DOT__update_BTB = (IData)(
                                                       ((__Vtemp_h9f28c8e0__0[2U] 
                                                         >> 0xcU) 
                                                        & (__Vtemp_h9f28c8e0__1[2U] 
                                                           >> 0xbU)));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__2, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    __Vfunc_gshare_hash__2__branch_pc = ((__Vtemp_h9f28c8e0__2[2U] 
                                          << 0x15U) 
                                         | (__Vtemp_h9f28c8e0__2[1U] 
                                            >> 0xbU));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__3, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    __Vfunc_gshare_hash__2__GHSR = (0x3ffU & __Vtemp_h9f28c8e0__3[0U]);
    __Vfunc_gshare_hash__2__Vfuncout = (0x3ffU & ((IData)(__Vfunc_gshare_hash__2__GHSR) 
                                                  ^ 
                                                  (__Vfunc_gshare_hash__2__branch_pc 
                                                   >> 2U)));
    vlSelf->__PVT__gshare_inst__DOT__update_pht_addr 
        = __Vfunc_gshare_hash__2__Vfuncout;
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
    __Vfunc_gshare_hash__1__branch_pc = ((IData)(4U) 
                                         + vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc);
    __Vfunc_gshare_hash__1__GHSR = vlSelf->__PVT__gshare_inst__DOT__GHSR;
    __Vfunc_gshare_hash__1__Vfuncout = (0x3ffU & ((IData)(__Vfunc_gshare_hash__1__GHSR) 
                                                  ^ 
                                                  (__Vfunc_gshare_hash__1__branch_pc 
                                                   >> 2U)));
    __PVT__gshare_inst__DOT__instr1_pht_addr = __Vfunc_gshare_hash__1__Vfuncout;
    __Vfunc_gshare_hash__0__branch_pc = vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc;
    __Vfunc_gshare_hash__0__GHSR = vlSelf->__PVT__gshare_inst__DOT__GHSR;
    __Vfunc_gshare_hash__0__Vfuncout = (0x3ffU & ((IData)(__Vfunc_gshare_hash__0__GHSR) 
                                                  ^ 
                                                  (__Vfunc_gshare_hash__0__branch_pc 
                                                   >> 2U)));
    __PVT__gshare_inst__DOT__instr0_pht_addr = __Vfunc_gshare_hash__0__Vfuncout;
    __Vfunc_if_branch_taken__4__biomd = vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
        [__PVT__gshare_inst__DOT__instr1_pht_addr];
    __Vfunc_if_branch_taken__4__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__4__biomd) 
                                                  >> 1U));
    vlSelf->__PVT__instr1_predict_taken = __Vfunc_if_branch_taken__4__Vfuncout;
    __Vfunc_if_branch_taken__3__biomd = vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
        [__PVT__gshare_inst__DOT__instr0_pht_addr];
    __Vfunc_if_branch_taken__3__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__3__biomd) 
                                                  >> 1U));
    vlSelf->__PVT__instr0_predict_taken = __Vfunc_if_branch_taken__3__Vfuncout;
    vlSelf->__PVT__PC_predict_taken = (((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                        & (IData)(vlSelf->__PVT__instr0_predict_taken)) 
                                       | ((IData)(vlSelf->__PVT__instr1_btb_hit) 
                                          & (IData)(vlSelf->__PVT__instr1_predict_taken)));
    vlSelf->__PVT__gshare_inst__DOT__GHSR_next = (((IData)(vlSelf->__PVT__instr0_predict_taken) 
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
                                                      : (IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR)))));
    vlSelf->__PVT__instr1_if_id[2U] = ((0xffffefffU 
                                        & vlSelf->__PVT__instr1_if_id[2U]) 
                                       | (0x1000U & 
                                          ((vlSymsp->TOP__pipeline.__PVT__imem_resp[0U] 
                                            & (~ ((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                                  & (IData)(vlSelf->__PVT__instr0_predict_taken)))) 
                                           << 0xcU)));
}

VL_ATTR_COLD void Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__10(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___settle__TOP__pipeline__inst_if_stage__10\n"); );
    // Body
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
    vlSelf->__PVT__PC_predict_pc = (((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                     & (IData)(vlSelf->__PVT__instr0_predict_taken))
                                     ? vlSelf->__PVT__instr0_btb_target_addr
                                     : (((IData)(vlSelf->__PVT__instr1_btb_hit) 
                                         & (IData)(vlSelf->__PVT__instr1_predict_taken))
                                         ? vlSelf->__PVT__instr1_btb_target_addr
                                         : 0U));
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
}
