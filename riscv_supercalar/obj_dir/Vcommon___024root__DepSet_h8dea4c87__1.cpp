// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__4(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->reset_n) {
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v469 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x754U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1d5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1d5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1d5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1d5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v470 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x758U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1d6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1d6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1d6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1d6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v471 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x75cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1d7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1d7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1d7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1d7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v472 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x760U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1d8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1d8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1d8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1d8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v473 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x764U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1d9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1d9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1d9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1d9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v474 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x768U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1daU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1daU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1daU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1daU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v475 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x76cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1dbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1dbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1dbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1dbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v476 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x770U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1dcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1dcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1dcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1dcU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v477 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x774U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1ddU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1ddU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1ddU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1ddU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v478 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x778U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1deU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1deU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1deU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1deU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v479 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x77cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1dfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1dfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1dfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1dfU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v480 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x780U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1e0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1e0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1e0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1e0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v481 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x784U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1e1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1e1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1e1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1e1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v482 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x788U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1e2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1e2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1e2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1e2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v483 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x78cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1e3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1e3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1e3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1e3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v484 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x790U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1e4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1e4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1e4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1e4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v485 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x794U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1e5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1e5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1e5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1e5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v486 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x798U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1e6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1e6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1e6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1e6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v487 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x79cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1e7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1e7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1e7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1e7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v488 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7a0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1e8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1e8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1e8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1e8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v489 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7a4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1e9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1e9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1e9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1e9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v490 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7a8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1eaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1eaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1eaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1eaU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v491 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7acU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1ebU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1ebU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1ebU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1ebU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v492 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7b0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1ecU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1ecU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1ecU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1ecU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v493 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7b4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1edU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1edU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1edU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1edU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v494 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7b8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1eeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1eeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1eeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1eeU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v495 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7bcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1efU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1efU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1efU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1efU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v496 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7c0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1f0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1f0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1f0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1f0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v497 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7c4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1f1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1f1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1f1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1f1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v498 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7c8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1f2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1f2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1f2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1f2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v499 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7ccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1f3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1f3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1f3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1f3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v500 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7d0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1f4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1f4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1f4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1f4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v501 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7d4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1f5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1f5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1f5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1f5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v502 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7d8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1f6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1f6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1f6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1f6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v503 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7dcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1f7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1f7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1f7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1f7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v504 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7e0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1f8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1f8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1f8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1f8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v505 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7e4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1f9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1f9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1f9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1f9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v506 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7e8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1faU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1faU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1faU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1faU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v507 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7ecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1fbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1fbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1fbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1fbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v508 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7f0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1fcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1fcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1fcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1fcU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v509 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7f4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1fdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1fdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1fdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1fdU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v510 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7f8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1feU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1feU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1feU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1feU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v511 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x7fcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x1ffU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x1ffU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x1ffU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x1ffU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v512 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x800U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x200U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x200U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x200U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x200U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v513 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x804U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x201U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x201U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x201U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x201U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v514 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x808U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x202U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x202U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x202U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x202U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v515 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x80cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x203U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x203U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x203U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x203U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v516 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x810U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x204U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x204U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x204U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x204U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v517 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x814U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x205U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x205U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x205U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x205U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v518 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x818U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x206U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x206U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x206U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x206U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v519 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x81cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x207U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x207U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x207U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x207U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v520 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x820U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x208U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x208U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x208U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x208U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v521 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x824U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x209U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x209U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x209U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x209U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v522 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x828U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x20aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x20aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x20aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x20aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v523 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x82cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x20bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x20bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x20bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x20bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v524 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x830U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x20cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x20cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x20cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x20cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v525 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x834U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x20dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x20dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x20dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x20dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v526 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x838U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x20eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x20eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x20eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x20eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v527 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x83cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x20fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x20fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x20fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x20fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v528 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x840U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x210U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x210U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x210U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x210U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v529 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x844U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x211U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x211U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x211U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x211U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v530 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x848U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x212U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x212U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x212U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x212U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v531 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x84cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x213U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x213U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x213U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x213U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v532 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x850U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x214U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x214U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x214U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x214U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v533 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x854U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x215U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x215U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x215U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x215U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v534 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x858U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x216U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x216U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x216U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x216U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v535 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x85cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x217U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x217U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x217U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x217U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v536 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x860U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x218U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x218U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x218U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x218U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v537 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x864U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x219U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x219U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x219U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x219U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v538 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x868U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x21aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x21aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x21aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x21aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v539 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x86cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x21bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x21bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x21bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x21bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v540 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x870U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x21cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x21cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x21cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x21cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v541 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x874U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x21dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x21dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x21dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x21dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v542 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x878U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x21eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x21eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x21eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x21eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v543 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x87cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x21fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x21fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x21fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x21fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v544 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x880U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x220U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x220U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x220U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x220U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v545 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x884U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x221U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x221U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x221U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x221U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v546 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x888U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x222U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x222U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x222U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x222U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v547 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x88cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x223U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x223U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x223U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x223U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v548 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x890U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x224U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x224U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x224U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x224U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v549 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x894U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x225U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x225U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x225U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x225U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v550 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x898U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x226U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x226U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x226U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x226U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v551 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x89cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x227U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x227U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x227U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x227U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v552 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8a0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x228U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x228U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x228U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x228U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v553 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8a4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x229U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x229U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x229U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x229U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v554 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8a8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x22aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x22aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x22aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x22aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v555 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8acU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x22bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x22bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x22bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x22bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v556 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8b0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x22cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x22cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x22cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x22cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v557 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8b4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x22dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x22dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x22dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x22dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v558 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8b8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x22eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x22eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x22eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x22eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v559 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8bcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x22fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x22fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x22fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x22fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v560 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8c0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x230U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x230U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x230U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x230U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v561 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8c4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x231U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x231U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x231U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x231U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v562 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8c8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x232U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x232U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x232U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x232U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v563 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8ccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x233U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x233U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x233U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x233U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v564 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8d0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x234U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x234U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x234U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x234U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v565 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8d4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x235U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x235U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x235U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x235U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v566 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8d8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x236U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x236U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x236U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x236U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v567 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8dcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x237U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x237U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x237U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x237U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v568 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8e0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x238U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x238U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x238U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x238U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v569 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8e4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x239U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x239U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x239U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x239U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v570 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8e8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x23aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x23aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x23aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x23aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v571 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8ecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x23bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x23bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x23bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x23bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v572 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8f0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x23cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x23cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x23cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x23cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v573 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8f4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x23dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x23dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x23dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x23dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v574 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8f8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x23eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x23eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x23eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x23eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v575 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x8fcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x23fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x23fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x23fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x23fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v576 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x900U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x240U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x240U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x240U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x240U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v577 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x904U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x241U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x241U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x241U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x241U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v578 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x908U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x242U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x242U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x242U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x242U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v579 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x90cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x243U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x243U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x243U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x243U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v580 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x910U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x244U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x244U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x244U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x244U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v581 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x914U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x245U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x245U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x245U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x245U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v582 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x918U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x246U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x246U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x246U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x246U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v583 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x91cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x247U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x247U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x247U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x247U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v584 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x920U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x248U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x248U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x248U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x248U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v585 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x924U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x249U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x249U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x249U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x249U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v586 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x928U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x24aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x24aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x24aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x24aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v587 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x92cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x24bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x24bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x24bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x24bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v588 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x930U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x24cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x24cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x24cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x24cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v589 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x934U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x24dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x24dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x24dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x24dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v590 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x938U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x24eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x24eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x24eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x24eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v591 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x93cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x24fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x24fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x24fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x24fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v592 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x940U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x250U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x250U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x250U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x250U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v593 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x944U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x251U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x251U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x251U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x251U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v594 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x948U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x252U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x252U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x252U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x252U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v595 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x94cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x253U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x253U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x253U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x253U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v596 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x950U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x254U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x254U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x254U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x254U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v597 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x954U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x255U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x255U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x255U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x255U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v598 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x958U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x256U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x256U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x256U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x256U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v599 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x95cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x257U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x257U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x257U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x257U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v600 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x960U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x258U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x258U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x258U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x258U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v601 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x964U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x259U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x259U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x259U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x259U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v602 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x968U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x25aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x25aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x25aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x25aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v603 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x96cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x25bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x25bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x25bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x25bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v604 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x970U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x25cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x25cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x25cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x25cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v605 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x974U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x25dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x25dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x25dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x25dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v606 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x978U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x25eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x25eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x25eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x25eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v607 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x97cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x25fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x25fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x25fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x25fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v608 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x980U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x260U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x260U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x260U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x260U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v609 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x984U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x261U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x261U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x261U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x261U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v610 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x988U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x262U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x262U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x262U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x262U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v611 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x98cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x263U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x263U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x263U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x263U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v612 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x990U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x264U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x264U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x264U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x264U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v613 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x994U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x265U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x265U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x265U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x265U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v614 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x998U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x266U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x266U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x266U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x266U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v615 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x99cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x267U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x267U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x267U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x267U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v616 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9a0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x268U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x268U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x268U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x268U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v617 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9a4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x269U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x269U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x269U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x269U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v618 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9a8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x26aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x26aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x26aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x26aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v619 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9acU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x26bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x26bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x26bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x26bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v620 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9b0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x26cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x26cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x26cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x26cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v621 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9b4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x26dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x26dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x26dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x26dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v622 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9b8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x26eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x26eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x26eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x26eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v623 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9bcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x26fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x26fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x26fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x26fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v624 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9c0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x270U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x270U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x270U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x270U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v625 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9c4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x271U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x271U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x271U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x271U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v626 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9c8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x272U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x272U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x272U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x272U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v627 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9ccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x273U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x273U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x273U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x273U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v628 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9d0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x274U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x274U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x274U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x274U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v629 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9d4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x275U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x275U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x275U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x275U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v630 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9d8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x276U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x276U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x276U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x276U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v631 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9dcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x277U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x277U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x277U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x277U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v632 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9e0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x278U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x278U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x278U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x278U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v633 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9e4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x279U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x279U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x279U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x279U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v634 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9e8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x27aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x27aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x27aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x27aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v635 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9ecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x27bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x27bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x27bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x27bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v636 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9f0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x27cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x27cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x27cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x27cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v637 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9f4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x27dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x27dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x27dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x27dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v638 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9f8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x27eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x27eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x27eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x27eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v639 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x9fcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x27fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x27fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x27fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x27fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v640 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa00U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x280U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x280U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x280U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x280U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v641 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa04U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x281U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x281U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x281U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x281U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v642 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa08U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x282U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x282U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x282U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x282U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v643 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa0cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x283U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x283U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x283U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x283U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v644 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa10U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x284U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x284U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x284U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x284U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v645 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa14U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x285U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x285U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x285U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x285U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v646 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa18U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x286U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x286U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x286U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x286U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v647 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa1cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x287U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x287U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x287U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x287U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v648 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa20U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x288U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x288U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x288U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x288U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v649 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa24U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x289U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x289U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x289U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x289U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v650 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa28U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x28aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x28aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x28aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x28aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v651 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa2cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x28bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x28bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x28bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x28bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v652 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa30U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x28cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x28cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x28cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x28cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v653 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa34U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x28dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x28dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x28dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x28dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v654 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa38U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x28eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x28eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x28eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x28eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v655 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa3cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x28fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x28fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x28fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x28fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v656 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa40U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x290U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x290U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x290U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x290U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v657 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa44U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x291U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x291U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x291U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x291U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v658 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa48U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x292U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x292U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x292U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x292U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v659 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa4cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x293U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x293U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x293U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x293U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v660 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa50U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x294U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x294U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x294U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x294U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v661 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa54U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x295U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x295U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x295U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x295U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v662 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa58U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x296U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x296U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x296U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x296U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v663 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa5cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x297U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x297U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x297U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x297U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v664 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa60U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x298U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x298U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x298U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x298U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v665 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa64U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x299U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x299U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x299U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x299U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v666 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa68U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x29aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x29aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x29aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x29aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v667 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa6cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x29bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x29bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x29bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x29bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v668 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa70U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x29cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x29cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x29cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x29cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v669 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa74U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x29dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x29dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x29dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x29dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v670 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa78U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x29eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x29eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x29eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x29eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v671 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa7cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x29fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x29fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x29fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x29fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v672 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa80U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2a0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2a0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2a0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2a0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v673 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa84U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2a1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2a1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2a1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2a1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v674 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa88U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2a2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2a2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2a2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2a2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v675 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa8cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2a3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2a3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2a3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2a3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v676 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa90U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2a4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2a4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2a4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2a4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v677 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa94U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2a5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2a5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2a5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2a5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v678 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa98U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2a6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2a6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2a6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2a6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v679 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xa9cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2a7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2a7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2a7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2a7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v680 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xaa0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2a8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2a8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2a8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2a8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v681 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xaa4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2a9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2a9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2a9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2a9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v682 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xaa8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2aaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2aaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2aaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2aaU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v683 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xaacU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2abU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2abU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2abU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2abU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v684 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xab0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2acU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2acU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2acU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2acU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v685 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xab4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2adU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2adU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2adU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2adU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v686 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xab8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2aeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2aeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2aeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2aeU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v687 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xabcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2afU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2afU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2afU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2afU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v688 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xac0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2b0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2b0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2b0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2b0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v689 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xac4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2b1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2b1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2b1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2b1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v690 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xac8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2b2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2b2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2b2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2b2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v691 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xaccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2b3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2b3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2b3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2b3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v692 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xad0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2b4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2b4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2b4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2b4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v693 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xad4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2b5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2b5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2b5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2b5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v694 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xad8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2b6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2b6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2b6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2b6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v695 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xadcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2b7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2b7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2b7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2b7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v696 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xae0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2b8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2b8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2b8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2b8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v697 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xae4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2b9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2b9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2b9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2b9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v698 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xae8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2baU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2baU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2baU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2baU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v699 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xaecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2bbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2bbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2bbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2bbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v700 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xaf0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2bcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2bcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2bcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2bcU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v701 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xaf4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2bdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2bdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2bdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2bdU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v702 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xaf8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2beU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2beU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2beU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2beU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v703 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xafcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2bfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2bfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2bfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2bfU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v704 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb00U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2c0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2c0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2c0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2c0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v705 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb04U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2c1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2c1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2c1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2c1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v706 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb08U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2c2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2c2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2c2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2c2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v707 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb0cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2c3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2c3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2c3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2c3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v708 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb10U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2c4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2c4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2c4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2c4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v709 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb14U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2c5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2c5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2c5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2c5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v710 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb18U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2c6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2c6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2c6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2c6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v711 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb1cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2c7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2c7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2c7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2c7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v712 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb20U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2c8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2c8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2c8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2c8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v713 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb24U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2c9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2c9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2c9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2c9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v714 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb28U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2caU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2caU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2caU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2caU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v715 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb2cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2cbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2cbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2cbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2cbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v716 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb30U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2ccU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2ccU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2ccU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2ccU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v717 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb34U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2cdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2cdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2cdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2cdU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v718 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb38U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2ceU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2ceU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2ceU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2ceU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v719 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb3cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2cfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2cfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2cfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2cfU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v720 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb40U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2d0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2d0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2d0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2d0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v721 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb44U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2d1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2d1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2d1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2d1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v722 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb48U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2d2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2d2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2d2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2d2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v723 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb4cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2d3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2d3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2d3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2d3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v724 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb50U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2d4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2d4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2d4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2d4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v725 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb54U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2d5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2d5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2d5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2d5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v726 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb58U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2d6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2d6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2d6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2d6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v727 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb5cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2d7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2d7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2d7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2d7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v728 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb60U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2d8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2d8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2d8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2d8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v729 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb64U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2d9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2d9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2d9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2d9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v730 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb68U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2daU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2daU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2daU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2daU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v731 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb6cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2dbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2dbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2dbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2dbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v732 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb70U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2dcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2dcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2dcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2dcU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v733 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb74U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2ddU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2ddU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2ddU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2ddU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v734 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb78U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2deU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2deU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2deU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2deU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v735 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb7cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2dfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2dfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2dfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2dfU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v736 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb80U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2e0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2e0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2e0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2e0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v737 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb84U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2e1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2e1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2e1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2e1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v738 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb88U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2e2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2e2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2e2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2e2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v739 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb8cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2e3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2e3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2e3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2e3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v740 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb90U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2e4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2e4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2e4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2e4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v741 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb94U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2e5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2e5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2e5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2e5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v742 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb98U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2e6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2e6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2e6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2e6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v743 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xb9cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2e7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2e7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2e7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2e7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v744 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xba0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2e8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2e8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2e8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2e8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v745 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xba4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2e9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2e9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2e9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2e9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v746 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xba8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2eaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2eaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2eaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2eaU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v747 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbacU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2ebU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2ebU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2ebU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2ebU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v748 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbb0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2ecU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2ecU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2ecU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2ecU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v749 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbb4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2edU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2edU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2edU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2edU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v750 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbb8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2eeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2eeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2eeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2eeU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v751 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbbcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2efU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2efU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2efU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2efU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v752 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbc0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2f0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2f0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2f0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2f0U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v753 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbc4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2f1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2f1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2f1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2f1U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v754 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbc8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2f2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2f2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2f2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2f2U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v755 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2f3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2f3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2f3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2f3U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v756 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbd0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2f4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2f4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2f4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2f4U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v757 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbd4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2f5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2f5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2f5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2f5U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v758 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbd8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2f6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2f6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2f6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2f6U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v759 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbdcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2f7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2f7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2f7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2f7U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v760 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbe0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2f8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2f8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2f8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2f8U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v761 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbe4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2f9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2f9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2f9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2f9U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v762 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbe8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2faU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2faU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2faU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2faU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v763 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2fbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2fbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2fbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2fbU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v764 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbf0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2fcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2fcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2fcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2fcU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v765 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbf4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2fdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2fdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2fdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2fdU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v766 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbf8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2feU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2feU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2feU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2feU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v767 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xbfcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x2ffU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x2ffU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x2ffU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x2ffU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v768 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc00U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x300U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x300U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x300U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x300U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v769 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc04U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x301U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x301U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x301U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x301U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v770 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc08U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x302U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x302U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x302U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x302U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v771 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc0cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x303U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x303U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x303U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x303U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v772 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc10U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x304U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x304U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x304U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x304U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v773 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc14U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x305U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x305U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x305U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x305U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v774 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc18U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x306U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x306U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x306U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x306U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v775 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc1cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x307U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x307U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x307U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x307U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v776 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc20U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x308U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x308U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x308U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x308U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v777 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc24U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x309U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x309U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x309U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x309U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v778 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc28U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x30aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x30aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x30aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x30aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v779 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc2cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x30bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x30bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x30bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x30bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v780 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc30U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x30cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x30cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x30cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x30cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v781 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc34U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x30dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x30dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x30dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x30dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v782 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc38U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x30eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x30eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x30eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x30eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v783 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc3cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x30fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x30fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x30fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x30fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v784 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc40U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x310U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x310U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x310U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x310U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v785 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc44U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x311U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x311U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x311U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x311U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v786 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc48U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x312U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x312U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x312U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x312U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v787 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc4cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x313U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x313U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x313U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x313U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v788 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc50U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x314U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x314U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x314U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x314U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v789 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc54U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x315U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x315U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x315U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x315U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v790 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc58U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x316U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x316U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x316U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x316U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v791 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc5cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x317U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x317U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x317U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x317U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v792 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc60U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x318U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x318U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x318U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x318U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v793 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc64U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x319U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x319U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x319U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x319U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v794 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc68U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x31aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x31aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x31aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x31aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v795 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc6cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x31bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x31bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x31bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x31bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v796 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc70U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x31cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x31cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x31cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x31cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v797 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc74U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x31dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x31dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x31dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x31dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v798 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc78U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x31eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x31eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x31eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x31eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v799 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc7cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x31fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x31fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x31fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x31fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v800 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc80U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x320U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x320U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x320U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x320U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v801 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc84U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x321U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x321U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x321U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x321U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v802 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc88U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x322U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x322U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x322U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x322U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v803 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc8cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x323U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x323U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x323U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x323U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v804 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc90U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x324U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x324U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x324U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x324U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v805 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc94U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x325U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x325U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x325U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x325U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v806 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc98U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x326U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x326U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x326U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x326U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v807 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xc9cU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x327U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x327U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x327U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x327U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v808 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xca0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x328U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x328U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x328U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x328U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v809 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xca4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x329U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x329U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x329U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x329U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v810 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xca8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x32aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x32aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x32aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x32aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v811 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xcacU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x32bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x32bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x32bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x32bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v812 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xcb0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x32cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x32cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x32cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x32cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v813 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xcb4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x32dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x32dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x32dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x32dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v814 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xcb8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x32eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x32eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x32eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x32eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v815 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xcbcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x32fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x32fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x32fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x32fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v816 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xcc0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x330U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x330U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x330U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x330U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v817 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xcc4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x331U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x331U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x331U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x331U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v818 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xcc8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x332U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x332U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x332U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x332U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v819 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xcccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x333U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x333U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x333U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x333U]);
    } else {
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v469 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v470 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v471 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v472 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v473 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v474 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v475 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v476 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v477 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v478 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v479 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v480 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v481 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v482 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v483 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v484 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v485 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v486 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v487 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v488 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v489 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v490 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v491 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v492 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v493 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v494 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v495 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v496 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v497 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v498 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v499 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v500 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v501 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v502 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v503 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v504 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v505 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v506 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v507 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v508 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v509 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v510 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v511 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v512 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v513 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v514 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v515 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v516 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v517 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v518 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v519 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v520 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v521 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v522 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v523 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v524 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v525 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v526 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v527 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v528 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v529 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v530 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v531 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v532 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v533 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v534 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v535 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v536 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v537 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v538 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v539 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v540 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v541 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v542 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v543 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v544 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v545 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v546 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v547 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v548 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v549 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v550 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v551 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v552 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v553 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v554 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v555 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v556 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v557 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v558 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v559 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v560 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v561 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v562 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v563 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v564 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v565 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v566 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v567 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v568 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v569 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v570 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v571 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v572 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v573 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v574 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v575 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v576 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v577 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v578 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v579 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v580 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v581 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v582 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v583 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v584 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v585 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v586 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v587 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v588 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v589 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v590 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v591 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v592 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v593 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v594 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v595 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v596 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v597 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v598 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v599 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v600 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v601 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v602 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v603 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v604 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v605 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v606 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v607 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v608 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v609 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v610 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v611 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v612 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v613 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v614 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v615 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v616 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v617 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v618 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v619 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v620 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v621 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v622 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v623 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v624 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v625 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v626 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v627 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v628 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v629 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v630 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v631 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v632 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v633 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v634 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v635 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v636 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v637 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v638 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v639 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v640 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v641 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v642 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v643 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v644 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v645 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v646 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v647 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v648 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v649 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v650 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v651 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v652 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v653 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v654 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v655 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v656 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v657 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v658 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v659 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v660 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v661 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v662 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v663 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v664 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v665 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v666 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v667 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v668 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v669 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v670 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v671 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v672 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v673 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v674 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v675 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v676 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v677 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v678 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v679 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v680 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v681 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v682 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v683 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v684 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v685 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v686 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v687 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v688 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v689 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v690 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v691 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v692 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v693 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v694 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v695 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v696 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v697 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v698 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v699 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v700 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v701 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v702 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v703 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v704 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v705 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v706 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v707 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v708 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v709 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v710 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v711 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v712 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v713 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v714 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v715 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v716 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v717 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v718 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v719 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v720 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v721 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v722 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v723 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v724 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v725 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v726 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v727 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v728 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v729 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v730 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v731 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v732 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v733 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v734 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v735 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v736 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v737 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v738 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v739 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v740 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v741 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v742 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v743 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v744 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v745 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v746 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v747 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v748 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v749 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v750 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v751 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v752 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v753 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v754 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v755 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v756 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v757 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v758 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v759 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v760 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v761 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v762 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v763 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v764 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v765 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v766 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v767 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v768 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v769 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v770 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v771 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v772 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v773 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v774 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v775 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v776 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v777 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v778 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v779 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v780 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v781 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v782 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v783 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v784 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v785 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v786 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v787 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v788 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v789 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v790 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v791 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v792 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v793 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v794 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v795 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v796 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v797 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v798 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v799 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v800 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v801 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v802 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v803 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v804 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v805 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v806 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v807 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v808 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v809 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v810 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v811 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v812 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v813 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v814 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v815 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v816 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v817 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v818 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v819 = 2U;
    }
}

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__5(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__5\n"); );
    // Init
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v820;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v821;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v822;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v823;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v824;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v825;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v826;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v827;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v828;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v829;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v830;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v831;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v832;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v833;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v834;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v835;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v836;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v837;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v838;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v839;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v840;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v841;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v842;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v843;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v844;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v845;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v846;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v847;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v848;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v849;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v850;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v851;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v852;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v853;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v854;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v855;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v856;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v857;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v858;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v859;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v860;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v861;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v862;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v863;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v864;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v865;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v866;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v867;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v868;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v869;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v870;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v871;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v872;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v873;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v874;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v875;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v876;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v877;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v878;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v879;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v880;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v881;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v882;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v883;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v884;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v885;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v886;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v887;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v888;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v889;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v890;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v891;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v892;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v893;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v894;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v895;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v896;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v897;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v898;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v899;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v900;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v901;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v902;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v903;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v904;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v905;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v906;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v907;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v908;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v909;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v910;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v911;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v912;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v913;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v914;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v915;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v916;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v917;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v918;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v919;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v920;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v921;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v922;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v923;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v924;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v925;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v926;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v927;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v928;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v929;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v930;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v931;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v932;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v933;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v934;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v935;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v936;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v937;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v938;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v939;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v940;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v941;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v942;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v943;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v944;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v945;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v946;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v947;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v948;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v949;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v950;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v951;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v952;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v953;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v954;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v955;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v956;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v957;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v958;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v959;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v960;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v961;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v962;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v963;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v964;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v965;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v966;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v967;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v968;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v969;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v970;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v971;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v972;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v973;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v974;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v975;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v976;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v977;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v978;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v979;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v980;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v981;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v982;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v983;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v984;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v985;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v986;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v987;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v988;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v989;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v990;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v991;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v992;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v993;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v994;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v995;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v996;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v997;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v998;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v999;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1000;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1001;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1002;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1003;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1004;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1005;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1006;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1007;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1008;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1009;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1010;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1011;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1012;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1013;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1014;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1015;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1016;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1017;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1018;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1019;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1020;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1021;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1022;
    CData/*1:0*/ __Vdlyvval__gshare__DOT__GSHARE_PHT__v1023;
    // Body
    if (vlSelf->reset_n) {
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v820 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xcd0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x334U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x334U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x334U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x334U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v821 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xcd4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x335U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x335U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x335U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x335U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v822 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xcd8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x336U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x336U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x336U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x336U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v823 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xcdcU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x337U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x337U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x337U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x337U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v824 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xce0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x338U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x338U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x338U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x338U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v825 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xce4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x339U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x339U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x339U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x339U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v826 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xce8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x33aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x33aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x33aU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x33aU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v827 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xcecU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x33bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x33bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x33bU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x33bU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v828 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xcf0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x33cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x33cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x33cU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x33cU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v829 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xcf4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x33dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x33dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x33dU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x33dU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v830 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xcf8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x33eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x33eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x33eU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x33eU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v831 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xcfcU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x33fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x33fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x33fU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x33fU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v832 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd00U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x340U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x340U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x340U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x340U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v833 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd04U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x341U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x341U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x341U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x341U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v834 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd08U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x342U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x342U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x342U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x342U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v835 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd0cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x343U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x343U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x343U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x343U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v836 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd10U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x344U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x344U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x344U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x344U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v837 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd14U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x345U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x345U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x345U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x345U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v838 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd18U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x346U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x346U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x346U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x346U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v839 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd1cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x347U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x347U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x347U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x347U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v840 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd20U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x348U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x348U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x348U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x348U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v841 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd24U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x349U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x349U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x349U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x349U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v842 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd28U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x34aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x34aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x34aU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x34aU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v843 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd2cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x34bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x34bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x34bU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x34bU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v844 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd30U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x34cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x34cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x34cU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x34cU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v845 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd34U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x34dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x34dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x34dU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x34dU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v846 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd38U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x34eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x34eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x34eU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x34eU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v847 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd3cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x34fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x34fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x34fU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x34fU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v848 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd40U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x350U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x350U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x350U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x350U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v849 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd44U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x351U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x351U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x351U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x351U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v850 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd48U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x352U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x352U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x352U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x352U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v851 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd4cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x353U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x353U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x353U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x353U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v852 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd50U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x354U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x354U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x354U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x354U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v853 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd54U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x355U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x355U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x355U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x355U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v854 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd58U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x356U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x356U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x356U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x356U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v855 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd5cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x357U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x357U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x357U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x357U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v856 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd60U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x358U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x358U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x358U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x358U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v857 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd64U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x359U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x359U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x359U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x359U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v858 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd68U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x35aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x35aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x35aU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x35aU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v859 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd6cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x35bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x35bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x35bU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x35bU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v860 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd70U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x35cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x35cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x35cU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x35cU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v861 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd74U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x35dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x35dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x35dU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x35dU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v862 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd78U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x35eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x35eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x35eU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x35eU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v863 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd7cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x35fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x35fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x35fU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x35fU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v864 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd80U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x360U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x360U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x360U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x360U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v865 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd84U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x361U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x361U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x361U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x361U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v866 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd88U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x362U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x362U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x362U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x362U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v867 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd8cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x363U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x363U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x363U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x363U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v868 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd90U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x364U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x364U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x364U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x364U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v869 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd94U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x365U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x365U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x365U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x365U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v870 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd98U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x366U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x366U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x366U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x366U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v871 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xd9cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x367U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x367U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x367U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x367U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v872 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xda0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x368U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x368U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x368U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x368U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v873 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xda4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x369U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x369U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x369U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x369U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v874 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xda8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x36aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x36aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x36aU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x36aU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v875 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdacU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x36bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x36bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x36bU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x36bU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v876 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdb0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x36cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x36cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x36cU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x36cU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v877 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdb4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x36dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x36dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x36dU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x36dU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v878 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdb8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x36eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x36eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x36eU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x36eU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v879 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdbcU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x36fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x36fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x36fU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x36fU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v880 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdc0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x370U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x370U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x370U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x370U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v881 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdc4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x371U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x371U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x371U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x371U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v882 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdc8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x372U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x372U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x372U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x372U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v883 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdccU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x373U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x373U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x373U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x373U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v884 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdd0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x374U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x374U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x374U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x374U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v885 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdd4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x375U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x375U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x375U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x375U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v886 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdd8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x376U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x376U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x376U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x376U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v887 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xddcU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x377U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x377U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x377U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x377U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v888 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xde0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x378U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x378U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x378U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x378U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v889 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xde4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x379U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x379U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x379U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x379U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v890 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xde8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x37aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x37aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x37aU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x37aU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v891 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdecU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x37bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x37bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x37bU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x37bU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v892 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdf0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x37cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x37cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x37cU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x37cU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v893 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdf4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x37dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x37dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x37dU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x37dU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v894 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdf8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x37eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x37eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x37eU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x37eU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v895 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xdfcU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x37fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x37fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x37fU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x37fU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v896 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe00U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x380U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x380U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x380U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x380U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v897 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe04U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x381U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x381U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x381U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x381U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v898 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe08U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x382U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x382U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x382U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x382U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v899 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe0cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x383U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x383U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x383U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x383U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v900 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe10U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x384U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x384U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x384U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x384U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v901 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe14U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x385U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x385U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x385U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x385U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v902 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe18U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x386U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x386U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x386U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x386U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v903 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe1cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x387U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x387U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x387U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x387U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v904 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe20U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x388U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x388U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x388U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x388U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v905 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe24U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x389U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x389U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x389U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x389U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v906 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe28U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x38aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x38aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x38aU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x38aU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v907 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe2cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x38bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x38bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x38bU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x38bU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v908 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe30U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x38cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x38cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x38cU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x38cU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v909 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe34U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x38dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x38dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x38dU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x38dU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v910 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe38U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x38eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x38eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x38eU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x38eU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v911 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe3cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x38fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x38fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x38fU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x38fU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v912 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe40U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x390U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x390U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x390U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x390U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v913 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe44U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x391U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x391U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x391U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x391U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v914 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe48U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x392U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x392U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x392U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x392U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v915 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe4cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x393U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x393U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x393U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x393U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v916 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe50U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x394U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x394U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x394U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x394U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v917 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe54U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x395U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x395U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x395U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x395U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v918 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe58U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x396U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x396U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x396U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x396U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v919 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe5cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x397U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x397U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x397U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x397U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v920 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe60U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x398U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x398U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x398U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x398U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v921 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe64U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x399U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x399U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x399U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x399U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v922 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe68U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x39aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x39aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x39aU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x39aU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v923 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe6cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x39bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x39bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x39bU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x39bU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v924 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe70U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x39cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x39cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x39cU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x39cU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v925 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe74U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x39dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x39dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x39dU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x39dU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v926 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe78U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x39eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x39eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x39eU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x39eU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v927 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe7cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x39fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x39fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x39fU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x39fU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v928 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe80U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3a0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3a0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3a0U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3a0U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v929 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe84U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3a1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3a1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3a1U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3a1U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v930 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe88U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3a2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3a2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3a2U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3a2U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v931 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe8cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3a3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3a3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3a3U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3a3U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v932 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe90U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3a4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3a4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3a4U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3a4U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v933 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe94U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3a5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3a5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3a5U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3a5U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v934 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe98U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3a6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3a6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3a6U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3a6U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v935 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xe9cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3a7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3a7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3a7U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3a7U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v936 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xea0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3a8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3a8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3a8U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3a8U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v937 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xea4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3a9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3a9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3a9U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3a9U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v938 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xea8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3aaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3aaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3aaU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3aaU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v939 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xeacU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3abU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3abU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3abU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3abU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v940 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xeb0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3acU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3acU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3acU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3acU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v941 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xeb4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3adU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3adU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3adU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3adU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v942 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xeb8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3aeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3aeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3aeU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3aeU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v943 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xebcU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3afU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3afU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3afU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3afU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v944 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xec0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3b0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3b0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3b0U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3b0U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v945 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xec4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3b1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3b1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3b1U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3b1U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v946 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xec8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3b2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3b2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3b2U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3b2U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v947 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xeccU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3b3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3b3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3b3U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3b3U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v948 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xed0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3b4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3b4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3b4U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3b4U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v949 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xed4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3b5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3b5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3b5U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3b5U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v950 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xed8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3b6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3b6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3b6U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3b6U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v951 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xedcU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3b7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3b7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3b7U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3b7U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v952 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xee0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3b8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3b8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3b8U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3b8U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v953 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xee4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3b9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3b9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3b9U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3b9U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v954 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xee8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3baU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3baU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3baU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3baU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v955 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xeecU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3bbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3bbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3bbU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3bbU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v956 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xef0U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3bcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3bcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3bcU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3bcU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v957 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xef4U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3bdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3bdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3bdU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3bdU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v958 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xef8U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3beU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3beU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3beU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3beU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v959 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xefcU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3bfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3bfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3bfU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3bfU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v960 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf00U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3c0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3c0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3c0U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3c0U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v961 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf04U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3c1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3c1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3c1U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3c1U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v962 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf08U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3c2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3c2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3c2U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3c2U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v963 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf0cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3c3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3c3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3c3U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3c3U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v964 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf10U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3c4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3c4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3c4U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3c4U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v965 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf14U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3c5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3c5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3c5U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3c5U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v966 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf18U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3c6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3c6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3c6U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3c6U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v967 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf1cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3c7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3c7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3c7U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3c7U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v968 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf20U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3c8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3c8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3c8U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3c8U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v969 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf24U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3c9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3c9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3c9U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3c9U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v970 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf28U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3caU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3caU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3caU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3caU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v971 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf2cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3cbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3cbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3cbU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3cbU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v972 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf30U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3ccU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3ccU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3ccU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3ccU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v973 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf34U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3cdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3cdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3cdU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3cdU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v974 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf38U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3ceU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3ceU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3ceU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3ceU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v975 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf3cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3cfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3cfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3cfU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3cfU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v976 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf40U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3d0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3d0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3d0U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3d0U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v977 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf44U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3d1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3d1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3d1U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3d1U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v978 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf48U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3d2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3d2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3d2U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3d2U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v979 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf4cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3d3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3d3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3d3U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3d3U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v980 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf50U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3d4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3d4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3d4U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3d4U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v981 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf54U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3d5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3d5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3d5U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3d5U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v982 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf58U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3d6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3d6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3d6U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3d6U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v983 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf5cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3d7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3d7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3d7U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3d7U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v984 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf60U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3d8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3d8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3d8U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3d8U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v985 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf64U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3d9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3d9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3d9U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3d9U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v986 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf68U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3daU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3daU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3daU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3daU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v987 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf6cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3dbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3dbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3dbU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3dbU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v988 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf70U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3dcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3dcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3dcU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3dcU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v989 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf74U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3ddU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3ddU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3ddU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3ddU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v990 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf78U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3deU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3deU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3deU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3deU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v991 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf7cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3dfU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3dfU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3dfU])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3dfU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v992 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf80U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3e0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3e0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3e0U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3e0U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v993 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf84U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3e1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3e1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3e1U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3e1U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v994 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf88U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3e2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3e2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3e2U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3e2U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v995 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf8cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3e3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3e3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3e3U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3e3U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v996 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf90U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3e4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3e4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3e4U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3e4U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v997 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf94U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3e5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3e5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3e5U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3e5U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v998 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf98U 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3e6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3e6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3e6U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3e6U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v999 = 
            (((IData)(vlSelf->EXE_is_BJ) & (0xf9cU 
                                            == (0xffcU 
                                                & vlSelf->EXE_branch_addr)))
              ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                  [0x3e7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                [0x3e7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                              ? 3U : 2U)
                                : ((IData)(vlSelf->EXE_branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->gshare__DOT__GSHARE_PHT
                                                    [0x3e7U])
                                                    ? 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->EXE_branch_taken)
                                                     ? 1U
                                                     : 0U)))
              : vlSelf->gshare__DOT__GSHARE_PHT[0x3e7U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1000 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfa0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3e8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3e8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3e8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3e8U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1001 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfa4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3e9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3e9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3e9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3e9U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1002 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfa8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3eaU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3eaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3eaU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3eaU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1003 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfacU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3ebU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3ebU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3ebU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3ebU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1004 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfb0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3ecU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3ecU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3ecU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3ecU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1005 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfb4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3edU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3edU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3edU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3edU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1006 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfb8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3eeU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3eeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3eeU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3eeU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1007 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfbcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3efU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3efU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3efU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3efU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1008 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfc0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3f0U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3f0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3f0U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3f0U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1009 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfc4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3f1U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3f1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3f1U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3f1U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1010 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfc8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3f2U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3f2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3f2U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3f2U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1011 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfccU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3f3U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3f3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3f3U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3f3U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1012 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfd0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3f4U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3f4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3f4U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3f4U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1013 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfd4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3f5U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3f5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3f5U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3f5U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1014 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfd8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3f6U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3f6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3f6U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3f6U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1015 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfdcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3f7U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3f7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3f7U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3f7U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1016 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfe0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3f8U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3f8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3f8U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3f8U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1017 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfe4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3f9U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3f9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3f9U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3f9U]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1018 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfe8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3faU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3faU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3faU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3faU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1019 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xfecU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3fbU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3fbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3fbU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3fbU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1020 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xff0U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3fcU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3fcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3fcU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3fcU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1021 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xff4U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3fdU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3fdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3fdU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3fdU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1022 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xff8U 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3feU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3feU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3feU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3feU]);
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1023 
            = (((IData)(vlSelf->EXE_is_BJ) & (0xffcU 
                                              == (0xffcU 
                                                  & vlSelf->EXE_branch_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x3ffU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x3ffU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x3ffU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x3ffU]);
    } else {
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v820 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v821 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v822 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v823 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v824 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v825 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v826 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v827 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v828 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v829 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v830 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v831 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v832 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v833 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v834 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v835 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v836 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v837 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v838 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v839 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v840 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v841 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v842 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v843 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v844 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v845 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v846 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v847 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v848 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v849 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v850 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v851 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v852 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v853 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v854 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v855 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v856 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v857 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v858 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v859 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v860 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v861 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v862 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v863 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v864 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v865 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v866 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v867 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v868 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v869 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v870 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v871 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v872 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v873 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v874 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v875 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v876 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v877 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v878 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v879 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v880 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v881 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v882 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v883 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v884 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v885 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v886 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v887 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v888 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v889 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v890 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v891 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v892 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v893 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v894 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v895 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v896 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v897 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v898 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v899 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v900 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v901 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v902 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v903 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v904 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v905 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v906 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v907 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v908 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v909 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v910 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v911 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v912 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v913 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v914 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v915 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v916 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v917 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v918 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v919 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v920 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v921 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v922 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v923 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v924 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v925 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v926 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v927 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v928 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v929 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v930 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v931 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v932 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v933 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v934 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v935 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v936 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v937 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v938 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v939 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v940 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v941 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v942 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v943 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v944 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v945 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v946 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v947 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v948 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v949 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v950 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v951 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v952 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v953 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v954 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v955 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v956 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v957 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v958 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v959 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v960 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v961 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v962 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v963 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v964 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v965 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v966 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v967 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v968 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v969 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v970 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v971 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v972 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v973 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v974 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v975 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v976 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v977 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v978 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v979 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v980 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v981 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v982 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v983 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v984 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v985 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v986 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v987 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v988 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v989 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v990 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v991 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v992 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v993 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v994 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v995 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v996 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v997 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v998 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v999 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1000 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1001 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1002 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1003 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1004 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1005 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1006 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1007 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1008 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1009 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1010 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1011 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1012 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1013 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1014 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1015 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1016 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1017 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1018 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1019 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1020 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1021 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1022 = 2U;
        __Vdlyvval__gshare__DOT__GSHARE_PHT__v1023 = 2U;
    }
    vlSelf->gshare__DOT__GSHARE_PHT[0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v0;
    vlSelf->gshare__DOT__GSHARE_PHT[1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v1;
    vlSelf->gshare__DOT__GSHARE_PHT[2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v2;
    vlSelf->gshare__DOT__GSHARE_PHT[3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v3;
    vlSelf->gshare__DOT__GSHARE_PHT[4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v4;
    vlSelf->gshare__DOT__GSHARE_PHT[5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v5;
    vlSelf->gshare__DOT__GSHARE_PHT[6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v6;
    vlSelf->gshare__DOT__GSHARE_PHT[7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v7;
    vlSelf->gshare__DOT__GSHARE_PHT[8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v8;
    vlSelf->gshare__DOT__GSHARE_PHT[9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v9;
    vlSelf->gshare__DOT__GSHARE_PHT[0xaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v10;
    vlSelf->gshare__DOT__GSHARE_PHT[0xbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v11;
    vlSelf->gshare__DOT__GSHARE_PHT[0xcU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v12;
    vlSelf->gshare__DOT__GSHARE_PHT[0xdU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v13;
    vlSelf->gshare__DOT__GSHARE_PHT[0xeU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v14;
    vlSelf->gshare__DOT__GSHARE_PHT[0xfU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v15;
    vlSelf->gshare__DOT__GSHARE_PHT[0x10U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v16;
    vlSelf->gshare__DOT__GSHARE_PHT[0x11U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v17;
    vlSelf->gshare__DOT__GSHARE_PHT[0x12U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v18;
    vlSelf->gshare__DOT__GSHARE_PHT[0x13U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v19;
    vlSelf->gshare__DOT__GSHARE_PHT[0x14U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v20;
    vlSelf->gshare__DOT__GSHARE_PHT[0x15U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v21;
    vlSelf->gshare__DOT__GSHARE_PHT[0x16U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v22;
    vlSelf->gshare__DOT__GSHARE_PHT[0x17U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v23;
    vlSelf->gshare__DOT__GSHARE_PHT[0x18U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v24;
    vlSelf->gshare__DOT__GSHARE_PHT[0x19U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v25;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v26;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v27;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v28;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v29;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v30;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v31;
    vlSelf->gshare__DOT__GSHARE_PHT[0x20U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v32;
    vlSelf->gshare__DOT__GSHARE_PHT[0x21U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v33;
    vlSelf->gshare__DOT__GSHARE_PHT[0x22U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v34;
    vlSelf->gshare__DOT__GSHARE_PHT[0x23U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v35;
    vlSelf->gshare__DOT__GSHARE_PHT[0x24U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v36;
    vlSelf->gshare__DOT__GSHARE_PHT[0x25U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v37;
    vlSelf->gshare__DOT__GSHARE_PHT[0x26U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v38;
    vlSelf->gshare__DOT__GSHARE_PHT[0x27U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v39;
    vlSelf->gshare__DOT__GSHARE_PHT[0x28U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v40;
    vlSelf->gshare__DOT__GSHARE_PHT[0x29U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v41;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v42;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v43;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v44;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v45;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v46;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v47;
    vlSelf->gshare__DOT__GSHARE_PHT[0x30U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v48;
    vlSelf->gshare__DOT__GSHARE_PHT[0x31U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v49;
    vlSelf->gshare__DOT__GSHARE_PHT[0x32U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v50;
    vlSelf->gshare__DOT__GSHARE_PHT[0x33U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v51;
    vlSelf->gshare__DOT__GSHARE_PHT[0x34U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v52;
    vlSelf->gshare__DOT__GSHARE_PHT[0x35U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v53;
    vlSelf->gshare__DOT__GSHARE_PHT[0x36U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v54;
    vlSelf->gshare__DOT__GSHARE_PHT[0x37U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v55;
    vlSelf->gshare__DOT__GSHARE_PHT[0x38U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v56;
    vlSelf->gshare__DOT__GSHARE_PHT[0x39U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v57;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v58;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v59;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v60;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v61;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v62;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v63;
    vlSelf->gshare__DOT__GSHARE_PHT[0x40U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v64;
    vlSelf->gshare__DOT__GSHARE_PHT[0x41U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v65;
    vlSelf->gshare__DOT__GSHARE_PHT[0x42U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v66;
    vlSelf->gshare__DOT__GSHARE_PHT[0x43U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v67;
    vlSelf->gshare__DOT__GSHARE_PHT[0x44U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v68;
    vlSelf->gshare__DOT__GSHARE_PHT[0x45U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v69;
    vlSelf->gshare__DOT__GSHARE_PHT[0x46U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v70;
    vlSelf->gshare__DOT__GSHARE_PHT[0x47U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v71;
    vlSelf->gshare__DOT__GSHARE_PHT[0x48U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v72;
    vlSelf->gshare__DOT__GSHARE_PHT[0x49U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v73;
    vlSelf->gshare__DOT__GSHARE_PHT[0x4aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v74;
    vlSelf->gshare__DOT__GSHARE_PHT[0x4bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v75;
    vlSelf->gshare__DOT__GSHARE_PHT[0x4cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v76;
    vlSelf->gshare__DOT__GSHARE_PHT[0x4dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v77;
    vlSelf->gshare__DOT__GSHARE_PHT[0x4eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v78;
    vlSelf->gshare__DOT__GSHARE_PHT[0x4fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v79;
    vlSelf->gshare__DOT__GSHARE_PHT[0x50U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v80;
    vlSelf->gshare__DOT__GSHARE_PHT[0x51U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v81;
    vlSelf->gshare__DOT__GSHARE_PHT[0x52U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v82;
    vlSelf->gshare__DOT__GSHARE_PHT[0x53U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v83;
    vlSelf->gshare__DOT__GSHARE_PHT[0x54U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v84;
    vlSelf->gshare__DOT__GSHARE_PHT[0x55U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v85;
    vlSelf->gshare__DOT__GSHARE_PHT[0x56U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v86;
    vlSelf->gshare__DOT__GSHARE_PHT[0x57U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v87;
    vlSelf->gshare__DOT__GSHARE_PHT[0x58U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v88;
    vlSelf->gshare__DOT__GSHARE_PHT[0x59U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v89;
    vlSelf->gshare__DOT__GSHARE_PHT[0x5aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v90;
    vlSelf->gshare__DOT__GSHARE_PHT[0x5bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v91;
    vlSelf->gshare__DOT__GSHARE_PHT[0x5cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v92;
    vlSelf->gshare__DOT__GSHARE_PHT[0x5dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v93;
    vlSelf->gshare__DOT__GSHARE_PHT[0x5eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v94;
    vlSelf->gshare__DOT__GSHARE_PHT[0x5fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v95;
    vlSelf->gshare__DOT__GSHARE_PHT[0x60U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v96;
    vlSelf->gshare__DOT__GSHARE_PHT[0x61U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v97;
    vlSelf->gshare__DOT__GSHARE_PHT[0x62U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v98;
    vlSelf->gshare__DOT__GSHARE_PHT[0x63U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v99;
    vlSelf->gshare__DOT__GSHARE_PHT[0x64U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v100;
    vlSelf->gshare__DOT__GSHARE_PHT[0x65U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v101;
    vlSelf->gshare__DOT__GSHARE_PHT[0x66U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v102;
    vlSelf->gshare__DOT__GSHARE_PHT[0x67U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v103;
    vlSelf->gshare__DOT__GSHARE_PHT[0x68U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v104;
    vlSelf->gshare__DOT__GSHARE_PHT[0x69U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v105;
    vlSelf->gshare__DOT__GSHARE_PHT[0x6aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v106;
    vlSelf->gshare__DOT__GSHARE_PHT[0x6bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v107;
    vlSelf->gshare__DOT__GSHARE_PHT[0x6cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v108;
    vlSelf->gshare__DOT__GSHARE_PHT[0x6dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v109;
    vlSelf->gshare__DOT__GSHARE_PHT[0x6eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v110;
    vlSelf->gshare__DOT__GSHARE_PHT[0x6fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v111;
    vlSelf->gshare__DOT__GSHARE_PHT[0x70U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v112;
    vlSelf->gshare__DOT__GSHARE_PHT[0x71U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v113;
    vlSelf->gshare__DOT__GSHARE_PHT[0x72U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v114;
    vlSelf->gshare__DOT__GSHARE_PHT[0x73U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v115;
    vlSelf->gshare__DOT__GSHARE_PHT[0x74U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v116;
    vlSelf->gshare__DOT__GSHARE_PHT[0x75U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v117;
    vlSelf->gshare__DOT__GSHARE_PHT[0x76U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v118;
    vlSelf->gshare__DOT__GSHARE_PHT[0x77U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v119;
    vlSelf->gshare__DOT__GSHARE_PHT[0x78U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v120;
    vlSelf->gshare__DOT__GSHARE_PHT[0x79U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v121;
    vlSelf->gshare__DOT__GSHARE_PHT[0x7aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v122;
    vlSelf->gshare__DOT__GSHARE_PHT[0x7bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v123;
    vlSelf->gshare__DOT__GSHARE_PHT[0x7cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v124;
    vlSelf->gshare__DOT__GSHARE_PHT[0x7dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v125;
    vlSelf->gshare__DOT__GSHARE_PHT[0x7eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v126;
    vlSelf->gshare__DOT__GSHARE_PHT[0x7fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v127;
    vlSelf->gshare__DOT__GSHARE_PHT[0x80U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v128;
    vlSelf->gshare__DOT__GSHARE_PHT[0x81U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v129;
    vlSelf->gshare__DOT__GSHARE_PHT[0x82U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v130;
    vlSelf->gshare__DOT__GSHARE_PHT[0x83U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v131;
    vlSelf->gshare__DOT__GSHARE_PHT[0x84U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v132;
    vlSelf->gshare__DOT__GSHARE_PHT[0x85U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v133;
    vlSelf->gshare__DOT__GSHARE_PHT[0x86U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v134;
    vlSelf->gshare__DOT__GSHARE_PHT[0x87U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v135;
    vlSelf->gshare__DOT__GSHARE_PHT[0x88U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v136;
    vlSelf->gshare__DOT__GSHARE_PHT[0x89U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v137;
    vlSelf->gshare__DOT__GSHARE_PHT[0x8aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v138;
    vlSelf->gshare__DOT__GSHARE_PHT[0x8bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v139;
    vlSelf->gshare__DOT__GSHARE_PHT[0x8cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v140;
    vlSelf->gshare__DOT__GSHARE_PHT[0x8dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v141;
    vlSelf->gshare__DOT__GSHARE_PHT[0x8eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v142;
    vlSelf->gshare__DOT__GSHARE_PHT[0x8fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v143;
    vlSelf->gshare__DOT__GSHARE_PHT[0x90U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v144;
    vlSelf->gshare__DOT__GSHARE_PHT[0x91U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v145;
    vlSelf->gshare__DOT__GSHARE_PHT[0x92U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v146;
    vlSelf->gshare__DOT__GSHARE_PHT[0x93U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v147;
    vlSelf->gshare__DOT__GSHARE_PHT[0x94U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v148;
    vlSelf->gshare__DOT__GSHARE_PHT[0x95U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v149;
    vlSelf->gshare__DOT__GSHARE_PHT[0x96U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v150;
    vlSelf->gshare__DOT__GSHARE_PHT[0x97U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v151;
    vlSelf->gshare__DOT__GSHARE_PHT[0x98U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v152;
    vlSelf->gshare__DOT__GSHARE_PHT[0x99U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v153;
    vlSelf->gshare__DOT__GSHARE_PHT[0x9aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v154;
    vlSelf->gshare__DOT__GSHARE_PHT[0x9bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v155;
    vlSelf->gshare__DOT__GSHARE_PHT[0x9cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v156;
    vlSelf->gshare__DOT__GSHARE_PHT[0x9dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v157;
    vlSelf->gshare__DOT__GSHARE_PHT[0x9eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v158;
    vlSelf->gshare__DOT__GSHARE_PHT[0x9fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v159;
    vlSelf->gshare__DOT__GSHARE_PHT[0xa0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v160;
    vlSelf->gshare__DOT__GSHARE_PHT[0xa1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v161;
    vlSelf->gshare__DOT__GSHARE_PHT[0xa2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v162;
    vlSelf->gshare__DOT__GSHARE_PHT[0xa3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v163;
    vlSelf->gshare__DOT__GSHARE_PHT[0xa4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v164;
    vlSelf->gshare__DOT__GSHARE_PHT[0xa5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v165;
    vlSelf->gshare__DOT__GSHARE_PHT[0xa6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v166;
    vlSelf->gshare__DOT__GSHARE_PHT[0xa7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v167;
    vlSelf->gshare__DOT__GSHARE_PHT[0xa8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v168;
    vlSelf->gshare__DOT__GSHARE_PHT[0xa9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v169;
    vlSelf->gshare__DOT__GSHARE_PHT[0xaaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v170;
    vlSelf->gshare__DOT__GSHARE_PHT[0xabU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v171;
    vlSelf->gshare__DOT__GSHARE_PHT[0xacU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v172;
    vlSelf->gshare__DOT__GSHARE_PHT[0xadU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v173;
    vlSelf->gshare__DOT__GSHARE_PHT[0xaeU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v174;
    vlSelf->gshare__DOT__GSHARE_PHT[0xafU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v175;
    vlSelf->gshare__DOT__GSHARE_PHT[0xb0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v176;
    vlSelf->gshare__DOT__GSHARE_PHT[0xb1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v177;
    vlSelf->gshare__DOT__GSHARE_PHT[0xb2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v178;
    vlSelf->gshare__DOT__GSHARE_PHT[0xb3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v179;
    vlSelf->gshare__DOT__GSHARE_PHT[0xb4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v180;
    vlSelf->gshare__DOT__GSHARE_PHT[0xb5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v181;
    vlSelf->gshare__DOT__GSHARE_PHT[0xb6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v182;
    vlSelf->gshare__DOT__GSHARE_PHT[0xb7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v183;
    vlSelf->gshare__DOT__GSHARE_PHT[0xb8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v184;
    vlSelf->gshare__DOT__GSHARE_PHT[0xb9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v185;
    vlSelf->gshare__DOT__GSHARE_PHT[0xbaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v186;
    vlSelf->gshare__DOT__GSHARE_PHT[0xbbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v187;
    vlSelf->gshare__DOT__GSHARE_PHT[0xbcU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v188;
    vlSelf->gshare__DOT__GSHARE_PHT[0xbdU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v189;
    vlSelf->gshare__DOT__GSHARE_PHT[0xbeU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v190;
    vlSelf->gshare__DOT__GSHARE_PHT[0xbfU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v191;
    vlSelf->gshare__DOT__GSHARE_PHT[0xc0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v192;
    vlSelf->gshare__DOT__GSHARE_PHT[0xc1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v193;
    vlSelf->gshare__DOT__GSHARE_PHT[0xc2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v194;
    vlSelf->gshare__DOT__GSHARE_PHT[0xc3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v195;
    vlSelf->gshare__DOT__GSHARE_PHT[0xc4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v196;
    vlSelf->gshare__DOT__GSHARE_PHT[0xc5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v197;
    vlSelf->gshare__DOT__GSHARE_PHT[0xc6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v198;
    vlSelf->gshare__DOT__GSHARE_PHT[0xc7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v199;
    vlSelf->gshare__DOT__GSHARE_PHT[0xc8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v200;
    vlSelf->gshare__DOT__GSHARE_PHT[0xc9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v201;
    vlSelf->gshare__DOT__GSHARE_PHT[0xcaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v202;
    vlSelf->gshare__DOT__GSHARE_PHT[0xcbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v203;
    vlSelf->gshare__DOT__GSHARE_PHT[0xccU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v204;
    vlSelf->gshare__DOT__GSHARE_PHT[0xcdU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v205;
    vlSelf->gshare__DOT__GSHARE_PHT[0xceU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v206;
    vlSelf->gshare__DOT__GSHARE_PHT[0xcfU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v207;
    vlSelf->gshare__DOT__GSHARE_PHT[0xd0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v208;
    vlSelf->gshare__DOT__GSHARE_PHT[0xd1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v209;
    vlSelf->gshare__DOT__GSHARE_PHT[0xd2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v210;
    vlSelf->gshare__DOT__GSHARE_PHT[0xd3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v211;
    vlSelf->gshare__DOT__GSHARE_PHT[0xd4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v212;
    vlSelf->gshare__DOT__GSHARE_PHT[0xd5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v213;
    vlSelf->gshare__DOT__GSHARE_PHT[0xd6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v214;
    vlSelf->gshare__DOT__GSHARE_PHT[0xd7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v215;
    vlSelf->gshare__DOT__GSHARE_PHT[0xd8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v216;
    vlSelf->gshare__DOT__GSHARE_PHT[0xd9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v217;
    vlSelf->gshare__DOT__GSHARE_PHT[0xdaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v218;
    vlSelf->gshare__DOT__GSHARE_PHT[0xdbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v219;
    vlSelf->gshare__DOT__GSHARE_PHT[0xdcU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v220;
    vlSelf->gshare__DOT__GSHARE_PHT[0xddU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v221;
    vlSelf->gshare__DOT__GSHARE_PHT[0xdeU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v222;
    vlSelf->gshare__DOT__GSHARE_PHT[0xdfU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v223;
    vlSelf->gshare__DOT__GSHARE_PHT[0xe0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v224;
    vlSelf->gshare__DOT__GSHARE_PHT[0xe1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v225;
    vlSelf->gshare__DOT__GSHARE_PHT[0xe2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v226;
    vlSelf->gshare__DOT__GSHARE_PHT[0xe3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v227;
    vlSelf->gshare__DOT__GSHARE_PHT[0xe4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v228;
    vlSelf->gshare__DOT__GSHARE_PHT[0xe5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v229;
    vlSelf->gshare__DOT__GSHARE_PHT[0xe6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v230;
    vlSelf->gshare__DOT__GSHARE_PHT[0xe7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v231;
    vlSelf->gshare__DOT__GSHARE_PHT[0xe8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v232;
    vlSelf->gshare__DOT__GSHARE_PHT[0xe9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v233;
    vlSelf->gshare__DOT__GSHARE_PHT[0xeaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v234;
    vlSelf->gshare__DOT__GSHARE_PHT[0xebU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v235;
    vlSelf->gshare__DOT__GSHARE_PHT[0xecU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v236;
    vlSelf->gshare__DOT__GSHARE_PHT[0xedU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v237;
    vlSelf->gshare__DOT__GSHARE_PHT[0xeeU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v238;
    vlSelf->gshare__DOT__GSHARE_PHT[0xefU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v239;
    vlSelf->gshare__DOT__GSHARE_PHT[0xf0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v240;
    vlSelf->gshare__DOT__GSHARE_PHT[0xf1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v241;
    vlSelf->gshare__DOT__GSHARE_PHT[0xf2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v242;
    vlSelf->gshare__DOT__GSHARE_PHT[0xf3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v243;
    vlSelf->gshare__DOT__GSHARE_PHT[0xf4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v244;
    vlSelf->gshare__DOT__GSHARE_PHT[0xf5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v245;
    vlSelf->gshare__DOT__GSHARE_PHT[0xf6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v246;
    vlSelf->gshare__DOT__GSHARE_PHT[0xf7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v247;
    vlSelf->gshare__DOT__GSHARE_PHT[0xf8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v248;
    vlSelf->gshare__DOT__GSHARE_PHT[0xf9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v249;
    vlSelf->gshare__DOT__GSHARE_PHT[0xfaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v250;
    vlSelf->gshare__DOT__GSHARE_PHT[0xfbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v251;
    vlSelf->gshare__DOT__GSHARE_PHT[0xfcU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v252;
    vlSelf->gshare__DOT__GSHARE_PHT[0xfdU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v253;
    vlSelf->gshare__DOT__GSHARE_PHT[0xfeU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v254;
    vlSelf->gshare__DOT__GSHARE_PHT[0xffU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v255;
    vlSelf->gshare__DOT__GSHARE_PHT[0x100U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v256;
    vlSelf->gshare__DOT__GSHARE_PHT[0x101U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v257;
    vlSelf->gshare__DOT__GSHARE_PHT[0x102U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v258;
    vlSelf->gshare__DOT__GSHARE_PHT[0x103U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v259;
    vlSelf->gshare__DOT__GSHARE_PHT[0x104U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v260;
    vlSelf->gshare__DOT__GSHARE_PHT[0x105U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v261;
    vlSelf->gshare__DOT__GSHARE_PHT[0x106U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v262;
    vlSelf->gshare__DOT__GSHARE_PHT[0x107U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v263;
    vlSelf->gshare__DOT__GSHARE_PHT[0x108U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v264;
    vlSelf->gshare__DOT__GSHARE_PHT[0x109U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v265;
    vlSelf->gshare__DOT__GSHARE_PHT[0x10aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v266;
    vlSelf->gshare__DOT__GSHARE_PHT[0x10bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v267;
    vlSelf->gshare__DOT__GSHARE_PHT[0x10cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v268;
    vlSelf->gshare__DOT__GSHARE_PHT[0x10dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v269;
    vlSelf->gshare__DOT__GSHARE_PHT[0x10eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v270;
    vlSelf->gshare__DOT__GSHARE_PHT[0x10fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v271;
    vlSelf->gshare__DOT__GSHARE_PHT[0x110U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v272;
    vlSelf->gshare__DOT__GSHARE_PHT[0x111U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v273;
    vlSelf->gshare__DOT__GSHARE_PHT[0x112U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v274;
    vlSelf->gshare__DOT__GSHARE_PHT[0x113U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v275;
    vlSelf->gshare__DOT__GSHARE_PHT[0x114U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v276;
    vlSelf->gshare__DOT__GSHARE_PHT[0x115U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v277;
    vlSelf->gshare__DOT__GSHARE_PHT[0x116U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v278;
    vlSelf->gshare__DOT__GSHARE_PHT[0x117U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v279;
    vlSelf->gshare__DOT__GSHARE_PHT[0x118U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v280;
    vlSelf->gshare__DOT__GSHARE_PHT[0x119U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v281;
    vlSelf->gshare__DOT__GSHARE_PHT[0x11aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v282;
    vlSelf->gshare__DOT__GSHARE_PHT[0x11bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v283;
    vlSelf->gshare__DOT__GSHARE_PHT[0x11cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v284;
    vlSelf->gshare__DOT__GSHARE_PHT[0x11dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v285;
    vlSelf->gshare__DOT__GSHARE_PHT[0x11eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v286;
    vlSelf->gshare__DOT__GSHARE_PHT[0x11fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v287;
    vlSelf->gshare__DOT__GSHARE_PHT[0x120U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v288;
    vlSelf->gshare__DOT__GSHARE_PHT[0x121U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v289;
    vlSelf->gshare__DOT__GSHARE_PHT[0x122U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v290;
    vlSelf->gshare__DOT__GSHARE_PHT[0x123U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v291;
    vlSelf->gshare__DOT__GSHARE_PHT[0x124U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v292;
    vlSelf->gshare__DOT__GSHARE_PHT[0x125U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v293;
    vlSelf->gshare__DOT__GSHARE_PHT[0x126U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v294;
    vlSelf->gshare__DOT__GSHARE_PHT[0x127U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v295;
    vlSelf->gshare__DOT__GSHARE_PHT[0x128U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v296;
    vlSelf->gshare__DOT__GSHARE_PHT[0x129U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v297;
    vlSelf->gshare__DOT__GSHARE_PHT[0x12aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v298;
    vlSelf->gshare__DOT__GSHARE_PHT[0x12bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v299;
    vlSelf->gshare__DOT__GSHARE_PHT[0x12cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v300;
    vlSelf->gshare__DOT__GSHARE_PHT[0x12dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v301;
    vlSelf->gshare__DOT__GSHARE_PHT[0x12eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v302;
    vlSelf->gshare__DOT__GSHARE_PHT[0x12fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v303;
    vlSelf->gshare__DOT__GSHARE_PHT[0x130U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v304;
    vlSelf->gshare__DOT__GSHARE_PHT[0x131U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v305;
    vlSelf->gshare__DOT__GSHARE_PHT[0x132U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v306;
    vlSelf->gshare__DOT__GSHARE_PHT[0x133U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v307;
    vlSelf->gshare__DOT__GSHARE_PHT[0x134U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v308;
    vlSelf->gshare__DOT__GSHARE_PHT[0x135U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v309;
    vlSelf->gshare__DOT__GSHARE_PHT[0x136U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v310;
    vlSelf->gshare__DOT__GSHARE_PHT[0x137U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v311;
    vlSelf->gshare__DOT__GSHARE_PHT[0x138U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v312;
    vlSelf->gshare__DOT__GSHARE_PHT[0x139U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v313;
    vlSelf->gshare__DOT__GSHARE_PHT[0x13aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v314;
    vlSelf->gshare__DOT__GSHARE_PHT[0x13bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v315;
    vlSelf->gshare__DOT__GSHARE_PHT[0x13cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v316;
    vlSelf->gshare__DOT__GSHARE_PHT[0x13dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v317;
    vlSelf->gshare__DOT__GSHARE_PHT[0x13eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v318;
    vlSelf->gshare__DOT__GSHARE_PHT[0x13fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v319;
    vlSelf->gshare__DOT__GSHARE_PHT[0x140U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v320;
    vlSelf->gshare__DOT__GSHARE_PHT[0x141U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v321;
    vlSelf->gshare__DOT__GSHARE_PHT[0x142U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v322;
    vlSelf->gshare__DOT__GSHARE_PHT[0x143U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v323;
    vlSelf->gshare__DOT__GSHARE_PHT[0x144U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v324;
    vlSelf->gshare__DOT__GSHARE_PHT[0x145U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v325;
    vlSelf->gshare__DOT__GSHARE_PHT[0x146U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v326;
    vlSelf->gshare__DOT__GSHARE_PHT[0x147U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v327;
    vlSelf->gshare__DOT__GSHARE_PHT[0x148U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v328;
    vlSelf->gshare__DOT__GSHARE_PHT[0x149U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v329;
    vlSelf->gshare__DOT__GSHARE_PHT[0x14aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v330;
    vlSelf->gshare__DOT__GSHARE_PHT[0x14bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v331;
    vlSelf->gshare__DOT__GSHARE_PHT[0x14cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v332;
    vlSelf->gshare__DOT__GSHARE_PHT[0x14dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v333;
    vlSelf->gshare__DOT__GSHARE_PHT[0x14eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v334;
    vlSelf->gshare__DOT__GSHARE_PHT[0x14fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v335;
    vlSelf->gshare__DOT__GSHARE_PHT[0x150U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v336;
    vlSelf->gshare__DOT__GSHARE_PHT[0x151U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v337;
    vlSelf->gshare__DOT__GSHARE_PHT[0x152U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v338;
    vlSelf->gshare__DOT__GSHARE_PHT[0x153U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v339;
    vlSelf->gshare__DOT__GSHARE_PHT[0x154U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v340;
    vlSelf->gshare__DOT__GSHARE_PHT[0x155U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v341;
    vlSelf->gshare__DOT__GSHARE_PHT[0x156U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v342;
    vlSelf->gshare__DOT__GSHARE_PHT[0x157U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v343;
    vlSelf->gshare__DOT__GSHARE_PHT[0x158U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v344;
    vlSelf->gshare__DOT__GSHARE_PHT[0x159U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v345;
    vlSelf->gshare__DOT__GSHARE_PHT[0x15aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v346;
    vlSelf->gshare__DOT__GSHARE_PHT[0x15bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v347;
    vlSelf->gshare__DOT__GSHARE_PHT[0x15cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v348;
    vlSelf->gshare__DOT__GSHARE_PHT[0x15dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v349;
    vlSelf->gshare__DOT__GSHARE_PHT[0x15eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v350;
    vlSelf->gshare__DOT__GSHARE_PHT[0x15fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v351;
    vlSelf->gshare__DOT__GSHARE_PHT[0x160U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v352;
    vlSelf->gshare__DOT__GSHARE_PHT[0x161U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v353;
    vlSelf->gshare__DOT__GSHARE_PHT[0x162U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v354;
    vlSelf->gshare__DOT__GSHARE_PHT[0x163U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v355;
    vlSelf->gshare__DOT__GSHARE_PHT[0x164U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v356;
    vlSelf->gshare__DOT__GSHARE_PHT[0x165U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v357;
    vlSelf->gshare__DOT__GSHARE_PHT[0x166U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v358;
    vlSelf->gshare__DOT__GSHARE_PHT[0x167U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v359;
    vlSelf->gshare__DOT__GSHARE_PHT[0x168U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v360;
    vlSelf->gshare__DOT__GSHARE_PHT[0x169U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v361;
    vlSelf->gshare__DOT__GSHARE_PHT[0x16aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v362;
    vlSelf->gshare__DOT__GSHARE_PHT[0x16bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v363;
    vlSelf->gshare__DOT__GSHARE_PHT[0x16cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v364;
    vlSelf->gshare__DOT__GSHARE_PHT[0x16dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v365;
    vlSelf->gshare__DOT__GSHARE_PHT[0x16eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v366;
    vlSelf->gshare__DOT__GSHARE_PHT[0x16fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v367;
    vlSelf->gshare__DOT__GSHARE_PHT[0x170U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v368;
    vlSelf->gshare__DOT__GSHARE_PHT[0x171U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v369;
    vlSelf->gshare__DOT__GSHARE_PHT[0x172U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v370;
    vlSelf->gshare__DOT__GSHARE_PHT[0x173U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v371;
    vlSelf->gshare__DOT__GSHARE_PHT[0x174U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v372;
    vlSelf->gshare__DOT__GSHARE_PHT[0x175U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v373;
    vlSelf->gshare__DOT__GSHARE_PHT[0x176U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v374;
    vlSelf->gshare__DOT__GSHARE_PHT[0x177U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v375;
    vlSelf->gshare__DOT__GSHARE_PHT[0x178U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v376;
    vlSelf->gshare__DOT__GSHARE_PHT[0x179U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v377;
    vlSelf->gshare__DOT__GSHARE_PHT[0x17aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v378;
    vlSelf->gshare__DOT__GSHARE_PHT[0x17bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v379;
    vlSelf->gshare__DOT__GSHARE_PHT[0x17cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v380;
    vlSelf->gshare__DOT__GSHARE_PHT[0x17dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v381;
    vlSelf->gshare__DOT__GSHARE_PHT[0x17eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v382;
    vlSelf->gshare__DOT__GSHARE_PHT[0x17fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v383;
    vlSelf->gshare__DOT__GSHARE_PHT[0x180U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v384;
    vlSelf->gshare__DOT__GSHARE_PHT[0x181U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v385;
    vlSelf->gshare__DOT__GSHARE_PHT[0x182U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v386;
    vlSelf->gshare__DOT__GSHARE_PHT[0x183U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v387;
    vlSelf->gshare__DOT__GSHARE_PHT[0x184U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v388;
    vlSelf->gshare__DOT__GSHARE_PHT[0x185U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v389;
    vlSelf->gshare__DOT__GSHARE_PHT[0x186U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v390;
    vlSelf->gshare__DOT__GSHARE_PHT[0x187U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v391;
    vlSelf->gshare__DOT__GSHARE_PHT[0x188U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v392;
    vlSelf->gshare__DOT__GSHARE_PHT[0x189U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v393;
    vlSelf->gshare__DOT__GSHARE_PHT[0x18aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v394;
    vlSelf->gshare__DOT__GSHARE_PHT[0x18bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v395;
    vlSelf->gshare__DOT__GSHARE_PHT[0x18cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v396;
    vlSelf->gshare__DOT__GSHARE_PHT[0x18dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v397;
    vlSelf->gshare__DOT__GSHARE_PHT[0x18eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v398;
    vlSelf->gshare__DOT__GSHARE_PHT[0x18fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v399;
    vlSelf->gshare__DOT__GSHARE_PHT[0x190U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v400;
    vlSelf->gshare__DOT__GSHARE_PHT[0x191U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v401;
    vlSelf->gshare__DOT__GSHARE_PHT[0x192U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v402;
    vlSelf->gshare__DOT__GSHARE_PHT[0x193U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v403;
    vlSelf->gshare__DOT__GSHARE_PHT[0x194U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v404;
    vlSelf->gshare__DOT__GSHARE_PHT[0x195U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v405;
    vlSelf->gshare__DOT__GSHARE_PHT[0x196U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v406;
    vlSelf->gshare__DOT__GSHARE_PHT[0x197U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v407;
    vlSelf->gshare__DOT__GSHARE_PHT[0x198U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v408;
    vlSelf->gshare__DOT__GSHARE_PHT[0x199U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v409;
    vlSelf->gshare__DOT__GSHARE_PHT[0x19aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v410;
    vlSelf->gshare__DOT__GSHARE_PHT[0x19bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v411;
    vlSelf->gshare__DOT__GSHARE_PHT[0x19cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v412;
    vlSelf->gshare__DOT__GSHARE_PHT[0x19dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v413;
    vlSelf->gshare__DOT__GSHARE_PHT[0x19eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v414;
    vlSelf->gshare__DOT__GSHARE_PHT[0x19fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v415;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1a0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v416;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1a1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v417;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1a2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v418;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1a3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v419;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1a4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v420;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1a5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v421;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1a6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v422;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1a7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v423;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1a8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v424;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1a9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v425;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1aaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v426;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1abU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v427;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1acU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v428;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1adU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v429;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1aeU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v430;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1afU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v431;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1b0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v432;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1b1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v433;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1b2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v434;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1b3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v435;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1b4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v436;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1b5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v437;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1b6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v438;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1b7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v439;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1b8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v440;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1b9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v441;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1baU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v442;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1bbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v443;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1bcU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v444;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1bdU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v445;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1beU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v446;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1bfU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v447;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1c0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v448;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1c1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v449;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1c2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v450;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1c3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v451;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1c4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v452;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1c5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v453;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1c6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v454;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1c7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v455;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1c8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v456;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1c9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v457;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1caU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v458;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1cbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v459;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1ccU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v460;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1cdU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v461;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1ceU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v462;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1cfU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v463;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1d0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v464;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1d1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v465;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1d2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v466;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1d3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v467;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1d4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v468;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1d5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v469;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1d6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v470;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1d7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v471;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1d8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v472;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1d9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v473;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1daU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v474;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1dbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v475;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1dcU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v476;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1ddU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v477;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1deU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v478;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1dfU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v479;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1e0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v480;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1e1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v481;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1e2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v482;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1e3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v483;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1e4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v484;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1e5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v485;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1e6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v486;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1e7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v487;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1e8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v488;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1e9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v489;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1eaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v490;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1ebU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v491;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1ecU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v492;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1edU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v493;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1eeU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v494;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1efU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v495;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1f0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v496;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1f1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v497;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1f2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v498;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1f3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v499;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1f4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v500;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1f5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v501;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1f6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v502;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1f7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v503;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1f8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v504;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1f9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v505;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1faU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v506;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1fbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v507;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1fcU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v508;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1fdU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v509;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1feU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v510;
    vlSelf->gshare__DOT__GSHARE_PHT[0x1ffU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v511;
    vlSelf->gshare__DOT__GSHARE_PHT[0x200U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v512;
    vlSelf->gshare__DOT__GSHARE_PHT[0x201U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v513;
    vlSelf->gshare__DOT__GSHARE_PHT[0x202U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v514;
    vlSelf->gshare__DOT__GSHARE_PHT[0x203U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v515;
    vlSelf->gshare__DOT__GSHARE_PHT[0x204U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v516;
    vlSelf->gshare__DOT__GSHARE_PHT[0x205U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v517;
    vlSelf->gshare__DOT__GSHARE_PHT[0x206U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v518;
    vlSelf->gshare__DOT__GSHARE_PHT[0x207U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v519;
    vlSelf->gshare__DOT__GSHARE_PHT[0x208U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v520;
    vlSelf->gshare__DOT__GSHARE_PHT[0x209U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v521;
    vlSelf->gshare__DOT__GSHARE_PHT[0x20aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v522;
    vlSelf->gshare__DOT__GSHARE_PHT[0x20bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v523;
    vlSelf->gshare__DOT__GSHARE_PHT[0x20cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v524;
    vlSelf->gshare__DOT__GSHARE_PHT[0x20dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v525;
    vlSelf->gshare__DOT__GSHARE_PHT[0x20eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v526;
    vlSelf->gshare__DOT__GSHARE_PHT[0x20fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v527;
    vlSelf->gshare__DOT__GSHARE_PHT[0x210U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v528;
    vlSelf->gshare__DOT__GSHARE_PHT[0x211U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v529;
    vlSelf->gshare__DOT__GSHARE_PHT[0x212U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v530;
    vlSelf->gshare__DOT__GSHARE_PHT[0x213U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v531;
    vlSelf->gshare__DOT__GSHARE_PHT[0x214U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v532;
    vlSelf->gshare__DOT__GSHARE_PHT[0x215U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v533;
    vlSelf->gshare__DOT__GSHARE_PHT[0x216U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v534;
    vlSelf->gshare__DOT__GSHARE_PHT[0x217U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v535;
    vlSelf->gshare__DOT__GSHARE_PHT[0x218U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v536;
    vlSelf->gshare__DOT__GSHARE_PHT[0x219U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v537;
    vlSelf->gshare__DOT__GSHARE_PHT[0x21aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v538;
    vlSelf->gshare__DOT__GSHARE_PHT[0x21bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v539;
    vlSelf->gshare__DOT__GSHARE_PHT[0x21cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v540;
    vlSelf->gshare__DOT__GSHARE_PHT[0x21dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v541;
    vlSelf->gshare__DOT__GSHARE_PHT[0x21eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v542;
    vlSelf->gshare__DOT__GSHARE_PHT[0x21fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v543;
    vlSelf->gshare__DOT__GSHARE_PHT[0x220U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v544;
    vlSelf->gshare__DOT__GSHARE_PHT[0x221U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v545;
    vlSelf->gshare__DOT__GSHARE_PHT[0x222U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v546;
    vlSelf->gshare__DOT__GSHARE_PHT[0x223U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v547;
    vlSelf->gshare__DOT__GSHARE_PHT[0x224U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v548;
    vlSelf->gshare__DOT__GSHARE_PHT[0x225U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v549;
    vlSelf->gshare__DOT__GSHARE_PHT[0x226U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v550;
    vlSelf->gshare__DOT__GSHARE_PHT[0x227U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v551;
    vlSelf->gshare__DOT__GSHARE_PHT[0x228U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v552;
    vlSelf->gshare__DOT__GSHARE_PHT[0x229U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v553;
    vlSelf->gshare__DOT__GSHARE_PHT[0x22aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v554;
    vlSelf->gshare__DOT__GSHARE_PHT[0x22bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v555;
    vlSelf->gshare__DOT__GSHARE_PHT[0x22cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v556;
    vlSelf->gshare__DOT__GSHARE_PHT[0x22dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v557;
    vlSelf->gshare__DOT__GSHARE_PHT[0x22eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v558;
    vlSelf->gshare__DOT__GSHARE_PHT[0x22fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v559;
    vlSelf->gshare__DOT__GSHARE_PHT[0x230U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v560;
    vlSelf->gshare__DOT__GSHARE_PHT[0x231U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v561;
    vlSelf->gshare__DOT__GSHARE_PHT[0x232U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v562;
    vlSelf->gshare__DOT__GSHARE_PHT[0x233U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v563;
    vlSelf->gshare__DOT__GSHARE_PHT[0x234U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v564;
    vlSelf->gshare__DOT__GSHARE_PHT[0x235U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v565;
    vlSelf->gshare__DOT__GSHARE_PHT[0x236U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v566;
    vlSelf->gshare__DOT__GSHARE_PHT[0x237U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v567;
    vlSelf->gshare__DOT__GSHARE_PHT[0x238U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v568;
    vlSelf->gshare__DOT__GSHARE_PHT[0x239U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v569;
    vlSelf->gshare__DOT__GSHARE_PHT[0x23aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v570;
    vlSelf->gshare__DOT__GSHARE_PHT[0x23bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v571;
    vlSelf->gshare__DOT__GSHARE_PHT[0x23cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v572;
    vlSelf->gshare__DOT__GSHARE_PHT[0x23dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v573;
    vlSelf->gshare__DOT__GSHARE_PHT[0x23eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v574;
    vlSelf->gshare__DOT__GSHARE_PHT[0x23fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v575;
    vlSelf->gshare__DOT__GSHARE_PHT[0x240U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v576;
    vlSelf->gshare__DOT__GSHARE_PHT[0x241U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v577;
    vlSelf->gshare__DOT__GSHARE_PHT[0x242U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v578;
    vlSelf->gshare__DOT__GSHARE_PHT[0x243U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v579;
    vlSelf->gshare__DOT__GSHARE_PHT[0x244U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v580;
    vlSelf->gshare__DOT__GSHARE_PHT[0x245U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v581;
    vlSelf->gshare__DOT__GSHARE_PHT[0x246U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v582;
    vlSelf->gshare__DOT__GSHARE_PHT[0x247U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v583;
    vlSelf->gshare__DOT__GSHARE_PHT[0x248U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v584;
    vlSelf->gshare__DOT__GSHARE_PHT[0x249U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v585;
    vlSelf->gshare__DOT__GSHARE_PHT[0x24aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v586;
    vlSelf->gshare__DOT__GSHARE_PHT[0x24bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v587;
    vlSelf->gshare__DOT__GSHARE_PHT[0x24cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v588;
    vlSelf->gshare__DOT__GSHARE_PHT[0x24dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v589;
    vlSelf->gshare__DOT__GSHARE_PHT[0x24eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v590;
    vlSelf->gshare__DOT__GSHARE_PHT[0x24fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v591;
    vlSelf->gshare__DOT__GSHARE_PHT[0x250U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v592;
    vlSelf->gshare__DOT__GSHARE_PHT[0x251U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v593;
    vlSelf->gshare__DOT__GSHARE_PHT[0x252U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v594;
    vlSelf->gshare__DOT__GSHARE_PHT[0x253U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v595;
    vlSelf->gshare__DOT__GSHARE_PHT[0x254U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v596;
    vlSelf->gshare__DOT__GSHARE_PHT[0x255U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v597;
    vlSelf->gshare__DOT__GSHARE_PHT[0x256U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v598;
    vlSelf->gshare__DOT__GSHARE_PHT[0x257U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v599;
    vlSelf->gshare__DOT__GSHARE_PHT[0x258U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v600;
    vlSelf->gshare__DOT__GSHARE_PHT[0x259U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v601;
    vlSelf->gshare__DOT__GSHARE_PHT[0x25aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v602;
    vlSelf->gshare__DOT__GSHARE_PHT[0x25bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v603;
    vlSelf->gshare__DOT__GSHARE_PHT[0x25cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v604;
    vlSelf->gshare__DOT__GSHARE_PHT[0x25dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v605;
    vlSelf->gshare__DOT__GSHARE_PHT[0x25eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v606;
    vlSelf->gshare__DOT__GSHARE_PHT[0x25fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v607;
    vlSelf->gshare__DOT__GSHARE_PHT[0x260U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v608;
    vlSelf->gshare__DOT__GSHARE_PHT[0x261U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v609;
    vlSelf->gshare__DOT__GSHARE_PHT[0x262U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v610;
    vlSelf->gshare__DOT__GSHARE_PHT[0x263U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v611;
    vlSelf->gshare__DOT__GSHARE_PHT[0x264U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v612;
    vlSelf->gshare__DOT__GSHARE_PHT[0x265U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v613;
    vlSelf->gshare__DOT__GSHARE_PHT[0x266U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v614;
    vlSelf->gshare__DOT__GSHARE_PHT[0x267U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v615;
    vlSelf->gshare__DOT__GSHARE_PHT[0x268U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v616;
    vlSelf->gshare__DOT__GSHARE_PHT[0x269U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v617;
    vlSelf->gshare__DOT__GSHARE_PHT[0x26aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v618;
    vlSelf->gshare__DOT__GSHARE_PHT[0x26bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v619;
    vlSelf->gshare__DOT__GSHARE_PHT[0x26cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v620;
    vlSelf->gshare__DOT__GSHARE_PHT[0x26dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v621;
    vlSelf->gshare__DOT__GSHARE_PHT[0x26eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v622;
    vlSelf->gshare__DOT__GSHARE_PHT[0x26fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v623;
    vlSelf->gshare__DOT__GSHARE_PHT[0x270U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v624;
    vlSelf->gshare__DOT__GSHARE_PHT[0x271U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v625;
    vlSelf->gshare__DOT__GSHARE_PHT[0x272U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v626;
    vlSelf->gshare__DOT__GSHARE_PHT[0x273U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v627;
    vlSelf->gshare__DOT__GSHARE_PHT[0x274U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v628;
    vlSelf->gshare__DOT__GSHARE_PHT[0x275U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v629;
    vlSelf->gshare__DOT__GSHARE_PHT[0x276U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v630;
    vlSelf->gshare__DOT__GSHARE_PHT[0x277U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v631;
    vlSelf->gshare__DOT__GSHARE_PHT[0x278U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v632;
    vlSelf->gshare__DOT__GSHARE_PHT[0x279U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v633;
    vlSelf->gshare__DOT__GSHARE_PHT[0x27aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v634;
    vlSelf->gshare__DOT__GSHARE_PHT[0x27bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v635;
    vlSelf->gshare__DOT__GSHARE_PHT[0x27cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v636;
    vlSelf->gshare__DOT__GSHARE_PHT[0x27dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v637;
    vlSelf->gshare__DOT__GSHARE_PHT[0x27eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v638;
    vlSelf->gshare__DOT__GSHARE_PHT[0x27fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v639;
    vlSelf->gshare__DOT__GSHARE_PHT[0x280U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v640;
    vlSelf->gshare__DOT__GSHARE_PHT[0x281U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v641;
    vlSelf->gshare__DOT__GSHARE_PHT[0x282U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v642;
    vlSelf->gshare__DOT__GSHARE_PHT[0x283U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v643;
    vlSelf->gshare__DOT__GSHARE_PHT[0x284U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v644;
    vlSelf->gshare__DOT__GSHARE_PHT[0x285U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v645;
    vlSelf->gshare__DOT__GSHARE_PHT[0x286U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v646;
    vlSelf->gshare__DOT__GSHARE_PHT[0x287U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v647;
    vlSelf->gshare__DOT__GSHARE_PHT[0x288U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v648;
    vlSelf->gshare__DOT__GSHARE_PHT[0x289U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v649;
    vlSelf->gshare__DOT__GSHARE_PHT[0x28aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v650;
    vlSelf->gshare__DOT__GSHARE_PHT[0x28bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v651;
    vlSelf->gshare__DOT__GSHARE_PHT[0x28cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v652;
    vlSelf->gshare__DOT__GSHARE_PHT[0x28dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v653;
    vlSelf->gshare__DOT__GSHARE_PHT[0x28eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v654;
    vlSelf->gshare__DOT__GSHARE_PHT[0x28fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v655;
    vlSelf->gshare__DOT__GSHARE_PHT[0x290U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v656;
    vlSelf->gshare__DOT__GSHARE_PHT[0x291U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v657;
    vlSelf->gshare__DOT__GSHARE_PHT[0x292U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v658;
    vlSelf->gshare__DOT__GSHARE_PHT[0x293U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v659;
    vlSelf->gshare__DOT__GSHARE_PHT[0x294U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v660;
    vlSelf->gshare__DOT__GSHARE_PHT[0x295U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v661;
    vlSelf->gshare__DOT__GSHARE_PHT[0x296U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v662;
    vlSelf->gshare__DOT__GSHARE_PHT[0x297U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v663;
    vlSelf->gshare__DOT__GSHARE_PHT[0x298U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v664;
    vlSelf->gshare__DOT__GSHARE_PHT[0x299U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v665;
    vlSelf->gshare__DOT__GSHARE_PHT[0x29aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v666;
    vlSelf->gshare__DOT__GSHARE_PHT[0x29bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v667;
    vlSelf->gshare__DOT__GSHARE_PHT[0x29cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v668;
    vlSelf->gshare__DOT__GSHARE_PHT[0x29dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v669;
    vlSelf->gshare__DOT__GSHARE_PHT[0x29eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v670;
    vlSelf->gshare__DOT__GSHARE_PHT[0x29fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v671;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2a0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v672;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2a1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v673;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2a2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v674;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2a3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v675;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2a4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v676;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2a5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v677;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2a6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v678;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2a7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v679;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2a8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v680;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2a9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v681;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2aaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v682;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2abU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v683;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2acU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v684;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2adU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v685;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2aeU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v686;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2afU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v687;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2b0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v688;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2b1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v689;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2b2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v690;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2b3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v691;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2b4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v692;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2b5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v693;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2b6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v694;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2b7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v695;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2b8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v696;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2b9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v697;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2baU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v698;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2bbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v699;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2bcU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v700;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2bdU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v701;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2beU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v702;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2bfU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v703;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2c0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v704;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2c1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v705;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2c2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v706;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2c3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v707;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2c4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v708;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2c5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v709;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2c6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v710;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2c7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v711;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2c8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v712;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2c9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v713;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2caU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v714;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2cbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v715;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2ccU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v716;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2cdU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v717;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2ceU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v718;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2cfU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v719;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2d0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v720;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2d1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v721;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2d2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v722;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2d3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v723;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2d4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v724;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2d5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v725;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2d6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v726;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2d7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v727;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2d8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v728;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2d9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v729;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2daU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v730;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2dbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v731;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2dcU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v732;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2ddU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v733;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2deU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v734;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2dfU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v735;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2e0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v736;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2e1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v737;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2e2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v738;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2e3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v739;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2e4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v740;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2e5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v741;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2e6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v742;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2e7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v743;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2e8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v744;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2e9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v745;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2eaU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v746;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2ebU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v747;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2ecU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v748;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2edU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v749;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2eeU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v750;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2efU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v751;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2f0U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v752;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2f1U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v753;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2f2U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v754;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2f3U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v755;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2f4U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v756;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2f5U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v757;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2f6U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v758;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2f7U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v759;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2f8U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v760;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2f9U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v761;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2faU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v762;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2fbU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v763;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2fcU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v764;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2fdU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v765;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2feU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v766;
    vlSelf->gshare__DOT__GSHARE_PHT[0x2ffU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v767;
    vlSelf->gshare__DOT__GSHARE_PHT[0x300U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v768;
    vlSelf->gshare__DOT__GSHARE_PHT[0x301U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v769;
    vlSelf->gshare__DOT__GSHARE_PHT[0x302U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v770;
    vlSelf->gshare__DOT__GSHARE_PHT[0x303U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v771;
    vlSelf->gshare__DOT__GSHARE_PHT[0x304U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v772;
    vlSelf->gshare__DOT__GSHARE_PHT[0x305U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v773;
    vlSelf->gshare__DOT__GSHARE_PHT[0x306U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v774;
    vlSelf->gshare__DOT__GSHARE_PHT[0x307U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v775;
    vlSelf->gshare__DOT__GSHARE_PHT[0x308U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v776;
    vlSelf->gshare__DOT__GSHARE_PHT[0x309U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v777;
    vlSelf->gshare__DOT__GSHARE_PHT[0x30aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v778;
    vlSelf->gshare__DOT__GSHARE_PHT[0x30bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v779;
    vlSelf->gshare__DOT__GSHARE_PHT[0x30cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v780;
    vlSelf->gshare__DOT__GSHARE_PHT[0x30dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v781;
    vlSelf->gshare__DOT__GSHARE_PHT[0x30eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v782;
    vlSelf->gshare__DOT__GSHARE_PHT[0x30fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v783;
    vlSelf->gshare__DOT__GSHARE_PHT[0x310U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v784;
    vlSelf->gshare__DOT__GSHARE_PHT[0x311U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v785;
    vlSelf->gshare__DOT__GSHARE_PHT[0x312U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v786;
    vlSelf->gshare__DOT__GSHARE_PHT[0x313U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v787;
    vlSelf->gshare__DOT__GSHARE_PHT[0x314U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v788;
    vlSelf->gshare__DOT__GSHARE_PHT[0x315U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v789;
    vlSelf->gshare__DOT__GSHARE_PHT[0x316U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v790;
    vlSelf->gshare__DOT__GSHARE_PHT[0x317U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v791;
    vlSelf->gshare__DOT__GSHARE_PHT[0x318U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v792;
    vlSelf->gshare__DOT__GSHARE_PHT[0x319U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v793;
    vlSelf->gshare__DOT__GSHARE_PHT[0x31aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v794;
    vlSelf->gshare__DOT__GSHARE_PHT[0x31bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v795;
    vlSelf->gshare__DOT__GSHARE_PHT[0x31cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v796;
    vlSelf->gshare__DOT__GSHARE_PHT[0x31dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v797;
    vlSelf->gshare__DOT__GSHARE_PHT[0x31eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v798;
    vlSelf->gshare__DOT__GSHARE_PHT[0x31fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v799;
    vlSelf->gshare__DOT__GSHARE_PHT[0x320U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v800;
    vlSelf->gshare__DOT__GSHARE_PHT[0x321U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v801;
    vlSelf->gshare__DOT__GSHARE_PHT[0x322U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v802;
    vlSelf->gshare__DOT__GSHARE_PHT[0x323U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v803;
    vlSelf->gshare__DOT__GSHARE_PHT[0x324U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v804;
    vlSelf->gshare__DOT__GSHARE_PHT[0x325U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v805;
    vlSelf->gshare__DOT__GSHARE_PHT[0x326U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v806;
    vlSelf->gshare__DOT__GSHARE_PHT[0x327U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v807;
    vlSelf->gshare__DOT__GSHARE_PHT[0x328U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v808;
    vlSelf->gshare__DOT__GSHARE_PHT[0x329U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v809;
    vlSelf->gshare__DOT__GSHARE_PHT[0x32aU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v810;
    vlSelf->gshare__DOT__GSHARE_PHT[0x32bU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v811;
    vlSelf->gshare__DOT__GSHARE_PHT[0x32cU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v812;
    vlSelf->gshare__DOT__GSHARE_PHT[0x32dU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v813;
    vlSelf->gshare__DOT__GSHARE_PHT[0x32eU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v814;
    vlSelf->gshare__DOT__GSHARE_PHT[0x32fU] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v815;
    vlSelf->gshare__DOT__GSHARE_PHT[0x330U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v816;
    vlSelf->gshare__DOT__GSHARE_PHT[0x331U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v817;
    vlSelf->gshare__DOT__GSHARE_PHT[0x332U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v818;
    vlSelf->gshare__DOT__GSHARE_PHT[0x333U] = vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v819;
    vlSelf->gshare__DOT__GSHARE_PHT[0x334U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v820;
    vlSelf->gshare__DOT__GSHARE_PHT[0x335U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v821;
    vlSelf->gshare__DOT__GSHARE_PHT[0x336U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v822;
    vlSelf->gshare__DOT__GSHARE_PHT[0x337U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v823;
    vlSelf->gshare__DOT__GSHARE_PHT[0x338U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v824;
    vlSelf->gshare__DOT__GSHARE_PHT[0x339U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v825;
    vlSelf->gshare__DOT__GSHARE_PHT[0x33aU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v826;
    vlSelf->gshare__DOT__GSHARE_PHT[0x33bU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v827;
    vlSelf->gshare__DOT__GSHARE_PHT[0x33cU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v828;
    vlSelf->gshare__DOT__GSHARE_PHT[0x33dU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v829;
    vlSelf->gshare__DOT__GSHARE_PHT[0x33eU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v830;
    vlSelf->gshare__DOT__GSHARE_PHT[0x33fU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v831;
    vlSelf->gshare__DOT__GSHARE_PHT[0x340U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v832;
    vlSelf->gshare__DOT__GSHARE_PHT[0x341U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v833;
    vlSelf->gshare__DOT__GSHARE_PHT[0x342U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v834;
    vlSelf->gshare__DOT__GSHARE_PHT[0x343U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v835;
    vlSelf->gshare__DOT__GSHARE_PHT[0x344U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v836;
    vlSelf->gshare__DOT__GSHARE_PHT[0x345U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v837;
    vlSelf->gshare__DOT__GSHARE_PHT[0x346U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v838;
    vlSelf->gshare__DOT__GSHARE_PHT[0x347U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v839;
    vlSelf->gshare__DOT__GSHARE_PHT[0x348U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v840;
    vlSelf->gshare__DOT__GSHARE_PHT[0x349U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v841;
    vlSelf->gshare__DOT__GSHARE_PHT[0x34aU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v842;
    vlSelf->gshare__DOT__GSHARE_PHT[0x34bU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v843;
    vlSelf->gshare__DOT__GSHARE_PHT[0x34cU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v844;
    vlSelf->gshare__DOT__GSHARE_PHT[0x34dU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v845;
    vlSelf->gshare__DOT__GSHARE_PHT[0x34eU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v846;
    vlSelf->gshare__DOT__GSHARE_PHT[0x34fU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v847;
    vlSelf->gshare__DOT__GSHARE_PHT[0x350U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v848;
    vlSelf->gshare__DOT__GSHARE_PHT[0x351U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v849;
    vlSelf->gshare__DOT__GSHARE_PHT[0x352U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v850;
    vlSelf->gshare__DOT__GSHARE_PHT[0x353U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v851;
    vlSelf->gshare__DOT__GSHARE_PHT[0x354U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v852;
    vlSelf->gshare__DOT__GSHARE_PHT[0x355U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v853;
    vlSelf->gshare__DOT__GSHARE_PHT[0x356U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v854;
    vlSelf->gshare__DOT__GSHARE_PHT[0x357U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v855;
    vlSelf->gshare__DOT__GSHARE_PHT[0x358U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v856;
    vlSelf->gshare__DOT__GSHARE_PHT[0x359U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v857;
    vlSelf->gshare__DOT__GSHARE_PHT[0x35aU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v858;
    vlSelf->gshare__DOT__GSHARE_PHT[0x35bU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v859;
    vlSelf->gshare__DOT__GSHARE_PHT[0x35cU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v860;
    vlSelf->gshare__DOT__GSHARE_PHT[0x35dU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v861;
    vlSelf->gshare__DOT__GSHARE_PHT[0x35eU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v862;
    vlSelf->gshare__DOT__GSHARE_PHT[0x35fU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v863;
    vlSelf->gshare__DOT__GSHARE_PHT[0x360U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v864;
    vlSelf->gshare__DOT__GSHARE_PHT[0x361U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v865;
    vlSelf->gshare__DOT__GSHARE_PHT[0x362U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v866;
    vlSelf->gshare__DOT__GSHARE_PHT[0x363U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v867;
    vlSelf->gshare__DOT__GSHARE_PHT[0x364U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v868;
    vlSelf->gshare__DOT__GSHARE_PHT[0x365U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v869;
    vlSelf->gshare__DOT__GSHARE_PHT[0x366U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v870;
    vlSelf->gshare__DOT__GSHARE_PHT[0x367U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v871;
    vlSelf->gshare__DOT__GSHARE_PHT[0x368U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v872;
    vlSelf->gshare__DOT__GSHARE_PHT[0x369U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v873;
    vlSelf->gshare__DOT__GSHARE_PHT[0x36aU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v874;
    vlSelf->gshare__DOT__GSHARE_PHT[0x36bU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v875;
    vlSelf->gshare__DOT__GSHARE_PHT[0x36cU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v876;
    vlSelf->gshare__DOT__GSHARE_PHT[0x36dU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v877;
    vlSelf->gshare__DOT__GSHARE_PHT[0x36eU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v878;
    vlSelf->gshare__DOT__GSHARE_PHT[0x36fU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v879;
    vlSelf->gshare__DOT__GSHARE_PHT[0x370U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v880;
    vlSelf->gshare__DOT__GSHARE_PHT[0x371U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v881;
    vlSelf->gshare__DOT__GSHARE_PHT[0x372U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v882;
    vlSelf->gshare__DOT__GSHARE_PHT[0x373U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v883;
    vlSelf->gshare__DOT__GSHARE_PHT[0x374U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v884;
    vlSelf->gshare__DOT__GSHARE_PHT[0x375U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v885;
    vlSelf->gshare__DOT__GSHARE_PHT[0x376U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v886;
    vlSelf->gshare__DOT__GSHARE_PHT[0x377U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v887;
    vlSelf->gshare__DOT__GSHARE_PHT[0x378U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v888;
    vlSelf->gshare__DOT__GSHARE_PHT[0x379U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v889;
    vlSelf->gshare__DOT__GSHARE_PHT[0x37aU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v890;
    vlSelf->gshare__DOT__GSHARE_PHT[0x37bU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v891;
    vlSelf->gshare__DOT__GSHARE_PHT[0x37cU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v892;
    vlSelf->gshare__DOT__GSHARE_PHT[0x37dU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v893;
    vlSelf->gshare__DOT__GSHARE_PHT[0x37eU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v894;
    vlSelf->gshare__DOT__GSHARE_PHT[0x37fU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v895;
    vlSelf->gshare__DOT__GSHARE_PHT[0x380U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v896;
    vlSelf->gshare__DOT__GSHARE_PHT[0x381U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v897;
    vlSelf->gshare__DOT__GSHARE_PHT[0x382U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v898;
    vlSelf->gshare__DOT__GSHARE_PHT[0x383U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v899;
    vlSelf->gshare__DOT__GSHARE_PHT[0x384U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v900;
    vlSelf->gshare__DOT__GSHARE_PHT[0x385U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v901;
    vlSelf->gshare__DOT__GSHARE_PHT[0x386U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v902;
    vlSelf->gshare__DOT__GSHARE_PHT[0x387U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v903;
    vlSelf->gshare__DOT__GSHARE_PHT[0x388U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v904;
    vlSelf->gshare__DOT__GSHARE_PHT[0x389U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v905;
    vlSelf->gshare__DOT__GSHARE_PHT[0x38aU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v906;
    vlSelf->gshare__DOT__GSHARE_PHT[0x38bU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v907;
    vlSelf->gshare__DOT__GSHARE_PHT[0x38cU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v908;
    vlSelf->gshare__DOT__GSHARE_PHT[0x38dU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v909;
    vlSelf->gshare__DOT__GSHARE_PHT[0x38eU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v910;
    vlSelf->gshare__DOT__GSHARE_PHT[0x38fU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v911;
    vlSelf->gshare__DOT__GSHARE_PHT[0x390U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v912;
    vlSelf->gshare__DOT__GSHARE_PHT[0x391U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v913;
    vlSelf->gshare__DOT__GSHARE_PHT[0x392U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v914;
    vlSelf->gshare__DOT__GSHARE_PHT[0x393U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v915;
    vlSelf->gshare__DOT__GSHARE_PHT[0x394U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v916;
    vlSelf->gshare__DOT__GSHARE_PHT[0x395U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v917;
    vlSelf->gshare__DOT__GSHARE_PHT[0x396U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v918;
    vlSelf->gshare__DOT__GSHARE_PHT[0x397U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v919;
    vlSelf->gshare__DOT__GSHARE_PHT[0x398U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v920;
    vlSelf->gshare__DOT__GSHARE_PHT[0x399U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v921;
    vlSelf->gshare__DOT__GSHARE_PHT[0x39aU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v922;
    vlSelf->gshare__DOT__GSHARE_PHT[0x39bU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v923;
    vlSelf->gshare__DOT__GSHARE_PHT[0x39cU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v924;
    vlSelf->gshare__DOT__GSHARE_PHT[0x39dU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v925;
    vlSelf->gshare__DOT__GSHARE_PHT[0x39eU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v926;
    vlSelf->gshare__DOT__GSHARE_PHT[0x39fU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v927;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3a0U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v928;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3a1U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v929;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3a2U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v930;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3a3U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v931;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3a4U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v932;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3a5U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v933;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3a6U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v934;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3a7U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v935;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3a8U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v936;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3a9U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v937;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3aaU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v938;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3abU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v939;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3acU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v940;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3adU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v941;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3aeU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v942;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3afU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v943;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3b0U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v944;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3b1U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v945;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3b2U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v946;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3b3U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v947;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3b4U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v948;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3b5U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v949;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3b6U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v950;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3b7U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v951;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3b8U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v952;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3b9U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v953;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3baU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v954;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3bbU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v955;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3bcU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v956;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3bdU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v957;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3beU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v958;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3bfU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v959;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3c0U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v960;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3c1U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v961;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3c2U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v962;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3c3U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v963;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3c4U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v964;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3c5U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v965;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3c6U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v966;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3c7U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v967;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3c8U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v968;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3c9U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v969;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3caU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v970;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3cbU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v971;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3ccU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v972;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3cdU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v973;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3ceU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v974;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3cfU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v975;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3d0U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v976;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3d1U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v977;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3d2U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v978;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3d3U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v979;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3d4U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v980;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3d5U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v981;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3d6U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v982;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3d7U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v983;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3d8U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v984;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3d9U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v985;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3daU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v986;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3dbU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v987;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3dcU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v988;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3ddU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v989;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3deU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v990;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3dfU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v991;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3e0U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v992;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3e1U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v993;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3e2U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v994;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3e3U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v995;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3e4U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v996;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3e5U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v997;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3e6U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v998;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3e7U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v999;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3e8U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1000;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3e9U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1001;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3eaU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1002;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3ebU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1003;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3ecU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1004;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3edU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1005;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3eeU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1006;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3efU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1007;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3f0U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1008;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3f1U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1009;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3f2U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1010;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3f3U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1011;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3f4U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1012;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3f5U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1013;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3f6U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1014;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3f7U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1015;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3f8U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1016;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3f9U] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1017;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3faU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1018;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3fbU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1019;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3fcU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1020;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3fdU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1021;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3feU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1022;
    vlSelf->gshare__DOT__GSHARE_PHT[0x3ffU] = __Vdlyvval__gshare__DOT__GSHARE_PHT__v1023;
    vlSelf->current_instr0_GHSR = vlSelf->gshare__DOT__GHSR;
}
