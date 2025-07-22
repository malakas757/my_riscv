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
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v495 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1efU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f0U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f1U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f2U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f3U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f4U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f5U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f6U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f7U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f8U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1f9U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1faU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1fbU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1fcU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1fdU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1feU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x1ffU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x200U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x201U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x202U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x203U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x204U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x205U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x206U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x207U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x208U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x209U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x20aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x20bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x20cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x20dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x20eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x20fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x210U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x211U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x212U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x213U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x214U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x215U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x216U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x217U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x218U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x219U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x21aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x21bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x21cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x21dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x21eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x21fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x220U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x221U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x222U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x223U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x224U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x225U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x226U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x227U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x228U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x229U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x22aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x22bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x22cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x22dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x22eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x22fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x230U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x231U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x232U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x233U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x234U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x235U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x236U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x237U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x238U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x239U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x23aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x23bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x23cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x23dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x23eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x23fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x240U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x241U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x242U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x243U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x244U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x245U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x246U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x247U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x248U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x249U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x24aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x24bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x24cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x24dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x24eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x24fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x250U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x251U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x252U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x253U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x254U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x255U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x256U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x257U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x258U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x259U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x25aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x25bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x25cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x25dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x25eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x25fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x260U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x261U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x262U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x263U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x264U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x265U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x266U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x267U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x268U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x269U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x26aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x26bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x26cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x26dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x26eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x26fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x270U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x271U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x272U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x273U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x274U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x275U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x276U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x277U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x278U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x279U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x27aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x27bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x27cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x27dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x27eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x27fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x280U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x281U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x282U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x283U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x284U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x285U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x286U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x287U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x288U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x289U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x28aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x28bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x28cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x28dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x28eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x28fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x290U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x291U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x292U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x293U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x294U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x295U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x296U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x297U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x298U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x299U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x29aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x29bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x29cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x29dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x29eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x29fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a0U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a1U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a2U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a3U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a4U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a5U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a6U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a7U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a8U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2a9U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2aaU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2abU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2acU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2adU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2aeU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2afU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b0U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b1U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b2U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b3U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b4U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b5U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b6U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b7U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b8U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2b9U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2baU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2bbU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2bcU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2bdU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2beU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2bfU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c0U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c1U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c2U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c3U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c4U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c5U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c6U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c7U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c8U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2c9U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2caU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2cbU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2ccU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2cdU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2ceU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2cfU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d0U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d1U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d2U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d3U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d4U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d5U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d6U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d7U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d8U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2d9U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2daU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2dbU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2dcU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2ddU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2deU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2dfU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e0U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e1U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e2U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e3U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e4U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e5U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e6U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e7U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e8U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2e9U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2eaU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2ebU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2ecU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2edU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2eeU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2efU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f0U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f1U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f2U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f3U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f4U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f5U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f6U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f7U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f8U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2f9U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2faU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2fbU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2fcU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2fdU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2feU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x2ffU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x300U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x301U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x302U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x303U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x304U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x305U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x306U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x307U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x308U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x309U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x30aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x30bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x30cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x30dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x30eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x30fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x310U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x311U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x312U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x313U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x314U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x315U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x316U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x317U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x318U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x319U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x31aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x31bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x31cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x31dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x31eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x31fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x320U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x321U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x322U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x323U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x324U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x325U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x326U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x327U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x328U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x329U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x32aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x32bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x32cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x32dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x32eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x32fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x330U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x331U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x332U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
            = (((IData)(vlSelf->EXE_is_BJ) & (0x333U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
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
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v820 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x334U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x334U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x334U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x334U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x334U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v821 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x335U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x335U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x335U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x335U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x335U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v822 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x336U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x336U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x336U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x336U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x336U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v823 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x337U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x337U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x337U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x337U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x337U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v824 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x338U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x338U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x338U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x338U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x338U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v825 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x339U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x339U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x339U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x339U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x339U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v826 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x33aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x33aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x33aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x33aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x33aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v827 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x33bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x33bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x33bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x33bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x33bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v828 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x33cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x33cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x33cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x33cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x33cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v829 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x33dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x33dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x33dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x33dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x33dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v830 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x33eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x33eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x33eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x33eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x33eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v831 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x33fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x33fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x33fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x33fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x33fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v832 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x340U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x340U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x340U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x340U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x340U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v833 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x341U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x341U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x341U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x341U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x341U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v834 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x342U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x342U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x342U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x342U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x342U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v835 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x343U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x343U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x343U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x343U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x343U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v836 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x344U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x344U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x344U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x344U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x344U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v837 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x345U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x345U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x345U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x345U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x345U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v838 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x346U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x346U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x346U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x346U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x346U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v839 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x347U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x347U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x347U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x347U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x347U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v840 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x348U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x348U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x348U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x348U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x348U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v841 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x349U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x349U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x349U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x349U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x349U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v842 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x34aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x34aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x34aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x34aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x34aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v843 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x34bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x34bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x34bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x34bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x34bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v844 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x34cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x34cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x34cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x34cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x34cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v845 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x34dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x34dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x34dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x34dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x34dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v846 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x34eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x34eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x34eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x34eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x34eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v847 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x34fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x34fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x34fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x34fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x34fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v848 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x350U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x350U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x350U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x350U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x350U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v849 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x351U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x351U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x351U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x351U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x351U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v850 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x352U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x352U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x352U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x352U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x352U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v851 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x353U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x353U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x353U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x353U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x353U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v852 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x354U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x354U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x354U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x354U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x354U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v853 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x355U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x355U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x355U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x355U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x355U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v854 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x356U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x356U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x356U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x356U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x356U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v855 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x357U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x357U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x357U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x357U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x357U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v856 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x358U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x358U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x358U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x358U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x358U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v857 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x359U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x359U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x359U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x359U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x359U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v858 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x35aU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x35aU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x35aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x35aU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x35aU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v859 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x35bU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x35bU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x35bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x35bU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x35bU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v860 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x35cU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x35cU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x35cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x35cU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x35cU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v861 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x35dU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x35dU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x35dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x35dU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x35dU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v862 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x35eU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x35eU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x35eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x35eU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x35eU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v863 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x35fU 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x35fU]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x35fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x35fU]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x35fU]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v864 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x360U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x360U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x360U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x360U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x360U]);
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v865 
            = (((IData)(vlSelf->EXE_is_BJ) & (0x361U 
                                              == (IData)(vlSelf->gshare__DOT__update_pht_addr)))
                ? ((2U & vlSelf->gshare__DOT__GSHARE_PHT
                    [0x361U]) ? ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                                  [0x361U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->EXE_branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->gshare__DOT__GSHARE_PHT
                     [0x361U]) ? ((IData)(vlSelf->EXE_branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->EXE_branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->gshare__DOT__GSHARE_PHT[0x361U]);
    } else {
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
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v820 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v821 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v822 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v823 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v824 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v825 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v826 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v827 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v828 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v829 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v830 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v831 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v832 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v833 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v834 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v835 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v836 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v837 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v838 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v839 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v840 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v841 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v842 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v843 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v844 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v845 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v846 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v847 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v848 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v849 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v850 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v851 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v852 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v853 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v854 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v855 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v856 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v857 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v858 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v859 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v860 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v861 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v862 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v863 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v864 = 2U;
        vlSelf->__Vdlyvval__gshare__DOT__GSHARE_PHT__v865 = 2U;
    }
}
