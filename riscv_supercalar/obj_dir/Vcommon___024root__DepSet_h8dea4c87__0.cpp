// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__2(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset_n) {
        vlSelf->gshare__DOT__GHSR = vlSelf->gshare__DOT__GHSR_next;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v0 
            = (((IData)(vlSelf->EXE_is_BJ) & (0U == 
                                              (0xffcU 
                                               & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->EXE_branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->gshare__DOT__GSHARE_PHT
                                               [0U])
                                               ? ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v1 
            = (((IData)(vlSelf->EXE_is_BJ) & (4U == 
                                              (0xffcU 
                                               & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->EXE_branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->gshare__DOT__GSHARE_PHT
                                               [1U])
                                               ? ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v2 
            = (((IData)(vlSelf->EXE_is_BJ) & (8U == 
                                              (0xffcU 
                                               & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->EXE_branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->gshare__DOT__GSHARE_PHT
                                               [2U])
                                               ? ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v3 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->EXE_branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->gshare__DOT__GSHARE_PHT
                                               [3U])
                                               ? ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v4 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x10U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->EXE_branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->gshare__DOT__GSHARE_PHT
                                               [4U])
                                               ? ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v5 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x14U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->EXE_branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->gshare__DOT__GSHARE_PHT
                                               [5U])
                                               ? ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v6 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x18U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->EXE_branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->gshare__DOT__GSHARE_PHT
                                               [6U])
                                               ? ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v7 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->EXE_branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->gshare__DOT__GSHARE_PHT
                                               [7U])
                                               ? ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v8 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x20U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->EXE_branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->gshare__DOT__GSHARE_PHT
                                               [8U])
                                               ? ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v9 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x24U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                              [9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->EXE_branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->gshare__DOT__GSHARE_PHT
                                               [9U])
                                               ? ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->EXE_branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v10 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x28U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0xaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
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
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v11 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0xbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
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
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v12 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x30U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0xcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
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
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v13 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x34U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0xdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
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
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v14 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x38U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0xeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
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
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v15 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0xfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
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
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v16 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x40U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x10U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x10U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x10U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x10U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v17 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x44U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x11U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x11U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x11U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x11U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v18 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x48U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x12U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x12U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x12U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x12U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v19 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x13U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x13U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x13U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x13U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v20 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x50U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x14U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x14U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x14U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x14U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v21 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x54U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x15U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x15U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x15U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x15U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v22 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x58U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x16U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x16U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x16U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x16U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v23 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x17U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x17U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x17U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x17U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v24 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x60U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x18U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x18U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x18U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x18U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v25 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x64U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x19U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x19U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x19U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x19U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v26 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x68U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x1aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v27 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x1bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v28 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x70U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x1cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v29 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x74U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x1dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v30 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x78U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x1eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v31 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x1fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v32 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x80U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x20U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x20U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x20U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x20U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v33 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x84U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x21U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x21U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x21U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x21U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v34 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x88U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x22U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x22U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x22U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x22U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v35 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x23U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x23U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x23U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x23U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v36 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x90U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x24U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x24U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x24U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x24U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v37 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x94U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x25U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x25U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x25U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x25U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v38 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x98U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x26U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x26U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x26U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x26U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v39 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x27U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x27U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x27U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x27U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v40 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x28U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x28U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x28U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x28U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v41 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x29U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x29U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x29U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x29U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v42 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x2aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v43 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xacU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x2bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v44 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x2cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v45 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x2dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v46 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x2eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v47 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x2fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v48 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x30U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x30U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x30U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x30U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v49 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x31U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x31U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x31U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x31U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v50 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x32U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x32U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x32U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x32U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v51 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x33U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x33U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x33U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x33U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v52 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xd0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x34U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x34U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x34U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x34U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v53 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xd4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x35U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x35U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x35U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x35U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v54 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xd8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x36U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x36U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x36U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x36U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v55 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xdcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x37U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x37U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x37U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x37U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v56 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xe0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x38U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x38U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x38U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x38U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v57 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xe4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x39U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x39U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x39U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x39U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v58 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xe8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x3aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v59 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x3bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v60 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xf0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x3cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v61 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xf4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x3dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v62 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xf8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x3eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v63 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x3fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v64 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x100U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x40U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x40U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x40U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x40U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v65 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x104U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x41U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x41U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x41U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x41U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v66 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x108U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x42U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x42U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x42U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x42U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v67 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x10cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x43U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x43U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x43U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x43U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v68 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x110U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x44U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x44U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x44U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x44U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v69 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x114U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x45U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x45U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x45U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x45U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v70 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x118U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x46U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x46U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x46U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x46U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v71 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x11cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x47U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x47U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x47U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x47U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v72 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x120U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x48U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x48U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x48U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x48U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v73 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x124U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x49U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x49U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x49U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x49U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v74 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x128U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x4aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x4aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x4aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x4aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v75 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x12cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x4bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x4bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x4bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x4bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v76 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x130U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x4cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x4cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x4cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x4cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v77 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x134U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x4dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x4dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x4dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x4dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v78 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x138U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x4eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x4eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x4eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x4eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v79 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x13cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x4fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x4fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x4fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x4fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v80 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x140U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x50U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x50U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x50U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x50U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v81 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x144U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x51U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x51U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x51U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x51U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v82 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x148U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x52U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x52U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x52U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x52U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v83 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x14cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x53U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x53U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x53U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x53U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v84 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x150U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x54U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x54U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x54U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x54U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v85 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x154U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x55U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x55U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x55U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x55U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v86 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x158U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x56U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x56U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x56U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x56U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v87 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x15cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x57U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x57U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x57U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x57U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v88 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x160U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x58U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x58U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x58U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x58U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v89 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x164U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x59U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x59U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x59U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x59U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v90 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x168U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x5aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x5aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x5aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x5aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v91 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x16cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x5bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x5bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x5bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x5bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v92 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x170U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x5cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x5cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x5cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x5cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v93 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x174U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x5dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x5dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x5dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x5dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v94 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x178U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x5eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x5eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x5eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x5eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v95 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x17cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x5fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x5fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x5fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x5fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v96 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x180U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x60U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x60U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x60U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x60U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v97 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x184U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x61U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x61U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x61U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x61U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v98 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x188U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x62U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x62U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x62U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x62U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v99 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x18cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x63U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x63U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x63U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x63U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v100 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x190U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x64U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x64U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x64U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x64U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v101 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x194U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x65U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x65U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x65U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x65U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v102 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x198U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x66U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x66U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x66U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x66U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v103 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x19cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x67U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x67U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x67U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x67U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v104 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1a0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x68U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x68U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x68U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x68U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v105 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1a4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x69U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x69U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x69U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x69U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v106 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1a8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x6aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x6aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x6aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x6aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v107 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1acU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x6bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x6bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x6bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x6bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v108 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1b0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x6cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x6cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x6cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x6cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v109 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1b4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x6dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x6dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x6dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x6dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v110 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1b8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x6eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x6eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x6eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x6eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v111 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1bcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x6fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x6fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x6fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x6fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v112 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1c0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x70U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x70U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x70U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x70U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v113 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1c4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x71U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x71U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x71U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x71U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v114 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1c8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x72U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x72U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x72U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x72U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v115 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1ccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x73U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x73U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x73U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x73U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v116 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1d0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x74U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x74U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x74U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x74U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v117 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1d4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x75U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x75U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x75U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x75U]);
    } else {
        vlSelf->gshare__DOT__GHSR = 0U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v0 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v1 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v2 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v3 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v4 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v5 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v6 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v7 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v8 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v9 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v10 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v11 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v12 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v13 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v14 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v15 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v16 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v17 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v18 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v19 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v20 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v21 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v22 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v23 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v24 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v25 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v26 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v27 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v28 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v29 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v30 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v31 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v32 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v33 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v34 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v35 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v36 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v37 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v38 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v39 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v40 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v41 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v42 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v43 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v44 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v45 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v46 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v47 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v48 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v49 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v50 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v51 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v52 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v53 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v54 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v55 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v56 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v57 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v58 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v59 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v60 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v61 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v62 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v63 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v64 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v65 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v66 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v67 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v68 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v69 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v70 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v71 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v72 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v73 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v74 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v75 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v76 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v77 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v78 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v79 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v80 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v81 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v82 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v83 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v84 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v85 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v86 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v87 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v88 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v89 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v90 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v91 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v92 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v93 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v94 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v95 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v96 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v97 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v98 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v99 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v100 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v101 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v102 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v103 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v104 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v105 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v106 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v107 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v108 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v109 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v110 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v111 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v112 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v113 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v114 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v115 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v116 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v117 = 2U;
    }
}

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__3(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__3\n"); );
    // Body
    if (vlSelf->reset_n) {
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v118 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1d8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x76U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x76U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x76U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x76U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v119 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1dcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x77U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x77U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x77U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x77U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v120 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1e0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x78U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x78U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x78U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x78U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v121 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1e4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x79U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x79U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x79U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x79U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v122 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1e8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x7aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x7aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x7aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x7aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v123 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1ecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x7bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x7bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x7bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x7bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v124 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x7cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x7cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x7cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x7cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v125 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x7dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x7dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x7dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x7dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v126 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x7eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x7eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x7eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x7eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v127 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1fcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x7fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x7fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x7fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x7fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v128 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x200U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x80U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x80U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x80U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x80U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v129 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x204U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x81U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x81U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x81U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x81U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v130 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x208U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x82U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x82U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x82U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x82U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v131 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x20cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x83U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x83U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x83U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x83U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v132 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x210U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x84U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x84U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x84U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x84U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v133 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x214U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x85U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x85U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x85U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x85U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v134 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x218U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x86U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x86U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x86U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x86U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v135 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x21cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x87U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x87U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x87U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x87U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v136 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x220U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x88U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x88U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x88U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x88U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v137 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x224U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x89U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x89U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x89U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x89U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v138 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x228U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x8aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x8aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x8aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x8aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v139 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x22cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x8bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x8bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x8bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x8bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v140 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x230U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x8cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x8cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x8cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x8cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v141 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x234U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x8dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x8dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x8dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x8dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v142 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x238U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x8eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x8eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x8eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x8eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v143 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x23cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x8fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x8fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x8fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x8fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v144 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x240U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x90U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x90U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x90U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x90U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v145 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x244U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x91U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x91U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x91U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x91U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v146 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x248U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x92U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x92U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x92U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x92U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v147 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x24cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x93U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x93U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x93U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x93U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v148 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x250U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x94U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x94U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x94U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x94U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v149 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x254U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x95U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x95U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x95U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x95U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v150 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x258U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x96U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x96U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x96U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x96U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v151 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x25cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x97U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x97U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x97U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x97U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v152 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x260U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x98U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x98U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x98U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x98U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v153 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x264U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x99U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x99U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x99U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x99U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v154 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x268U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x9aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x9aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x9aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x9aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v155 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x26cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x9bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x9bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x9bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x9bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v156 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x270U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x9cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x9cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x9cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x9cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v157 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x274U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x9dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x9dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x9dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x9dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v158 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x278U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x9eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x9eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x9eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x9eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v159 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x27cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x9fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0x9fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x9fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x9fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v160 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x280U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xa0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xa0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xa0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xa0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v161 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x284U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xa1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xa1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xa1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xa1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v162 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x288U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xa2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xa2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xa2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xa2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v163 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x28cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xa3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xa3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xa3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xa3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v164 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x290U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xa4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xa4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xa4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xa4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v165 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x294U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xa5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xa5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xa5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xa5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v166 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x298U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xa6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xa6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xa6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xa6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v167 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x29cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xa7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xa7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xa7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xa7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v168 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xa8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xa8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xa8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xa8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v169 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xa9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xa9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xa9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xa9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v170 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xaaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xaaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xaaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xaaU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v171 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2acU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xabU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xabU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xabU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xabU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v172 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xacU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xacU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xacU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xacU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v173 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xadU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xadU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xadU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xadU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v174 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xaeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xaeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xaeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xaeU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v175 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2bcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xafU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xafU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xafU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xafU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v176 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xb0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xb0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xb0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xb0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v177 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xb1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xb1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xb1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xb1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v178 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xb2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xb2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xb2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xb2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v179 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2ccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xb3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xb3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xb3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xb3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v180 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xb4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xb4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xb4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xb4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v181 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xb5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xb5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xb5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xb5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v182 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xb6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xb6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xb6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xb6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v183 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2dcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xb7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xb7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xb7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xb7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v184 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xb8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xb8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xb8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xb8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v185 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xb9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xb9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xb9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xb9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v186 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xbaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xbaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xbaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xbaU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v187 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2ecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xbbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xbbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xbbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xbbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v188 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xbcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xbcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xbcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xbcU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v189 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xbdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xbdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xbdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xbdU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v190 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xbeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xbeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xbeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xbeU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v191 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2fcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xbfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xbfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xbfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xbfU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v192 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x300U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xc0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xc0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xc0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xc0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v193 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x304U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xc1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xc1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xc1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xc1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v194 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x308U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xc2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xc2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xc2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xc2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v195 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x30cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xc3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xc3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xc3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xc3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v196 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x310U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xc4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xc4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xc4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xc4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v197 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x314U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xc5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xc5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xc5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xc5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v198 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x318U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xc6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xc6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xc6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xc6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v199 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x31cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xc7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xc7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xc7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xc7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v200 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x320U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xc8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xc8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xc8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xc8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v201 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x324U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xc9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xc9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xc9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xc9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v202 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x328U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xcaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xcaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xcaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xcaU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v203 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x32cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xcbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xcbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xcbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xcbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v204 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x330U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xccU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xccU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xccU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xccU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v205 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x334U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xcdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xcdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xcdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xcdU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v206 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x338U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xceU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xceU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xceU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xceU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v207 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x33cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xcfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xcfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xcfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xcfU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v208 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x340U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xd0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xd0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xd0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xd0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v209 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x344U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xd1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xd1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xd1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xd1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v210 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x348U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xd2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xd2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xd2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xd2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v211 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x34cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xd3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xd3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xd3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xd3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v212 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x350U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xd4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xd4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xd4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xd4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v213 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x354U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xd5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xd5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xd5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xd5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v214 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x358U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xd6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xd6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xd6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xd6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v215 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x35cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xd7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xd7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xd7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xd7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v216 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x360U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xd8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xd8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xd8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xd8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v217 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x364U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xd9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xd9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xd9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xd9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v218 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x368U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xdaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xdaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xdaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xdaU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v219 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x36cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xdbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xdbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xdbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xdbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v220 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x370U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xdcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xdcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xdcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xdcU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v221 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x374U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xddU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xddU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xddU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xddU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v222 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x378U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xdeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xdeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xdeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xdeU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v223 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x37cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xdfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xdfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xdfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xdfU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v224 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x380U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xe0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xe0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xe0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xe0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v225 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x384U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xe1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xe1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xe1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xe1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v226 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x388U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xe2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xe2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xe2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xe2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v227 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x38cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xe3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xe3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xe3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xe3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v228 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x390U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xe4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xe4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xe4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xe4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v229 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x394U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xe5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xe5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xe5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xe5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v230 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x398U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xe6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xe6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xe6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xe6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v231 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x39cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xe7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xe7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xe7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xe7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v232 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3a0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xe8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xe8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xe8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xe8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v233 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3a4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xe9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xe9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xe9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xe9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v234 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3a8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xeaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xeaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xeaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xeaU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v235 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3acU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xebU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xebU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xebU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xebU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v236 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3b0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xecU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xecU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xecU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xecU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v237 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3b4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xedU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xedU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xedU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xedU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v238 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3b8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xeeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xeeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xeeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xeeU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v239 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3bcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xefU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xefU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xefU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xefU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v240 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3c0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xf0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xf0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xf0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xf0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v241 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3c4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xf1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xf1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xf1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xf1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v242 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3c8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xf2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xf2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xf2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xf2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v243 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3ccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xf3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xf3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xf3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xf3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v244 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3d0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xf4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xf4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xf4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xf4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v245 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3d4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xf5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xf5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xf5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xf5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v246 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3d8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xf6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xf6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xf6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xf6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v247 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3dcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xf7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xf7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xf7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xf7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v248 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3e0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xf8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xf8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xf8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xf8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v249 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3e4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xf9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xf9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xf9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xf9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v250 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3e8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xfaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xfaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xfaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xfaU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v251 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3ecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xfbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xfbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xfbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xfbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v252 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3f0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xfcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xfcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xfcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xfcU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v253 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3f4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xfdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xfdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xfdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xfdU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v254 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3f8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xfeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xfeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xfeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xfeU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v255 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x3fcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0xffU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                 [0xffU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->EXE_branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0xffU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0xffU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v256 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x400U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x100U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x100U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x100U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x100U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v257 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x404U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x101U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x101U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x101U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x101U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v258 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x408U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x102U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x102U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x102U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x102U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v259 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x40cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x103U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x103U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x103U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x103U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v260 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x410U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x104U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x104U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x104U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x104U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v261 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x414U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x105U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x105U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x105U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x105U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v262 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x418U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x106U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x106U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x106U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x106U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v263 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x41cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x107U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x107U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x107U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x107U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v264 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x420U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x108U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x108U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x108U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x108U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v265 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x424U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x109U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x109U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x109U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x109U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v266 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x428U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x10aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x10aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x10aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x10aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v267 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x42cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x10bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x10bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x10bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x10bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v268 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x430U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x10cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x10cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x10cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x10cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v269 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x434U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x10dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x10dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x10dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x10dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v270 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x438U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x10eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x10eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x10eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x10eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v271 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x43cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x10fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x10fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x10fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x10fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v272 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x440U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x110U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x110U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x110U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x110U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v273 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x444U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x111U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x111U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x111U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x111U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v274 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x448U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x112U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x112U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x112U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x112U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v275 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x44cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x113U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x113U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x113U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x113U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v276 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x450U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x114U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x114U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x114U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x114U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v277 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x454U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x115U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x115U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x115U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x115U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v278 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x458U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x116U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x116U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x116U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x116U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v279 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x45cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x117U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x117U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x117U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x117U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v280 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x460U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x118U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x118U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x118U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x118U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v281 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x464U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x119U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x119U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x119U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x119U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v282 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x468U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x11aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x11aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x11aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x11aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v283 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x46cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x11bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x11bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x11bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x11bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v284 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x470U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x11cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x11cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x11cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x11cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v285 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x474U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x11dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x11dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x11dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x11dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v286 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x478U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x11eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x11eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x11eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x11eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v287 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x47cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x11fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x11fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x11fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x11fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v288 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x480U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x120U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x120U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x120U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x120U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v289 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x484U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x121U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x121U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x121U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x121U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v290 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x488U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x122U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x122U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x122U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x122U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v291 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x48cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x123U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x123U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x123U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x123U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v292 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x490U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x124U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x124U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x124U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x124U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v293 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x494U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x125U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x125U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x125U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x125U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v294 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x498U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x126U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x126U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x126U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x126U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v295 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x49cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x127U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x127U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x127U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x127U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v296 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4a0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x128U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x128U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x128U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x128U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v297 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4a4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x129U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x129U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x129U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x129U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v298 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4a8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x12aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x12aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x12aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x12aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v299 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4acU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x12bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x12bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x12bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x12bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v300 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4b0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x12cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x12cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x12cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x12cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v301 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4b4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x12dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x12dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x12dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x12dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v302 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4b8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x12eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x12eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x12eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x12eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v303 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4bcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x12fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x12fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x12fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x12fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v304 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4c0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x130U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x130U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x130U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x130U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v305 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4c4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x131U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x131U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x131U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x131U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v306 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4c8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x132U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x132U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x132U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x132U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v307 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4ccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x133U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x133U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x133U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x133U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v308 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4d0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x134U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x134U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x134U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x134U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v309 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4d4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x135U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x135U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x135U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x135U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v310 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4d8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x136U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x136U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x136U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x136U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v311 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4dcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x137U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x137U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x137U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x137U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v312 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4e0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x138U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x138U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x138U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x138U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v313 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4e4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x139U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x139U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x139U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x139U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v314 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4e8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x13aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x13aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x13aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x13aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v315 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4ecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x13bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x13bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x13bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x13bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v316 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4f0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x13cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x13cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x13cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x13cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v317 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4f4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x13dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x13dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x13dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x13dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v318 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4f8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x13eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x13eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x13eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x13eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v319 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x4fcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x13fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x13fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x13fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x13fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v320 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x500U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x140U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x140U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x140U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x140U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v321 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x504U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x141U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x141U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x141U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x141U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v322 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x508U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x142U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x142U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x142U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x142U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v323 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x50cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x143U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x143U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x143U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x143U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v324 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x510U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x144U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x144U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x144U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x144U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v325 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x514U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x145U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x145U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x145U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x145U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v326 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x518U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x146U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x146U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x146U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x146U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v327 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x51cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x147U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x147U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x147U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x147U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v328 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x520U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x148U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x148U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x148U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x148U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v329 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x524U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x149U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x149U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x149U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x149U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v330 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x528U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x14aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x14aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x14aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x14aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v331 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x52cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x14bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x14bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x14bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x14bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v332 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x530U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x14cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x14cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x14cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x14cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v333 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x534U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x14dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x14dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x14dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x14dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v334 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x538U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x14eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x14eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x14eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x14eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v335 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x53cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x14fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x14fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x14fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x14fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v336 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x540U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x150U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x150U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x150U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x150U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v337 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x544U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x151U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x151U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x151U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x151U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v338 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x548U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x152U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x152U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x152U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x152U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v339 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x54cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x153U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x153U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x153U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x153U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v340 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x550U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x154U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x154U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x154U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x154U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v341 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x554U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x155U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x155U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x155U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x155U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v342 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x558U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x156U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x156U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x156U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x156U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v343 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x55cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x157U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x157U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x157U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x157U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v344 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x560U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x158U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x158U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x158U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x158U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v345 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x564U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x159U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x159U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x159U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x159U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v346 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x568U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x15aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x15aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x15aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x15aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v347 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x56cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x15bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x15bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x15bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x15bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v348 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x570U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x15cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x15cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x15cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x15cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v349 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x574U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x15dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x15dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x15dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x15dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v350 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x578U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x15eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x15eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x15eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x15eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v351 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x57cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x15fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x15fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x15fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x15fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v352 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x580U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x160U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x160U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x160U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x160U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v353 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x584U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x161U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x161U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x161U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x161U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v354 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x588U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x162U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x162U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x162U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x162U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v355 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x58cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x163U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x163U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x163U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x163U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v356 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x590U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x164U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x164U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x164U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x164U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v357 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x594U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x165U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x165U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x165U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x165U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v358 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x598U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x166U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x166U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x166U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x166U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v359 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x59cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x167U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x167U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x167U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x167U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v360 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5a0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x168U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x168U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x168U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x168U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v361 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5a4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x169U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x169U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x169U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x169U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v362 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5a8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x16aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x16aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x16aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x16aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v363 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5acU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x16bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x16bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x16bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x16bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v364 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5b0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x16cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x16cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x16cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x16cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v365 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5b4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x16dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x16dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x16dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x16dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v366 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5b8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x16eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x16eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x16eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x16eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v367 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5bcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x16fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x16fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x16fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x16fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v368 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5c0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x170U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x170U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x170U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x170U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v369 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5c4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x171U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x171U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x171U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x171U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v370 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5c8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x172U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x172U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x172U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x172U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v371 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5ccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x173U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x173U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x173U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x173U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v372 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5d0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x174U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x174U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x174U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x174U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v373 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5d4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x175U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x175U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x175U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x175U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v374 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5d8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x176U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x176U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x176U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x176U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v375 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5dcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x177U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x177U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x177U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x177U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v376 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5e0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x178U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x178U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x178U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x178U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v377 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5e4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x179U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x179U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x179U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x179U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v378 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5e8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x17aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x17aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x17aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x17aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v379 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5ecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x17bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x17bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x17bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x17bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v380 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5f0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x17cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x17cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x17cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x17cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v381 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5f4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x17dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x17dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x17dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x17dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v382 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5f8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x17eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x17eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x17eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x17eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v383 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x5fcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x17fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x17fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x17fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x17fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v384 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x600U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x180U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x180U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x180U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x180U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v385 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x604U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x181U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x181U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x181U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x181U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v386 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x608U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x182U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x182U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x182U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x182U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v387 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x60cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x183U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x183U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x183U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x183U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v388 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x610U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x184U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x184U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x184U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x184U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v389 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x614U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x185U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x185U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x185U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x185U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v390 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x618U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x186U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x186U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x186U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x186U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v391 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x61cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x187U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x187U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x187U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x187U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v392 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x620U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x188U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x188U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x188U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x188U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v393 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x624U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x189U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x189U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x189U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x189U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v394 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x628U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x18aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x18aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x18aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x18aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v395 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x62cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x18bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x18bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x18bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x18bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v396 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x630U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x18cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x18cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x18cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x18cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v397 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x634U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x18dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x18dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x18dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x18dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v398 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x638U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x18eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x18eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x18eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x18eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v399 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x63cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x18fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x18fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x18fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x18fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v400 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x640U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x190U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x190U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x190U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x190U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v401 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x644U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x191U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x191U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x191U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x191U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v402 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x648U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x192U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x192U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x192U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x192U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v403 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x64cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x193U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x193U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x193U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x193U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v404 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x650U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x194U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x194U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x194U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x194U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v405 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x654U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x195U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x195U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x195U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x195U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v406 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x658U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x196U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x196U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x196U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x196U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v407 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x65cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x197U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x197U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x197U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x197U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v408 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x660U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x198U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x198U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x198U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x198U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v409 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x664U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x199U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x199U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x199U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x199U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v410 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x668U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x19aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x19aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x19aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x19aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v411 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x66cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x19bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x19bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x19bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x19bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v412 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x670U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x19cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x19cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x19cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x19cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v413 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x674U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x19dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x19dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x19dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x19dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v414 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x678U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x19eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x19eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x19eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x19eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v415 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x67cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x19fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x19fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x19fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x19fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v416 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x680U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1a0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1a0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1a0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1a0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v417 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x684U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1a1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1a1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1a1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1a1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v418 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x688U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1a2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1a2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1a2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1a2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v419 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x68cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1a3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1a3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1a3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1a3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v420 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x690U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1a4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1a4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1a4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1a4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v421 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x694U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1a5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1a5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1a5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1a5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v422 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x698U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1a6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1a6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1a6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1a6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v423 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x69cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1a7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1a7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1a7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1a7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v424 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6a0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1a8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1a8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1a8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1a8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v425 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6a4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1a9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1a9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1a9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1a9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v426 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6a8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1aaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1aaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1aaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1aaU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v427 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6acU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1abU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1abU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1abU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1abU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v428 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6b0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1acU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1acU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1acU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1acU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v429 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6b4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1adU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1adU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1adU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1adU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v430 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6b8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1aeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1aeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1aeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1aeU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v431 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6bcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1afU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1afU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1afU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1afU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v432 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6c0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1b0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1b0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1b0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1b0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v433 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6c4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1b1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1b1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1b1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1b1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v434 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6c8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1b2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1b2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1b2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1b2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v435 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6ccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1b3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1b3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1b3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1b3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v436 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6d0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1b4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1b4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1b4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1b4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v437 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6d4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1b5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1b5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1b5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1b5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v438 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6d8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1b6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1b6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1b6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1b6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v439 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6dcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1b7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1b7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1b7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1b7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v440 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6e0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1b8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1b8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1b8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1b8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v441 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6e4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1b9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1b9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1b9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1b9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v442 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6e8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1baU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1baU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1baU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1baU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v443 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6ecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1bbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1bbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1bbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1bbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v444 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6f0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1bcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1bcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1bcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1bcU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v445 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6f4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1bdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1bdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1bdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1bdU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v446 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6f8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1beU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1beU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1beU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1beU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v447 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x6fcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1bfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1bfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1bfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1bfU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v448 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x700U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1c0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1c0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1c0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1c0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v449 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x704U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1c1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1c1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1c1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1c1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v450 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x708U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1c2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1c2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1c2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1c2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v451 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x70cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1c3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1c3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1c3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1c3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v452 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x710U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1c4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1c4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1c4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1c4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v453 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x714U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1c5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1c5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1c5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1c5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v454 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x718U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1c6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1c6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1c6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1c6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v455 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x71cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1c7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1c7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1c7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1c7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v456 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x720U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1c8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1c8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1c8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1c8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v457 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x724U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1c9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1c9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1c9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1c9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v458 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x728U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1caU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1caU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1caU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1caU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v459 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x72cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1cbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1cbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1cbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1cbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v460 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x730U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1ccU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1ccU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1ccU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1ccU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v461 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x734U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1cdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1cdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1cdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1cdU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v462 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x738U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1ceU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1ceU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1ceU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1ceU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v463 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x73cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1cfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1cfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1cfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1cfU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v464 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x740U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1d0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1d0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1d0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1d0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v465 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x744U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1d1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1d1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1d1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1d1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v466 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x748U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1d2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1d2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1d2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1d2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v467 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x74cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1d3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1d3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1d3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1d3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v468 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x750U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1d4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1d4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1d4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1d4U]);
    } else {
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v118 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v119 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v120 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v121 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v122 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v123 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v124 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v125 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v126 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v127 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v128 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v129 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v130 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v131 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v132 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v133 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v134 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v135 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v136 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v137 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v138 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v139 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v140 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v141 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v142 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v143 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v144 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v145 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v146 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v147 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v148 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v149 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v150 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v151 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v152 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v153 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v154 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v155 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v156 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v157 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v158 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v159 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v160 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v161 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v162 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v163 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v164 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v165 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v166 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v167 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v168 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v169 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v170 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v171 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v172 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v173 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v174 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v175 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v176 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v177 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v178 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v179 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v180 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v181 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v182 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v183 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v184 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v185 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v186 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v187 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v188 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v189 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v190 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v191 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v192 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v193 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v194 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v195 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v196 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v197 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v198 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v199 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v200 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v201 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v202 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v203 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v204 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v205 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v206 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v207 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v208 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v209 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v210 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v211 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v212 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v213 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v214 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v215 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v216 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v217 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v218 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v219 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v220 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v221 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v222 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v223 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v224 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v225 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v226 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v227 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v228 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v229 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v230 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v231 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v232 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v233 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v234 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v235 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v236 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v237 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v238 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v239 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v240 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v241 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v242 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v243 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v244 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v245 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v246 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v247 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v248 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v249 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v250 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v251 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v252 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v253 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v254 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v255 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v256 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v257 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v258 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v259 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v260 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v261 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v262 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v263 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v264 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v265 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v266 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v267 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v268 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v269 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v270 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v271 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v272 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v273 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v274 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v275 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v276 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v277 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v278 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v279 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v280 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v281 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v282 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v283 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v284 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v285 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v286 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v287 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v288 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v289 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v290 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v291 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v292 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v293 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v294 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v295 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v296 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v297 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v298 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v299 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v300 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v301 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v302 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v303 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v304 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v305 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v306 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v307 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v308 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v309 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v310 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v311 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v312 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v313 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v314 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v315 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v316 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v317 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v318 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v319 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v320 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v321 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v322 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v323 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v324 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v325 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v326 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v327 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v328 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v329 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v330 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v331 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v332 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v333 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v334 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v335 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v336 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v337 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v338 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v339 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v340 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v341 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v342 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v343 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v344 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v345 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v346 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v347 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v348 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v349 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v350 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v351 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v352 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v353 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v354 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v355 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v356 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v357 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v358 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v359 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v360 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v361 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v362 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v363 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v364 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v365 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v366 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v367 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v368 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v369 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v370 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v371 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v372 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v373 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v374 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v375 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v376 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v377 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v378 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v379 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v380 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v381 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v382 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v383 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v384 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v385 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v386 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v387 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v388 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v389 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v390 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v391 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v392 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v393 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v394 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v395 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v396 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v397 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v398 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v399 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v400 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v401 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v402 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v403 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v404 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v405 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v406 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v407 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v408 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v409 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v410 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v411 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v412 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v413 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v414 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v415 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v416 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v417 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v418 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v419 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v420 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v421 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v422 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v423 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v424 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v425 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v426 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v427 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v428 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v429 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v430 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v431 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v432 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v433 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v434 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v435 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v436 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v437 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v438 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v439 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v440 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v441 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v442 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v443 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v444 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v445 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v446 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v447 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v448 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v449 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v450 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v451 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v452 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v453 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v454 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v455 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v456 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v457 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v458 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v459 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v460 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v461 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v462 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v463 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v464 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v465 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v466 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v467 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v468 = 2U;
    }
}
