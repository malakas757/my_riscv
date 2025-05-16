// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_INLINE_OPT void Vcommon_if_stage___sequent__TOP__top_with_uart__inst_cpu__inst_if_stage__7(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcommon_if_stage___sequent__TOP__top_with_uart__inst_cpu__inst_if_stage__7\n"); );
    // Body
    if (vlSymsp->TOP.rstn_cpu) {
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v639 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x27fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x27fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x27fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v640 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x280U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x280U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x280U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x280U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x280U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v641 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x281U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x281U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x281U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x281U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x281U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v642 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x282U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x282U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x282U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x282U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x282U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v643 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x283U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x283U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x283U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x283U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x283U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v644 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x284U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x284U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x284U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x284U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x284U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v645 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x285U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x285U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x285U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x285U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x285U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v646 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x286U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x286U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x286U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x286U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x286U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v647 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x287U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x287U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x287U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x287U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x287U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v648 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x288U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x288U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x288U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x288U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x288U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v649 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x289U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x289U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x289U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x289U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x289U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v650 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x28aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x28aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x28aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v651 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x28bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x28bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x28bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v652 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x28cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x28cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x28cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v653 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x28dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x28dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x28dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v654 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x28eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x28eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x28eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v655 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x28fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x28fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x28fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v656 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x290U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x290U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x290U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x290U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x290U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v657 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x291U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x291U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x291U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x291U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x291U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v658 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x292U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x292U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x292U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x292U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x292U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v659 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x293U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x293U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x293U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x293U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x293U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v660 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x294U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x294U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x294U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x294U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x294U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v661 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x295U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x295U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x295U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x295U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x295U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v662 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x296U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x296U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x296U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x296U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x296U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v663 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x297U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x297U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x297U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x297U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x297U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v664 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x298U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x298U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x298U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x298U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x298U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v665 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x299U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x299U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x299U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x299U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x299U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v666 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x29aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x29aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x29aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v667 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x29bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x29bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x29bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v668 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x29cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x29cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x29cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v669 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x29dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x29dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x29dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v670 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x29eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x29eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x29eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v671 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x29fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x29fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x29fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v672 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2a0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v673 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2a1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v674 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2a2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v675 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2a3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v676 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2a4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v677 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2a5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v678 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2a6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v679 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2a7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v680 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2a8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v681 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2a9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v682 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2aaU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2aaU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2aaU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2aaU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2aaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v683 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2abU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2abU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2abU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2abU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2abU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v684 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2acU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2acU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2acU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2acU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2acU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v685 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2adU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2adU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2adU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2adU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2adU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v686 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2aeU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2aeU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2aeU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2aeU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2aeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v687 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2afU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2afU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2afU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2afU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2afU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v688 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2b0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v689 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2b1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v690 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2b2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v691 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2b3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v692 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2b4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v693 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2b5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v694 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2b6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v695 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2b7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v696 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2b8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v697 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2b9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v698 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2baU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2baU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2baU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2baU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2baU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v699 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2bbU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2bbU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2bbU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2bbU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2bbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v700 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2bcU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2bcU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2bcU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2bcU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2bcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v701 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2bdU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2bdU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2bdU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2bdU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2bdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v702 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2beU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2beU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2beU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2beU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2beU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v703 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2bfU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2bfU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2bfU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2bfU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2bfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v704 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2c0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v705 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2c1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v706 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2c2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v707 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2c3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v708 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2c4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v709 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2c5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v710 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2c6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v711 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2c7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v712 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2c8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v713 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2c9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v714 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2caU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2caU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2caU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2caU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2caU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v715 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2cbU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2cbU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2cbU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2cbU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2cbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v716 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2ccU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ccU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ccU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ccU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ccU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v717 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2cdU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2cdU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2cdU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2cdU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2cdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v718 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2ceU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ceU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ceU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ceU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ceU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v719 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2cfU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2cfU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2cfU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2cfU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2cfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v720 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2d0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v721 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2d1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v722 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2d2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v723 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2d3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v724 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2d4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v725 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2d5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v726 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2d6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v727 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2d7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v728 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2d8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v729 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2d9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v730 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2daU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2daU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2daU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2daU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2daU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v731 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2dbU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2dbU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2dbU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2dbU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2dbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v732 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2dcU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2dcU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2dcU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2dcU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2dcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v733 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2ddU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ddU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ddU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ddU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ddU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v734 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2deU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2deU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2deU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2deU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2deU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v735 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2dfU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2dfU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2dfU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2dfU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2dfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v736 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2e0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v737 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2e1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v738 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2e2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v739 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2e3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v740 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2e4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v741 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2e5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v742 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2e6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v743 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2e7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v744 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2e8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v745 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2e9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v746 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2eaU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2eaU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2eaU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2eaU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2eaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v747 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2ebU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ebU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ebU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ebU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ebU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v748 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2ecU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ecU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ecU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ecU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ecU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v749 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2edU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2edU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2edU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2edU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2edU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v750 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2eeU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2eeU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2eeU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2eeU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2eeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v751 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2efU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2efU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2efU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2efU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2efU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v752 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2f0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v753 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2f1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v754 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2f2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v755 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2f3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v756 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2f4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v757 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2f5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v758 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2f6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v759 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2f7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v760 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2f8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v761 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2f9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v762 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2faU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2faU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2faU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2faU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2faU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v763 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2fbU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2fbU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2fbU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2fbU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2fbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v764 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2fcU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2fcU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2fcU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2fcU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2fcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v765 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2fdU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2fdU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2fdU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2fdU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2fdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v766 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2feU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2feU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2feU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2feU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2feU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v767 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x2ffU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ffU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ffU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ffU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ffU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v768 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x300U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x300U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x300U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x300U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x300U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v769 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x301U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x301U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x301U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x301U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x301U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v770 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x302U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x302U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x302U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x302U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x302U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v771 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x303U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x303U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x303U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x303U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x303U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v772 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x304U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x304U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x304U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x304U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x304U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v773 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x305U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x305U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x305U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x305U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x305U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v774 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x306U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x306U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x306U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x306U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x306U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v775 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x307U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x307U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x307U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x307U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x307U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v776 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x308U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x308U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x308U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x308U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x308U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v777 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x309U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x309U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x309U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x309U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x309U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v778 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x30aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x30aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x30aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v779 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x30bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x30bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x30bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v780 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x30cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x30cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x30cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v781 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x30dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x30dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x30dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v782 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x30eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x30eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x30eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v783 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x30fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x30fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x30fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v784 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x310U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x310U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x310U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x310U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x310U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v785 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x311U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x311U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x311U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x311U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x311U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v786 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x312U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x312U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x312U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x312U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x312U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v787 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x313U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x313U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x313U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x313U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x313U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v788 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x314U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x314U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x314U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x314U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x314U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v789 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x315U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x315U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x315U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x315U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x315U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v790 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x316U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x316U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x316U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x316U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x316U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v791 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x317U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x317U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x317U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x317U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x317U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v792 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x318U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x318U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x318U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x318U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x318U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v793 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x319U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x319U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x319U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x319U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x319U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v794 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x31aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x31aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x31aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v795 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x31bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x31bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x31bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v796 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x31cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x31cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x31cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v797 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x31dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x31dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x31dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v798 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x31eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x31eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x31eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v799 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x31fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x31fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x31fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v800 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x320U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x320U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x320U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x320U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x320U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v801 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x321U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x321U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x321U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x321U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x321U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v802 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x322U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x322U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x322U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x322U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x322U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v803 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x323U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x323U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x323U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x323U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x323U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v804 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x324U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x324U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x324U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x324U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x324U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v805 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x325U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x325U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x325U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x325U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x325U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v806 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x326U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x326U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x326U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x326U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x326U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v807 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x327U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x327U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x327U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x327U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x327U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v808 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x328U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x328U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x328U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x328U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x328U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v809 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x329U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x329U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x329U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x329U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x329U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v810 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x32aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x32aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x32aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v811 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x32bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x32bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x32bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v812 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x32cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x32cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x32cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v813 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x32dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x32dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x32dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v814 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x32eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x32eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x32eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v815 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x32fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x32fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x32fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v816 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x330U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x330U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x330U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x330U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x330U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v817 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x331U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x331U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x331U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x331U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x331U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v818 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x332U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x332U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x332U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x332U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x332U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v819 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x333U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x333U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x333U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x333U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x333U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v820 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x334U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x334U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x334U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x334U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x334U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v821 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x335U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x335U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x335U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x335U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x335U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v822 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x336U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x336U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x336U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x336U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x336U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v823 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x337U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x337U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x337U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x337U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x337U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v824 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x338U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x338U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x338U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x338U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x338U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v825 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x339U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x339U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x339U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x339U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x339U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v826 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x33aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x33aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x33aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v827 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x33bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x33bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x33bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v828 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x33cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x33cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x33cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v829 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x33dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x33dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x33dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v830 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x33eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x33eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x33eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v831 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x33fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x33fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x33fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v832 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x340U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x340U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x340U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x340U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x340U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v833 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x341U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x341U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x341U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x341U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x341U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v834 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x342U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x342U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x342U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x342U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x342U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v835 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x343U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x343U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x343U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x343U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x343U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v836 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x344U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x344U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x344U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x344U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x344U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v837 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x345U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x345U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x345U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x345U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x345U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v838 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x346U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x346U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x346U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x346U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x346U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v839 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x347U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x347U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x347U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x347U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x347U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v840 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x348U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x348U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x348U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x348U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x348U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v841 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x349U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x349U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x349U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x349U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x349U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v842 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x34aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x34aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x34aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v843 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x34bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x34bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x34bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v844 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x34cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x34cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x34cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v845 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x34dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x34dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x34dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v846 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x34eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x34eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x34eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v847 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x34fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x34fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x34fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v848 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x350U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x350U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x350U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x350U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x350U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v849 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x351U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x351U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x351U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x351U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x351U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v850 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x352U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x352U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x352U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x352U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x352U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v851 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x353U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x353U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x353U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x353U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x353U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v852 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x354U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x354U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x354U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x354U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x354U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v853 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x355U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x355U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x355U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x355U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x355U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v854 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x356U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x356U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x356U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x356U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x356U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v855 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x357U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x357U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x357U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x357U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x357U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v856 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x358U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x358U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x358U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x358U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x358U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v857 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x359U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x359U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x359U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x359U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x359U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v858 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x35aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x35aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x35aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v859 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x35bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x35bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x35bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v860 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x35cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x35cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x35cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v861 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x35dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x35dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x35dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v862 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x35eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x35eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x35eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v863 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x35fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x35fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x35fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v864 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x360U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x360U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x360U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x360U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x360U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v865 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x361U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x361U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x361U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x361U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x361U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v866 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x362U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x362U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x362U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x362U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x362U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v867 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x363U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x363U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x363U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x363U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x363U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v868 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x364U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x364U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x364U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x364U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x364U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v869 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x365U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x365U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x365U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x365U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x365U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v870 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x366U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x366U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x366U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x366U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x366U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v871 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x367U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x367U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x367U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x367U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x367U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v872 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x368U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x368U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x368U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x368U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x368U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v873 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x369U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x369U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x369U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x369U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x369U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v874 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x36aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x36aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x36aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v875 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x36bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x36bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x36bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v876 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x36cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x36cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x36cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v877 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x36dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x36dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x36dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v878 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x36eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x36eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x36eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v879 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x36fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x36fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x36fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v880 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x370U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x370U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x370U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x370U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x370U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v881 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x371U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x371U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x371U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x371U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x371U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v882 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x372U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x372U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x372U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x372U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x372U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v883 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x373U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x373U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x373U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x373U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x373U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v884 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x374U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x374U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x374U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x374U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x374U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v885 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x375U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x375U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x375U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x375U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x375U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v886 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x376U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x376U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x376U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x376U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x376U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v887 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x377U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x377U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x377U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x377U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x377U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v888 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x378U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x378U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x378U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x378U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x378U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v889 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x379U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x379U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x379U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x379U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x379U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v890 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x37aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x37aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x37aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v891 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x37bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x37bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x37bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v892 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x37cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x37cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x37cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v893 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x37dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x37dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x37dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v894 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x37eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x37eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x37eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v895 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x37fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x37fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x37fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v896 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x380U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x380U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x380U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x380U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x380U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v897 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x381U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x381U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x381U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x381U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x381U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v898 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x382U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x382U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x382U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x382U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x382U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v899 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x383U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x383U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x383U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x383U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x383U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v900 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x384U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x384U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x384U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x384U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x384U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v901 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x385U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x385U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x385U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x385U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x385U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v902 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x386U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x386U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x386U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x386U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x386U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v903 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x387U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x387U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x387U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x387U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x387U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v904 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x388U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x388U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x388U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x388U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x388U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v905 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x389U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x389U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x389U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x389U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x389U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v906 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x38aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x38aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x38aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v907 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x38bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x38bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x38bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v908 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x38cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x38cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x38cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v909 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x38dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x38dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x38dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v910 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x38eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x38eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x38eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v911 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x38fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x38fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x38fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v912 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x390U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x390U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x390U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x390U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x390U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v913 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x391U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x391U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x391U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x391U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x391U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v914 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x392U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x392U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x392U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x392U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x392U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v915 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x393U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x393U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x393U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x393U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x393U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v916 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x394U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x394U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x394U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x394U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x394U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v917 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x395U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x395U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x395U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x395U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x395U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v918 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x396U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x396U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x396U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x396U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x396U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v919 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x397U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x397U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x397U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x397U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x397U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v920 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x398U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x398U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x398U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x398U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x398U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v921 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x399U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x399U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x399U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x399U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x399U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v922 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x39aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x39aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x39aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v923 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x39bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x39bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x39bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v924 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x39cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x39cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x39cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v925 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x39dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x39dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x39dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v926 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x39eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x39eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x39eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v927 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x39fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x39fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x39fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v928 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x3a0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a0U]);
    } else {
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v639 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v640 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v641 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v642 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v643 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v644 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v645 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v646 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v647 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v648 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v649 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v650 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v651 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v652 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v653 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v654 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v655 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v656 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v657 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v658 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v659 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v660 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v661 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v662 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v663 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v664 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v665 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v666 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v667 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v668 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v669 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v670 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v671 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v672 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v673 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v674 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v675 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v676 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v677 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v678 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v679 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v680 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v681 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v682 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v683 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v684 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v685 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v686 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v687 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v688 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v689 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v690 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v691 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v692 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v693 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v694 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v695 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v696 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v697 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v698 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v699 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v700 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v701 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v702 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v703 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v704 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v705 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v706 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v707 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v708 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v709 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v710 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v711 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v712 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v713 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v714 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v715 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v716 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v717 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v718 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v719 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v720 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v721 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v722 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v723 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v724 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v725 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v726 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v727 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v728 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v729 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v730 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v731 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v732 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v733 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v734 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v735 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v736 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v737 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v738 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v739 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v740 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v741 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v742 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v743 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v744 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v745 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v746 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v747 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v748 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v749 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v750 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v751 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v752 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v753 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v754 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v755 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v756 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v757 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v758 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v759 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v760 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v761 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v762 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v763 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v764 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v765 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v766 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v767 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v768 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v769 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v770 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v771 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v772 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v773 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v774 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v775 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v776 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v777 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v778 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v779 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v780 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v781 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v782 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v783 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v784 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v785 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v786 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v787 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v788 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v789 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v790 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v791 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v792 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v793 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v794 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v795 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v796 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v797 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v798 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v799 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v800 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v801 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v802 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v803 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v804 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v805 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v806 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v807 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v808 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v809 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v810 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v811 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v812 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v813 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v814 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v815 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v816 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v817 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v818 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v819 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v820 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v821 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v822 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v823 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v824 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v825 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v826 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v827 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v828 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v829 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v830 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v831 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v832 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v833 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v834 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v835 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v836 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v837 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v838 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v839 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v840 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v841 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v842 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v843 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v844 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v845 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v846 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v847 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v848 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v849 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v850 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v851 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v852 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v853 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v854 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v855 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v856 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v857 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v858 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v859 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v860 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v861 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v862 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v863 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v864 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v865 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v866 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v867 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v868 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v869 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v870 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v871 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v872 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v873 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v874 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v875 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v876 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v877 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v878 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v879 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v880 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v881 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v882 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v883 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v884 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v885 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v886 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v887 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v888 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v889 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v890 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v891 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v892 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v893 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v894 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v895 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v896 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v897 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v898 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v899 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v900 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v901 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v902 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v903 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v904 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v905 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v906 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v907 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v908 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v909 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v910 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v911 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v912 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v913 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v914 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v915 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v916 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v917 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v918 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v919 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v920 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v921 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v922 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v923 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v924 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v925 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v926 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v927 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v928 = 2U;
    }
}
