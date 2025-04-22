// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_INLINE_OPT void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__8(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__8\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSymsp->TOP.reset_n) {
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v891 
            = ((IData)(((0x6f6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x37bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v892 
            = ((IData)(((0x6f8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x37cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v893 
            = ((IData)(((0x6fa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x37dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v894 
            = ((IData)(((0x6fc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x37eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v895 
            = ((IData)(((0x6fe000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x37fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v896 
            = ((IData)(((0x700000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x380U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x380U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x380U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x380U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v897 
            = ((IData)(((0x702000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x381U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x381U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x381U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x381U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v898 
            = ((IData)(((0x704000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x382U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x382U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x382U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x382U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v899 
            = ((IData)(((0x706000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x383U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x383U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x383U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x383U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v900 
            = ((IData)(((0x708000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x384U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x384U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x384U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x384U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v901 
            = ((IData)(((0x70a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x385U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x385U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x385U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x385U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v902 
            = ((IData)(((0x70c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x386U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x386U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x386U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x386U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v903 
            = ((IData)(((0x70e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x387U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x387U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x387U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x387U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v904 
            = ((IData)(((0x710000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x388U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x388U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x388U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x388U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v905 
            = ((IData)(((0x712000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x389U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x389U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x389U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x389U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v906 
            = ((IData)(((0x714000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x38aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v907 
            = ((IData)(((0x716000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x38bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v908 
            = ((IData)(((0x718000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x38cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v909 
            = ((IData)(((0x71a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x38dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v910 
            = ((IData)(((0x71c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x38eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v911 
            = ((IData)(((0x71e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x38fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v912 
            = ((IData)(((0x720000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x390U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x390U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x390U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x390U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v913 
            = ((IData)(((0x722000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x391U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x391U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x391U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x391U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v914 
            = ((IData)(((0x724000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x392U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x392U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x392U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x392U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v915 
            = ((IData)(((0x726000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x393U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x393U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x393U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x393U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v916 
            = ((IData)(((0x728000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x394U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x394U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x394U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x394U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v917 
            = ((IData)(((0x72a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x395U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x395U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x395U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x395U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v918 
            = ((IData)(((0x72c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x396U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x396U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x396U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x396U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v919 
            = ((IData)(((0x72e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x397U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x397U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x397U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x397U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v920 
            = ((IData)(((0x730000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x398U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x398U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x398U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x398U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v921 
            = ((IData)(((0x732000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x399U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x399U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x399U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x399U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v922 
            = ((IData)(((0x734000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x39aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v923 
            = ((IData)(((0x736000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x39bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v924 
            = ((IData)(((0x738000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x39cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v925 
            = ((IData)(((0x73a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x39dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v926 
            = ((IData)(((0x73c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x39eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v927 
            = ((IData)(((0x73e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x39fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v928 
            = ((IData)(((0x740000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3a0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v929 
            = ((IData)(((0x742000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3a1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v930 
            = ((IData)(((0x744000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3a2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v931 
            = ((IData)(((0x746000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3a3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v932 
            = ((IData)(((0x748000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3a4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v933 
            = ((IData)(((0x74a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3a5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v934 
            = ((IData)(((0x74c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3a6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v935 
            = ((IData)(((0x74e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3a7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v936 
            = ((IData)(((0x750000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3a8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v937 
            = ((IData)(((0x752000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3a9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3a9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3a9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v938 
            = ((IData)(((0x754000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3aaU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3aaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3aaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3aaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v939 
            = ((IData)(((0x756000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3abU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3abU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3abU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3abU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v940 
            = ((IData)(((0x758000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3acU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3acU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3acU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3acU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v941 
            = ((IData)(((0x75a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3adU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3adU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3adU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3adU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v942 
            = ((IData)(((0x75c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3aeU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3aeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3aeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3aeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v943 
            = ((IData)(((0x75e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3afU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3afU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3afU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3afU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v944 
            = ((IData)(((0x760000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3b0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3b0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v945 
            = ((IData)(((0x762000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3b1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3b1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v946 
            = ((IData)(((0x764000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3b2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3b2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v947 
            = ((IData)(((0x766000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3b3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3b3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v948 
            = ((IData)(((0x768000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3b4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3b4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v949 
            = ((IData)(((0x76a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3b5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3b5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v950 
            = ((IData)(((0x76c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3b6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3b6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v951 
            = ((IData)(((0x76e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3b7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3b7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v952 
            = ((IData)(((0x770000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3b8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3b8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v953 
            = ((IData)(((0x772000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3b9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3b9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3b9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v954 
            = ((IData)(((0x774000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3baU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3baU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3baU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3baU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v955 
            = ((IData)(((0x776000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3bbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3bbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3bbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3bbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v956 
            = ((IData)(((0x778000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3bcU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3bcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3bcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3bcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v957 
            = ((IData)(((0x77a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3bdU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3bdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3bdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3bdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v958 
            = ((IData)(((0x77c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3beU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3beU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3beU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3beU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v959 
            = ((IData)(((0x77e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3bfU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3bfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3bfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3bfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v960 
            = ((IData)(((0x780000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3c0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3c0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v961 
            = ((IData)(((0x782000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3c1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3c1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v962 
            = ((IData)(((0x784000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3c2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3c2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v963 
            = ((IData)(((0x786000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3c3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3c3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v964 
            = ((IData)(((0x788000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3c4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3c4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v965 
            = ((IData)(((0x78a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3c5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3c5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v966 
            = ((IData)(((0x78c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3c6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3c6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v967 
            = ((IData)(((0x78e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3c7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3c7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v968 
            = ((IData)(((0x790000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3c8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3c8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v969 
            = ((IData)(((0x792000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3c9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3c9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3c9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v970 
            = ((IData)(((0x794000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3caU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3caU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3caU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3caU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v971 
            = ((IData)(((0x796000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3cbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3cbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3cbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3cbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v972 
            = ((IData)(((0x798000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3ccU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ccU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ccU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3ccU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v973 
            = ((IData)(((0x79a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3cdU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3cdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3cdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3cdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v974 
            = ((IData)(((0x79c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3ceU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ceU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ceU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3ceU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v975 
            = ((IData)(((0x79e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3cfU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3cfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3cfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3cfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v976 
            = ((IData)(((0x7a0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3d0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3d0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v977 
            = ((IData)(((0x7a2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3d1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3d1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v978 
            = ((IData)(((0x7a4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3d2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3d2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v979 
            = ((IData)(((0x7a6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3d3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3d3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v980 
            = ((IData)(((0x7a8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3d4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3d4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v981 
            = ((IData)(((0x7aa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3d5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3d5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v982 
            = ((IData)(((0x7ac000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3d6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3d6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v983 
            = ((IData)(((0x7ae000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3d7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3d7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v984 
            = ((IData)(((0x7b0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3d8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3d8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v985 
            = ((IData)(((0x7b2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3d9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3d9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3d9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v986 
            = ((IData)(((0x7b4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3daU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3daU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3daU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3daU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v987 
            = ((IData)(((0x7b6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3dbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3dbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3dbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3dbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v988 
            = ((IData)(((0x7b8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3dcU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3dcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3dcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3dcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v989 
            = ((IData)(((0x7ba000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3ddU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ddU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ddU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3ddU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v990 
            = ((IData)(((0x7bc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3deU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3deU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3deU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3deU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v991 
            = ((IData)(((0x7be000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3dfU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3dfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3dfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3dfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v992 
            = ((IData)(((0x7c0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3e0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3e0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v993 
            = ((IData)(((0x7c2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3e1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3e1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v994 
            = ((IData)(((0x7c4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3e2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3e2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v995 
            = ((IData)(((0x7c6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3e3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3e3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v996 
            = ((IData)(((0x7c8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3e4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3e4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v997 
            = ((IData)(((0x7ca000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3e5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3e5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v998 
            = ((IData)(((0x7cc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3e6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3e6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v999 
            = ((IData)(((0x7ce000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3e7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3e7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1000 
            = ((IData)(((0x7d0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3e8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3e8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1001 
            = ((IData)(((0x7d2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3e9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3e9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3e9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1002 
            = ((IData)(((0x7d4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3eaU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3eaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3eaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3eaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1003 
            = ((IData)(((0x7d6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3ebU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ebU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ebU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3ebU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1004 
            = ((IData)(((0x7d8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3ecU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ecU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ecU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3ecU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1005 
            = ((IData)(((0x7da000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3edU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3edU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3edU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3edU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1006 
            = ((IData)(((0x7dc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3eeU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3eeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3eeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3eeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1007 
            = ((IData)(((0x7de000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3efU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3efU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3efU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3efU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1008 
            = ((IData)(((0x7e0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3f0U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3f0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1009 
            = ((IData)(((0x7e2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3f1U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3f1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1010 
            = ((IData)(((0x7e4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3f2U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3f2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1011 
            = ((IData)(((0x7e6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3f3U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3f3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1012 
            = ((IData)(((0x7e8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3f4U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3f4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1013 
            = ((IData)(((0x7ea000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3f5U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3f5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1014 
            = ((IData)(((0x7ec000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3f6U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3f6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1015 
            = ((IData)(((0x7ee000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3f7U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3f7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1016 
            = ((IData)(((0x7f0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3f8U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3f8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1017 
            = ((IData)(((0x7f2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3f9U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3f9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3f9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1018 
            = ((IData)(((0x7f4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3faU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3faU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3faU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3faU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1019 
            = ((IData)(((0x7f6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3fbU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3fbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3fbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3fbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1020 
            = ((IData)(((0x7f8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3fcU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3fcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3fcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3fcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1021 
            = ((IData)(((0x7fa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3fdU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3fdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3fdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3fdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1022 
            = ((IData)(((0x7fc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3feU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3feU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3feU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3feU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1023 
            = ((IData)(((0x7fe000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3ffU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ffU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3ffU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3ffU]);
    } else {
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
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v929 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v930 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v931 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v932 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v933 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v934 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v935 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v936 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v937 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v938 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v939 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v940 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v941 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v942 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v943 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v944 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v945 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v946 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v947 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v948 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v949 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v950 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v951 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v952 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v953 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v954 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v955 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v956 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v957 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v958 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v959 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v960 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v961 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v962 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v963 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v964 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v965 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v966 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v967 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v968 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v969 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v970 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v971 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v972 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v973 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v974 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v975 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v976 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v977 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v978 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v979 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v980 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v981 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v982 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v983 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v984 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v985 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v986 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v987 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v988 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v989 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v990 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v991 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v992 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v993 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v994 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v995 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v996 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v997 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v998 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v999 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1000 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1001 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1002 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1003 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1004 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1005 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1006 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1007 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1008 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1009 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1010 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1011 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1012 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1013 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1014 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1015 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1016 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1017 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1018 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1019 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1020 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1021 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1022 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1023 = 2U;
    }
    if (vlSelf->__Vdlyvset__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0) {
        vlSelf->__PVT__btb_inst__DOT__btb_addr_inst__DOT__history_table[vlSelf->__Vdlyvdim0__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0;
    }
    if (vlSelf->__Vdlyvset__btb_inst__DOT__btb_addr_inst__DOT__history_table__v1) {
        __Vilp = 0U;
        while ((__Vilp <= 0x1ffU)) {
            vlSelf->__PVT__btb_inst__DOT__btb_addr_inst__DOT__history_table[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0) {
        vlSelf->__PVT__btb_inst__DOT__btb_tag_inst__DOT__history_table[vlSelf->__Vdlyvdim0__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0;
    }
    if (vlSelf->__Vdlyvset__btb_inst__DOT__btb_tag_inst__DOT__history_table__v1) {
        __Vilp = 0U;
        while ((__Vilp <= 0x1ffU)) {
            vlSelf->__PVT__btb_inst__DOT__btb_tag_inst__DOT__history_table[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__btb_inst__DOT__btb_entry_valids__v0) {
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[vlSelf->__Vdlyvdim0__btb_inst__DOT__btb_entry_valids__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__btb_inst__DOT__btb_entry_valids__v1) {
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v1;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v2;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v3;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v4;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v5;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v6;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v7;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v8;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v9;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v10;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xaU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v11;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xbU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v12;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xcU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v13;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xdU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v14;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xeU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v15;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xfU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v16;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x10U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v17;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x11U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v18;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x12U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v19;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x13U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v20;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x14U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v21;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x15U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v22;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x16U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v23;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x17U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v24;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x18U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v25;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x19U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v26;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v27;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v28;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v29;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v30;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v31;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v32;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x20U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v33;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x21U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v34;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x22U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v35;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x23U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v36;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x24U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v37;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x25U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v38;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x26U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v39;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x27U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v40;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x28U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v41;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x29U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v42;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x2aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v43;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x2bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v44;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x2cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v45;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x2dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v46;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x2eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v47;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x2fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v48;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x30U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v49;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x31U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v50;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x32U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v51;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x33U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v52;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x34U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v53;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x35U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v54;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x36U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v55;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x37U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v56;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x38U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v57;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x39U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v58;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x3aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v59;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x3bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v60;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x3cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v61;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x3dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v62;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x3eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v63;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x3fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v64;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x40U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v65;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x41U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v66;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x42U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v67;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x43U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v68;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x44U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v69;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x45U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v70;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x46U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v71;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x47U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v72;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x48U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v73;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x49U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v74;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x4aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v75;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x4bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v76;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x4cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v77;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x4dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v78;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x4eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v79;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x4fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v80;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x50U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v81;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x51U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v82;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x52U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v83;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x53U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v84;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x54U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v85;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x55U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v86;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x56U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v87;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x57U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v88;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x58U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v89;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x59U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v90;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x5aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v91;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x5bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v92;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x5cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v93;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x5dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v94;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x5eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v95;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x5fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v96;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x60U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v97;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x61U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v98;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x62U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v99;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x63U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v100;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x64U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v101;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x65U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v102;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x66U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v103;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x67U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v104;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x68U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v105;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x69U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v106;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x6aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v107;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x6bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v108;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x6cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v109;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x6dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v110;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x6eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v111;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x6fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v112;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x70U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v113;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x71U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v114;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x72U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v115;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x73U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v116;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x74U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v117;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x75U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v118;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x76U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v119;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x77U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v120;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x78U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v121;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x79U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v122;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x7aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v123;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x7bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v124;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x7cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v125;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x7dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v126;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x7eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v127;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x7fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v128;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x80U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v129;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x81U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v130;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x82U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v131;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x83U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v132;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x84U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v133;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x85U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v134;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x86U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v135;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x87U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v136;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x88U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v137;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x89U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v138;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x8aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v139;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x8bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v140;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x8cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v141;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x8dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v142;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x8eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v143;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x8fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v144;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x90U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v145;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x91U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v146;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x92U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v147;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x93U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v148;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x94U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v149;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x95U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v150;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x96U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v151;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x97U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v152;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x98U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v153;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x99U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v154;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x9aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v155;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x9bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v156;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x9cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v157;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x9dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v158;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x9eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v159;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x9fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v160;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xa0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v161;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xa1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v162;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xa2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v163;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xa3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v164;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xa4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v165;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xa5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v166;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xa6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v167;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xa7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v168;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xa8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v169;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xa9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v170;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xaaU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v171;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xabU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v172;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xacU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v173;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xadU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v174;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xaeU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v175;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xafU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v176;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xb0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v177;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xb1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v178;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xb2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v179;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xb3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v180;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xb4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v181;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xb5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v182;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xb6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v183;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xb7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v184;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xb8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v185;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xb9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v186;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xbaU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v187;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xbbU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v188;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xbcU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v189;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xbdU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v190;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xbeU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v191;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xbfU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v192;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xc0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v193;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xc1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v194;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xc2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v195;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xc3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v196;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xc4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v197;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xc5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v198;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xc6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v199;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xc7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v200;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xc8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v201;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xc9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v202;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xcaU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v203;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xcbU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v204;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xccU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v205;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xcdU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v206;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xceU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v207;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xcfU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v208;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xd0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v209;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xd1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v210;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xd2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v211;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xd3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v212;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xd4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v213;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xd5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v214;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xd6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v215;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xd7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v216;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xd8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v217;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xd9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v218;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xdaU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v219;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xdbU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v220;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xdcU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v221;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xddU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v222;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xdeU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v223;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xdfU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v224;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xe0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v225;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xe1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v226;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xe2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v227;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xe3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v228;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xe4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v229;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xe5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v230;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xe6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v231;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xe7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v232;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xe8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v233;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xe9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v234;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xeaU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v235;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xebU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v236;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xecU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v237;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xedU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v238;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xeeU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v239;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xefU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v240;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xf0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v241;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xf1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v242;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xf2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v243;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xf3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v244;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xf4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v245;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xf5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v246;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xf6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v247;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xf7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v248;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xf8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v249;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xf9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v250;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xfaU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v251;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xfbU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v252;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xfcU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v253;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xfdU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v254;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xfeU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v255;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0xffU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v256;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x100U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v257;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x101U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v258;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x102U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v259;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x103U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v260;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x104U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v261;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x105U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v262;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x106U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v263;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x107U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v264;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x108U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v265;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x109U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v266;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x10aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v267;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x10bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v268;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x10cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v269;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x10dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v270;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x10eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v271;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x10fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v272;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x110U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v273;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x111U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v274;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x112U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v275;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x113U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v276;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x114U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v277;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x115U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v278;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x116U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v279;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x117U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v280;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x118U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v281;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x119U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v282;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x11aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v283;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x11bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v284;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x11cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v285;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x11dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v286;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x11eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v287;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x11fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v288;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x120U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v289;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x121U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v290;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x122U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v291;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x123U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v292;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x124U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v293;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x125U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v294;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x126U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v295;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x127U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v296;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x128U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v297;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x129U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v298;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x12aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v299;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x12bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v300;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x12cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v301;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x12dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v302;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x12eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v303;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x12fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v304;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x130U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v305;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x131U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v306;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x132U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v307;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x133U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v308;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x134U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v309;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x135U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v310;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x136U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v311;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x137U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v312;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x138U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v313;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x139U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v314;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x13aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v315;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x13bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v316;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x13cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v317;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x13dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v318;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x13eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v319;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x13fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v320;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x140U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v321;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x141U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v322;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x142U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v323;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x143U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v324;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x144U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v325;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x145U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v326;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x146U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v327;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x147U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v328;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x148U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v329;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x149U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v330;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x14aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v331;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x14bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v332;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x14cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v333;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x14dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v334;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x14eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v335;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x14fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v336;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x150U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v337;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x151U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v338;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x152U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v339;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x153U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v340;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x154U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v341;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x155U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v342;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x156U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v343;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x157U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v344;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x158U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v345;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x159U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v346;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x15aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v347;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x15bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v348;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x15cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v349;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x15dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v350;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x15eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v351;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x15fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v352;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x160U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v353;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x161U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v354;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x162U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v355;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x163U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v356;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x164U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v357;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x165U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v358;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x166U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v359;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x167U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v360;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x168U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v361;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x169U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v362;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x16aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v363;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x16bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v364;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x16cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v365;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x16dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v366;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x16eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v367;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x16fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v368;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x170U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v369;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x171U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v370;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x172U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v371;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x173U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v372;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x174U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v373;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x175U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v374;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x176U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v375;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x177U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v376;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x178U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v377;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x179U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v378;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x17aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v379;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x17bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v380;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x17cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v381;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x17dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v382;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x17eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v383;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x17fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v384;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x180U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v385;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x181U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v386;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x182U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v387;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x183U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v388;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x184U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v389;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x185U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v390;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x186U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v391;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x187U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v392;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x188U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v393;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x189U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v394;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x18aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v395;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x18bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v396;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x18cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v397;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x18dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v398;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x18eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v399;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x18fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v400;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x190U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v401;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x191U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v402;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x192U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v403;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x193U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v404;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x194U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v405;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x195U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v406;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x196U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v407;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x197U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v408;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x198U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v409;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x199U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v410;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x19aU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v411;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x19bU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v412;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x19cU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v413;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x19dU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v414;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x19eU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v415;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x19fU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v416;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1a0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v417;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1a1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v418;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1a2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v419;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1a3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v420;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1a4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v421;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1a5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v422;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1a6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v423;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1a7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v424;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1a8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v425;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1a9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v426;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1aaU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v427;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1abU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v428;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1acU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v429;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1adU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v430;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1aeU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v431;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1afU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v432;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1b0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v433;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1b1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v434;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1b2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v435;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1b3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v436;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1b4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v437;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1b5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v438;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1b6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v439;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1b7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v440;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1b8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v441;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1b9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v442;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1baU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v443;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1bbU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v444;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1bcU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v445;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1bdU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v446;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1beU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v447;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1bfU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v448;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1c0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v449;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1c1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v450;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1c2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v451;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1c3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v452;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1c4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v453;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1c5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v454;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1c6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v455;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1c7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v456;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1c8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v457;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1c9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v458;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1caU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v459;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1cbU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v460;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1ccU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v461;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1cdU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v462;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1ceU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v463;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1cfU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v464;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1d0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v465;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1d1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v466;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1d2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v467;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1d3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v468;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1d4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v469;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1d5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v470;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1d6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v471;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1d7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v472;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1d8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v473;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1d9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v474;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1daU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v475;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1dbU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v476;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1dcU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v477;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1ddU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v478;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1deU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v479;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1dfU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v480;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1e0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v481;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1e1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v482;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1e2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v483;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1e3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v484;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1e4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v485;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1e5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v486;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1e6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v487;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1e7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v488;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1e8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v489;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1e9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v490;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1eaU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v491;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1ebU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v492;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1ecU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v493;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1edU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v494;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1eeU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v495;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1efU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v496;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1f0U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v497;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1f1U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v498;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1f2U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v499;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1f3U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v500;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1f4U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v501;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1f5U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v502;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1f6U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v503;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1f7U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v504;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1f8U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v505;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1f9U] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v506;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1faU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v507;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1fbU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v508;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1fcU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v509;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1fdU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v510;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1feU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v511;
        vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[0x1ffU] 
            = vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v512;
    }
    if (vlSelf->__Vdlyvset__btb_inst__DOT__btb_entry_valids__v513) {
        __Vilp = 0U;
        while ((__Vilp <= 0x1ffU)) {
            vlSelf->__PVT__btb_inst__DOT__btb_entry_valids[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v0;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[1U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[2U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v2;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[3U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v3;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[4U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v4;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[5U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v5;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[6U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v6;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[7U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v7;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[8U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v8;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[9U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v9;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0xaU] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v10;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0xbU] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v11;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0xcU] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v12;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0xdU] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v13;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0xeU] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v14;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0xfU] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v15;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0x10U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v16;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0x11U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v17;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0x12U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v18;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0x13U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v19;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0x14U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v20;
    vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT[0x15U] 
        = vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v21;
}

VL_INLINE_OPT void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__10(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__10\n"); );
    // Init
    SData/*9:0*/ __PVT__gshare_inst__DOT__GHSR_restore_next;
    CData/*0:0*/ __Vfunc_if_branch_taken__0__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__0__biomd;
    CData/*0:0*/ __Vfunc_if_branch_taken__1__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__1__biomd;
    // Body
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
    __Vfunc_if_branch_taken__1__biomd = vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
        [(0x3ffU & (((IData)(4U) + vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc) 
                    >> 2U))];
    __Vfunc_if_branch_taken__1__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__1__biomd) 
                                                  >> 1U));
    vlSelf->__PVT__instr1_predict_taken = __Vfunc_if_branch_taken__1__Vfuncout;
    __Vfunc_if_branch_taken__0__biomd = vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
        [(0x3ffU & (vlSymsp->TOP__pipeline__inst_if_stage__inst_pc.pc 
                    >> 2U))];
    __Vfunc_if_branch_taken__0__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__0__biomd) 
                                                  >> 1U));
    vlSelf->__PVT__instr0_predict_taken = __Vfunc_if_branch_taken__0__Vfuncout;
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
    vlSelf->__PVT__btb_inst__DOT__update_BTB = (IData)(
                                                       (0x1800U 
                                                        == 
                                                        (0x1800U 
                                                         & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])));
    __PVT__gshare_inst__DOT__GHSR_restore_next = ((0x3feU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[0U] 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                                                        >> 0xbU)));
    vlSelf->__PVT__PC_predict_taken = (((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                        & (IData)(vlSelf->__PVT__instr0_predict_taken)) 
                                       | ((IData)(vlSelf->__PVT__instr1_btb_hit) 
                                          & (IData)(vlSelf->__PVT__instr1_predict_taken)));
    vlSelf->__PVT__PC_predict_pc = (((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                     & (IData)(vlSelf->__PVT__instr0_predict_taken))
                                     ? vlSelf->__PVT__instr0_btb_target_addr
                                     : (((IData)(vlSelf->__PVT__instr1_btb_hit) 
                                         & (IData)(vlSelf->__PVT__instr1_predict_taken))
                                         ? vlSelf->__PVT__instr1_btb_target_addr
                                         : 0U));
    vlSelf->__PVT__instr1_if_id[2U] = ((0xffffefffU 
                                        & vlSelf->__PVT__instr1_if_id[2U]) 
                                       | (0x1000U & 
                                          ((~ ((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                               & (IData)(vlSelf->__PVT__instr0_predict_taken))) 
                                           << 0xcU)));
    vlSelf->__PVT__gshare_inst__DOT__spec_update_GHSR 
        = ((IData)(vlSelf->__PVT__instr0_btb_hit) | (IData)(vlSelf->__PVT__instr1_btb_hit));
    vlSelf->__PVT__gshare_inst__DOT__GHSR_next = ((IData)(vlSymsp->TOP__pipeline.__PVT__flush_valid)
                                                   ? (IData)(__PVT__gshare_inst__DOT__GHSR_restore_next)
                                                   : 
                                                  ((((IData)(vlSelf->__PVT__gshare_inst__DOT__spec_update_GHSR) 
                                                     & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                                                        >> 0xcU)) 
                                                    & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[0U] 
                                                       >> 0xaU))
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__instr0_predict_taken) 
                                                     & (IData)(vlSelf->__PVT__instr0_btb_hit))
                                                     ? 
                                                    ((0x3feU 
                                                      & ((IData)(__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->__PVT__instr0_predict_taken))
                                                     : 
                                                    ((((IData)(vlSelf->__PVT__instr1_predict_taken) 
                                                       & (IData)(vlSelf->__PVT__instr1_btb_hit)) 
                                                      & (IData)(vlSelf->__PVT__instr0_btb_hit))
                                                      ? 
                                                     ((0x3fcU 
                                                       & ((IData)(__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                          << 2U)) 
                                                      | (IData)(vlSelf->__PVT__instr1_predict_taken))
                                                      : 
                                                     (((IData)(vlSelf->__PVT__instr1_predict_taken) 
                                                       & (IData)(vlSelf->__PVT__instr1_btb_hit))
                                                       ? 
                                                      ((0x3feU 
                                                        & ((IData)(__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->__PVT__instr1_predict_taken))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__instr0_btb_hit)
                                                        ? 
                                                       (0x3feU 
                                                        & ((IData)(__PVT__gshare_inst__DOT__GHSR_restore_next) 
                                                           << 1U))
                                                        : (IData)(__PVT__gshare_inst__DOT__GHSR_restore_next)))))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__gshare_inst__DOT__spec_update_GHSR)
                                                     ? 
                                                    (((IData)(vlSelf->__PVT__instr0_predict_taken) 
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
                                                         : (IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR)))))
                                                     : 
                                                    (((vlSymsp->TOP__pipeline.__PVT__ex_branch_in[0U] 
                                                       >> 0xaU) 
                                                      & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                                                         >> 0xcU))
                                                      ? (IData)(__PVT__gshare_inst__DOT__GHSR_restore_next)
                                                      : (IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR)))));
}

VL_INLINE_OPT void Vcommon_if_stage___combo__TOP__pipeline__inst_if_stage__11(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___combo__TOP__pipeline__inst_if_stage__11\n"); );
    // Body
    vlSelf->__PVT__instr1_if_id[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__instr1_btb_target_addr)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__read_data1))));
    vlSelf->__PVT__instr1_if_id[1U] = (IData)(((((QData)((IData)(vlSelf->__PVT__instr1_btb_target_addr)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__read_data1))) 
                                               >> 0x20U));
    vlSelf->__PVT__instr1_if_id[2U] = ((0xfffff000U 
                                        & vlSelf->__PVT__instr1_if_id[2U]) 
                                       | ((((IData)(vlSelf->__PVT__instr1_btb_hit) 
                                            & (IData)(vlSelf->__PVT__instr1_predict_taken)) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__instr1_btb_hit))));
    vlSelf->__PVT__instr0_if_id[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__instr0_btb_target_addr)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__read_data0))));
    vlSelf->__PVT__instr0_if_id[1U] = (IData)(((((QData)((IData)(vlSelf->__PVT__instr0_btb_target_addr)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__read_data0))) 
                                               >> 0x20U));
    vlSelf->__PVT__instr0_if_id[2U] = ((0xfffff000U 
                                        & vlSelf->__PVT__instr0_if_id[2U]) 
                                       | ((((IData)(vlSelf->__PVT__instr0_btb_hit) 
                                            & (IData)(vlSelf->__PVT__instr0_predict_taken)) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->__PVT__gshare_inst__DOT__GHSR) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__instr0_btb_hit))));
}
