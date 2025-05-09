// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___combo__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->gshare__DOT__GHSR_restore_next = ((0x1eU 
                                               & ((IData)(vlSelf->EXE_GHSR_restore) 
                                                  << 1U)) 
                                              | (IData)(vlSelf->EXE_branch_taken));
}

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__3(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__3\n"); );
    // Init
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v0;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v2;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v3;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v4;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v5;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v6;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v7;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v8;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v9;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v10;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v11;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v12;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v13;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v14;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v15;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v16;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v17;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v18;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v19;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v20;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v21;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v22;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v23;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v24;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v25;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v26;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v27;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v28;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v29;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v30;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v31;
    // Body
    if (vlSelf->reset_n) {
        vlSelf->gshare__DOT__GHSR = vlSelf->gshare__DOT__GHSR_next;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v0 = (
                                                   ((IData)(vlSelf->EXE_is_BJ) 
                                                    & (0U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->EXE_branch_addr)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->gshare__DOT__GSHARE_PHT
                                                     [0U])
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [0U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [0U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 2U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1 = (
                                                   ((IData)(vlSelf->EXE_is_BJ) 
                                                    & (4U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->EXE_branch_addr)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->gshare__DOT__GSHARE_PHT
                                                     [1U])
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [1U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [1U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 2U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   vlSelf->gshare__DOT__GSHARE_PHT
                                                   [1U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v2 = (
                                                   ((IData)(vlSelf->EXE_is_BJ) 
                                                    & (8U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->EXE_branch_addr)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->gshare__DOT__GSHARE_PHT
                                                     [2U])
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [2U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [2U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 2U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   vlSelf->gshare__DOT__GSHARE_PHT
                                                   [2U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v3 = (
                                                   ((IData)(vlSelf->EXE_is_BJ) 
                                                    & (0xcU 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->EXE_branch_addr)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->gshare__DOT__GSHARE_PHT
                                                     [3U])
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [3U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [3U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 2U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   vlSelf->gshare__DOT__GSHARE_PHT
                                                   [3U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v4 = (
                                                   ((IData)(vlSelf->EXE_is_BJ) 
                                                    & (0x10U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->EXE_branch_addr)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->gshare__DOT__GSHARE_PHT
                                                     [4U])
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [4U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [4U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 2U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   vlSelf->gshare__DOT__GSHARE_PHT
                                                   [4U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v5 = (
                                                   ((IData)(vlSelf->EXE_is_BJ) 
                                                    & (0x14U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->EXE_branch_addr)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->gshare__DOT__GSHARE_PHT
                                                     [5U])
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [5U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [5U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 2U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   vlSelf->gshare__DOT__GSHARE_PHT
                                                   [5U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v6 = (
                                                   ((IData)(vlSelf->EXE_is_BJ) 
                                                    & (0x18U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->EXE_branch_addr)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->gshare__DOT__GSHARE_PHT
                                                     [6U])
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [6U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [6U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 2U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   vlSelf->gshare__DOT__GSHARE_PHT
                                                   [6U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v7 = (
                                                   ((IData)(vlSelf->EXE_is_BJ) 
                                                    & (0x1cU 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->EXE_branch_addr)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->gshare__DOT__GSHARE_PHT
                                                     [7U])
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [7U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [7U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 2U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   vlSelf->gshare__DOT__GSHARE_PHT
                                                   [7U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v8 = (
                                                   ((IData)(vlSelf->EXE_is_BJ) 
                                                    & (0x20U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->EXE_branch_addr)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->gshare__DOT__GSHARE_PHT
                                                     [8U])
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [8U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [8U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 2U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   vlSelf->gshare__DOT__GSHARE_PHT
                                                   [8U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v9 = (
                                                   ((IData)(vlSelf->EXE_is_BJ) 
                                                    & (0x24U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->EXE_branch_addr)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->gshare__DOT__GSHARE_PHT
                                                     [9U])
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [9U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->gshare__DOT__GSHARE_PHT
                                                      [9U])
                                                      ? 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 2U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->EXE_branch_taken)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   vlSelf->gshare__DOT__GSHARE_PHT
                                                   [9U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v10 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x28U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0xaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [0xaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                          ? 3U : 2U)
                              : ((IData)(vlSelf->EXE_branch_taken)
                                  ? 3U : 1U)) : ((1U 
                                                  & vlSelf->gshare__DOT__GSHARE_PHT
                                                  [0xaU])
                                                  ? 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0xaU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v11 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x2cU == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0xbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [0xbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                          ? 3U : 2U)
                              : ((IData)(vlSelf->EXE_branch_taken)
                                  ? 3U : 1U)) : ((1U 
                                                  & vlSelf->gshare__DOT__GSHARE_PHT
                                                  [0xbU])
                                                  ? 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0xbU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v12 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x30U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0xcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [0xcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                          ? 3U : 2U)
                              : ((IData)(vlSelf->EXE_branch_taken)
                                  ? 3U : 1U)) : ((1U 
                                                  & vlSelf->gshare__DOT__GSHARE_PHT
                                                  [0xcU])
                                                  ? 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0xcU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v13 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x34U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0xdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [0xdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                          ? 3U : 2U)
                              : ((IData)(vlSelf->EXE_branch_taken)
                                  ? 3U : 1U)) : ((1U 
                                                  & vlSelf->gshare__DOT__GSHARE_PHT
                                                  [0xdU])
                                                  ? 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0xdU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v14 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x38U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0xeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [0xeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                          ? 3U : 2U)
                              : ((IData)(vlSelf->EXE_branch_taken)
                                  ? 3U : 1U)) : ((1U 
                                                  & vlSelf->gshare__DOT__GSHARE_PHT
                                                  [0xeU])
                                                  ? 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0xeU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v15 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x3cU == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0xfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [0xfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                          ? 3U : 2U)
                              : ((IData)(vlSelf->EXE_branch_taken)
                                  ? 3U : 1U)) : ((1U 
                                                  & vlSelf->gshare__DOT__GSHARE_PHT
                                                  [0xfU])
                                                  ? 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0xfU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v16 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x40U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x10U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x10U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x10U])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x10U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v17 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x44U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x11U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x11U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x11U])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x11U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v18 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x48U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x12U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x12U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x12U])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x12U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v19 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x4cU == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x13U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x13U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x13U])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x13U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v20 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x50U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x14U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x14U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x14U])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x14U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v21 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x54U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x15U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x15U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x15U])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x15U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v22 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x58U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x16U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x16U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x16U])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x16U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v23 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x5cU == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x17U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x17U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x17U])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x17U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v24 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x60U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x18U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x18U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x18U])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x18U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v25 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x64U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x19U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x19U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x19U])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x19U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v26 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x68U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x1aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x1aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x1aU])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x1aU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v27 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x6cU == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x1bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x1bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x1bU])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x1bU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v28 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x70U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x1cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x1cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x1cU])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x1cU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v29 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x74U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x1dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x1dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x1dU])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x1dU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v30 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x78U == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x1eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x1eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x1eU])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x1eU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v31 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0x7cU == 
                                            (0x7cU 
                                             & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x1fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                               [0x1fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                               : ((IData)(vlSelf->EXE_branch_taken)
                                   ? 3U : 1U)) : ((1U 
                                                   & vlSelf->gshare__DOT__GSHARE_PHT
                                                   [0x1fU])
                                                   ? 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 2U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->EXE_branch_taken)
                                                    ? 1U
                                                    : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x1fU]);
    } else {
        vlSelf->gshare__DOT__GHSR = 0U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v0 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v2 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v3 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v4 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v5 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v6 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v7 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v8 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v9 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v10 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v11 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v12 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v13 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v14 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v15 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v16 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v17 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v18 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v19 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v20 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v21 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v22 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v23 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v24 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v25 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v26 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v27 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v28 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v29 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v30 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v31 = 2U;
    }
    vlSelf->gshare__DOT__GSHARE_PHT[0U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v0;
    vlSelf->gshare__DOT__GSHARE_PHT[1U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1;
    vlSelf->gshare__DOT__GSHARE_PHT[2U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v2;
    vlSelf->gshare__DOT__GSHARE_PHT[3U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v3;
    vlSelf->gshare__DOT__GSHARE_PHT[4U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v4;
    vlSelf->gshare__DOT__GSHARE_PHT[5U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v5;
    vlSelf->gshare__DOT__GSHARE_PHT[6U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v6;
    vlSelf->gshare__DOT__GSHARE_PHT[7U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v7;
    vlSelf->gshare__DOT__GSHARE_PHT[8U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v8;
    vlSelf->gshare__DOT__GSHARE_PHT[9U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v9;
    vlSelf->gshare__DOT__GSHARE_PHT[0xaU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v10;
    vlSelf->gshare__DOT__GSHARE_PHT[0xbU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v11;
    vlSelf->gshare__DOT__GSHARE_PHT[0xcU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v12;
    vlSelf->gshare__DOT__GSHARE_PHT[0xdU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v13;
    vlSelf->gshare__DOT__GSHARE_PHT[0xeU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v14;
    vlSelf->gshare__DOT__GSHARE_PHT[0xfU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v15;
    vlSelf->gshare__DOT__GSHARE_PHT[0x10U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v16;
    vlSelf->gshare__DOT__GSHARE_PHT[0x11U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v17;
    vlSelf->gshare__DOT__GSHARE_PHT[0x12U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v18;
    vlSelf->gshare__DOT__GSHARE_PHT[0x13U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v19;
    vlSelf->gshare__DOT__GSHARE_PHT[0x14U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v20;
    vlSelf->gshare__DOT__GSHARE_PHT[0x15U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v21;
    vlSelf->gshare__DOT__GSHARE_PHT[0x16U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v22;
    vlSelf->gshare__DOT__GSHARE_PHT[0x17U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v23;
    vlSelf->gshare__DOT__GSHARE_PHT[0x18U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v24;
    vlSelf->gshare__DOT__GSHARE_PHT[0x19U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v25;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1aU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v26;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1bU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v27;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1cU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v28;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1dU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v29;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1eU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v30;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1fU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v31;
    vlSelf->current_instr0_GHSR = vlSelf->gshare__DOT__GHSR;
}

VL_INLINE_OPT void Vcommon___024root___combo__TOP__4(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__4\n"); );
    // Init
    CData/*0:0*/ __Vfunc_if_branch_taken__0__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__0__biomd;
    CData/*0:0*/ __Vfunc_if_branch_taken__1__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__1__biomd;
    // Body
    __Vfunc_if_branch_taken__1__biomd = vlSelf->gshare__DOT__GSHARE_PHT
        [(0x1fU & (vlSelf->IF_instr1_pc >> 2U))];
    __Vfunc_if_branch_taken__1__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__1__biomd) 
                                                  >> 1U));
    vlSelf->instr1_predict_taken = __Vfunc_if_branch_taken__1__Vfuncout;
    __Vfunc_if_branch_taken__0__biomd = vlSelf->gshare__DOT__GSHARE_PHT
        [(0x1fU & (vlSelf->IF_instr0_pc >> 2U))];
    __Vfunc_if_branch_taken__0__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__0__biomd) 
                                                  >> 1U));
    vlSelf->instr0_predict_taken = __Vfunc_if_branch_taken__0__Vfuncout;
    vlSelf->current_instr1_GHSR = vlSelf->gshare__DOT__GHSR;
    vlSelf->current_instr1_GHSR = (((IData)(vlSelf->IF_instr0_hit) 
                                    & (~ (IData)(vlSelf->instr0_predict_taken)))
                                    ? (0x1eU & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                << 1U))
                                    : (IData)(vlSelf->gshare__DOT__GHSR));
    vlSelf->gshare__DOT__GHSR_next = ((IData)(vlSelf->flush_valid)
                                       ? (IData)(vlSelf->gshare__DOT__GHSR_restore_next)
                                       : (((IData)(vlSelf->IF_instr0_resp) 
                                           & ((IData)(vlSelf->IF_instr0_hit) 
                                              | (IData)(vlSelf->IF_instr1_hit)))
                                           ? (((IData)(vlSelf->instr0_predict_taken) 
                                               & (IData)(vlSelf->IF_instr0_hit))
                                               ? ((0x1eU 
                                                   & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->instr0_predict_taken))
                                               : ((
                                                   ((IData)(vlSelf->instr1_predict_taken) 
                                                    & (IData)(vlSelf->IF_instr1_hit)) 
                                                   & (IData)(vlSelf->IF_instr0_hit))
                                                   ? 
                                                  ((0x1cU 
                                                    & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->instr1_predict_taken))
                                                   : 
                                                  (((IData)(vlSelf->instr1_predict_taken) 
                                                    & (IData)(vlSelf->IF_instr1_hit))
                                                    ? 
                                                   ((0x1eU 
                                                     & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->instr1_predict_taken))
                                                    : 
                                                   ((IData)(vlSelf->IF_instr0_hit)
                                                     ? 
                                                    (0x1eU 
                                                     & ((IData)(vlSelf->gshare__DOT__GHSR) 
                                                        << 1U))
                                                     : (IData)(vlSelf->gshare__DOT__GHSR)))))
                                           : (((IData)(vlSelf->EXE_is_BJ) 
                                               & (IData)(vlSelf->EXE_update_GHSR))
                                               ? (IData)(vlSelf->gshare__DOT__GHSR_restore_next)
                                               : (IData)(vlSelf->gshare__DOT__GHSR))));
}

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    Vcommon___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommon___024root___sequent__TOP__3(vlSelf);
    }
    Vcommon___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelf->flush_valid & 0xfeU))) {
        Verilated::overWidthError("flush_valid");}
    if (VL_UNLIKELY((vlSelf->IF_instr0_hit & 0xfeU))) {
        Verilated::overWidthError("IF_instr0_hit");}
    if (VL_UNLIKELY((vlSelf->IF_instr1_hit & 0xfeU))) {
        Verilated::overWidthError("IF_instr1_hit");}
    if (VL_UNLIKELY((vlSelf->IF_instr0_resp & 0xfeU))) {
        Verilated::overWidthError("IF_instr0_resp");}
    if (VL_UNLIKELY((vlSelf->EXE_is_BJ & 0xfeU))) {
        Verilated::overWidthError("EXE_is_BJ");}
    if (VL_UNLIKELY((vlSelf->EXE_update_GHSR & 0xfeU))) {
        Verilated::overWidthError("EXE_update_GHSR");}
    if (VL_UNLIKELY((vlSelf->EXE_branch_taken & 0xfeU))) {
        Verilated::overWidthError("EXE_branch_taken");}
    if (VL_UNLIKELY((vlSelf->EXE_GHSR_restore & 0xe0U))) {
        Verilated::overWidthError("EXE_GHSR_restore");}
}
#endif  // VL_DEBUG
