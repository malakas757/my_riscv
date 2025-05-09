// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

extern const VlUnpacked<CData/*2:0*/, 2048> Vcommon__ConstPool__TABLE_h466fc07f_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vcommon__ConstPool__TABLE_h4cbe1d22_0;

VL_ATTR_COLD void Vcommon___024root___settle__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__1\n"); );
    // Init
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_channel_num__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_channel_num__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_channel_num__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_channel_num__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_channel_num__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_channel_num__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar_core__DOT____Vcellout__find_channel_num__BRA__3__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar_core__DOT____Vcellinp__find_channel_num__BRA__3__KET____DOT__inst_frr__valid_array;
    CData/*0:0*/ xbar_core__DOT____Vlvbound_hc51474bc__0;
    CData/*0:0*/ xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    CData/*0:0*/ xbar_core__DOT____Vlvbound_hedc66f88__0;
    CData/*0:0*/ xbar_core__DOT____Vlvbound_h19bb34d9__0;
    SData/*10:0*/ __Vtableidx1;
    SData/*10:0*/ __Vtableidx2;
    SData/*10:0*/ __Vtableidx3;
    SData/*10:0*/ __Vtableidx4;
    SData/*10:0*/ __Vtableidx5;
    SData/*10:0*/ __Vtableidx6;
    SData/*10:0*/ __Vtableidx7;
    SData/*10:0*/ __Vtableidx8;
    SData/*10:0*/ __Vtableidx9;
    SData/*10:0*/ __Vtableidx10;
    SData/*10:0*/ __Vtableidx11;
    SData/*10:0*/ __Vtableidx12;
    SData/*10:0*/ __Vtableidx13;
    SData/*10:0*/ __Vtableidx14;
    SData/*10:0*/ __Vtableidx15;
    SData/*10:0*/ __Vtableidx16;
    // Body
    vlSelf->mpc_xbar_wbuf_req_wbuffer_id[0U] = 0U;
    vlSelf->mpc_xbar_wbuf_req_wbuffer_id[1U] = 0U;
    vlSelf->mpc_xbar_wbuf_req_wbuffer_id[2U] = 0U;
    vlSelf->mpc_xbar_wbuf_req_wbuffer_id[3U] = 0U;
    vlSelf->xbar_core__DOT__ch0_last_entry_already_pop 
        = (1U & ((((~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch0_rptr)) 
                       & vlSelf->xbar_core__DOT__cbe_array_valid
                       [0U][0U][vlSelf->xbar_core__DOT__ch0_rptr])) 
                   & (~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch0_rptr)) 
                         & vlSelf->xbar_core__DOT__cbe_array_valid
                         [0U][1U][vlSelf->xbar_core__DOT__ch0_rptr]))) 
                  & (~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch0_rptr)) 
                        & vlSelf->xbar_core__DOT__cbe_array_valid
                        [0U][2U][vlSelf->xbar_core__DOT__ch0_rptr]))) 
                 & (~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch0_rptr)) 
                       & vlSelf->xbar_core__DOT__cbe_array_valid
                       [0U][3U][vlSelf->xbar_core__DOT__ch0_rptr]))));
    vlSelf->xbar_core__DOT__ch1_last_entry_already_pop 
        = (1U & ((((~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch1_rptr)) 
                       & vlSelf->xbar_core__DOT__cbe_array_valid
                       [0U][0U][vlSelf->xbar_core__DOT__ch1_rptr])) 
                   & (~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch1_rptr)) 
                         & vlSelf->xbar_core__DOT__cbe_array_valid
                         [0U][1U][vlSelf->xbar_core__DOT__ch1_rptr]))) 
                  & (~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch1_rptr)) 
                        & vlSelf->xbar_core__DOT__cbe_array_valid
                        [0U][2U][vlSelf->xbar_core__DOT__ch1_rptr]))) 
                 & (~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch1_rptr)) 
                       & vlSelf->xbar_core__DOT__cbe_array_valid
                       [0U][3U][vlSelf->xbar_core__DOT__ch1_rptr]))));
    vlSelf->xbar_core__DOT__ch2_last_entry_already_pop 
        = (1U & ((((~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch2_rptr)) 
                       & vlSelf->xbar_core__DOT__cbe_array_valid
                       [0U][0U][vlSelf->xbar_core__DOT__ch2_rptr])) 
                   & (~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch2_rptr)) 
                         & vlSelf->xbar_core__DOT__cbe_array_valid
                         [0U][1U][vlSelf->xbar_core__DOT__ch2_rptr]))) 
                  & (~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch2_rptr)) 
                        & vlSelf->xbar_core__DOT__cbe_array_valid
                        [0U][2U][vlSelf->xbar_core__DOT__ch2_rptr]))) 
                 & (~ ((4U >= (IData)(vlSelf->xbar_core__DOT__ch2_rptr)) 
                       & vlSelf->xbar_core__DOT__cbe_array_valid
                       [0U][3U][vlSelf->xbar_core__DOT__ch2_rptr]))));
    vlSelf->mpc_channel0_enable = ((5U == (IData)(vlSelf->xbar_core__DOT__ch0_used_entry))
                                    ? 0U : 1U);
    vlSelf->mpc_channel1_enable = ((5U == (IData)(vlSelf->xbar_core__DOT__ch1_used_entry))
                                    ? 0U : 1U);
    vlSelf->mpc_channel2_enable = ((5U == (IData)(vlSelf->xbar_core__DOT__ch2_used_entry))
                                    ? 0U : 1U);
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [0U][0U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [0U][0U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [0U][0U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [0U]
                                                  [0U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [0U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [0U][1U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [0U][1U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [0U][1U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [0U]
                                                  [1U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [1U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [0U][2U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [0U][2U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [0U][2U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [0U]
                                                  [2U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [2U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [0U][3U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [0U][3U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [0U][3U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [0U]
                                                  [3U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [3U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [1U][0U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [1U][0U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [1U][0U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [1U]
                                                  [0U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [0U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [1U][1U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [1U][1U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [1U][1U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [1U]
                                                  [1U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [1U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [1U][2U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [1U][2U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [1U][2U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [1U]
                                                  [2U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [2U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [1U][3U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [1U][3U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [1U][3U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [1U]
                                                  [3U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [3U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [2U][0U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [2U][0U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [2U][0U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [2U]
                                                  [0U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [0U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [2U][1U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [2U][1U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [2U][1U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [2U]
                                                  [1U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [1U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [2U][2U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [2U][2U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [2U][2U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [2U]
                                                  [2U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [2U]
                                                 [0U]))));
    xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_array_valid
            [2U][3U][4U] << 4U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                    [2U][3U][3U] << 3U) 
                                   | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                       [2U][3U][2U] 
                                       << 2U) | ((vlSelf->xbar_core__DOT__cbe_array_valid
                                                  [2U]
                                                  [3U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [3U]
                                                 [0U]))));
    vlSelf->xbar_core__DOT__ch_rptr[0U] = vlSelf->xbar_core__DOT__ch0_rptr;
    vlSelf->xbar_core__DOT__ch_rptr[1U] = vlSelf->xbar_core__DOT__ch1_rptr;
    vlSelf->xbar_core__DOT__ch_rptr[2U] = vlSelf->xbar_core__DOT__ch2_rptr;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [0U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [0U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [0U]
                                                [0U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [0U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[0U][0U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [1U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [1U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [0U]
                                                [1U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [1U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[0U][1U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [2U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [2U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [0U]
                                                [2U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [2U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[0U][2U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [3U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [0U]
                                                 [3U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [0U]
                                                [3U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [3U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[0U][3U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [0U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [0U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [1U]
                                                [0U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [0U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[1U][0U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [1U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [1U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [1U]
                                                [1U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [1U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[1U][1U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [2U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [2U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [1U]
                                                [2U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [2U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[1U][2U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [3U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [1U]
                                                 [3U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [1U]
                                                [3U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [3U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[1U][3U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [0U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [0U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [2U]
                                                [0U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [0U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[2U][0U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [1U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [1U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [2U]
                                                [1U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [1U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[2U][1U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [2U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [2U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [2U]
                                                [2U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [2U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[2U][2U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    xbar_core__DOT____Vlvbound_h9be8e7ba__0 = (((vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [3U]
                                                 [0U] 
                                                 | vlSelf->xbar_core__DOT__cbe_array_valid
                                                 [2U]
                                                 [3U]
                                                 [1U]) 
                                                | vlSelf->xbar_core__DOT__cbe_array_valid
                                                [2U]
                                                [3U]
                                                [2U]) 
                                               | vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [3U]
                                               [3U]);
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[2U][3U] 
        = xbar_core__DOT____Vlvbound_h9be8e7ba__0;
    vlSelf->xbar_core__DOT__n_ch0_rptr = vlSelf->xbar_core__DOT__ch0_rptr;
    if (((0U != (IData)(vlSelf->xbar_core__DOT__ch0_used_entry)) 
         & (IData)(vlSelf->xbar_core__DOT__ch0_last_entry_already_pop))) {
        vlSelf->xbar_core__DOT__n_ch0_rptr = ((5U == (IData)(vlSelf->xbar_core__DOT__ch0_rptr))
                                               ? 0U
                                               : (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->xbar_core__DOT__ch0_rptr))));
    }
    vlSelf->xbar_core__DOT__n_ch1_rptr = vlSelf->xbar_core__DOT__ch1_rptr;
    if (((0U != (IData)(vlSelf->xbar_core__DOT__ch1_used_entry)) 
         & (IData)(vlSelf->xbar_core__DOT__ch1_last_entry_already_pop))) {
        vlSelf->xbar_core__DOT__n_ch1_rptr = ((5U == (IData)(vlSelf->xbar_core__DOT__ch1_rptr))
                                               ? 0U
                                               : (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->xbar_core__DOT__ch1_rptr))));
    }
    vlSelf->xbar_core__DOT__n_ch2_rptr = vlSelf->xbar_core__DOT__ch2_rptr;
    if (((0U != (IData)(vlSelf->xbar_core__DOT__ch2_used_entry)) 
         & (IData)(vlSelf->xbar_core__DOT__ch2_last_entry_already_pop))) {
        vlSelf->xbar_core__DOT__n_ch2_rptr = ((5U == (IData)(vlSelf->xbar_core__DOT__ch2_rptr))
                                               ? 0U
                                               : (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->xbar_core__DOT__ch2_rptr))));
    }
    vlSelf->xbar_core__DOT__upstream_ch0_kickoff = 
        ((IData)(vlSelf->mpc_channel0_enable) & (IData)(vlSelf->mpc_channel0_valid));
    vlSelf->xbar_core__DOT__upstream_ch1_kickoff = 
        ((IData)(vlSelf->mpc_channel1_enable) & (IData)(vlSelf->mpc_channel1_valid));
    vlSelf->xbar_core__DOT__upstream_ch2_kickoff = 
        ((IData)(vlSelf->mpc_channel2_enable) & (IData)(vlSelf->mpc_channel2_valid));
    __Vtableidx1 = ((vlSelf->xbar_core__DOT__ch_rptr
                     [0U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar_core__DOT__ch_rptr
                                              [0U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [0U]))
                                                 ? 
                                                ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                 >> 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [0U]))
                                                 : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx1];
    __Vtableidx2 = ((vlSelf->xbar_core__DOT__ch_rptr
                     [0U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar_core__DOT__ch_rptr
                                              [0U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [0U]))
                                                 ? 
                                                ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                 >> 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [0U]))
                                                 : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx2];
    __Vtableidx3 = ((vlSelf->xbar_core__DOT__ch_rptr
                     [0U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar_core__DOT__ch_rptr
                                              [0U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [0U]))
                                                 ? 
                                                ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                 >> 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [0U]))
                                                 : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx3];
    __Vtableidx4 = ((vlSelf->xbar_core__DOT__ch_rptr
                     [0U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar_core__DOT__ch_rptr
                                              [0U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [0U]))
                                                 ? 
                                                ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                                 >> 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [0U]))
                                                 : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx4];
    __Vtableidx5 = ((vlSelf->xbar_core__DOT__ch_rptr
                     [1U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar_core__DOT__ch_rptr
                                              [1U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [1U]))
                                                 ? 
                                                ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                 >> 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [1U]))
                                                 : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx5];
    __Vtableidx6 = ((vlSelf->xbar_core__DOT__ch_rptr
                     [1U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar_core__DOT__ch_rptr
                                              [1U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [1U]))
                                                 ? 
                                                ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                 >> 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [1U]))
                                                 : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx6];
    __Vtableidx7 = ((vlSelf->xbar_core__DOT__ch_rptr
                     [1U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar_core__DOT__ch_rptr
                                              [1U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [1U]))
                                                 ? 
                                                ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                 >> 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [1U]))
                                                 : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx7];
    __Vtableidx8 = ((vlSelf->xbar_core__DOT__ch_rptr
                     [1U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar_core__DOT__ch_rptr
                                              [1U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [1U]))
                                                 ? 
                                                ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                                 >> 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [1U]))
                                                 : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx8];
    __Vtableidx9 = ((vlSelf->xbar_core__DOT__ch_rptr
                     [2U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar_core__DOT__ch_rptr
                                              [2U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [2U]))
                                                 ? 
                                                ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                 >> 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar_core__DOT__ch_rptr
                                                  [2U]))
                                                 : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx9];
    __Vtableidx10 = ((vlSelf->xbar_core__DOT__ch_rptr
                      [2U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar_core__DOT__ch_rptr
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__ch_rptr
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                  >> 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__ch_rptr
                                                   [2U]))
                                                  : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx10];
    __Vtableidx11 = ((vlSelf->xbar_core__DOT__ch_rptr
                      [2U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar_core__DOT__ch_rptr
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__ch_rptr
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                  >> 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__ch_rptr
                                                   [2U]))
                                                  : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx11];
    __Vtableidx12 = ((vlSelf->xbar_core__DOT__ch_rptr
                      [2U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar_core__DOT__ch_rptr
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__ch_rptr
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar_core__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                                  >> 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__ch_rptr
                                                   [2U]))
                                                  : 0U))));
    xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h466fc07f_0[__Vtableidx12];
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [0U][0U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[0U][0U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [0U][1U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[1U][0U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [0U][2U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[2U][0U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [0U][3U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[3U][0U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [1U][0U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[0U][1U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [1U][1U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[1U][1U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [1U][2U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[2U][1U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [1U][3U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[3U][1U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [2U][0U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[0U][2U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [2U][1U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[1U][2U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [2U][2U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[2U][2U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    xbar_core__DOT____Vlvbound_hedc66f88__0 = vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [2U][3U];
    vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[3U][2U] 
        = xbar_core__DOT____Vlvbound_hedc66f88__0;
    vlSelf->xbar_core__DOT__n_ch0_wptr = vlSelf->xbar_core__DOT__ch0_wptr;
    if (vlSelf->xbar_core__DOT__upstream_ch0_kickoff) {
        vlSelf->xbar_core__DOT__n_ch0_wptr = ((5U == (IData)(vlSelf->xbar_core__DOT__ch0_wptr))
                                               ? 0U
                                               : (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->xbar_core__DOT__ch0_wptr))));
        vlSelf->xbar_core__DOT__n_ch0_used_entry = vlSelf->xbar_core__DOT__ch0_used_entry;
        vlSelf->xbar_core__DOT__n_ch0_used_entry = 
            (7U & ((IData)(1U) + (IData)(vlSelf->xbar_core__DOT__ch0_used_entry)));
    } else {
        vlSelf->xbar_core__DOT__n_ch0_used_entry = vlSelf->xbar_core__DOT__ch0_used_entry;
    }
    if (((0U != (IData)(vlSelf->xbar_core__DOT__ch0_used_entry)) 
         & (IData)(vlSelf->xbar_core__DOT__ch0_last_entry_already_pop))) {
        vlSelf->xbar_core__DOT__n_ch0_used_entry = 
            (7U & ((IData)(vlSelf->xbar_core__DOT__ch0_used_entry) 
                   - (IData)(1U)));
    }
    vlSelf->xbar_core__DOT__n_ch1_wptr = vlSelf->xbar_core__DOT__ch1_wptr;
    if (vlSelf->xbar_core__DOT__upstream_ch1_kickoff) {
        vlSelf->xbar_core__DOT__n_ch1_wptr = ((5U == (IData)(vlSelf->xbar_core__DOT__ch1_wptr))
                                               ? 0U
                                               : (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->xbar_core__DOT__ch1_wptr))));
        vlSelf->xbar_core__DOT__n_ch1_used_entry = vlSelf->xbar_core__DOT__ch1_used_entry;
        vlSelf->xbar_core__DOT__n_ch1_used_entry = 
            (7U & ((IData)(1U) + (IData)(vlSelf->xbar_core__DOT__ch1_used_entry)));
    } else {
        vlSelf->xbar_core__DOT__n_ch1_used_entry = vlSelf->xbar_core__DOT__ch1_used_entry;
    }
    if (((0U != (IData)(vlSelf->xbar_core__DOT__ch1_used_entry)) 
         & (IData)(vlSelf->xbar_core__DOT__ch1_last_entry_already_pop))) {
        vlSelf->xbar_core__DOT__n_ch1_used_entry = 
            (7U & ((IData)(vlSelf->xbar_core__DOT__ch1_used_entry) 
                   - (IData)(1U)));
    }
    vlSelf->xbar_core__DOT__n_ch2_wptr = vlSelf->xbar_core__DOT__ch2_wptr;
    if (vlSelf->xbar_core__DOT__upstream_ch2_kickoff) {
        vlSelf->xbar_core__DOT__n_ch2_wptr = ((5U == (IData)(vlSelf->xbar_core__DOT__ch2_wptr))
                                               ? 0U
                                               : (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->xbar_core__DOT__ch2_wptr))));
        vlSelf->xbar_core__DOT__n_ch2_used_entry = vlSelf->xbar_core__DOT__ch2_used_entry;
        vlSelf->xbar_core__DOT__n_ch2_used_entry = 
            (7U & ((IData)(1U) + (IData)(vlSelf->xbar_core__DOT__ch2_used_entry)));
    } else {
        vlSelf->xbar_core__DOT__n_ch2_used_entry = vlSelf->xbar_core__DOT__ch2_used_entry;
    }
    if (((0U != (IData)(vlSelf->xbar_core__DOT__ch2_used_entry)) 
         & (IData)(vlSelf->xbar_core__DOT__ch2_last_entry_already_pop))) {
        vlSelf->xbar_core__DOT__n_ch2_used_entry = 
            (7U & ((IData)(vlSelf->xbar_core__DOT__ch2_used_entry) 
                   - (IData)(1U)));
    }
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[0U][0U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[0U][1U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[0U][2U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[0U][3U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[1U][0U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[1U][1U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[1U][2U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[1U][3U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[2U][0U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[2U][1U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[2U][2U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[2U][3U] 
        = xbar_core__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    xbar_core__DOT____Vcellinp__find_channel_num__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
            [0U][2U] << 2U) | ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
                                [0U][1U] << 1U) | vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
                               [0U][0U]));
    xbar_core__DOT____Vcellinp__find_channel_num__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
            [1U][2U] << 2U) | ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
                                [1U][1U] << 1U) | vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
                               [1U][0U]));
    xbar_core__DOT____Vcellinp__find_channel_num__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
            [2U][2U] << 2U) | ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
                                [2U][1U] << 1U) | vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
                               [2U][0U]));
    xbar_core__DOT____Vcellinp__find_channel_num__BRA__3__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
            [3U][2U] << 2U) | ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
                                [3U][1U] << 1U) | vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send
                               [3U][0U]));
    __Vtableidx13 = ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                      [0U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_channel_num__BRA__0__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                               [0U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [0U]))
                                                  ? 
                                                 ((IData)(xbar_core__DOT____Vcellinp__find_channel_num__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                  >> 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [0U]))
                                                  : 0U))));
    xbar_core__DOT____Vcellout__find_channel_num__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h4cbe1d22_0[__Vtableidx13];
    __Vtableidx14 = ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                      [1U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_channel_num__BRA__1__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                               [1U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [1U]))
                                                  ? 
                                                 ((IData)(xbar_core__DOT____Vcellinp__find_channel_num__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                  >> 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [1U]))
                                                  : 0U))));
    xbar_core__DOT____Vcellout__find_channel_num__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h4cbe1d22_0[__Vtableidx14];
    __Vtableidx15 = ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                      [2U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_channel_num__BRA__2__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar_core__DOT____Vcellinp__find_channel_num__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                  >> 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [2U]))
                                                  : 0U))));
    xbar_core__DOT____Vcellout__find_channel_num__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h4cbe1d22_0[__Vtableidx15];
    __Vtableidx16 = ((vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                      [3U] << 8U) | (0xffU & (((IData)(xbar_core__DOT____Vcellinp__find_channel_num__BRA__3__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                               [3U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [3U]))
                                                  ? 
                                                 ((IData)(xbar_core__DOT____Vcellinp__find_channel_num__BRA__3__KET____DOT__inst_frr__valid_array) 
                                                  >> 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [3U]))
                                                  : 0U))));
    xbar_core__DOT____Vcellout__find_channel_num__BRA__3__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h4cbe1d22_0[__Vtableidx16];
    vlSelf->xbar_core__DOT__channel_num_found[0U] = xbar_core__DOT____Vcellout__find_channel_num__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__channel_num_found[1U] = xbar_core__DOT____Vcellout__find_channel_num__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__channel_num_found[2U] = xbar_core__DOT____Vcellout__find_channel_num__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__channel_num_found[3U] = xbar_core__DOT____Vcellout__find_channel_num__BRA__3__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar_core__DOT__n_cbe_sel_current_bank_channel_num_want_send[0U] 
        = (3U & vlSelf->xbar_core__DOT__channel_num_found
           [0U]);
    vlSelf->xbar_core__DOT__n_cbe_sel_current_bank_channel_num_want_send[1U] 
        = (3U & vlSelf->xbar_core__DOT__channel_num_found
           [1U]);
    vlSelf->xbar_core__DOT__n_cbe_sel_current_bank_channel_num_want_send[2U] 
        = (3U & vlSelf->xbar_core__DOT__channel_num_found
           [2U]);
    vlSelf->xbar_core__DOT__n_cbe_sel_current_bank_channel_num_want_send[3U] 
        = (3U & vlSelf->xbar_core__DOT__channel_num_found
           [3U]);
    vlSelf->xbar_core__DOT__channel_selected[0U] = 
        vlSelf->xbar_core__DOT__n_cbe_sel_current_bank_channel_num_want_send
        [0U];
    vlSelf->xbar_core__DOT__channel_selected[1U] = 
        vlSelf->xbar_core__DOT__n_cbe_sel_current_bank_channel_num_want_send
        [1U];
    vlSelf->xbar_core__DOT__channel_selected[2U] = 
        vlSelf->xbar_core__DOT__n_cbe_sel_current_bank_channel_num_want_send
        [2U];
    vlSelf->xbar_core__DOT__channel_selected[3U] = 
        vlSelf->xbar_core__DOT__n_cbe_sel_current_bank_channel_num_want_send
        [3U];
    vlSelf->mpc_xbar_wbuf_req_channel_id[0U] = vlSelf->xbar_core__DOT__channel_selected
        [0U];
    vlSelf->mpc_xbar_wbuf_req_channel_id[1U] = vlSelf->xbar_core__DOT__channel_selected
        [1U];
    vlSelf->mpc_xbar_wbuf_req_channel_id[2U] = vlSelf->xbar_core__DOT__channel_selected
        [2U];
    vlSelf->mpc_xbar_wbuf_req_channel_id[3U] = vlSelf->xbar_core__DOT__channel_selected
        [3U];
    vlSelf->mpc_xbar_htu_channel_id[0U] = vlSelf->xbar_core__DOT__channel_selected
        [0U];
    vlSelf->mpc_xbar_htu_channel_id[1U] = vlSelf->xbar_core__DOT__channel_selected
        [1U];
    vlSelf->mpc_xbar_htu_channel_id[2U] = vlSelf->xbar_core__DOT__channel_selected
        [2U];
    vlSelf->mpc_xbar_htu_channel_id[3U] = vlSelf->xbar_core__DOT__channel_selected
        [3U];
    vlSelf->xbar_core__DOT__channel_num_int[0U] = vlSelf->xbar_core__DOT__channel_selected
        [0U];
    vlSelf->xbar_core__DOT__channel_num_int[1U] = vlSelf->xbar_core__DOT__channel_selected
        [1U];
    vlSelf->xbar_core__DOT__channel_num_int[2U] = vlSelf->xbar_core__DOT__channel_selected
        [2U];
    vlSelf->xbar_core__DOT__channel_num_int[3U] = vlSelf->xbar_core__DOT__channel_selected
        [3U];
    vlSelf->xbar_core__DOT__entry_selected[3U] = 0U;
    vlSelf->xbar_core__DOT__entry_selected[2U] = 0U;
    vlSelf->xbar_core__DOT__entry_selected[1U] = 0U;
    vlSelf->xbar_core__DOT__entry_selected[0U] = 0U;
    vlSelf->xbar_core__DOT__entry_selected[0U] = vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
        [((2U >= (3U & vlSelf->xbar_core__DOT__channel_num_int
                  [0U])) ? (3U & vlSelf->xbar_core__DOT__channel_num_int
                            [0U]) : 0U)][0U];
    vlSelf->xbar_core__DOT__entry_selected[1U] = vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
        [((2U >= (3U & vlSelf->xbar_core__DOT__channel_num_int
                  [1U])) ? (3U & vlSelf->xbar_core__DOT__channel_num_int
                            [1U]) : 0U)][1U];
    vlSelf->xbar_core__DOT__entry_selected[2U] = vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
        [((2U >= (3U & vlSelf->xbar_core__DOT__channel_num_int
                  [2U])) ? (3U & vlSelf->xbar_core__DOT__channel_num_int
                            [2U]) : 0U)][2U];
    vlSelf->xbar_core__DOT__entry_selected[3U] = vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
        [((2U >= (3U & vlSelf->xbar_core__DOT__channel_num_int
                  [3U])) ? (3U & vlSelf->xbar_core__DOT__channel_num_int
                            [3U]) : 0U)][3U];
    vlSelf->mpc_xbar_htu_set[0U] = (7U & (((4U >= vlSelf->xbar_core__DOT__entry_selected
                                            [0U]) ? 
                                           vlSelf->xbar_core__DOT__ce_buffer_addr
                                           [((2U >= 
                                              vlSelf->xbar_core__DOT__channel_selected
                                              [0U])
                                              ? vlSelf->xbar_core__DOT__channel_selected
                                             [0U] : 0U)]
                                           [vlSelf->xbar_core__DOT__entry_selected
                                           [0U]] : 0U) 
                                          >> 1U));
    vlSelf->mpc_xbar_htu_set[1U] = (7U & (((4U >= vlSelf->xbar_core__DOT__entry_selected
                                            [1U]) ? 
                                           vlSelf->xbar_core__DOT__ce_buffer_addr
                                           [((2U >= 
                                              vlSelf->xbar_core__DOT__channel_selected
                                              [1U])
                                              ? vlSelf->xbar_core__DOT__channel_selected
                                             [1U] : 0U)]
                                           [vlSelf->xbar_core__DOT__entry_selected
                                           [1U]] : 0U) 
                                          >> 1U));
    vlSelf->mpc_xbar_htu_set[2U] = (7U & (((4U >= vlSelf->xbar_core__DOT__entry_selected
                                            [2U]) ? 
                                           vlSelf->xbar_core__DOT__ce_buffer_addr
                                           [((2U >= 
                                              vlSelf->xbar_core__DOT__channel_selected
                                              [2U])
                                              ? vlSelf->xbar_core__DOT__channel_selected
                                             [2U] : 0U)]
                                           [vlSelf->xbar_core__DOT__entry_selected
                                           [2U]] : 0U) 
                                          >> 1U));
    vlSelf->mpc_xbar_htu_set[3U] = (7U & (((4U >= vlSelf->xbar_core__DOT__entry_selected
                                            [3U]) ? 
                                           vlSelf->xbar_core__DOT__ce_buffer_addr
                                           [((2U >= 
                                              vlSelf->xbar_core__DOT__channel_selected
                                              [3U])
                                              ? vlSelf->xbar_core__DOT__channel_selected
                                             [3U] : 0U)]
                                           [vlSelf->xbar_core__DOT__entry_selected
                                           [3U]] : 0U) 
                                          >> 1U));
    vlSelf->mpc_xbar_htu_op_code[0U] = ((4U >= vlSelf->xbar_core__DOT__entry_selected
                                         [0U]) ? (3U 
                                                  & vlSelf->xbar_core__DOT__ce_buffer_op
                                                  [
                                                  ((2U 
                                                    >= 
                                                    vlSelf->xbar_core__DOT__channel_selected
                                                    [0U])
                                                    ? 
                                                   vlSelf->xbar_core__DOT__channel_selected
                                                   [0U]
                                                    : 0U)]
                                                  [
                                                  vlSelf->xbar_core__DOT__entry_selected
                                                  [0U]])
                                         : 0U);
    vlSelf->mpc_xbar_htu_op_code[1U] = ((4U >= vlSelf->xbar_core__DOT__entry_selected
                                         [1U]) ? (3U 
                                                  & vlSelf->xbar_core__DOT__ce_buffer_op
                                                  [
                                                  ((2U 
                                                    >= 
                                                    vlSelf->xbar_core__DOT__channel_selected
                                                    [1U])
                                                    ? 
                                                   vlSelf->xbar_core__DOT__channel_selected
                                                   [1U]
                                                    : 0U)]
                                                  [
                                                  vlSelf->xbar_core__DOT__entry_selected
                                                  [1U]])
                                         : 0U);
    vlSelf->mpc_xbar_htu_op_code[2U] = ((4U >= vlSelf->xbar_core__DOT__entry_selected
                                         [2U]) ? (3U 
                                                  & vlSelf->xbar_core__DOT__ce_buffer_op
                                                  [
                                                  ((2U 
                                                    >= 
                                                    vlSelf->xbar_core__DOT__channel_selected
                                                    [2U])
                                                    ? 
                                                   vlSelf->xbar_core__DOT__channel_selected
                                                   [2U]
                                                    : 0U)]
                                                  [
                                                  vlSelf->xbar_core__DOT__entry_selected
                                                  [2U]])
                                         : 0U);
    vlSelf->mpc_xbar_htu_op_code[3U] = ((4U >= vlSelf->xbar_core__DOT__entry_selected
                                         [3U]) ? (3U 
                                                  & vlSelf->xbar_core__DOT__ce_buffer_op
                                                  [
                                                  ((2U 
                                                    >= 
                                                    vlSelf->xbar_core__DOT__channel_selected
                                                    [3U])
                                                    ? 
                                                   vlSelf->xbar_core__DOT__channel_selected
                                                   [3U]
                                                    : 0U)]
                                                  [
                                                  vlSelf->xbar_core__DOT__entry_selected
                                                  [3U]])
                                         : 0U);
    vlSelf->mpc_xbar_htu_addr[0U] = ((4U >= vlSelf->xbar_core__DOT__entry_selected
                                      [0U]) ? vlSelf->xbar_core__DOT__ce_buffer_addr
                                     [((2U >= vlSelf->xbar_core__DOT__channel_selected
                                        [0U]) ? vlSelf->xbar_core__DOT__channel_selected
                                       [0U] : 0U)][
                                     vlSelf->xbar_core__DOT__entry_selected
                                     [0U]] : 0U);
    vlSelf->mpc_xbar_htu_addr[1U] = ((4U >= vlSelf->xbar_core__DOT__entry_selected
                                      [1U]) ? vlSelf->xbar_core__DOT__ce_buffer_addr
                                     [((2U >= vlSelf->xbar_core__DOT__channel_selected
                                        [1U]) ? vlSelf->xbar_core__DOT__channel_selected
                                       [1U] : 0U)][
                                     vlSelf->xbar_core__DOT__entry_selected
                                     [1U]] : 0U);
    vlSelf->mpc_xbar_htu_addr[2U] = ((4U >= vlSelf->xbar_core__DOT__entry_selected
                                      [2U]) ? vlSelf->xbar_core__DOT__ce_buffer_addr
                                     [((2U >= vlSelf->xbar_core__DOT__channel_selected
                                        [2U]) ? vlSelf->xbar_core__DOT__channel_selected
                                       [2U] : 0U)][
                                     vlSelf->xbar_core__DOT__entry_selected
                                     [2U]] : 0U);
    vlSelf->mpc_xbar_htu_addr[3U] = ((4U >= vlSelf->xbar_core__DOT__entry_selected
                                      [3U]) ? vlSelf->xbar_core__DOT__ce_buffer_addr
                                     [((2U >= vlSelf->xbar_core__DOT__channel_selected
                                        [3U]) ? vlSelf->xbar_core__DOT__channel_selected
                                       [3U] : 0U)][
                                     vlSelf->xbar_core__DOT__entry_selected
                                     [3U]] : 0U);
    if ((4U >= vlSelf->xbar_core__DOT__entry_selected
         [0U])) {
        vlSelf->mpc_xbar_wbuf_req_data[0U][0U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [0U]) ? vlSelf->xbar_core__DOT__channel_selected
              [0U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [0U]][0U];
        vlSelf->mpc_xbar_wbuf_req_data[0U][1U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [0U]) ? vlSelf->xbar_core__DOT__channel_selected
              [0U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [0U]][1U];
        vlSelf->mpc_xbar_wbuf_req_data[0U][2U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [0U]) ? vlSelf->xbar_core__DOT__channel_selected
              [0U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [0U]][2U];
        vlSelf->mpc_xbar_wbuf_req_data[0U][3U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [0U]) ? vlSelf->xbar_core__DOT__channel_selected
              [0U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [0U]][3U];
    } else {
        vlSelf->mpc_xbar_wbuf_req_data[0U][0U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[0U][1U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[0U][2U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[0U][3U] = 0U;
    }
    if ((4U >= vlSelf->xbar_core__DOT__entry_selected
         [1U])) {
        vlSelf->mpc_xbar_wbuf_req_data[1U][0U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [1U]) ? vlSelf->xbar_core__DOT__channel_selected
              [1U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [1U]][0U];
        vlSelf->mpc_xbar_wbuf_req_data[1U][1U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [1U]) ? vlSelf->xbar_core__DOT__channel_selected
              [1U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [1U]][1U];
        vlSelf->mpc_xbar_wbuf_req_data[1U][2U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [1U]) ? vlSelf->xbar_core__DOT__channel_selected
              [1U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [1U]][2U];
        vlSelf->mpc_xbar_wbuf_req_data[1U][3U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [1U]) ? vlSelf->xbar_core__DOT__channel_selected
              [1U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [1U]][3U];
    } else {
        vlSelf->mpc_xbar_wbuf_req_data[1U][0U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[1U][1U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[1U][2U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[1U][3U] = 0U;
    }
    if ((4U >= vlSelf->xbar_core__DOT__entry_selected
         [2U])) {
        vlSelf->mpc_xbar_wbuf_req_data[2U][0U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [2U]) ? vlSelf->xbar_core__DOT__channel_selected
              [2U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [2U]][0U];
        vlSelf->mpc_xbar_wbuf_req_data[2U][1U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [2U]) ? vlSelf->xbar_core__DOT__channel_selected
              [2U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [2U]][1U];
        vlSelf->mpc_xbar_wbuf_req_data[2U][2U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [2U]) ? vlSelf->xbar_core__DOT__channel_selected
              [2U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [2U]][2U];
        vlSelf->mpc_xbar_wbuf_req_data[2U][3U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [2U]) ? vlSelf->xbar_core__DOT__channel_selected
              [2U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [2U]][3U];
    } else {
        vlSelf->mpc_xbar_wbuf_req_data[2U][0U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[2U][1U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[2U][2U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[2U][3U] = 0U;
    }
    if ((4U >= vlSelf->xbar_core__DOT__entry_selected
         [3U])) {
        vlSelf->mpc_xbar_wbuf_req_data[3U][0U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [3U]) ? vlSelf->xbar_core__DOT__channel_selected
              [3U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [3U]][0U];
        vlSelf->mpc_xbar_wbuf_req_data[3U][1U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [3U]) ? vlSelf->xbar_core__DOT__channel_selected
              [3U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [3U]][1U];
        vlSelf->mpc_xbar_wbuf_req_data[3U][2U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [3U]) ? vlSelf->xbar_core__DOT__channel_selected
              [3U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [3U]][2U];
        vlSelf->mpc_xbar_wbuf_req_data[3U][3U] = vlSelf->xbar_core__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar_core__DOT__channel_selected
               [3U]) ? vlSelf->xbar_core__DOT__channel_selected
              [3U] : 0U)][vlSelf->xbar_core__DOT__entry_selected
            [3U]][3U];
    } else {
        vlSelf->mpc_xbar_wbuf_req_data[3U][0U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[3U][1U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[3U][2U] = 0U;
        vlSelf->mpc_xbar_wbuf_req_data[3U][3U] = 0U;
    }
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][3U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][3U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][3U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][3U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][3U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][2U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][2U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][2U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][2U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][2U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][1U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][1U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][1U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][1U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][1U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][0U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][0U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][0U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][0U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[2U][0U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][3U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][3U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][3U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][3U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][3U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][2U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][2U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][2U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][2U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][2U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][1U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][1U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][1U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][1U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][1U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][0U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][0U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][0U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][0U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[1U][0U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][3U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][3U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][3U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][3U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][3U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][2U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][2U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][2U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][2U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][2U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][1U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][1U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][1U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][1U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][1U][0U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][0U][4U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][0U][3U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][0U][2U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][0U][1U] = 0U;
    vlSelf->xbar_core__DOT__cbe_array_invalidate[0U][0U][0U] = 0U;
    xbar_core__DOT____Vlvbound_h19bb34d9__0 = 1U;
    if (((4U >= vlSelf->xbar_core__DOT__entry_selected
          [0U]) & (2U >= vlSelf->xbar_core__DOT__channel_selected
                   [0U]))) {
        vlSelf->xbar_core__DOT__cbe_array_invalidate[vlSelf->xbar_core__DOT__channel_selected[0U]][0U][vlSelf->xbar_core__DOT__entry_selected[0U]] 
            = xbar_core__DOT____Vlvbound_h19bb34d9__0;
    }
    xbar_core__DOT____Vlvbound_h19bb34d9__0 = 1U;
    if (((4U >= vlSelf->xbar_core__DOT__entry_selected
          [1U]) & (2U >= vlSelf->xbar_core__DOT__channel_selected
                   [1U]))) {
        vlSelf->xbar_core__DOT__cbe_array_invalidate[vlSelf->xbar_core__DOT__channel_selected[1U]][1U][vlSelf->xbar_core__DOT__entry_selected[1U]] 
            = xbar_core__DOT____Vlvbound_h19bb34d9__0;
    }
    xbar_core__DOT____Vlvbound_h19bb34d9__0 = 1U;
    if (((4U >= vlSelf->xbar_core__DOT__entry_selected
          [2U]) & (2U >= vlSelf->xbar_core__DOT__channel_selected
                   [2U]))) {
        vlSelf->xbar_core__DOT__cbe_array_invalidate[vlSelf->xbar_core__DOT__channel_selected[2U]][2U][vlSelf->xbar_core__DOT__entry_selected[2U]] 
            = xbar_core__DOT____Vlvbound_h19bb34d9__0;
    }
    xbar_core__DOT____Vlvbound_h19bb34d9__0 = 1U;
    if (((4U >= vlSelf->xbar_core__DOT__entry_selected
          [3U]) & (2U >= vlSelf->xbar_core__DOT__channel_selected
                   [3U]))) {
        vlSelf->xbar_core__DOT__cbe_array_invalidate[vlSelf->xbar_core__DOT__channel_selected[3U]][3U][vlSelf->xbar_core__DOT__entry_selected[3U]] 
            = xbar_core__DOT____Vlvbound_h19bb34d9__0;
    }
    vlSelf->xbar_core__DOT__upstream_bank_valid[0U] 
        = ((4U >= vlSelf->xbar_core__DOT__entry_selected
            [0U]) & vlSelf->xbar_core__DOT__cbe_array_valid
           [((2U >= vlSelf->xbar_core__DOT__channel_selected
              [0U]) ? vlSelf->xbar_core__DOT__channel_selected
             [0U] : 0U)][0U][vlSelf->xbar_core__DOT__entry_selected
           [0U]]);
    vlSelf->xbar_core__DOT__upstream_bank_valid[1U] 
        = ((4U >= vlSelf->xbar_core__DOT__entry_selected
            [1U]) & vlSelf->xbar_core__DOT__cbe_array_valid
           [((2U >= vlSelf->xbar_core__DOT__channel_selected
              [1U]) ? vlSelf->xbar_core__DOT__channel_selected
             [1U] : 0U)][1U][vlSelf->xbar_core__DOT__entry_selected
           [1U]]);
    vlSelf->xbar_core__DOT__upstream_bank_valid[2U] 
        = ((4U >= vlSelf->xbar_core__DOT__entry_selected
            [2U]) & vlSelf->xbar_core__DOT__cbe_array_valid
           [((2U >= vlSelf->xbar_core__DOT__channel_selected
              [2U]) ? vlSelf->xbar_core__DOT__channel_selected
             [2U] : 0U)][2U][vlSelf->xbar_core__DOT__entry_selected
           [2U]]);
    vlSelf->xbar_core__DOT__upstream_bank_valid[3U] 
        = ((4U >= vlSelf->xbar_core__DOT__entry_selected
            [3U]) & vlSelf->xbar_core__DOT__cbe_array_valid
           [((2U >= vlSelf->xbar_core__DOT__channel_selected
              [3U]) ? vlSelf->xbar_core__DOT__channel_selected
             [3U] : 0U)][3U][vlSelf->xbar_core__DOT__entry_selected
           [3U]]);
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][3U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [3U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][3U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [3U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][3U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [3U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][3U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [3U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][3U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [3U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][2U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [2U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][2U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [2U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][2U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [2U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][2U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [2U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][2U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [2U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][1U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [1U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][1U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [1U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][1U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [1U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][1U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [1U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][1U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [1U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][0U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [0U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][0U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [0U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][0U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [0U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][0U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [0U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][0U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[2U]
        [0U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][3U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [3U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][3U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [3U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][3U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [3U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][3U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [3U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][3U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [3U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][2U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [2U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][2U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [2U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][2U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [2U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][2U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [2U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][2U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [2U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][1U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [1U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][1U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [1U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][1U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [1U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][1U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [1U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][1U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [1U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][0U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [0U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][0U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [0U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][0U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [0U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][0U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [0U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][0U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[1U]
        [0U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][3U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [3U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][3U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [3U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][3U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [3U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][3U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [3U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][3U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [3U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][2U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [2U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][2U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [2U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][2U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [2U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][2U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [2U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][2U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [2U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][1U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [1U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][1U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [1U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][1U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [1U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][1U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [1U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][1U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [1U][0U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][0U][4U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [0U][4U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][0U][3U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [0U][3U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][0U][2U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [0U][2U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][0U][1U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [0U][1U];
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][0U][0U] 
        = vlSelf->xbar_core__DOT__cbe_array_valid[0U]
        [0U][0U];
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [0U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [0U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][0U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [0U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [0U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][0U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [0U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [0U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][0U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [0U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [0U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][0U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [1U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [1U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][1U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [1U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [1U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][1U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [1U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [1U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][1U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [1U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [1U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][1U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [2U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [2U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][2U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [2U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [2U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][2U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [2U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [2U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][2U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [2U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [2U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][2U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [3U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [3U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][3U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [3U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [3U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][3U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [3U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [3U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][3U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [0U]
                                               [3U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [0U]
                                                  [3U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][3U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [0U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [0U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][0U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [0U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [0U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][0U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [0U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [0U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][0U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [0U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [0U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][0U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [1U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [1U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][1U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [1U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [1U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][1U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [1U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [1U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][1U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [1U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [1U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][1U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [2U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [2U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][2U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [2U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [2U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][2U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [2U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [2U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][2U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [2U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [2U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][2U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [3U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [3U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][3U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [3U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [3U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][3U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [3U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [3U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][3U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [1U]
                                               [3U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [1U]
                                                  [3U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][3U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [0U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [0U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][0U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [0U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [0U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][0U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [0U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [0U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][0U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [0U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [0U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][0U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [1U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [1U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][1U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [1U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [1U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][1U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [1U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [1U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][1U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [1U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [1U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][1U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [2U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [2U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][2U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [2U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [2U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][2U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [2U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [2U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][2U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [2U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [2U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][2U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [3U]
                                               [0U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [3U]
                                                  [0U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][3U][0U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [3U]
                                               [1U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [3U]
                                                  [1U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][3U][1U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [3U]
                                               [2U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [3U]
                                                  [2U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][3U][2U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    xbar_core__DOT____Vlvbound_hc51474bc__0 = (vlSelf->xbar_core__DOT__cbe_array_valid
                                               [2U]
                                               [3U]
                                               [3U] 
                                               & (~ 
                                                  vlSelf->xbar_core__DOT__cbe_array_invalidate
                                                  [2U]
                                                  [3U]
                                                  [3U]));
    vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][3U][3U] 
        = xbar_core__DOT____Vlvbound_hc51474bc__0;
    if (vlSelf->xbar_core__DOT__upstream_ch0_kickoff) {
        vlSelf->xbar_core__DOT____Vlvbound_h744a2bd8__0 = 1U;
        if ((4U >= (IData)(vlSelf->xbar_core__DOT__ch0_wptr))) {
            vlSelf->xbar_core__DOT__n_cbe_array_valid[0U][(3U 
                                                           & (vlSelf->mpc_channel0_address 
                                                              >> 4U))][vlSelf->xbar_core__DOT__ch0_wptr] 
                = vlSelf->xbar_core__DOT____Vlvbound_h744a2bd8__0;
        }
    }
    if (vlSelf->xbar_core__DOT__upstream_ch1_kickoff) {
        vlSelf->xbar_core__DOT____Vlvbound_h7e4ea3c9__0 = 1U;
        if ((4U >= (IData)(vlSelf->xbar_core__DOT__ch1_wptr))) {
            vlSelf->xbar_core__DOT__n_cbe_array_valid[1U][(3U 
                                                           & (vlSelf->mpc_channel1_address 
                                                              >> 4U))][vlSelf->xbar_core__DOT__ch1_wptr] 
                = vlSelf->xbar_core__DOT____Vlvbound_h7e4ea3c9__0;
        }
    }
    if (vlSelf->xbar_core__DOT__upstream_ch2_kickoff) {
        vlSelf->xbar_core__DOT____Vlvbound_h928c798f__0 = 1U;
        if ((4U >= (IData)(vlSelf->xbar_core__DOT__ch2_wptr))) {
            vlSelf->xbar_core__DOT__n_cbe_array_valid[2U][(3U 
                                                           & (vlSelf->mpc_channel2_address 
                                                              >> 4U))][vlSelf->xbar_core__DOT__ch2_wptr] 
                = vlSelf->xbar_core__DOT____Vlvbound_h928c798f__0;
        }
    }
    vlSelf->xbar_core__DOT__upstream_bank_kickoff[0U] 
        = (vlSelf->xbar_core__DOT__upstream_bank_enable
           [0U] & vlSelf->xbar_core__DOT__upstream_bank_valid
           [0U]);
    vlSelf->xbar_core__DOT__upstream_bank_kickoff[1U] 
        = (vlSelf->xbar_core__DOT__upstream_bank_enable
           [1U] & vlSelf->xbar_core__DOT__upstream_bank_valid
           [1U]);
    vlSelf->xbar_core__DOT__upstream_bank_kickoff[2U] 
        = (vlSelf->xbar_core__DOT__upstream_bank_enable
           [2U] & vlSelf->xbar_core__DOT__upstream_bank_valid
           [2U]);
    vlSelf->xbar_core__DOT__upstream_bank_kickoff[3U] 
        = (vlSelf->xbar_core__DOT__upstream_bank_enable
           [3U] & vlSelf->xbar_core__DOT__upstream_bank_valid
           [3U]);
    vlSelf->mpc_xbar_wbuf_req_valid[0U] = (vlSelf->xbar_core__DOT__upstream_bank_valid
                                           [0U] & (~ 
                                                   vlSelf->xbar_core__DOT__wbuf_already_kickoff
                                                   [0U]));
    vlSelf->mpc_xbar_wbuf_req_valid[1U] = (vlSelf->xbar_core__DOT__upstream_bank_valid
                                           [1U] & (~ 
                                                   vlSelf->xbar_core__DOT__wbuf_already_kickoff
                                                   [1U]));
    vlSelf->mpc_xbar_wbuf_req_valid[2U] = (vlSelf->xbar_core__DOT__upstream_bank_valid
                                           [2U] & (~ 
                                                   vlSelf->xbar_core__DOT__wbuf_already_kickoff
                                                   [2U]));
    vlSelf->mpc_xbar_wbuf_req_valid[3U] = (vlSelf->xbar_core__DOT__upstream_bank_valid
                                           [3U] & (~ 
                                                   vlSelf->xbar_core__DOT__wbuf_already_kickoff
                                                   [3U]));
    vlSelf->xbar_core__DOT__wbuf_kickoff[0U] = (vlSelf->mpc_xbar_wbuf_req_valid
                                                [0U] 
                                                & vlSelf->mpc_xbar_wbuf_req_enable
                                                [0U]);
    vlSelf->xbar_core__DOT__wbuf_kickoff[1U] = (vlSelf->mpc_xbar_wbuf_req_valid
                                                [1U] 
                                                & vlSelf->mpc_xbar_wbuf_req_enable
                                                [1U]);
    vlSelf->xbar_core__DOT__wbuf_kickoff[2U] = (vlSelf->mpc_xbar_wbuf_req_valid
                                                [2U] 
                                                & vlSelf->mpc_xbar_wbuf_req_enable
                                                [2U]);
    vlSelf->xbar_core__DOT__wbuf_kickoff[3U] = (vlSelf->mpc_xbar_wbuf_req_valid
                                                [3U] 
                                                & vlSelf->mpc_xbar_wbuf_req_enable
                                                [3U]);
    vlSelf->xbar_core__DOT__n_wbuf_already_kickoff[0U] 
        = ((~ vlSelf->xbar_core__DOT__upstream_bank_kickoff
            [0U]) & (vlSelf->xbar_core__DOT__wbuf_already_kickoff
                     [0U] | vlSelf->xbar_core__DOT__wbuf_kickoff
                     [0U]));
    vlSelf->xbar_core__DOT__n_wbuf_already_kickoff[1U] 
        = ((~ vlSelf->xbar_core__DOT__upstream_bank_kickoff
            [1U]) & (vlSelf->xbar_core__DOT__wbuf_already_kickoff
                     [1U] | vlSelf->xbar_core__DOT__wbuf_kickoff
                     [1U]));
    vlSelf->xbar_core__DOT__n_wbuf_already_kickoff[2U] 
        = ((~ vlSelf->xbar_core__DOT__upstream_bank_kickoff
            [2U]) & (vlSelf->xbar_core__DOT__wbuf_already_kickoff
                     [2U] | vlSelf->xbar_core__DOT__wbuf_kickoff
                     [2U]));
    vlSelf->xbar_core__DOT__n_wbuf_already_kickoff[3U] 
        = ((~ vlSelf->xbar_core__DOT__upstream_bank_kickoff
            [3U]) & (vlSelf->xbar_core__DOT__wbuf_already_kickoff
                     [3U] | vlSelf->xbar_core__DOT__wbuf_kickoff
                     [3U]));
    vlSelf->mpc_xbar_htu_valid[0U] = (vlSelf->xbar_core__DOT__upstream_bank_valid
                                      [0U] & (~ vlSelf->xbar_core__DOT__htu_already_kickoff
                                              [0U]));
    vlSelf->mpc_xbar_htu_valid[1U] = (vlSelf->xbar_core__DOT__upstream_bank_valid
                                      [1U] & (~ vlSelf->xbar_core__DOT__htu_already_kickoff
                                              [1U]));
    vlSelf->mpc_xbar_htu_valid[2U] = (vlSelf->xbar_core__DOT__upstream_bank_valid
                                      [2U] & (~ vlSelf->xbar_core__DOT__htu_already_kickoff
                                              [2U]));
    vlSelf->mpc_xbar_htu_valid[3U] = (vlSelf->xbar_core__DOT__upstream_bank_valid
                                      [3U] & (~ vlSelf->xbar_core__DOT__htu_already_kickoff
                                              [3U]));
    vlSelf->xbar_core__DOT__htu_kickoff[0U] = (vlSelf->mpc_xbar_htu_valid
                                               [0U] 
                                               & vlSelf->mpc_xbar_htu_enable
                                               [0U]);
    vlSelf->xbar_core__DOT__htu_kickoff[1U] = (vlSelf->mpc_xbar_htu_valid
                                               [1U] 
                                               & vlSelf->mpc_xbar_htu_enable
                                               [1U]);
    vlSelf->xbar_core__DOT__htu_kickoff[2U] = (vlSelf->mpc_xbar_htu_valid
                                               [2U] 
                                               & vlSelf->mpc_xbar_htu_enable
                                               [2U]);
    vlSelf->xbar_core__DOT__htu_kickoff[3U] = (vlSelf->mpc_xbar_htu_valid
                                               [3U] 
                                               & vlSelf->mpc_xbar_htu_enable
                                               [3U]);
    vlSelf->xbar_core__DOT__n_htu_already_kickoff[0U] 
        = ((~ vlSelf->xbar_core__DOT__upstream_bank_kickoff
            [0U]) & (vlSelf->xbar_core__DOT__htu_already_kickoff
                     [0U] | vlSelf->xbar_core__DOT__htu_kickoff
                     [0U]));
    vlSelf->xbar_core__DOT__n_htu_already_kickoff[1U] 
        = ((~ vlSelf->xbar_core__DOT__upstream_bank_kickoff
            [1U]) & (vlSelf->xbar_core__DOT__htu_already_kickoff
                     [1U] | vlSelf->xbar_core__DOT__htu_kickoff
                     [1U]));
    vlSelf->xbar_core__DOT__n_htu_already_kickoff[2U] 
        = ((~ vlSelf->xbar_core__DOT__upstream_bank_kickoff
            [2U]) & (vlSelf->xbar_core__DOT__htu_already_kickoff
                     [2U] | vlSelf->xbar_core__DOT__htu_kickoff
                     [2U]));
    vlSelf->xbar_core__DOT__n_htu_already_kickoff[3U] 
        = ((~ vlSelf->xbar_core__DOT__upstream_bank_kickoff
            [3U]) & (vlSelf->xbar_core__DOT__htu_already_kickoff
                     [3U] | vlSelf->xbar_core__DOT__htu_kickoff
                     [3U]));
    vlSelf->xbar_core__DOT__upstream_bank_enable[0U] 
        = (1U & ((~ (vlSelf->mpc_xbar_htu_valid[0U] 
                     & (~ vlSelf->mpc_xbar_htu_enable
                        [0U]))) & (~ (vlSelf->mpc_xbar_wbuf_req_valid
                                      [0U] & (~ vlSelf->mpc_xbar_wbuf_req_enable
                                              [0U])))));
    vlSelf->xbar_core__DOT__upstream_bank_enable[1U] 
        = (1U & ((~ (vlSelf->mpc_xbar_htu_valid[1U] 
                     & (~ vlSelf->mpc_xbar_htu_enable
                        [1U]))) & (~ (vlSelf->mpc_xbar_wbuf_req_valid
                                      [1U] & (~ vlSelf->mpc_xbar_wbuf_req_enable
                                              [1U])))));
    vlSelf->xbar_core__DOT__upstream_bank_enable[2U] 
        = (1U & ((~ (vlSelf->mpc_xbar_htu_valid[2U] 
                     & (~ vlSelf->mpc_xbar_htu_enable
                        [2U]))) & (~ (vlSelf->mpc_xbar_wbuf_req_valid
                                      [2U] & (~ vlSelf->mpc_xbar_wbuf_req_enable
                                              [2U])))));
    vlSelf->xbar_core__DOT__upstream_bank_enable[3U] 
        = (1U & ((~ (vlSelf->mpc_xbar_htu_valid[3U] 
                     & (~ vlSelf->mpc_xbar_htu_enable
                        [3U]))) & (~ (vlSelf->mpc_xbar_wbuf_req_valid
                                      [3U] & (~ vlSelf->mpc_xbar_wbuf_req_enable
                                              [3U])))));
}

VL_ATTR_COLD void Vcommon___024root___eval_initial(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcommon___024root___eval_settle(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_settle\n"); );
    // Body
    Vcommon___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vcommon___024root___final(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___final\n"); );
}

VL_ATTR_COLD void Vcommon___024root___ctor_var_reset(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel0_valid = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel0_enable = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel0_op = VL_RAND_RESET_I(3);
    vlSelf->mpc_channel0_address = VL_RAND_RESET_I(28);
    VL_RAND_RESET_W(128, vlSelf->mpc_channel0_data);
    vlSelf->mpc_channel1_valid = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel1_enable = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel1_op = VL_RAND_RESET_I(3);
    vlSelf->mpc_channel1_address = VL_RAND_RESET_I(28);
    VL_RAND_RESET_W(128, vlSelf->mpc_channel1_data);
    vlSelf->mpc_channel2_valid = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel2_enable = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel2_op = VL_RAND_RESET_I(3);
    vlSelf->mpc_channel2_address = VL_RAND_RESET_I(28);
    VL_RAND_RESET_W(128, vlSelf->mpc_channel2_data);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_htu_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_htu_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_htu_channel_id[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_htu_op_code[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_htu_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_htu_set[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_htu_wbuffer_id[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_wbuf_req_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_wbuf_req_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_wbuf_req_channel_id[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->mpc_xbar_wbuf_req_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mpc_xbar_wbuf_req_wbuffer_id[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->mpc_xbar_wbuf_rtn_free_id[__Vi0]);
    }
    vlSelf->xbar_core__DOT__ch0_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__ch1_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__ch2_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__n_ch0_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__n_ch1_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__n_ch2_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__ch0_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__ch1_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__ch2_rptr = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar_core__DOT__ch_rptr[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->xbar_core__DOT__n_ch0_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__n_ch1_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__n_ch2_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__ch0_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__ch1_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__ch2_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__n_ch0_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__n_ch1_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT__n_ch2_used_entry = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            vlSelf->xbar_core__DOT__ce_buffer_addr[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            vlSelf->xbar_core__DOT__ce_buffer_op[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->xbar_core__DOT__ce_buffer_data[__Vi0][__Vi1]);
        }
    }
    vlSelf->xbar_core__DOT__upstream_ch0_kickoff = VL_RAND_RESET_I(1);
    vlSelf->xbar_core__DOT__upstream_ch1_kickoff = VL_RAND_RESET_I(1);
    vlSelf->xbar_core__DOT__upstream_ch2_kickoff = VL_RAND_RESET_I(1);
    vlSelf->xbar_core__DOT__ch0_last_entry_already_pop = VL_RAND_RESET_I(1);
    vlSelf->xbar_core__DOT__ch1_last_entry_already_pop = VL_RAND_RESET_I(1);
    vlSelf->xbar_core__DOT__ch2_last_entry_already_pop = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            for (int __Vi2=0; __Vi2<5; ++__Vi2) {
                vlSelf->xbar_core__DOT__cbe_array_valid[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            for (int __Vi2=0; __Vi2<5; ++__Vi2) {
                vlSelf->xbar_core__DOT__cbe_array_invalidate[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            for (int __Vi2=0; __Vi2<5; ++__Vi2) {
                vlSelf->xbar_core__DOT__n_cbe_array_valid[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__htu_already_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__htu_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__n_htu_already_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__n_wbuf_already_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__wbuf_already_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__wbuf_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__upstream_bank_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__upstream_bank_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__upstream_bank_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__channel_selected[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__entry_selected[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__channel_num_found[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__channel_num_int[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<3; ++__Vi1) {
            vlSelf->xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_core__DOT__n_cbe_sel_current_bank_channel_num_want_send[__Vi0] = VL_RAND_RESET_I(2);
    }
    VL_RAND_RESET_W(128, vlSelf->xbar_core__DOT____Vlvbound_hde2099a3__0);
    vlSelf->xbar_core__DOT____Vlvbound_h5b05dc81__0 = VL_RAND_RESET_I(28);
    vlSelf->xbar_core__DOT____Vlvbound_h57f15970__0 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->xbar_core__DOT____Vlvbound_ha9f08c44__0);
    vlSelf->xbar_core__DOT____Vlvbound_h063c3644__0 = VL_RAND_RESET_I(28);
    vlSelf->xbar_core__DOT____Vlvbound_h8bc0e573__0 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->xbar_core__DOT____Vlvbound_h2b478e16__0);
    vlSelf->xbar_core__DOT____Vlvbound_h9198af35__0 = VL_RAND_RESET_I(28);
    vlSelf->xbar_core__DOT____Vlvbound_h0963d995__0 = VL_RAND_RESET_I(3);
    vlSelf->xbar_core__DOT____Vlvbound_h744a2bd8__0 = VL_RAND_RESET_I(1);
    vlSelf->xbar_core__DOT____Vlvbound_h7e4ea3c9__0 = VL_RAND_RESET_I(1);
    vlSelf->xbar_core__DOT____Vlvbound_h928c798f__0 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vchglast__TOP__xbar_core__DOT__upstream_bank_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
}
