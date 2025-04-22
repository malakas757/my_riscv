// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_INLINE_OPT void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__6(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__6\n"); );
    // Body
    if (vlSymsp->TOP.reset_n) {
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v335 
            = ((IData)(((0x29e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x14fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x14fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v336 
            = ((IData)(((0x2a0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x150U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x150U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x150U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x150U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v337 
            = ((IData)(((0x2a2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x151U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x151U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x151U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x151U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v338 
            = ((IData)(((0x2a4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x152U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x152U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x152U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x152U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v339 
            = ((IData)(((0x2a6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x153U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x153U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x153U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x153U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v340 
            = ((IData)(((0x2a8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x154U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x154U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x154U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x154U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v341 
            = ((IData)(((0x2aa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x155U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x155U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x155U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x155U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v342 
            = ((IData)(((0x2ac000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x156U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x156U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x156U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x156U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v343 
            = ((IData)(((0x2ae000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x157U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x157U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x157U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x157U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v344 
            = ((IData)(((0x2b0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x158U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x158U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x158U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x158U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v345 
            = ((IData)(((0x2b2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x159U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x159U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x159U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x159U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v346 
            = ((IData)(((0x2b4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x15aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x15aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v347 
            = ((IData)(((0x2b6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x15bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x15bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v348 
            = ((IData)(((0x2b8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x15cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x15cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v349 
            = ((IData)(((0x2ba000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x15dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x15dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v350 
            = ((IData)(((0x2bc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x15eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x15eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v351 
            = ((IData)(((0x2be000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x15fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x15fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v352 
            = ((IData)(((0x2c0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x160U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x160U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x160U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x160U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v353 
            = ((IData)(((0x2c2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x161U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x161U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x161U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x161U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v354 
            = ((IData)(((0x2c4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x162U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x162U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x162U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x162U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v355 
            = ((IData)(((0x2c6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x163U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x163U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x163U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x163U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v356 
            = ((IData)(((0x2c8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x164U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x164U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x164U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x164U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v357 
            = ((IData)(((0x2ca000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x165U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x165U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x165U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x165U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v358 
            = ((IData)(((0x2cc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x166U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x166U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x166U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x166U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v359 
            = ((IData)(((0x2ce000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x167U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x167U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x167U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x167U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v360 
            = ((IData)(((0x2d0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x168U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x168U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x168U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x168U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v361 
            = ((IData)(((0x2d2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x169U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x169U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x169U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x169U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v362 
            = ((IData)(((0x2d4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x16aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v363 
            = ((IData)(((0x2d6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x16bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v364 
            = ((IData)(((0x2d8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x16cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v365 
            = ((IData)(((0x2da000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x16dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v366 
            = ((IData)(((0x2dc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x16eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v367 
            = ((IData)(((0x2de000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x16fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v368 
            = ((IData)(((0x2e0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x170U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x170U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x170U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x170U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v369 
            = ((IData)(((0x2e2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x171U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x171U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x171U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x171U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v370 
            = ((IData)(((0x2e4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x172U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x172U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x172U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x172U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v371 
            = ((IData)(((0x2e6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x173U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x173U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x173U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x173U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v372 
            = ((IData)(((0x2e8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x174U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x174U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x174U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x174U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v373 
            = ((IData)(((0x2ea000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x175U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x175U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x175U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x175U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v374 
            = ((IData)(((0x2ec000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x176U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x176U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x176U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x176U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v375 
            = ((IData)(((0x2ee000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x177U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x177U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x177U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x177U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v376 
            = ((IData)(((0x2f0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x178U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x178U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x178U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x178U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v377 
            = ((IData)(((0x2f2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x179U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x179U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x179U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x179U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v378 
            = ((IData)(((0x2f4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x17aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v379 
            = ((IData)(((0x2f6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x17bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v380 
            = ((IData)(((0x2f8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x17cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v381 
            = ((IData)(((0x2fa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x17dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v382 
            = ((IData)(((0x2fc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x17eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v383 
            = ((IData)(((0x2fe000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x17fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v384 
            = ((IData)(((0x300000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x180U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x180U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x180U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x180U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v385 
            = ((IData)(((0x302000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x181U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x181U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x181U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x181U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v386 
            = ((IData)(((0x304000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x182U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x182U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x182U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x182U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v387 
            = ((IData)(((0x306000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x183U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x183U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x183U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x183U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v388 
            = ((IData)(((0x308000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x184U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x184U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x184U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x184U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v389 
            = ((IData)(((0x30a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x185U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x185U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x185U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x185U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v390 
            = ((IData)(((0x30c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x186U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x186U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x186U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x186U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v391 
            = ((IData)(((0x30e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x187U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x187U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x187U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x187U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v392 
            = ((IData)(((0x310000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x188U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x188U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x188U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x188U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v393 
            = ((IData)(((0x312000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x189U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x189U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x189U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x189U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v394 
            = ((IData)(((0x314000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x18aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v395 
            = ((IData)(((0x316000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x18bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v396 
            = ((IData)(((0x318000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x18cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v397 
            = ((IData)(((0x31a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x18dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v398 
            = ((IData)(((0x31c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x18eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v399 
            = ((IData)(((0x31e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x18fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v400 
            = ((IData)(((0x320000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x190U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x190U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x190U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x190U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v401 
            = ((IData)(((0x322000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x191U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x191U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x191U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x191U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v402 
            = ((IData)(((0x324000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x192U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x192U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x192U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x192U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v403 
            = ((IData)(((0x326000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x193U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x193U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x193U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x193U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v404 
            = ((IData)(((0x328000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x194U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x194U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x194U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x194U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v405 
            = ((IData)(((0x32a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x195U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x195U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x195U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x195U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v406 
            = ((IData)(((0x32c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x196U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x196U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x196U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x196U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v407 
            = ((IData)(((0x32e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x197U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x197U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x197U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x197U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v408 
            = ((IData)(((0x330000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x198U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x198U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x198U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x198U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v409 
            = ((IData)(((0x332000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x199U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x199U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x199U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x199U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v410 
            = ((IData)(((0x334000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x19aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v411 
            = ((IData)(((0x336000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x19bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v412 
            = ((IData)(((0x338000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x19cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v413 
            = ((IData)(((0x33a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x19dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v414 
            = ((IData)(((0x33c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x19eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v415 
            = ((IData)(((0x33e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x19fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v416 
            = ((IData)(((0x340000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1a0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v417 
            = ((IData)(((0x342000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1a1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v418 
            = ((IData)(((0x344000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1a2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v419 
            = ((IData)(((0x346000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1a3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v420 
            = ((IData)(((0x348000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1a4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v421 
            = ((IData)(((0x34a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1a5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v422 
            = ((IData)(((0x34c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1a6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v423 
            = ((IData)(((0x34e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1a7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v424 
            = ((IData)(((0x350000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1a8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v425 
            = ((IData)(((0x352000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1a9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1a9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1a9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v426 
            = ((IData)(((0x354000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1aaU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1aaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1aaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1aaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v427 
            = ((IData)(((0x356000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1abU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1abU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1abU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1abU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v428 
            = ((IData)(((0x358000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1acU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1acU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1acU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1acU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v429 
            = ((IData)(((0x35a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1adU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1adU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1adU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1adU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v430 
            = ((IData)(((0x35c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1aeU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1aeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1aeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1aeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v431 
            = ((IData)(((0x35e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1afU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1afU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1afU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1afU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v432 
            = ((IData)(((0x360000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1b0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v433 
            = ((IData)(((0x362000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1b1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v434 
            = ((IData)(((0x364000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1b2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v435 
            = ((IData)(((0x366000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1b3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v436 
            = ((IData)(((0x368000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1b4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v437 
            = ((IData)(((0x36a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1b5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v438 
            = ((IData)(((0x36c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1b6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v439 
            = ((IData)(((0x36e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1b7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v440 
            = ((IData)(((0x370000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1b8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v441 
            = ((IData)(((0x372000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1b9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1b9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1b9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v442 
            = ((IData)(((0x374000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1baU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1baU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1baU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1baU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v443 
            = ((IData)(((0x376000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1bbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1bbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1bbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1bbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v444 
            = ((IData)(((0x378000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1bcU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1bcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1bcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1bcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v445 
            = ((IData)(((0x37a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1bdU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1bdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1bdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1bdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v446 
            = ((IData)(((0x37c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1beU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1beU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1beU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1beU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v447 
            = ((IData)(((0x37e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1bfU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1bfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1bfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1bfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v448 
            = ((IData)(((0x380000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1c0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v449 
            = ((IData)(((0x382000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1c1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v450 
            = ((IData)(((0x384000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1c2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v451 
            = ((IData)(((0x386000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1c3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v452 
            = ((IData)(((0x388000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1c4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v453 
            = ((IData)(((0x38a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1c5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v454 
            = ((IData)(((0x38c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1c6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v455 
            = ((IData)(((0x38e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1c7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v456 
            = ((IData)(((0x390000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1c8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v457 
            = ((IData)(((0x392000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1c9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1c9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1c9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v458 
            = ((IData)(((0x394000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1caU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1caU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1caU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1caU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v459 
            = ((IData)(((0x396000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1cbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1cbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1cbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1cbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v460 
            = ((IData)(((0x398000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1ccU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ccU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ccU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ccU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v461 
            = ((IData)(((0x39a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1cdU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1cdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1cdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1cdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v462 
            = ((IData)(((0x39c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1ceU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ceU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ceU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ceU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v463 
            = ((IData)(((0x39e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1cfU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1cfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1cfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1cfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v464 
            = ((IData)(((0x3a0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1d0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v465 
            = ((IData)(((0x3a2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1d1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v466 
            = ((IData)(((0x3a4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1d2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v467 
            = ((IData)(((0x3a6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1d3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v468 
            = ((IData)(((0x3a8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1d4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v469 
            = ((IData)(((0x3aa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1d5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v470 
            = ((IData)(((0x3ac000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1d6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v471 
            = ((IData)(((0x3ae000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1d7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v472 
            = ((IData)(((0x3b0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1d8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v473 
            = ((IData)(((0x3b2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1d9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1d9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1d9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v474 
            = ((IData)(((0x3b4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1daU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1daU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1daU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1daU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v475 
            = ((IData)(((0x3b6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1dbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1dbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1dbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1dbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v476 
            = ((IData)(((0x3b8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1dcU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1dcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1dcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1dcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v477 
            = ((IData)(((0x3ba000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1ddU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ddU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ddU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ddU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v478 
            = ((IData)(((0x3bc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1deU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1deU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1deU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1deU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v479 
            = ((IData)(((0x3be000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1dfU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1dfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1dfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1dfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v480 
            = ((IData)(((0x3c0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1e0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v481 
            = ((IData)(((0x3c2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1e1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v482 
            = ((IData)(((0x3c4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1e2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v483 
            = ((IData)(((0x3c6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1e3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v484 
            = ((IData)(((0x3c8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1e4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v485 
            = ((IData)(((0x3ca000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1e5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v486 
            = ((IData)(((0x3cc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1e6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v487 
            = ((IData)(((0x3ce000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1e7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v488 
            = ((IData)(((0x3d0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1e8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v489 
            = ((IData)(((0x3d2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1e9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1e9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1e9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v490 
            = ((IData)(((0x3d4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1eaU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1eaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1eaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1eaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v491 
            = ((IData)(((0x3d6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1ebU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ebU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ebU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ebU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v492 
            = ((IData)(((0x3d8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1ecU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ecU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ecU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ecU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v493 
            = ((IData)(((0x3da000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1edU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1edU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1edU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1edU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v494 
            = ((IData)(((0x3dc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1eeU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1eeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1eeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1eeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v495 
            = ((IData)(((0x3de000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1efU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1efU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1efU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1efU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v496 
            = ((IData)(((0x3e0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1f0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v497 
            = ((IData)(((0x3e2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1f1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v498 
            = ((IData)(((0x3e4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1f2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v499 
            = ((IData)(((0x3e6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1f3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v500 
            = ((IData)(((0x3e8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1f4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v501 
            = ((IData)(((0x3ea000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1f5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v502 
            = ((IData)(((0x3ec000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1f6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v503 
            = ((IData)(((0x3ee000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1f7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v504 
            = ((IData)(((0x3f0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1f8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v505 
            = ((IData)(((0x3f2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1f9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1f9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1f9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v506 
            = ((IData)(((0x3f4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1faU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1faU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1faU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1faU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v507 
            = ((IData)(((0x3f6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1fbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1fbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1fbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1fbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v508 
            = ((IData)(((0x3f8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1fcU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1fcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1fcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1fcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v509 
            = ((IData)(((0x3fa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1fdU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1fdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1fdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1fdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v510 
            = ((IData)(((0x3fc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1feU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1feU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1feU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1feU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v511 
            = ((IData)(((0x3fe000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1ffU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ffU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1ffU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1ffU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v512 
            = ((IData)(((0x400000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x200U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x200U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x200U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x200U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v513 
            = ((IData)(((0x402000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x201U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x201U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x201U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x201U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v514 
            = ((IData)(((0x404000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x202U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x202U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x202U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x202U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v515 
            = ((IData)(((0x406000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x203U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x203U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x203U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x203U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v516 
            = ((IData)(((0x408000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x204U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x204U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x204U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x204U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v517 
            = ((IData)(((0x40a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x205U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x205U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x205U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x205U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v518 
            = ((IData)(((0x40c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x206U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x206U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x206U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x206U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v519 
            = ((IData)(((0x40e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x207U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x207U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x207U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x207U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v520 
            = ((IData)(((0x410000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x208U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x208U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x208U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x208U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v521 
            = ((IData)(((0x412000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x209U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x209U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x209U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x209U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v522 
            = ((IData)(((0x414000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x20aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v523 
            = ((IData)(((0x416000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x20bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v524 
            = ((IData)(((0x418000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x20cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v525 
            = ((IData)(((0x41a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x20dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v526 
            = ((IData)(((0x41c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x20eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v527 
            = ((IData)(((0x41e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x20fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v528 
            = ((IData)(((0x420000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x210U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x210U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x210U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x210U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v529 
            = ((IData)(((0x422000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x211U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x211U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x211U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x211U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v530 
            = ((IData)(((0x424000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x212U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x212U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x212U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x212U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v531 
            = ((IData)(((0x426000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x213U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x213U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x213U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x213U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v532 
            = ((IData)(((0x428000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x214U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x214U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x214U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x214U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v533 
            = ((IData)(((0x42a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x215U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x215U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x215U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x215U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v534 
            = ((IData)(((0x42c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x216U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x216U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x216U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x216U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v535 
            = ((IData)(((0x42e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x217U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x217U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x217U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x217U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v536 
            = ((IData)(((0x430000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x218U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x218U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x218U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x218U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v537 
            = ((IData)(((0x432000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x219U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x219U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x219U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x219U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v538 
            = ((IData)(((0x434000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x21aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v539 
            = ((IData)(((0x436000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x21bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v540 
            = ((IData)(((0x438000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x21cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v541 
            = ((IData)(((0x43a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x21dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v542 
            = ((IData)(((0x43c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x21eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v543 
            = ((IData)(((0x43e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x21fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v544 
            = ((IData)(((0x440000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x220U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x220U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x220U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x220U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v545 
            = ((IData)(((0x442000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x221U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x221U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x221U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x221U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v546 
            = ((IData)(((0x444000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x222U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x222U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x222U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x222U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v547 
            = ((IData)(((0x446000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x223U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x223U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x223U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x223U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v548 
            = ((IData)(((0x448000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x224U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x224U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x224U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x224U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v549 
            = ((IData)(((0x44a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x225U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x225U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x225U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x225U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v550 
            = ((IData)(((0x44c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x226U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x226U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x226U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x226U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v551 
            = ((IData)(((0x44e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x227U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x227U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x227U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x227U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v552 
            = ((IData)(((0x450000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x228U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x228U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x228U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x228U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v553 
            = ((IData)(((0x452000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x229U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x229U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x229U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x229U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v554 
            = ((IData)(((0x454000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x22aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v555 
            = ((IData)(((0x456000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x22bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v556 
            = ((IData)(((0x458000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x22cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v557 
            = ((IData)(((0x45a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x22dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v558 
            = ((IData)(((0x45c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x22eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v559 
            = ((IData)(((0x45e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x22fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v560 
            = ((IData)(((0x460000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x230U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x230U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x230U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x230U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v561 
            = ((IData)(((0x462000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x231U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x231U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x231U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x231U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v562 
            = ((IData)(((0x464000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x232U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x232U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x232U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x232U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v563 
            = ((IData)(((0x466000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x233U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x233U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x233U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x233U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v564 
            = ((IData)(((0x468000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x234U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x234U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x234U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x234U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v565 
            = ((IData)(((0x46a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x235U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x235U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x235U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x235U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v566 
            = ((IData)(((0x46c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x236U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x236U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x236U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x236U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v567 
            = ((IData)(((0x46e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x237U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x237U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x237U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x237U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v568 
            = ((IData)(((0x470000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x238U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x238U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x238U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x238U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v569 
            = ((IData)(((0x472000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x239U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x239U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x239U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x239U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v570 
            = ((IData)(((0x474000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x23aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v571 
            = ((IData)(((0x476000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x23bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v572 
            = ((IData)(((0x478000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x23cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v573 
            = ((IData)(((0x47a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x23dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v574 
            = ((IData)(((0x47c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x23eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v575 
            = ((IData)(((0x47e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x23fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v576 
            = ((IData)(((0x480000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x240U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x240U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x240U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x240U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v577 
            = ((IData)(((0x482000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x241U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x241U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x241U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x241U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v578 
            = ((IData)(((0x484000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x242U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x242U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x242U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x242U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v579 
            = ((IData)(((0x486000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x243U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x243U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x243U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x243U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v580 
            = ((IData)(((0x488000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x244U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x244U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x244U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x244U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v581 
            = ((IData)(((0x48a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x245U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x245U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x245U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x245U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v582 
            = ((IData)(((0x48c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x246U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x246U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x246U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x246U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v583 
            = ((IData)(((0x48e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x247U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x247U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x247U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x247U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v584 
            = ((IData)(((0x490000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x248U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x248U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x248U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x248U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v585 
            = ((IData)(((0x492000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x249U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x249U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x249U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x249U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v586 
            = ((IData)(((0x494000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x24aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v587 
            = ((IData)(((0x496000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x24bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v588 
            = ((IData)(((0x498000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x24cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v589 
            = ((IData)(((0x49a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x24dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v590 
            = ((IData)(((0x49c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x24eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v591 
            = ((IData)(((0x49e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x24fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v592 
            = ((IData)(((0x4a0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x250U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x250U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x250U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x250U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v593 
            = ((IData)(((0x4a2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x251U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x251U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x251U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x251U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v594 
            = ((IData)(((0x4a4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x252U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x252U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x252U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x252U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v595 
            = ((IData)(((0x4a6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x253U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x253U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x253U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x253U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v596 
            = ((IData)(((0x4a8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x254U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x254U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x254U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x254U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v597 
            = ((IData)(((0x4aa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x255U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x255U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x255U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x255U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v598 
            = ((IData)(((0x4ac000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x256U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x256U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x256U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x256U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v599 
            = ((IData)(((0x4ae000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x257U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x257U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x257U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x257U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v600 
            = ((IData)(((0x4b0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x258U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x258U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x258U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x258U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v601 
            = ((IData)(((0x4b2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x259U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x259U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x259U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x259U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v602 
            = ((IData)(((0x4b4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x25aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v603 
            = ((IData)(((0x4b6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x25bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v604 
            = ((IData)(((0x4b8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x25cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v605 
            = ((IData)(((0x4ba000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x25dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v606 
            = ((IData)(((0x4bc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x25eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v607 
            = ((IData)(((0x4be000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x25fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v608 
            = ((IData)(((0x4c0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x260U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x260U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x260U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x260U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v609 
            = ((IData)(((0x4c2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x261U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x261U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x261U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x261U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v610 
            = ((IData)(((0x4c4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x262U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x262U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x262U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x262U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v611 
            = ((IData)(((0x4c6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x263U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x263U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x263U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x263U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v612 
            = ((IData)(((0x4c8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x264U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x264U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x264U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x264U]);
    } else {
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v335 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v336 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v337 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v338 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v339 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v340 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v341 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v342 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v343 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v344 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v345 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v346 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v347 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v348 = 2U;
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
    }
}
