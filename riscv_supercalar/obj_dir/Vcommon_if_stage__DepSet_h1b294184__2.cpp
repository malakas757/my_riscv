// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_INLINE_OPT void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__7(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__7\n"); );
    // Body
    if (vlSymsp->TOP.reset_n) {
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v613 
            = ((IData)(((0x4ca000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x265U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x265U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x265U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x265U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v614 
            = ((IData)(((0x4cc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x266U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x266U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x266U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x266U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v615 
            = ((IData)(((0x4ce000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x267U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x267U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x267U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x267U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v616 
            = ((IData)(((0x4d0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x268U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x268U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x268U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x268U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v617 
            = ((IData)(((0x4d2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x269U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x269U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x269U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x269U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v618 
            = ((IData)(((0x4d4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x26aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v619 
            = ((IData)(((0x4d6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x26bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v620 
            = ((IData)(((0x4d8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x26cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v621 
            = ((IData)(((0x4da000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x26dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v622 
            = ((IData)(((0x4dc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x26eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v623 
            = ((IData)(((0x4de000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x26fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v624 
            = ((IData)(((0x4e0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x270U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x270U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x270U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x270U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v625 
            = ((IData)(((0x4e2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x271U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x271U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x271U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x271U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v626 
            = ((IData)(((0x4e4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x272U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x272U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x272U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x272U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v627 
            = ((IData)(((0x4e6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x273U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x273U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x273U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x273U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v628 
            = ((IData)(((0x4e8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x274U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x274U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x274U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x274U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v629 
            = ((IData)(((0x4ea000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x275U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x275U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x275U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x275U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v630 
            = ((IData)(((0x4ec000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x276U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x276U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x276U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x276U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v631 
            = ((IData)(((0x4ee000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x277U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x277U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x277U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x277U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v632 
            = ((IData)(((0x4f0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x278U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x278U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x278U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x278U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v633 
            = ((IData)(((0x4f2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x279U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x279U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x279U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x279U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v634 
            = ((IData)(((0x4f4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x27aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v635 
            = ((IData)(((0x4f6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x27bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v636 
            = ((IData)(((0x4f8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x27cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v637 
            = ((IData)(((0x4fa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x27dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v638 
            = ((IData)(((0x4fc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x27eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v639 
            = ((IData)(((0x4fe000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x27fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v640 
            = ((IData)(((0x500000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x280U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x280U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x280U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x280U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v641 
            = ((IData)(((0x502000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x281U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x281U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x281U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x281U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v642 
            = ((IData)(((0x504000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x282U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x282U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x282U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x282U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v643 
            = ((IData)(((0x506000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x283U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x283U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x283U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x283U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v644 
            = ((IData)(((0x508000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x284U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x284U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x284U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x284U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v645 
            = ((IData)(((0x50a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x285U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x285U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x285U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x285U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v646 
            = ((IData)(((0x50c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x286U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x286U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x286U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x286U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v647 
            = ((IData)(((0x50e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x287U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x287U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x287U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x287U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v648 
            = ((IData)(((0x510000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x288U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x288U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x288U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x288U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v649 
            = ((IData)(((0x512000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x289U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x289U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x289U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x289U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v650 
            = ((IData)(((0x514000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x28aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v651 
            = ((IData)(((0x516000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x28bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v652 
            = ((IData)(((0x518000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x28cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v653 
            = ((IData)(((0x51a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x28dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v654 
            = ((IData)(((0x51c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x28eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v655 
            = ((IData)(((0x51e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x28fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v656 
            = ((IData)(((0x520000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x290U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x290U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x290U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x290U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v657 
            = ((IData)(((0x522000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x291U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x291U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x291U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x291U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v658 
            = ((IData)(((0x524000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x292U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x292U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x292U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x292U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v659 
            = ((IData)(((0x526000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x293U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x293U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x293U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x293U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v660 
            = ((IData)(((0x528000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x294U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x294U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x294U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x294U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v661 
            = ((IData)(((0x52a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x295U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x295U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x295U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x295U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v662 
            = ((IData)(((0x52c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x296U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x296U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x296U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x296U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v663 
            = ((IData)(((0x52e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x297U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x297U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x297U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x297U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v664 
            = ((IData)(((0x530000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x298U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x298U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x298U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x298U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v665 
            = ((IData)(((0x532000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x299U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x299U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x299U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x299U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v666 
            = ((IData)(((0x534000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x29aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v667 
            = ((IData)(((0x536000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x29bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v668 
            = ((IData)(((0x538000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x29cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v669 
            = ((IData)(((0x53a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x29dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v670 
            = ((IData)(((0x53c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x29eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v671 
            = ((IData)(((0x53e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x29fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v672 
            = ((IData)(((0x540000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2a0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v673 
            = ((IData)(((0x542000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2a1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v674 
            = ((IData)(((0x544000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2a2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v675 
            = ((IData)(((0x546000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2a3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v676 
            = ((IData)(((0x548000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2a4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v677 
            = ((IData)(((0x54a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2a5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v678 
            = ((IData)(((0x54c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2a6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v679 
            = ((IData)(((0x54e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2a7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v680 
            = ((IData)(((0x550000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2a8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v681 
            = ((IData)(((0x552000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2a9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2a9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2a9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v682 
            = ((IData)(((0x554000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2aaU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2aaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2aaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2aaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v683 
            = ((IData)(((0x556000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2abU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2abU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2abU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2abU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v684 
            = ((IData)(((0x558000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2acU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2acU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2acU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2acU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v685 
            = ((IData)(((0x55a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2adU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2adU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2adU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2adU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v686 
            = ((IData)(((0x55c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2aeU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2aeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2aeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2aeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v687 
            = ((IData)(((0x55e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2afU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2afU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2afU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2afU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v688 
            = ((IData)(((0x560000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2b0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v689 
            = ((IData)(((0x562000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2b1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v690 
            = ((IData)(((0x564000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2b2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v691 
            = ((IData)(((0x566000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2b3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v692 
            = ((IData)(((0x568000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2b4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v693 
            = ((IData)(((0x56a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2b5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v694 
            = ((IData)(((0x56c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2b6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v695 
            = ((IData)(((0x56e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2b7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v696 
            = ((IData)(((0x570000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2b8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v697 
            = ((IData)(((0x572000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2b9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2b9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2b9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v698 
            = ((IData)(((0x574000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2baU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2baU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2baU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2baU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v699 
            = ((IData)(((0x576000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2bbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2bbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2bbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2bbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v700 
            = ((IData)(((0x578000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2bcU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2bcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2bcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2bcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v701 
            = ((IData)(((0x57a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2bdU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2bdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2bdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2bdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v702 
            = ((IData)(((0x57c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2beU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2beU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2beU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2beU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v703 
            = ((IData)(((0x57e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2bfU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2bfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2bfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2bfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v704 
            = ((IData)(((0x580000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2c0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v705 
            = ((IData)(((0x582000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2c1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v706 
            = ((IData)(((0x584000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2c2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v707 
            = ((IData)(((0x586000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2c3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v708 
            = ((IData)(((0x588000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2c4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v709 
            = ((IData)(((0x58a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2c5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v710 
            = ((IData)(((0x58c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2c6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v711 
            = ((IData)(((0x58e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2c7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v712 
            = ((IData)(((0x590000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2c8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v713 
            = ((IData)(((0x592000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2c9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2c9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2c9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v714 
            = ((IData)(((0x594000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2caU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2caU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2caU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2caU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v715 
            = ((IData)(((0x596000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2cbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2cbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2cbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2cbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v716 
            = ((IData)(((0x598000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2ccU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ccU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ccU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ccU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v717 
            = ((IData)(((0x59a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2cdU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2cdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2cdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2cdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v718 
            = ((IData)(((0x59c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2ceU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ceU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ceU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ceU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v719 
            = ((IData)(((0x59e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2cfU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2cfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2cfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2cfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v720 
            = ((IData)(((0x5a0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2d0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v721 
            = ((IData)(((0x5a2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2d1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v722 
            = ((IData)(((0x5a4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2d2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v723 
            = ((IData)(((0x5a6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2d3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v724 
            = ((IData)(((0x5a8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2d4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v725 
            = ((IData)(((0x5aa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2d5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v726 
            = ((IData)(((0x5ac000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2d6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v727 
            = ((IData)(((0x5ae000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2d7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v728 
            = ((IData)(((0x5b0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2d8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v729 
            = ((IData)(((0x5b2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2d9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2d9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2d9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v730 
            = ((IData)(((0x5b4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2daU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2daU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2daU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2daU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v731 
            = ((IData)(((0x5b6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2dbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2dbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2dbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2dbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v732 
            = ((IData)(((0x5b8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2dcU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2dcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2dcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2dcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v733 
            = ((IData)(((0x5ba000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2ddU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ddU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ddU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ddU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v734 
            = ((IData)(((0x5bc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2deU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2deU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2deU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2deU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v735 
            = ((IData)(((0x5be000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2dfU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2dfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2dfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2dfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v736 
            = ((IData)(((0x5c0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2e0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v737 
            = ((IData)(((0x5c2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2e1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v738 
            = ((IData)(((0x5c4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2e2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v739 
            = ((IData)(((0x5c6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2e3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v740 
            = ((IData)(((0x5c8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2e4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v741 
            = ((IData)(((0x5ca000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2e5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v742 
            = ((IData)(((0x5cc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2e6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v743 
            = ((IData)(((0x5ce000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2e7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v744 
            = ((IData)(((0x5d0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2e8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v745 
            = ((IData)(((0x5d2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2e9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2e9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2e9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v746 
            = ((IData)(((0x5d4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2eaU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2eaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2eaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2eaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v747 
            = ((IData)(((0x5d6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2ebU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ebU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ebU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ebU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v748 
            = ((IData)(((0x5d8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2ecU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ecU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ecU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ecU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v749 
            = ((IData)(((0x5da000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2edU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2edU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2edU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2edU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v750 
            = ((IData)(((0x5dc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2eeU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2eeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2eeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2eeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v751 
            = ((IData)(((0x5de000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2efU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2efU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2efU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2efU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v752 
            = ((IData)(((0x5e0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2f0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v753 
            = ((IData)(((0x5e2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2f1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v754 
            = ((IData)(((0x5e4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2f2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v755 
            = ((IData)(((0x5e6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2f3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v756 
            = ((IData)(((0x5e8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2f4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v757 
            = ((IData)(((0x5ea000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2f5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v758 
            = ((IData)(((0x5ec000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2f6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v759 
            = ((IData)(((0x5ee000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2f7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v760 
            = ((IData)(((0x5f0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2f8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v761 
            = ((IData)(((0x5f2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2f9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2f9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2f9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v762 
            = ((IData)(((0x5f4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2faU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2faU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2faU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2faU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v763 
            = ((IData)(((0x5f6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2fbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2fbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2fbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2fbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v764 
            = ((IData)(((0x5f8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2fcU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2fcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2fcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2fcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v765 
            = ((IData)(((0x5fa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2fdU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2fdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2fdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2fdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v766 
            = ((IData)(((0x5fc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2feU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2feU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2feU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2feU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v767 
            = ((IData)(((0x5fe000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2ffU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ffU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2ffU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2ffU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v768 
            = ((IData)(((0x600000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x300U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x300U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x300U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x300U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v769 
            = ((IData)(((0x602000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x301U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x301U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x301U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x301U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v770 
            = ((IData)(((0x604000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x302U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x302U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x302U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x302U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v771 
            = ((IData)(((0x606000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x303U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x303U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x303U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x303U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v772 
            = ((IData)(((0x608000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x304U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x304U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x304U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x304U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v773 
            = ((IData)(((0x60a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x305U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x305U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x305U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x305U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v774 
            = ((IData)(((0x60c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x306U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x306U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x306U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x306U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v775 
            = ((IData)(((0x60e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x307U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x307U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x307U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x307U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v776 
            = ((IData)(((0x610000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x308U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x308U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x308U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x308U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v777 
            = ((IData)(((0x612000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x309U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x309U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x309U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x309U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v778 
            = ((IData)(((0x614000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x30aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v779 
            = ((IData)(((0x616000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x30bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v780 
            = ((IData)(((0x618000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x30cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v781 
            = ((IData)(((0x61a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x30dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v782 
            = ((IData)(((0x61c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x30eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v783 
            = ((IData)(((0x61e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x30fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v784 
            = ((IData)(((0x620000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x310U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x310U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x310U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x310U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v785 
            = ((IData)(((0x622000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x311U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x311U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x311U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x311U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v786 
            = ((IData)(((0x624000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x312U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x312U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x312U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x312U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v787 
            = ((IData)(((0x626000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x313U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x313U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x313U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x313U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v788 
            = ((IData)(((0x628000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x314U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x314U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x314U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x314U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v789 
            = ((IData)(((0x62a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x315U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x315U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x315U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x315U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v790 
            = ((IData)(((0x62c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x316U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x316U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x316U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x316U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v791 
            = ((IData)(((0x62e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x317U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x317U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x317U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x317U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v792 
            = ((IData)(((0x630000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x318U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x318U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x318U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x318U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v793 
            = ((IData)(((0x632000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x319U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x319U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x319U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x319U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v794 
            = ((IData)(((0x634000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x31aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v795 
            = ((IData)(((0x636000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x31bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v796 
            = ((IData)(((0x638000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x31cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v797 
            = ((IData)(((0x63a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x31dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v798 
            = ((IData)(((0x63c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x31eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v799 
            = ((IData)(((0x63e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x31fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v800 
            = ((IData)(((0x640000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x320U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x320U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x320U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x320U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v801 
            = ((IData)(((0x642000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x321U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x321U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x321U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x321U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v802 
            = ((IData)(((0x644000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x322U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x322U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x322U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x322U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v803 
            = ((IData)(((0x646000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x323U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x323U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x323U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x323U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v804 
            = ((IData)(((0x648000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x324U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x324U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x324U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x324U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v805 
            = ((IData)(((0x64a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x325U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x325U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x325U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x325U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v806 
            = ((IData)(((0x64c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x326U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x326U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x326U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x326U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v807 
            = ((IData)(((0x64e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x327U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x327U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x327U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x327U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v808 
            = ((IData)(((0x650000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x328U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x328U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x328U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x328U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v809 
            = ((IData)(((0x652000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x329U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x329U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x329U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x329U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v810 
            = ((IData)(((0x654000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x32aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v811 
            = ((IData)(((0x656000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x32bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v812 
            = ((IData)(((0x658000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x32cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v813 
            = ((IData)(((0x65a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x32dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v814 
            = ((IData)(((0x65c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x32eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v815 
            = ((IData)(((0x65e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x32fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v816 
            = ((IData)(((0x660000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x330U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x330U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x330U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x330U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v817 
            = ((IData)(((0x662000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x331U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x331U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x331U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x331U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v818 
            = ((IData)(((0x664000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x332U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x332U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x332U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x332U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v819 
            = ((IData)(((0x666000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x333U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x333U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x333U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x333U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v820 
            = ((IData)(((0x668000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x334U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x334U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x334U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x334U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v821 
            = ((IData)(((0x66a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x335U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x335U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x335U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x335U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v822 
            = ((IData)(((0x66c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x336U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x336U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x336U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x336U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v823 
            = ((IData)(((0x66e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x337U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x337U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x337U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x337U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v824 
            = ((IData)(((0x670000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x338U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x338U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x338U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x338U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v825 
            = ((IData)(((0x672000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x339U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x339U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x339U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x339U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v826 
            = ((IData)(((0x674000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x33aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v827 
            = ((IData)(((0x676000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x33bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v828 
            = ((IData)(((0x678000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x33cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v829 
            = ((IData)(((0x67a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x33dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v830 
            = ((IData)(((0x67c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x33eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v831 
            = ((IData)(((0x67e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x33fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v832 
            = ((IData)(((0x680000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x340U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x340U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x340U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x340U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v833 
            = ((IData)(((0x682000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x341U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x341U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x341U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x341U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v834 
            = ((IData)(((0x684000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x342U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x342U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x342U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x342U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v835 
            = ((IData)(((0x686000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x343U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x343U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x343U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x343U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v836 
            = ((IData)(((0x688000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x344U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x344U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x344U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x344U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v837 
            = ((IData)(((0x68a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x345U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x345U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x345U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x345U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v838 
            = ((IData)(((0x68c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x346U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x346U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x346U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x346U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v839 
            = ((IData)(((0x68e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x347U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x347U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x347U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x347U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v840 
            = ((IData)(((0x690000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x348U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x348U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x348U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x348U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v841 
            = ((IData)(((0x692000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x349U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x349U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x349U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x349U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v842 
            = ((IData)(((0x694000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x34aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v843 
            = ((IData)(((0x696000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x34bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v844 
            = ((IData)(((0x698000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x34cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v845 
            = ((IData)(((0x69a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x34dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v846 
            = ((IData)(((0x69c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x34eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v847 
            = ((IData)(((0x69e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x34fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v848 
            = ((IData)(((0x6a0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x350U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x350U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x350U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x350U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v849 
            = ((IData)(((0x6a2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x351U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x351U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x351U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x351U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v850 
            = ((IData)(((0x6a4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x352U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x352U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x352U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x352U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v851 
            = ((IData)(((0x6a6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x353U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x353U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x353U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x353U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v852 
            = ((IData)(((0x6a8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x354U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x354U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x354U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x354U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v853 
            = ((IData)(((0x6aa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x355U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x355U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x355U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x355U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v854 
            = ((IData)(((0x6ac000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x356U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x356U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x356U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x356U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v855 
            = ((IData)(((0x6ae000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x357U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x357U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x357U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x357U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v856 
            = ((IData)(((0x6b0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x358U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x358U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x358U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x358U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v857 
            = ((IData)(((0x6b2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x359U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x359U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x359U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x359U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v858 
            = ((IData)(((0x6b4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x35aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v859 
            = ((IData)(((0x6b6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x35bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v860 
            = ((IData)(((0x6b8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x35cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v861 
            = ((IData)(((0x6ba000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x35dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v862 
            = ((IData)(((0x6bc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x35eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v863 
            = ((IData)(((0x6be000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x35fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v864 
            = ((IData)(((0x6c0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x360U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x360U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x360U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x360U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v865 
            = ((IData)(((0x6c2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x361U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x361U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x361U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x361U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v866 
            = ((IData)(((0x6c4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x362U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x362U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x362U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x362U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v867 
            = ((IData)(((0x6c6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x363U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x363U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x363U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x363U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v868 
            = ((IData)(((0x6c8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x364U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x364U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x364U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x364U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v869 
            = ((IData)(((0x6ca000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x365U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x365U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x365U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x365U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v870 
            = ((IData)(((0x6cc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x366U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x366U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x366U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x366U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v871 
            = ((IData)(((0x6ce000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x367U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x367U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x367U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x367U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v872 
            = ((IData)(((0x6d0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x368U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x368U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x368U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x368U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v873 
            = ((IData)(((0x6d2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x369U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x369U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x369U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x369U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v874 
            = ((IData)(((0x6d4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x36aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v875 
            = ((IData)(((0x6d6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x36bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v876 
            = ((IData)(((0x6d8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x36cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v877 
            = ((IData)(((0x6da000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x36dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v878 
            = ((IData)(((0x6dc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x36eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v879 
            = ((IData)(((0x6de000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x36fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v880 
            = ((IData)(((0x6e0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x370U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x370U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x370U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x370U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v881 
            = ((IData)(((0x6e2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x371U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x371U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x371U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x371U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v882 
            = ((IData)(((0x6e4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x372U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x372U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x372U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x372U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v883 
            = ((IData)(((0x6e6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x373U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x373U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x373U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x373U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v884 
            = ((IData)(((0x6e8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x374U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x374U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x374U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x374U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v885 
            = ((IData)(((0x6ea000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x375U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x375U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x375U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x375U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v886 
            = ((IData)(((0x6ec000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x376U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x376U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x376U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x376U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v887 
            = ((IData)(((0x6ee000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x377U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x377U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x377U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x377U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v888 
            = ((IData)(((0x6f0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x378U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x378U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x378U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x378U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v889 
            = ((IData)(((0x6f2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x379U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x379U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x379U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x379U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v890 
            = ((IData)(((0x6f4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x37aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37aU]);
    } else {
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
    }
}
