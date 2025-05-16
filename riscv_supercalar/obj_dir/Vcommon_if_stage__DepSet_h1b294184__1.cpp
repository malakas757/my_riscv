// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_INLINE_OPT void Vcommon_if_stage___sequent__TOP__top_with_uart__inst_cpu__inst_if_stage__6(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcommon_if_stage___sequent__TOP__top_with_uart__inst_cpu__inst_if_stage__6\n"); );
    // Body
    if (vlSymsp->TOP.rstn_cpu) {
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v349 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x15dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x15dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x15dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x15dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x15dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v350 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x15eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x15eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x15eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x15eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x15eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v351 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x15fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x15fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x15fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x15fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x15fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v352 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x160U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x160U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x160U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x160U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x160U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v353 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x161U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x161U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x161U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x161U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x161U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v354 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x162U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x162U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x162U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x162U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x162U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v355 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x163U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x163U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x163U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x163U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x163U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v356 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x164U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x164U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x164U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x164U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x164U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v357 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x165U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x165U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x165U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x165U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x165U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v358 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x166U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x166U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x166U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x166U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x166U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v359 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x167U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x167U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x167U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x167U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x167U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v360 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x168U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x168U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x168U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x168U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x168U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v361 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x169U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x169U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x169U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x169U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x169U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v362 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x16aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x16aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x16aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v363 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x16bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x16bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x16bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v364 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x16cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x16cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x16cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v365 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x16dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x16dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x16dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v366 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x16eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x16eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x16eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v367 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x16fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x16fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x16fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v368 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x170U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x170U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x170U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x170U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x170U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v369 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x171U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x171U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x171U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x171U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x171U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v370 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x172U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x172U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x172U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x172U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x172U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v371 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x173U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x173U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x173U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x173U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x173U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v372 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x174U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x174U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x174U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x174U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x174U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v373 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x175U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x175U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x175U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x175U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x175U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v374 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x176U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x176U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x176U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x176U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x176U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v375 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x177U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x177U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x177U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x177U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x177U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v376 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x178U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x178U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x178U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x178U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x178U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v377 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x179U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x179U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x179U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x179U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x179U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v378 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x17aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x17aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x17aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v379 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x17bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x17bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x17bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v380 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x17cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x17cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x17cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v381 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x17dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x17dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x17dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v382 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x17eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x17eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x17eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v383 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x17fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x17fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x17fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v384 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x180U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x180U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x180U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x180U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x180U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v385 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x181U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x181U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x181U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x181U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x181U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v386 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x182U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x182U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x182U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x182U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x182U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v387 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x183U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x183U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x183U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x183U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x183U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v388 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x184U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x184U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x184U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x184U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x184U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v389 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x185U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x185U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x185U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x185U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x185U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v390 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x186U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x186U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x186U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x186U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x186U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v391 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x187U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x187U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x187U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x187U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x187U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v392 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x188U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x188U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x188U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x188U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x188U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v393 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x189U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x189U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x189U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x189U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x189U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v394 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x18aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x18aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x18aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v395 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x18bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x18bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x18bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v396 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x18cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x18cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x18cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v397 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x18dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x18dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x18dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v398 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x18eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x18eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x18eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v399 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x18fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x18fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x18fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v400 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x190U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x190U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x190U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x190U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x190U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v401 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x191U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x191U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x191U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x191U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x191U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v402 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x192U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x192U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x192U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x192U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x192U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v403 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x193U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x193U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x193U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x193U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x193U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v404 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x194U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x194U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x194U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x194U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x194U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v405 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x195U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x195U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x195U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x195U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x195U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v406 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x196U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x196U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x196U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x196U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x196U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v407 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x197U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x197U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x197U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x197U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x197U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v408 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x198U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x198U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x198U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x198U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x198U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v409 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x199U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x199U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x199U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x199U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x199U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v410 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x19aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x19aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x19aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v411 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x19bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x19bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x19bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v412 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x19cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x19cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x19cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v413 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x19dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x19dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x19dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v414 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x19eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x19eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x19eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v415 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x19fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x19fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x19fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v416 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1a0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v417 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1a1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v418 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1a2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v419 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1a3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v420 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1a4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v421 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1a5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v422 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1a6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v423 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1a7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v424 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1a8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v425 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1a9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v426 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1aaU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1aaU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1aaU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1aaU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1aaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v427 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1abU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1abU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1abU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1abU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1abU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v428 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1acU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1acU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1acU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1acU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1acU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v429 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1adU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1adU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1adU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1adU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1adU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v430 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1aeU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1aeU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1aeU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1aeU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1aeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v431 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1afU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1afU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1afU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1afU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1afU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v432 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1b0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v433 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1b1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v434 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1b2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v435 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1b3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v436 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1b4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v437 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1b5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v438 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1b6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v439 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1b7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v440 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1b8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v441 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1b9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v442 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1baU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1baU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1baU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1baU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1baU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v443 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1bbU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1bbU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1bbU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1bbU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1bbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v444 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1bcU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1bcU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1bcU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1bcU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1bcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v445 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1bdU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1bdU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1bdU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1bdU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1bdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v446 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1beU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1beU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1beU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1beU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1beU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v447 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1bfU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1bfU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1bfU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1bfU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1bfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v448 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1c0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v449 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1c1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v450 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1c2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v451 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1c3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v452 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1c4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v453 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1c5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v454 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1c6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v455 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1c7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v456 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1c8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v457 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1c9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v458 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1caU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1caU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1caU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1caU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1caU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v459 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1cbU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1cbU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1cbU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1cbU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1cbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v460 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1ccU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1ccU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1ccU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1ccU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ccU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v461 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1cdU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1cdU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1cdU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1cdU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1cdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v462 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1ceU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1ceU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1ceU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1ceU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ceU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v463 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1cfU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1cfU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1cfU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1cfU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1cfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v464 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1d0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v465 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1d1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v466 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1d2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v467 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1d3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v468 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1d4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v469 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1d5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v470 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1d6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v471 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1d7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v472 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1d8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v473 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1d9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v474 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1daU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1daU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1daU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1daU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1daU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v475 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1dbU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1dbU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1dbU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1dbU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1dbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v476 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1dcU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1dcU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1dcU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1dcU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1dcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v477 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1ddU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1ddU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1ddU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1ddU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ddU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v478 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1deU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1deU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1deU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1deU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1deU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v479 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1dfU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1dfU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1dfU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1dfU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1dfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v480 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1e0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v481 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1e1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v482 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1e2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v483 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1e3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v484 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1e4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v485 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1e5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v486 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1e6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v487 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1e7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v488 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1e8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v489 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1e9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v490 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1eaU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1eaU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1eaU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1eaU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1eaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v491 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1ebU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1ebU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1ebU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1ebU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ebU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v492 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1ecU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1ecU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1ecU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1ecU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ecU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v493 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1edU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1edU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1edU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1edU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1edU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v494 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1eeU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1eeU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1eeU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1eeU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1eeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v495 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1efU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1efU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1efU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1efU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1efU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v496 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1f0U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1f0U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1f0U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1f0U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v497 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1f1U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1f1U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1f1U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1f1U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v498 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1f2U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1f2U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1f2U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1f2U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v499 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1f3U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1f3U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1f3U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1f3U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v500 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1f4U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1f4U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1f4U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1f4U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v501 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1f5U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1f5U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1f5U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1f5U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v502 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1f6U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1f6U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1f6U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1f6U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v503 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1f7U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1f7U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1f7U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1f7U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v504 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1f8U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1f8U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1f8U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1f8U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v505 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1f9U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1f9U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1f9U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1f9U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v506 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1faU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1faU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1faU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1faU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1faU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v507 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1fbU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1fbU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1fbU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1fbU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1fbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v508 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1fcU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1fcU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1fcU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1fcU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1fcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v509 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1fdU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1fdU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1fdU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1fdU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1fdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v510 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1feU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1feU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1feU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1feU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1feU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v511 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x1ffU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x1ffU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1ffU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x1ffU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ffU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v512 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x200U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x200U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x200U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x200U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x200U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v513 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x201U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x201U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x201U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x201U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x201U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v514 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x202U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x202U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x202U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x202U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x202U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v515 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x203U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x203U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x203U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x203U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x203U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v516 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x204U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x204U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x204U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x204U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x204U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v517 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x205U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x205U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x205U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x205U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x205U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v518 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x206U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x206U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x206U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x206U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x206U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v519 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x207U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x207U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x207U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x207U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x207U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v520 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x208U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x208U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x208U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x208U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x208U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v521 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x209U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x209U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x209U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x209U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x209U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v522 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x20aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x20aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x20aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x20aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v523 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x20bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x20bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x20bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x20bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v524 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x20cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x20cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x20cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x20cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v525 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x20dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x20dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x20dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x20dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v526 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x20eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x20eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x20eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x20eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v527 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x20fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x20fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x20fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x20fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v528 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x210U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x210U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x210U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x210U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x210U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v529 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x211U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x211U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x211U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x211U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x211U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v530 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x212U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x212U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x212U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x212U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x212U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v531 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x213U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x213U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x213U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x213U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x213U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v532 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x214U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x214U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x214U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x214U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x214U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v533 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x215U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x215U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x215U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x215U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x215U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v534 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x216U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x216U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x216U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x216U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x216U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v535 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x217U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x217U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x217U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x217U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x217U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v536 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x218U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x218U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x218U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x218U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x218U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v537 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x219U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x219U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x219U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x219U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x219U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v538 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x21aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x21aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x21aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x21aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v539 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x21bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x21bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x21bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x21bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v540 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x21cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x21cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x21cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x21cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v541 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x21dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x21dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x21dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x21dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v542 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x21eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x21eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x21eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x21eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v543 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x21fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x21fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x21fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x21fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v544 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x220U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x220U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x220U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x220U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x220U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v545 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x221U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x221U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x221U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x221U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x221U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v546 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x222U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x222U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x222U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x222U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x222U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v547 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x223U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x223U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x223U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x223U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x223U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v548 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x224U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x224U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x224U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x224U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x224U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v549 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x225U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x225U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x225U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x225U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x225U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v550 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x226U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x226U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x226U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x226U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x226U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v551 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x227U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x227U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x227U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x227U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x227U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v552 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x228U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x228U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x228U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x228U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x228U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v553 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x229U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x229U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x229U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x229U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x229U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v554 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x22aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x22aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x22aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x22aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v555 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x22bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x22bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x22bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x22bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v556 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x22cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x22cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x22cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x22cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v557 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x22dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x22dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x22dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x22dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v558 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x22eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x22eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x22eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x22eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v559 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x22fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x22fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x22fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x22fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v560 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x230U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x230U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x230U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x230U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x230U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v561 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x231U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x231U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x231U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x231U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x231U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v562 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x232U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x232U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x232U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x232U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x232U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v563 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x233U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x233U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x233U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x233U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x233U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v564 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x234U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x234U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x234U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x234U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x234U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v565 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x235U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x235U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x235U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x235U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x235U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v566 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x236U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x236U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x236U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x236U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x236U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v567 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x237U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x237U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x237U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x237U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x237U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v568 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x238U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x238U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x238U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x238U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x238U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v569 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x239U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x239U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x239U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x239U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x239U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v570 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x23aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x23aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x23aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x23aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v571 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x23bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x23bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x23bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x23bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v572 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x23cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x23cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x23cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x23cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v573 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x23dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x23dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x23dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x23dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v574 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x23eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x23eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x23eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x23eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v575 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x23fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x23fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x23fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x23fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v576 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x240U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x240U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x240U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x240U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x240U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v577 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x241U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x241U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x241U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x241U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x241U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v578 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x242U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x242U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x242U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x242U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x242U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v579 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x243U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x243U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x243U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x243U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x243U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v580 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x244U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x244U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x244U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x244U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x244U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v581 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x245U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x245U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x245U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x245U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x245U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v582 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x246U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x246U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x246U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x246U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x246U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v583 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x247U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x247U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x247U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x247U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x247U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v584 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x248U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x248U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x248U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x248U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x248U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v585 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x249U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x249U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x249U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x249U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x249U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v586 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x24aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x24aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x24aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x24aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v587 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x24bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x24bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x24bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x24bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v588 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x24cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x24cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x24cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x24cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v589 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x24dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x24dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x24dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x24dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v590 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x24eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x24eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x24eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x24eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v591 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x24fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x24fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x24fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x24fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v592 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x250U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x250U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x250U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x250U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x250U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v593 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x251U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x251U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x251U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x251U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x251U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v594 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x252U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x252U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x252U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x252U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x252U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v595 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x253U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x253U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x253U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x253U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x253U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v596 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x254U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x254U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x254U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x254U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x254U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v597 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x255U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x255U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x255U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x255U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x255U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v598 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x256U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x256U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x256U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x256U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x256U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v599 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x257U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x257U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x257U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x257U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x257U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v600 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x258U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x258U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x258U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x258U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x258U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v601 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x259U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x259U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x259U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x259U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x259U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v602 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x25aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x25aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x25aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x25aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v603 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x25bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x25bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x25bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x25bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v604 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x25cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x25cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x25cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x25cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v605 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x25dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x25dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x25dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x25dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v606 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x25eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x25eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x25eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x25eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v607 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x25fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x25fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x25fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x25fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v608 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x260U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x260U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x260U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x260U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x260U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v609 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x261U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x261U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x261U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x261U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x261U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v610 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x262U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x262U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x262U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x262U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x262U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v611 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x263U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x263U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x263U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x263U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x263U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v612 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x264U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x264U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x264U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x264U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x264U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v613 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x265U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x265U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x265U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x265U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x265U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v614 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x266U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x266U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x266U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x266U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x266U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v615 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x267U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x267U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x267U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x267U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x267U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v616 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x268U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x268U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x268U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x268U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x268U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v617 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x269U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x269U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x269U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x269U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x269U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v618 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x26aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x26aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x26aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x26aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v619 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x26bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x26bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x26bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x26bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v620 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x26cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x26cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x26cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x26cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v621 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x26dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x26dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x26dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x26dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v622 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x26eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x26eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x26eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x26eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v623 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x26fU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x26fU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x26fU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x26fU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v624 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x270U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x270U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x270U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x270U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x270U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v625 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x271U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x271U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x271U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x271U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x271U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v626 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x272U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x272U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x272U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x272U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x272U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v627 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x273U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x273U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x273U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x273U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x273U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v628 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x274U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x274U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x274U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x274U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x274U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v629 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x275U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x275U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x275U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x275U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x275U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v630 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x276U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x276U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x276U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x276U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x276U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v631 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x277U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x277U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x277U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x277U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x277U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v632 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x278U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x278U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x278U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x278U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x278U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v633 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x279U == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x279U]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x279U]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x279U]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x279U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v634 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x27aU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x27aU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27aU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x27aU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v635 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x27bU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x27bU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27bU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x27bU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v636 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x27cU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x27cU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27cU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x27cU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v637 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x27dU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x27dU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27dU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x27dU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v638 
            = (((vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U] 
                 >> 0xcU) & (0x27eU == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                    [0x27eU]) ? ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27eU]) ? ((0x800U 
                                                & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                ? 3U
                                                : 2U)
                                  : ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                     [0x27eU]) ? ((0x800U & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                   ? 2U : 0U) : ((0x800U 
                                                  & vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27eU]);
    } else {
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v349 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v350 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v351 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v352 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v353 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v354 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v355 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v356 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v357 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v358 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v359 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v360 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v361 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v362 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v363 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v364 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v365 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v366 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v367 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v368 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v369 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v370 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v371 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v372 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v373 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v374 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v375 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v376 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v377 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v378 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v379 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v380 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v381 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v382 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v383 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v384 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v385 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v386 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v387 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v388 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v389 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v390 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v391 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v392 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v393 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v394 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v395 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v396 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v397 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v398 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v399 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v400 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v401 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v402 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v403 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v404 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v405 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v406 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v407 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v408 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v409 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v410 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v411 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v412 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v413 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v414 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v415 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v416 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v417 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v418 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v419 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v420 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v421 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v422 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v423 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v424 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v425 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v426 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v427 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v428 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v429 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v430 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v431 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v432 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v433 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v434 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v435 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v436 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v437 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v438 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v439 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v440 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v441 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v442 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v443 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v444 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v445 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v446 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v447 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v448 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v449 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v450 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v451 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v452 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v453 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v454 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v455 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v456 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v457 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v458 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v459 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v460 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v461 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v462 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v463 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v464 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v465 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v466 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v467 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v468 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v469 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v470 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v471 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v472 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v473 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v474 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v475 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v476 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v477 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v478 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v479 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v480 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v481 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v482 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v483 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v484 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v485 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v486 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v487 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v488 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v489 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v490 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v491 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v492 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v493 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v494 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v495 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v496 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v497 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v498 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v499 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v500 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v501 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v502 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v503 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v504 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v505 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v506 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v507 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v508 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v509 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v510 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v511 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v512 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v513 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v514 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v515 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v516 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v517 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v518 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v519 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v520 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v521 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v522 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v523 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v524 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v525 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v526 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v527 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v528 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v529 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v530 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v531 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v532 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v533 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v534 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v535 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v536 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v537 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v538 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v539 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v540 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v541 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v542 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v543 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v544 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v545 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v546 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v547 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v548 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v549 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v550 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v551 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v552 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v553 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v554 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v555 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v556 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v557 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v558 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v559 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v560 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v561 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v562 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v563 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v564 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v565 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v566 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v567 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v568 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v569 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v570 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v571 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v572 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v573 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v574 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v575 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v576 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v577 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v578 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v579 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v580 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v581 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v582 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v583 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v584 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v585 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v586 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v587 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v588 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v589 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v590 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v591 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v592 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v593 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v594 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v595 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v596 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v597 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v598 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v599 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v600 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v601 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v602 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v603 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v604 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v605 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v606 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v607 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v608 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v609 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v610 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v611 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v612 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v613 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v614 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v615 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v616 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v617 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v618 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v619 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v620 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v621 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v622 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v623 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v624 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v625 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v626 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v627 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v628 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v629 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v630 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v631 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v632 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v633 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v634 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v635 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v636 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v637 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v638 = 2U;
    }
}
