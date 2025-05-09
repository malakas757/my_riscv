// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_ATTR_COLD void Vcommon_if_stage___settle__TOP__if_stage__1(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_if_stage___settle__TOP__if_stage__1\n"); );
    // Init
    CData/*0:0*/ __PVT__instr0_btb_hit;
    CData/*0:0*/ __PVT__instr1_btb_hit;
    CData/*0:0*/ __PVT__gshare_inst__DOT__spec_update_GHSR;
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
    // Body
    vlSelf->__PVT__instr0_btb_target_addr = (0xfffffffcU 
                                             & vlSelf->__PVT__instr0_btb_target_addr);
    vlSelf->__PVT__instr1_btb_target_addr = (0xfffffffcU 
                                             & vlSelf->__PVT__instr1_btb_target_addr);
    vlSelf->instr0_if_id[2U] = ((0xffffefffU & vlSelf->instr0_if_id[2U]) 
                                | ((IData)(vlSymsp->TOP.instr_resp_ready) 
                                   << 0xcU));
    vlSelf->__PVT__gshare_inst__DOT__GHSR_restore_next 
        = ((0x3feU & (vlSymsp->TOP.ex_branch_in[0U] 
                      << 1U)) | (1U & (vlSymsp->TOP.ex_branch_in[2U] 
                                       >> 0xbU)));
    vlSelf->__PVT__btb_inst__DOT__update_BTB = (IData)(
                                                       (0x1800U 
                                                        == 
                                                        (0x1800U 
                                                         & vlSymsp->TOP.ex_branch_in[2U])));
    __Vfunc_gshare_hash__2__branch_pc = ((vlSymsp->TOP.ex_branch_in[2U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP.ex_branch_in[1U] 
                                            >> 0xbU));
    __Vfunc_gshare_hash__2__GHSR = (0x3ffU & vlSymsp->TOP.ex_branch_in[0U]);
    __Vfunc_gshare_hash__2__Vfuncout = (0x3ffU & ((IData)(__Vfunc_gshare_hash__2__GHSR) 
                                                  ^ 
                                                  (__Vfunc_gshare_hash__2__branch_pc 
                                                   >> 2U)));
    vlSelf->__PVT__gshare_inst__DOT__update_pht_addr 
        = __Vfunc_gshare_hash__2__Vfuncout;
    vlSelf->instr0_if_id[2U] = ((0x1fffU & vlSelf->instr0_if_id[2U]) 
                                | (vlSymsp->TOP__if_stage__inst_pc.pc 
                                   << 0xdU));
    vlSelf->instr0_if_id[3U] = (vlSymsp->TOP__if_stage__inst_pc.pc 
                                >> 0x13U);
    vlSelf->instr1_if_id[2U] = ((0x1fffU & vlSelf->instr1_if_id[2U]) 
                                | (((IData)(4U) + vlSymsp->TOP__if_stage__inst_pc.pc) 
                                   << 0xdU));
    vlSelf->instr1_if_id[3U] = (((IData)(4U) + vlSymsp->TOP__if_stage__inst_pc.pc) 
                                >> 0x13U);
    vlSelf->__PVT__instr1_btb_target_addr = ((3U & vlSelf->__PVT__instr1_btb_target_addr) 
                                             | (vlSelf->__PVT__btb_inst__DOT__btb_addr_inst__DOT__history_table
                                                [(0x1ffU 
                                                  & (((IData)(4U) 
                                                      + vlSymsp->TOP__if_stage__inst_pc.pc) 
                                                     >> 2U))] 
                                                << 2U));
    vlSelf->__PVT__instr0_btb_target_addr = ((3U & vlSelf->__PVT__instr0_btb_target_addr) 
                                             | (vlSelf->__PVT__btb_inst__DOT__btb_addr_inst__DOT__history_table
                                                [(0x1ffU 
                                                  & (vlSymsp->TOP__if_stage__inst_pc.pc 
                                                     >> 2U))] 
                                                << 2U));
    if (vlSymsp->TOP.instr_resp_ready) {
        __PVT__instr1_btb_hit = (1U & (vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                                       [(0x1ffU & (
                                                   ((IData)(4U) 
                                                    + vlSymsp->TOP__if_stage__inst_pc.pc) 
                                                   >> 2U))] 
                                       & ((((IData)(4U) 
                                            + vlSymsp->TOP__if_stage__inst_pc.pc) 
                                           >> 0xbU) 
                                          == vlSelf->__PVT__btb_inst__DOT__btb_tag_inst__DOT__history_table
                                          [(0x1ffU 
                                            & (((IData)(4U) 
                                                + vlSymsp->TOP__if_stage__inst_pc.pc) 
                                               >> 2U))])));
        __PVT__instr0_btb_hit = (1U & (vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                                       [(0x1ffU & (vlSymsp->TOP__if_stage__inst_pc.pc 
                                                   >> 2U))] 
                                       & ((vlSymsp->TOP__if_stage__inst_pc.pc 
                                           >> 0xbU) 
                                          == vlSelf->__PVT__btb_inst__DOT__btb_tag_inst__DOT__history_table
                                          [(0x1ffU 
                                            & (vlSymsp->TOP__if_stage__inst_pc.pc 
                                               >> 2U))])));
    } else {
        __PVT__instr1_btb_hit = 0U;
        __PVT__instr0_btb_hit = 0U;
    }
    __Vfunc_gshare_hash__1__branch_pc = ((IData)(4U) 
                                         + vlSymsp->TOP__if_stage__inst_pc.pc);
    __Vfunc_gshare_hash__1__GHSR = vlSelf->__PVT__gshare_inst__DOT__GHSR;
    __Vfunc_gshare_hash__1__Vfuncout = (0x3ffU & ((IData)(__Vfunc_gshare_hash__1__GHSR) 
                                                  ^ 
                                                  (__Vfunc_gshare_hash__1__branch_pc 
                                                   >> 2U)));
    __PVT__gshare_inst__DOT__instr1_pht_addr = __Vfunc_gshare_hash__1__Vfuncout;
    __Vfunc_gshare_hash__0__branch_pc = vlSymsp->TOP__if_stage__inst_pc.pc;
    __Vfunc_gshare_hash__0__GHSR = vlSelf->__PVT__gshare_inst__DOT__GHSR;
    __Vfunc_gshare_hash__0__Vfuncout = (0x3ffU & ((IData)(__Vfunc_gshare_hash__0__GHSR) 
                                                  ^ 
                                                  (__Vfunc_gshare_hash__0__branch_pc 
                                                   >> 2U)));
    __PVT__gshare_inst__DOT__instr0_pht_addr = __Vfunc_gshare_hash__0__Vfuncout;
    __PVT__gshare_inst__DOT__spec_update_GHSR = ((IData)(vlSymsp->TOP.instr_resp_ready) 
                                                 & ((IData)(__PVT__instr0_btb_hit) 
                                                    | (IData)(__PVT__instr1_btb_hit)));
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
    vlSelf->instr1_if_id[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__instr1_btb_target_addr)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP.imem_data_instr1))));
    vlSelf->instr1_if_id[1U] = (IData)(((((QData)((IData)(vlSelf->__PVT__instr1_btb_target_addr)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP.imem_data_instr1))) 
                                        >> 0x20U));
    vlSelf->instr1_if_id[2U] = ((0xfffff000U & vlSelf->instr1_if_id[2U]) 
                                | ((((IData)(__PVT__instr1_btb_hit) 
                                     & (IData)(vlSelf->__PVT__instr1_predict_taken)) 
                                    << 0xbU) | (((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                                 << 1U) 
                                                | (IData)(__PVT__instr1_btb_hit))));
    vlSelf->__PVT__PC_predict_taken = (((IData)(__PVT__instr0_btb_hit) 
                                        & (IData)(vlSelf->__PVT__instr0_predict_taken)) 
                                       | ((IData)(__PVT__instr1_btb_hit) 
                                          & (IData)(vlSelf->__PVT__instr1_predict_taken)));
    vlSelf->__PVT__PC_predict_pc = (((IData)(__PVT__instr0_btb_hit) 
                                     & (IData)(vlSelf->__PVT__instr0_predict_taken))
                                     ? vlSelf->__PVT__instr0_btb_target_addr
                                     : (((IData)(__PVT__instr1_btb_hit) 
                                         & (IData)(vlSelf->__PVT__instr1_predict_taken))
                                         ? vlSelf->__PVT__instr1_btb_target_addr
                                         : 0U));
    vlSelf->__PVT__gshare_inst__DOT__GHSR_next = ((IData)(vlSymsp->TOP.flush_valid)
                                                   ? (IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR_restore_next)
                                                   : 
                                                  ((((IData)(__PVT__gshare_inst__DOT__spec_update_GHSR) 
                                                     & (vlSymsp->TOP.ex_branch_in[2U] 
                                                        >> 0xcU)) 
                                                    & (vlSymsp->TOP.ex_branch_in[0U] 
                                                       >> 0xaU))
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__instr0_predict_taken) 
                                                     & (IData)(__PVT__instr0_btb_hit))
                                                     ? 
                                                    ((0x3feU 
                                                      & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->__PVT__instr0_predict_taken))
                                                     : 
                                                    ((((IData)(vlSelf->__PVT__instr1_predict_taken) 
                                                       & (IData)(__PVT__instr1_btb_hit)) 
                                                      & (IData)(__PVT__instr0_btb_hit))
                                                      ? 
                                                     ((0x3fcU 
                                                       & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                          << 2U)) 
                                                      | (IData)(vlSelf->__PVT__instr1_predict_taken))
                                                      : 
                                                     (((IData)(vlSelf->__PVT__instr1_predict_taken) 
                                                       & (IData)(__PVT__instr1_btb_hit))
                                                       ? 
                                                      ((0x3feU 
                                                        & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->__PVT__instr1_predict_taken))
                                                       : 
                                                      ((IData)(__PVT__instr0_btb_hit)
                                                        ? 
                                                       (0x3feU 
                                                        & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                           << 1U))
                                                        : (IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR_restore_next)))))
                                                    : 
                                                   ((IData)(__PVT__gshare_inst__DOT__spec_update_GHSR)
                                                     ? 
                                                    (((IData)(vlSelf->__PVT__instr0_predict_taken) 
                                                      & (IData)(__PVT__instr0_btb_hit))
                                                      ? 
                                                     ((0x3feU 
                                                       & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->__PVT__instr0_predict_taken))
                                                      : 
                                                     ((((IData)(vlSelf->__PVT__instr1_predict_taken) 
                                                        & (IData)(__PVT__instr1_btb_hit)) 
                                                       & (IData)(__PVT__instr0_btb_hit))
                                                       ? 
                                                      ((0x3fcU 
                                                        & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                                           << 2U)) 
                                                       | (IData)(vlSelf->__PVT__instr1_predict_taken))
                                                       : 
                                                      (((IData)(vlSelf->__PVT__instr1_predict_taken) 
                                                        & (IData)(__PVT__instr1_btb_hit))
                                                        ? 
                                                       ((0x3feU 
                                                         & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                                            << 1U)) 
                                                        | (IData)(vlSelf->__PVT__instr1_predict_taken))
                                                        : 
                                                       ((IData)(__PVT__instr0_btb_hit)
                                                         ? 
                                                        (0x3feU 
                                                         & ((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                                            << 1U))
                                                         : (IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR)))))
                                                     : 
                                                    (((vlSymsp->TOP.ex_branch_in[0U] 
                                                       >> 0xaU) 
                                                      & (vlSymsp->TOP.ex_branch_in[2U] 
                                                         >> 0xcU))
                                                      ? (IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR_restore_next)
                                                      : (IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR)))));
    vlSelf->instr1_if_id[2U] = ((0xffffefffU & vlSelf->instr1_if_id[2U]) 
                                | (((IData)(vlSymsp->TOP.instr_resp_ready) 
                                    & (~ ((IData)(__PVT__instr0_btb_hit) 
                                          & (IData)(vlSelf->__PVT__instr0_predict_taken)))) 
                                   << 0xcU));
    vlSelf->instr0_if_id[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__instr0_btb_target_addr)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP.imem_data_instr0))));
    vlSelf->instr0_if_id[1U] = (IData)(((((QData)((IData)(vlSelf->__PVT__instr0_btb_target_addr)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP.imem_data_instr0))) 
                                        >> 0x20U));
    vlSelf->instr0_if_id[2U] = ((0xfffff000U & vlSelf->instr0_if_id[2U]) 
                                | ((((IData)(__PVT__instr0_btb_hit) 
                                     & (IData)(vlSelf->__PVT__instr0_predict_taken)) 
                                    << 0xbU) | (((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                                 << 1U) 
                                                | (IData)(__PVT__instr0_btb_hit))));
}
