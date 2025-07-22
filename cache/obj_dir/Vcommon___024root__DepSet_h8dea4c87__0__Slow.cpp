// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

extern const VlUnpacked<CData/*2:0*/, 2048> Vcommon__ConstPool__TABLE_h29ad1b15_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vcommon__ConstPool__TABLE_h6e178afd_0;

VL_ATTR_COLD void Vcommon___024root___settle__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__1\n"); );
    // Init
    CData/*0:0*/ xbar__DOT____Vcellout__Inst_KOB__d_ch_2_rob_req;
    CData/*0:0*/ xbar__DOT____Vcellout__Inst_KOB__d_ch_1_rob_req;
    CData/*0:0*/ xbar__DOT____Vcellout__Inst_KOB__d_ch_0_rob_req;
    CData/*0:0*/ xbar__DOT____Vcellout__ch0_SWB__u_kob_rob_ack;
    CData/*0:0*/ xbar__DOT____Vcellout__ch1_SWB__u_kob_rob_ack;
    CData/*0:0*/ xbar__DOT____Vcellout__ch2_SWB__u_kob_rob_ack;
    CData/*0:0*/ xbar__DOT__Inst_KOB__DOT____Vlvbound_hb2457b0b__0;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__3__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__3__KET____DOT__inst_frr__valid_array;
    CData/*0:0*/ xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    CData/*0:0*/ xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    CData/*0:0*/ xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_bank_num__BRA__0__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__0__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_bank_num__BRA__1__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__1__KET____DOT__inst_frr__valid_array;
    CData/*2:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_bank_num__BRA__2__KET____DOT__inst_frr__find_round_robin;
    CData/*7:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__2__KET____DOT__inst_frr__valid_array;
    CData/*0:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    CData/*0:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    CData/*0:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    CData/*1:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_ha0433b49__0;
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
    SData/*10:0*/ __Vtableidx17;
    SData/*10:0*/ __Vtableidx18;
    SData/*10:0*/ __Vtableidx19;
    SData/*10:0*/ __Vtableidx20;
    SData/*10:0*/ __Vtableidx21;
    SData/*10:0*/ __Vtableidx22;
    SData/*10:0*/ __Vtableidx23;
    SData/*10:0*/ __Vtableidx24;
    SData/*10:0*/ __Vtableidx25;
    SData/*10:0*/ __Vtableidx26;
    SData/*10:0*/ __Vtableidx27;
    SData/*10:0*/ __Vtableidx28;
    SData/*10:0*/ __Vtableidx29;
    SData/*10:0*/ __Vtableidx30;
    SData/*10:0*/ __Vtableidx31;
    // Body
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id[0U] = 0U;
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id[1U] = 0U;
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id[2U] = 0U;
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id[3U] = 0U;
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[3U][0U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[3U][0U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[3U][1U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[3U][1U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[3U][2U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[3U][2U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[3U][3U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[3U][3U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[3U][4U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[3U][4U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[3U][5U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[3U][5U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[3U][6U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[3U][6U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[3U][7U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[3U][7U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[2U][0U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[2U][0U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[2U][1U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[2U][1U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[2U][2U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[2U][2U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[2U][3U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[2U][3U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[2U][4U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[2U][4U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[2U][5U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[2U][5U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[2U][6U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[2U][6U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[2U][7U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[2U][7U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[1U][0U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[1U][0U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[1U][1U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[1U][1U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[1U][2U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[1U][2U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[1U][3U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[1U][3U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[1U][4U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[1U][4U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[1U][5U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[1U][5U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[1U][6U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[1U][6U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[1U][7U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[1U][7U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[0U][0U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[0U][0U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[0U][1U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[0U][1U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[0U][2U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[0U][2U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[0U][3U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[0U][3U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[0U][4U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[0U][4U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[0U][5U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[0U][5U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[0U][6U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[0U][6U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[0U][7U] 
        = vlSelf->mpc_xbar_wbuf_rtn_free_id[0U][7U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable[3U] 
        = vlSelf->mpc_xbar_wbuf_req_enable[3U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable[2U] 
        = vlSelf->mpc_xbar_wbuf_req_enable[2U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable[1U] 
        = vlSelf->mpc_xbar_wbuf_req_enable[1U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable[0U] 
        = vlSelf->mpc_xbar_wbuf_req_enable[0U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable[3U] 
        = vlSelf->mpc_xbar_htu_enable[3U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable[2U] 
        = vlSelf->mpc_xbar_htu_enable[2U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable[1U] 
        = vlSelf->mpc_xbar_htu_enable[1U];
    vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable[0U] 
        = vlSelf->mpc_xbar_htu_enable[0U];
    vlSelf->xbar__DOT__mpc_channel_valid[0U] = vlSelf->mpc_channel0_valid;
    vlSelf->xbar__DOT__mpc_channel_valid[1U] = vlSelf->mpc_channel1_valid;
    vlSelf->xbar__DOT__mpc_channel_valid[2U] = vlSelf->mpc_channel2_valid;
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_req_bank_id[0U] 
        = (3U & (vlSelf->mpc_channel0_address >> 4U));
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_req_bank_id[1U] 
        = (3U & (vlSelf->mpc_channel0_address >> 4U));
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_req_bank_id[2U] 
        = (3U & (vlSelf->mpc_channel0_address >> 4U));
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel0_rtn_enable));
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel0_rtn_enable));
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel0_rtn_enable));
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel0_rtn_enable));
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel1_rtn_enable));
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel1_rtn_enable));
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel1_rtn_enable));
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel1_rtn_enable));
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel2_rtn_enable));
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel2_rtn_enable));
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel2_rtn_enable));
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel2_rtn_enable));
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[0U][0U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[0U][1U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[0U][2U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[0U][3U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[1U][0U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[1U][1U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[1U][2U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[1U][3U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[2U][0U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[2U][1U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[2U][2U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[2U][3U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[3U][0U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[3U][1U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[3U][2U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[3U][3U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[0U][0U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[0U][1U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[0U][2U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[0U][3U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[1U][0U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[1U][1U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[1U][2U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[1U][3U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[2U][0U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[2U][1U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[2U][2U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[2U][3U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[3U][0U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[3U][1U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[3U][2U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[3U][3U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[0U][0U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[0U][1U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[0U][2U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[0U][3U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[1U][0U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[1U][1U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[1U][2U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[1U][3U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[2U][0U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[2U][1U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[2U][2U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[2U][3U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[3U][0U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][0U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[3U][1U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][1U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[3U][2U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][2U];
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[3U][3U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data
        [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_last_entry_already_pop 
        = (1U & ((((~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr)) 
                       & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                       [0U][0U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr])) 
                   & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr)) 
                         & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                         [0U][1U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr]))) 
                  & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr)) 
                        & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                        [0U][2U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr]))) 
                 & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr)) 
                       & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                       [0U][3U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr]))));
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_last_entry_already_pop 
        = (1U & ((((~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr)) 
                       & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                       [0U][0U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr])) 
                   & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr)) 
                         & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                         [0U][1U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr]))) 
                  & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr)) 
                        & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                        [0U][2U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr]))) 
                 & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr)) 
                       & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                       [0U][3U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr]))));
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_last_entry_already_pop 
        = (1U & ((((~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr)) 
                       & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                       [0U][0U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr])) 
                   & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr)) 
                         & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                         [0U][1U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr]))) 
                  & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr)) 
                        & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                        [0U][2U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr]))) 
                 & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr)) 
                       & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                       [0U][3U][vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr]))));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_last_entry_already_pop 
        = (1U & (((~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr)) 
                      & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                      [0U][0U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr])) 
                  & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr)) 
                        & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                        [0U][1U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr]))) 
                 & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr)) 
                       & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                       [0U][2U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr]))));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_last_entry_already_pop 
        = (1U & (((~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr)) 
                      & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                      [0U][0U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr])) 
                  & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr)) 
                        & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                        [0U][1U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr]))) 
                 & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr)) 
                       & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                       [0U][2U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr]))));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_last_entry_already_pop 
        = (1U & (((~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr)) 
                      & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                      [0U][0U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr])) 
                  & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr)) 
                        & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                        [0U][1U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr]))) 
                 & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr)) 
                       & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                       [0U][2U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr]))));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_last_entry_already_pop 
        = (1U & (((~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr)) 
                      & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                      [0U][0U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr])) 
                  & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr)) 
                        & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                        [0U][1U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr]))) 
                 & (~ ((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr)) 
                       & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                       [0U][2U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr]))));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0U;
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1fU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1fU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1eU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1eU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1dU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1dU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1cU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1cU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1bU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1bU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1aU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1aU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x19U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x19U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x18U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x18U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x17U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x17U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x16U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x16U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x15U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x15U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x14U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x14U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x13U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x13U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x12U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x12U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x11U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x11U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x10U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x10U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xfU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xfU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xeU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xeU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xdU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xdU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xcU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xcU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xbU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xbU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xaU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xaU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 9U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 9U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 8U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 8U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 7U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 7U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 6U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 6U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 5U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 5U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 4U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 4U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 3U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 3U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 2U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 2U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 1U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 1U;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0U;
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1fU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1fU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1eU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1eU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1dU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1dU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1cU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1cU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1bU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1bU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1aU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1aU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x19U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x19U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x18U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x18U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x17U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x17U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x16U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x16U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x15U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x15U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x14U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x14U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x13U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x13U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x12U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x12U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x11U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x11U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x10U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x10U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xfU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xfU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xeU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xeU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xdU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xdU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xcU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xcU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xbU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xbU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xaU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xaU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 9U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 9U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 8U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 8U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 7U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 7U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 6U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 6U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 5U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 5U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 4U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 4U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 3U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 3U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 2U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 2U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 1U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 1U;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0U;
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1fU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1fU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1eU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1eU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1dU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1dU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1cU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1cU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1bU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1bU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1aU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1aU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x19U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x19U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x18U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x18U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x17U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x17U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x16U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x16U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x15U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x15U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x14U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x14U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x13U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x13U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x12U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x12U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x11U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x11U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x10U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x10U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xfU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xfU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xeU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xeU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xdU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xdU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xcU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xcU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xbU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xbU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xaU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xaU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 9U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 9U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 8U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 8U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 7U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 7U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 6U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 6U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 5U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 5U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 4U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 4U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 3U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 3U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 2U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 2U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 1U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 1U;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0U;
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1fU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1fU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1eU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1eU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1dU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1dU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1cU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1cU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1bU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1bU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1aU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x1aU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x19U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x19U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x18U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x18U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x17U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x17U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x16U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x16U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x15U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x15U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x14U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x14U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x13U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x13U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x12U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x12U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x11U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x11U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x10U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0x10U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xfU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xfU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xeU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xeU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xdU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xdU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xcU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xcU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xbU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xbU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xaU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 0xaU;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 9U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 9U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 8U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 8U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 7U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 7U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 6U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 6U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 5U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 5U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 4U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 4U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 3U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 3U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 2U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 2U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 1U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = 1U;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 0U;
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1fU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1eU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1dU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1cU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1bU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1aU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x19U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x18U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x17U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x16U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x15U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x14U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x13U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x12U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x11U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x10U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xfU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xeU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xdU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xcU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xbU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xaU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 9U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 8U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 7U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 6U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 5U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 4U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 3U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 2U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 1U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 0U;
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1fU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1eU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1dU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1cU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1bU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1aU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x19U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x18U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x17U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x16U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x15U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x14U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x13U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x12U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x11U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x10U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xfU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xeU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xdU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xcU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xbU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xaU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 9U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 8U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 7U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 6U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 5U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 4U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 3U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 2U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 1U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 0U;
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1fU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1eU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1dU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1cU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1bU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1aU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x19U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x18U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x17U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x16U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x15U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x14U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x13U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x12U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x11U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x10U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xfU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xeU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xdU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xcU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xbU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xaU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 9U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 8U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 7U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 6U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 5U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 4U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 3U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 2U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 1U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 0U;
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1fU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1eU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1dU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1cU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1bU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x1aU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x19U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x18U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x17U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x16U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x15U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x14U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x13U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x12U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x11U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0x10U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xfU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xeU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xdU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xcU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xbU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 0xaU)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 9U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 8U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 7U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 6U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 5U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 4U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 3U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 2U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    if ((1U & (~ (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
                  >> 1U)))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = 1U;
    }
    xbar__DOT____Vcellout__Inst_KOB__d_ch_0_rob_req 
        = (1U & (vlSelf->xbar__DOT__Inst_KOB__DOT__kob_entry
                 [0U][(7U & vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                       [0U])] >> 2U));
    xbar__DOT____Vcellout__Inst_KOB__d_ch_1_rob_req 
        = (1U & (vlSelf->xbar__DOT__Inst_KOB__DOT__kob_entry
                 [1U][(7U & vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                       [1U])] >> 2U));
    xbar__DOT____Vcellout__Inst_KOB__d_ch_2_rob_req 
        = (1U & (vlSelf->xbar__DOT__Inst_KOB__DOT__kob_entry
                 [2U][(7U & vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                       [2U])] >> 2U));
    vlSelf->d_bank0_enable = ((5U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_used_entry))
                               ? 0U : 1U);
    vlSelf->d_bank1_enable = ((5U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_used_entry))
                               ? 0U : 1U);
    vlSelf->d_bank2_enable = ((5U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_used_entry))
                               ? 0U : 1U);
    vlSelf->d_bank3_enable = ((5U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_used_entry))
                               ? 0U : 1U);
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_bank_crdt_rtn[0U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_bank_crdt_rtn[1U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_bank_crdt_rtn[2U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_bank_crdt_rtn[3U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_bank_crdt_rtn[0U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_bank_crdt_rtn[1U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_bank_crdt_rtn[2U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_bank_crdt_rtn[3U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_bank_crdt_rtn[0U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_bank_crdt_rtn[1U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_bank_crdt_rtn[2U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_bank_crdt_rtn[3U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id[0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__tag;
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id[1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__tag;
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id[2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__tag;
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id[3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__tag;
    vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__u_kob_rob_ack 
        = (vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_valid
           [vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg] 
           & (~ (IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg)));
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid[0U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid[1U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid[2U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid[3U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid[0U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid[1U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid[2U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid[3U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid[0U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid[1U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid[2U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid[3U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg;
    vlSelf->xbar__DOT__kob_rob_bank_id[2U] = (3U & 
                                              vlSelf->xbar__DOT__Inst_KOB__DOT__kob_entry
                                              [2U][
                                              (7U & 
                                               vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                                               [2U])]);
    vlSelf->xbar__DOT__kob_rob_bank_id[1U] = (3U & 
                                              vlSelf->xbar__DOT__Inst_KOB__DOT__kob_entry
                                              [1U][
                                              (7U & 
                                               vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                                               [1U])]);
    vlSelf->xbar__DOT__kob_rob_bank_id[0U] = (3U & 
                                              vlSelf->xbar__DOT__Inst_KOB__DOT__kob_entry
                                              [0U][
                                              (7U & 
                                               vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                                               [0U])]);
    vlSelf->xbar__DOT__chn_xbar_req_enable[2U] = ((5U 
                                                   == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_used_entry))
                                                   ? 0U
                                                   : 1U);
    vlSelf->xbar__DOT__chn_xbar_req_enable[1U] = ((5U 
                                                   == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_used_entry))
                                                   ? 0U
                                                   : 1U);
    vlSelf->xbar__DOT__chn_xbar_req_enable[0U] = ((5U 
                                                   == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_used_entry))
                                                   ? 0U
                                                   : 1U);
    xbar__DOT__Inst_KOB__DOT____Vlvbound_hb2457b0b__0 
        = (((vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
             [0U] ^ vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
             [0U]) >> 3U) & ((7U & vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
                              [0U]) == (7U & vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                                        [0U])));
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_full[0U] 
        = xbar__DOT__Inst_KOB__DOT____Vlvbound_hb2457b0b__0;
    xbar__DOT__Inst_KOB__DOT____Vlvbound_hb2457b0b__0 
        = (((vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
             [1U] ^ vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
             [1U]) >> 3U) & ((7U & vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
                              [1U]) == (7U & vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                                        [1U])));
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_full[1U] 
        = xbar__DOT__Inst_KOB__DOT____Vlvbound_hb2457b0b__0;
    xbar__DOT__Inst_KOB__DOT____Vlvbound_hb2457b0b__0 
        = (((vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
             [2U] ^ vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
             [2U]) >> 3U) & ((7U & vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
                              [2U]) == (7U & vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                                        [2U])));
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_full[2U] 
        = xbar__DOT__Inst_KOB__DOT____Vlvbound_hb2457b0b__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [0U][0U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [0U][0U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [0U][0U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [0U]
                                                  [0U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [0U]
                                                 [0U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [0U][1U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [0U][1U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [0U][1U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [0U]
                                                  [1U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [0U]
                                                 [1U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [0U][2U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [0U][2U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [0U][2U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [0U]
                                                  [2U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [0U]
                                                 [2U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [1U][0U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [1U][0U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [1U][0U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [1U]
                                                  [0U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [1U]
                                                 [0U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [1U][1U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [1U][1U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [1U][1U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [1U]
                                                  [1U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [1U]
                                                 [1U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [1U][2U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [1U][2U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [1U][2U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [1U]
                                                  [2U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [1U]
                                                 [2U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [2U][0U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [2U][0U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [2U][0U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [2U]
                                                  [0U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [2U]
                                                 [0U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [2U][1U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [2U][1U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [2U][1U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [2U]
                                                  [1U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [2U]
                                                 [1U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [2U][2U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [2U][2U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [2U][2U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [2U]
                                                  [2U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [2U]
                                                 [2U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [3U][0U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [3U][0U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [3U][0U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [3U]
                                                  [0U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [3U]
                                                 [0U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [3U][1U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [3U][1U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [3U][1U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [3U]
                                                  [1U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [3U]
                                                 [1U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [3U][2U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                    [3U][2U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                       [3U][2U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                  [3U]
                                                  [2U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
                                                 [3U]
                                                 [2U]
                                                 [0U]))));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_valid[0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__tag_valid;
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_valid[1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__tag_valid;
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_valid[2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__tag_valid;
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_valid[3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__tag_valid;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr[0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr[1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr[2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr[3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr;
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [0U][0U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [0U][0U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [0U][0U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [0U]
                                                  [0U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [0U]
                                                 [0U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [0U][1U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [0U][1U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [0U][1U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [0U]
                                                  [1U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [0U]
                                                 [1U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [0U][2U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [0U][2U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [0U][2U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [0U]
                                                  [2U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [0U]
                                                 [2U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [0U][3U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [0U][3U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [0U][3U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [0U]
                                                  [3U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [0U]
                                                 [3U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [1U][0U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [1U][0U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [1U][0U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [1U]
                                                  [0U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [1U]
                                                 [0U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [1U][1U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [1U][1U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [1U][1U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [1U]
                                                  [1U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [1U]
                                                 [1U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [1U][2U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [1U][2U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [1U][2U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [1U]
                                                  [2U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [1U]
                                                 [2U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [1U][3U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [1U][3U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [1U][3U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [1U]
                                                  [3U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [1U]
                                                 [3U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [2U][0U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [2U][0U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [2U][0U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [2U]
                                                  [0U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [2U]
                                                 [0U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [2U][1U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [2U][1U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [2U][1U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [2U]
                                                  [1U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [2U]
                                                 [1U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [2U][2U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [2U][2U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [2U][2U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [2U]
                                                  [2U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [2U]
                                                 [2U]
                                                 [0U]))));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [2U][3U][4U] << 4U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                    [2U][3U][3U] << 3U) 
                                   | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                       [2U][3U][2U] 
                                       << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                  [2U]
                                                  [3U]
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
                                                 [2U]
                                                 [3U]
                                                 [0U]))));
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [0U][0U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [0U][0U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [0U][0U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [0U][0U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][0U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[0U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [0U][1U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [0U][1U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [0U][1U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [0U][1U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][1U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[0U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [0U][2U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [0U][2U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [0U][2U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [0U][2U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][2U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[0U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [1U][0U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [1U][0U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [1U][0U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [1U][0U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][0U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[1U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [1U][1U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [1U][1U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [1U][1U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [1U][1U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][1U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[1U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [1U][2U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [1U][2U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [1U][2U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [1U][2U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][2U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[1U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [2U][0U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [2U][0U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [2U][0U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [2U][0U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][0U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[2U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [2U][1U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [2U][1U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [2U][1U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [2U][1U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][1U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[2U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [2U][2U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [2U][2U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [2U][2U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [2U][2U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][2U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[2U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [3U][0U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [3U][0U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [3U][0U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [3U][0U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][0U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[3U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [3U][1U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [3U][1U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [3U][1U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [3U][1U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][1U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[3U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0 
        = ((((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [3U][2U][0U] | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
              [3U][2U][1U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
             [3U][2U][2U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
            [3U][2U][3U]) | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][2U][4U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[3U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5f5079e9__0;
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr[0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr;
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr[1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr;
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr[2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [0U][0U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [0U][0U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [0U][0U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [0U][0U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][0U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[0U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [0U][1U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [0U][1U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [0U][1U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [0U][1U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][1U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[0U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [0U][2U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [0U][2U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [0U][2U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [0U][2U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][2U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[0U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [0U][3U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [0U][3U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [0U][3U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [0U][3U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][3U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[0U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [1U][0U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [1U][0U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [1U][0U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [1U][0U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][0U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[1U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [1U][1U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [1U][1U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [1U][1U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [1U][1U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][1U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[1U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [1U][2U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [1U][2U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [1U][2U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [1U][2U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][2U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[1U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [1U][3U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [1U][3U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [1U][3U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [1U][3U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][3U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[1U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [2U][0U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [2U][0U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [2U][0U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [2U][0U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][0U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[2U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [2U][1U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [2U][1U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [2U][1U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [2U][1U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][1U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[2U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [2U][2U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [2U][2U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [2U][2U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [2U][2U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][2U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[2U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0 
        = ((((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [2U][3U][0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
              [2U][3U][1U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
             [2U][3U][2U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
            [2U][3U][3U]) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][3U][4U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[2U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_h9be8e7ba__0;
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_rptr 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr;
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_rptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr))));
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_rptr 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr;
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_rptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr))));
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_rptr 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr;
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_rptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr))));
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_rptr 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr;
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_rptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr))));
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_rptr 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr;
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_rptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr))));
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_rptr 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr;
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_rptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr))));
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_rptr 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr;
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_rptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr))));
    }
    vlSelf->xbar__DOT__kob_rob_req[0U] = xbar__DOT____Vcellout__Inst_KOB__d_ch_0_rob_req;
    vlSelf->xbar__DOT__kob_rob_req[1U] = xbar__DOT____Vcellout__Inst_KOB__d_ch_1_rob_req;
    vlSelf->xbar__DOT__kob_rob_req[2U] = xbar__DOT____Vcellout__Inst_KOB__d_ch_2_rob_req;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank0_kickoff 
        = ((IData)(vlSelf->d_bank0_enable) & (IData)(vlSelf->d_bank0_valid));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank1_kickoff 
        = ((IData)(vlSelf->d_bank1_enable) & (IData)(vlSelf->d_bank1_valid));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank2_kickoff 
        = ((IData)(vlSelf->d_bank2_enable) & (IData)(vlSelf->d_bank2_valid));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank3_kickoff 
        = ((IData)(vlSelf->d_bank3_enable) & (IData)(vlSelf->d_bank3_valid));
    vlSelf->xbar_ISU_crdt_rtn_bank[3U] = ((6U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [3U]) | 
                                          vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_bank_crdt_rtn
                                          [3U]);
    vlSelf->xbar_ISU_crdt_rtn_bank[2U] = ((6U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [2U]) | 
                                          vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_bank_crdt_rtn
                                          [2U]);
    vlSelf->xbar_ISU_crdt_rtn_bank[1U] = ((6U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [1U]) | 
                                          vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_bank_crdt_rtn
                                          [1U]);
    vlSelf->xbar_ISU_crdt_rtn_bank[0U] = ((6U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [0U]) | 
                                          vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_bank_crdt_rtn
                                          [0U]);
    vlSelf->xbar_ISU_crdt_rtn_bank[3U] = ((5U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [3U]) | 
                                          (vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_bank_crdt_rtn
                                           [3U] << 1U));
    vlSelf->xbar_ISU_crdt_rtn_bank[2U] = ((5U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [2U]) | 
                                          (vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_bank_crdt_rtn
                                           [2U] << 1U));
    vlSelf->xbar_ISU_crdt_rtn_bank[1U] = ((5U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [1U]) | 
                                          (vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_bank_crdt_rtn
                                           [1U] << 1U));
    vlSelf->xbar_ISU_crdt_rtn_bank[0U] = ((5U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [0U]) | 
                                          (vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_bank_crdt_rtn
                                           [0U] << 1U));
    vlSelf->xbar_ISU_crdt_rtn_bank[3U] = ((3U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [3U]) | 
                                          (vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_bank_crdt_rtn
                                           [3U] << 2U));
    vlSelf->xbar_ISU_crdt_rtn_bank[2U] = ((3U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [2U]) | 
                                          (vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_bank_crdt_rtn
                                           [2U] << 2U));
    vlSelf->xbar_ISU_crdt_rtn_bank[1U] = ((3U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [1U]) | 
                                          (vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_bank_crdt_rtn
                                           [1U] << 2U));
    vlSelf->xbar_ISU_crdt_rtn_bank[0U] = ((3U & vlSelf->xbar_ISU_crdt_rtn_bank
                                           [0U]) | 
                                          (vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_bank_crdt_rtn
                                           [0U] << 2U));
    vlSelf->mpc_xbar_wbuf_req_wbuffer_id[3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id
        [3U];
    vlSelf->mpc_xbar_wbuf_req_wbuffer_id[2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id
        [2U];
    vlSelf->mpc_xbar_wbuf_req_wbuffer_id[1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id
        [1U];
    vlSelf->mpc_xbar_wbuf_req_wbuffer_id[0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id
        [0U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_wbuffer_id[3U] 
        = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id
        [3U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_wbuffer_id[2U] 
        = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id
        [2U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_wbuffer_id[1U] 
        = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id
        [1U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_wbuffer_id[0U] 
        = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id
        [0U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_ack[0U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_ack[1U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_ack[2U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_ack[3U] 
        = vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_ack[0U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_ack[1U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_ack[2U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_ack[3U] 
        = vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_ack[0U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_ack[1U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_ack[2U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_ack[3U] 
        = vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__u_kob_rob_ack;
    if (vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid
        [0U]) {
        vlSelf->mpc_channel0_rtn_data[0U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [0U][0U];
        vlSelf->mpc_channel0_rtn_data[1U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [0U][1U];
        vlSelf->mpc_channel0_rtn_data[2U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [0U][2U];
        vlSelf->mpc_channel0_rtn_data[3U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [0U][3U];
    } else if (vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid
               [1U]) {
        vlSelf->mpc_channel0_rtn_data[0U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [1U][0U];
        vlSelf->mpc_channel0_rtn_data[1U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [1U][1U];
        vlSelf->mpc_channel0_rtn_data[2U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [1U][2U];
        vlSelf->mpc_channel0_rtn_data[3U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [1U][3U];
    } else if (vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid
               [2U]) {
        vlSelf->mpc_channel0_rtn_data[0U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [2U][0U];
        vlSelf->mpc_channel0_rtn_data[1U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [2U][1U];
        vlSelf->mpc_channel0_rtn_data[2U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [2U][2U];
        vlSelf->mpc_channel0_rtn_data[3U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [2U][3U];
    } else {
        vlSelf->mpc_channel0_rtn_data[0U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [3U][0U];
        vlSelf->mpc_channel0_rtn_data[1U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [3U][1U];
        vlSelf->mpc_channel0_rtn_data[2U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [3U][2U];
        vlSelf->mpc_channel0_rtn_data[3U] = vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data
            [3U][3U];
    }
    vlSelf->mpc_channel0_rtn_valid = (((vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid
                                        [0U] | vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid
                                        [1U]) | vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid
                                       [2U]) | vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid
                                      [3U]);
    if (vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid
        [0U]) {
        vlSelf->mpc_channel1_rtn_data[0U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [0U][0U];
        vlSelf->mpc_channel1_rtn_data[1U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [0U][1U];
        vlSelf->mpc_channel1_rtn_data[2U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [0U][2U];
        vlSelf->mpc_channel1_rtn_data[3U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [0U][3U];
    } else if (vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid
               [1U]) {
        vlSelf->mpc_channel1_rtn_data[0U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [1U][0U];
        vlSelf->mpc_channel1_rtn_data[1U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [1U][1U];
        vlSelf->mpc_channel1_rtn_data[2U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [1U][2U];
        vlSelf->mpc_channel1_rtn_data[3U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [1U][3U];
    } else if (vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid
               [2U]) {
        vlSelf->mpc_channel1_rtn_data[0U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [2U][0U];
        vlSelf->mpc_channel1_rtn_data[1U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [2U][1U];
        vlSelf->mpc_channel1_rtn_data[2U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [2U][2U];
        vlSelf->mpc_channel1_rtn_data[3U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [2U][3U];
    } else {
        vlSelf->mpc_channel1_rtn_data[0U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [3U][0U];
        vlSelf->mpc_channel1_rtn_data[1U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [3U][1U];
        vlSelf->mpc_channel1_rtn_data[2U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [3U][2U];
        vlSelf->mpc_channel1_rtn_data[3U] = vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data
            [3U][3U];
    }
    vlSelf->mpc_channel1_rtn_valid = (((vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid
                                        [0U] | vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid
                                        [1U]) | vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid
                                       [2U]) | vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid
                                      [3U]);
    if (vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid
        [0U]) {
        vlSelf->mpc_channel2_rtn_data[0U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [0U][0U];
        vlSelf->mpc_channel2_rtn_data[1U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [0U][1U];
        vlSelf->mpc_channel2_rtn_data[2U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [0U][2U];
        vlSelf->mpc_channel2_rtn_data[3U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [0U][3U];
    } else if (vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid
               [1U]) {
        vlSelf->mpc_channel2_rtn_data[0U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [1U][0U];
        vlSelf->mpc_channel2_rtn_data[1U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [1U][1U];
        vlSelf->mpc_channel2_rtn_data[2U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [1U][2U];
        vlSelf->mpc_channel2_rtn_data[3U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [1U][3U];
    } else if (vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid
               [2U]) {
        vlSelf->mpc_channel2_rtn_data[0U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [2U][0U];
        vlSelf->mpc_channel2_rtn_data[1U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [2U][1U];
        vlSelf->mpc_channel2_rtn_data[2U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [2U][2U];
        vlSelf->mpc_channel2_rtn_data[3U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [2U][3U];
    } else {
        vlSelf->mpc_channel2_rtn_data[0U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [3U][0U];
        vlSelf->mpc_channel2_rtn_data[1U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [3U][1U];
        vlSelf->mpc_channel2_rtn_data[2U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [3U][2U];
        vlSelf->mpc_channel2_rtn_data[3U] = vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data
            [3U][3U];
    }
    vlSelf->mpc_channel2_rtn_valid = (((vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid
                                        [0U] | vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid
                                        [1U]) | vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid
                                       [2U]) | vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid
                                      [3U]);
    vlSelf->xbar__DOT__chn_KOB_req_enable[2U] = (1U 
                                                 & (~ 
                                                    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_full
                                                    [2U]));
    vlSelf->xbar__DOT__chn_KOB_req_enable[1U] = (1U 
                                                 & (~ 
                                                    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_full
                                                    [1U]));
    vlSelf->xbar__DOT__chn_KOB_req_enable[0U] = (1U 
                                                 & (~ 
                                                    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_full
                                                    [0U]));
    __Vtableidx17 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [0U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [0U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [0U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [0U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx17];
    __Vtableidx18 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [0U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [0U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [0U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [0U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx18];
    __Vtableidx19 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [0U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [0U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [0U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [0U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx19];
    __Vtableidx20 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [1U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [1U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [1U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [1U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx20];
    __Vtableidx21 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [1U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [1U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [1U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [1U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx21];
    __Vtableidx22 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [1U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [1U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [1U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [1U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx22];
    __Vtableidx23 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [2U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [2U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx23];
    __Vtableidx24 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [2U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [2U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx24];
    __Vtableidx25 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [2U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [2U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx25];
    __Vtableidx26 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [3U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [3U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [3U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [3U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx26];
    __Vtableidx27 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [3U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [3U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [3U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [3U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx27];
    __Vtableidx28 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                      [3U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                               [3U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [3U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr
                                                   [3U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx28];
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [0U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[0U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [0U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[1U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [0U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[2U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [1U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[0U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [1U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[1U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [1U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[2U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [2U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[0U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [2U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[1U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [2U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[2U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [3U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[0U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [3U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[1U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel
        [3U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[2U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hbf3258b1__0;
    __Vtableidx1 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                     [0U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                              [0U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [0U]))
                                                 ? 
                                                ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                 << 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [0U]))
                                                 : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx1];
    __Vtableidx2 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                     [0U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                              [0U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [0U]))
                                                 ? 
                                                ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                 << 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [0U]))
                                                 : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx2];
    __Vtableidx3 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                     [0U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                              [0U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [0U]))
                                                 ? 
                                                ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                 << 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [0U]))
                                                 : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx3];
    __Vtableidx4 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                     [0U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                              [0U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [0U]))
                                                 ? 
                                                ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                                 << 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [0U]))
                                                 : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx4];
    __Vtableidx5 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                     [1U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                              [1U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [1U]))
                                                 ? 
                                                ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                 << 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [1U]))
                                                 : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx5];
    __Vtableidx6 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                     [1U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                              [1U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [1U]))
                                                 ? 
                                                ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                 << 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [1U]))
                                                 : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx6];
    __Vtableidx7 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                     [1U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                              [1U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [1U]))
                                                 ? 
                                                ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                 << 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [1U]))
                                                 : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx7];
    __Vtableidx8 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                     [1U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                              [1U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [1U]))
                                                 ? 
                                                ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                                 << 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [1U]))
                                                 : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx8];
    __Vtableidx9 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                     [2U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                              >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                              [2U]) 
                                             | ((7U 
                                                 >= 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [2U]))
                                                 ? 
                                                ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                 << 
                                                 ((IData)(8U) 
                                                  - 
                                                  vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                  [2U]))
                                                 : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx9];
    __Vtableidx10 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                      [2U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                   [2U]))
                                                  : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx10];
    __Vtableidx11 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                      [2U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                   [2U]))
                                                  : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx11];
    __Vtableidx12 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                      [2U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr
                                                   [2U]))
                                                  : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h29ad1b15_0[__Vtableidx12];
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [0U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[0U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [0U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[1U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [0U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[2U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [0U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[3U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [1U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[0U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [1U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[1U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [1U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[2U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [1U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[3U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [2U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[0U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [2U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[1U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [2U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[2U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank
        [2U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[3U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hedc66f88__0;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_wptr 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_wptr;
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank0_kickoff) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_wptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_wptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_wptr))));
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_used_entry 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_used_entry;
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_used_entry 
            = (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_used_entry)));
    } else {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_used_entry 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_used_entry;
    }
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_used_entry 
            = (7U & ((IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_used_entry) 
                     - (IData)(1U)));
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_wptr 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_wptr;
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank1_kickoff) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_wptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_wptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_wptr))));
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_used_entry 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_used_entry;
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_used_entry 
            = (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_used_entry)));
    } else {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_used_entry 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_used_entry;
    }
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_used_entry 
            = (7U & ((IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_used_entry) 
                     - (IData)(1U)));
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_wptr 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_wptr;
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank2_kickoff) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_wptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_wptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_wptr))));
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_used_entry 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_used_entry;
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_used_entry 
            = (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_used_entry)));
    } else {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_used_entry 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_used_entry;
    }
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_used_entry 
            = (7U & ((IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_used_entry) 
                     - (IData)(1U)));
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_wptr 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_wptr;
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank3_kickoff) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_wptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_wptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_wptr))));
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_used_entry 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_used_entry;
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_used_entry 
            = (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_used_entry)));
    } else {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_used_entry 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_used_entry;
    }
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_used_entry 
            = (7U & ((IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_used_entry) 
                     - (IData)(1U)));
    }
    vlSelf->mpc_xbar_htu_wbuffer_id[3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_wbuffer_id
        [3U];
    vlSelf->mpc_xbar_htu_wbuffer_id[2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_wbuffer_id
        [2U];
    vlSelf->mpc_xbar_htu_wbuffer_id[1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_wbuffer_id
        [1U];
    vlSelf->mpc_xbar_htu_wbuffer_id[0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_wbuffer_id
        [0U];
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_req[0U] = 0U;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_req[1U] = 0U;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_req[2U] = 0U;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_req[3U] = 0U;
    if ((0U == vlSelf->xbar__DOT__kob_rob_bank_id[0U])) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_req[0U] 
            = ((IData)(vlSelf->mpc_channel0_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [0U]));
    }
    if ((1U == vlSelf->xbar__DOT__kob_rob_bank_id[0U])) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_req[1U] 
            = ((IData)(vlSelf->mpc_channel0_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [0U]));
    }
    if ((2U == vlSelf->xbar__DOT__kob_rob_bank_id[0U])) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_req[2U] 
            = ((IData)(vlSelf->mpc_channel0_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [0U]));
    }
    if ((3U == vlSelf->xbar__DOT__kob_rob_bank_id[0U])) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_req[3U] 
            = ((IData)(vlSelf->mpc_channel0_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [0U]));
    }
    xbar__DOT____Vcellout__ch0_SWB__u_kob_rob_ack = 0U;
    if ((0U == vlSelf->xbar__DOT__kob_rob_bank_id[0U])) {
        xbar__DOT____Vcellout__ch0_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel0_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_ack
                        [0U]));
    }
    if ((1U == vlSelf->xbar__DOT__kob_rob_bank_id[0U])) {
        xbar__DOT____Vcellout__ch0_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel0_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_ack
                        [1U]));
    }
    if ((2U == vlSelf->xbar__DOT__kob_rob_bank_id[0U])) {
        xbar__DOT____Vcellout__ch0_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel0_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_ack
                        [2U]));
    }
    if ((3U == vlSelf->xbar__DOT__kob_rob_bank_id[0U])) {
        xbar__DOT____Vcellout__ch0_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel0_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_ack
                        [3U]));
    }
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_req[0U] = 0U;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_req[1U] = 0U;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_req[2U] = 0U;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_req[3U] = 0U;
    if ((0U == vlSelf->xbar__DOT__kob_rob_bank_id[1U])) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_req[0U] 
            = ((IData)(vlSelf->mpc_channel1_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [1U]));
    }
    if ((1U == vlSelf->xbar__DOT__kob_rob_bank_id[1U])) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_req[1U] 
            = ((IData)(vlSelf->mpc_channel1_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [1U]));
    }
    if ((2U == vlSelf->xbar__DOT__kob_rob_bank_id[1U])) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_req[2U] 
            = ((IData)(vlSelf->mpc_channel1_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [1U]));
    }
    if ((3U == vlSelf->xbar__DOT__kob_rob_bank_id[1U])) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_req[3U] 
            = ((IData)(vlSelf->mpc_channel1_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [1U]));
    }
    xbar__DOT____Vcellout__ch1_SWB__u_kob_rob_ack = 0U;
    if ((0U == vlSelf->xbar__DOT__kob_rob_bank_id[1U])) {
        xbar__DOT____Vcellout__ch1_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel1_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_ack
                        [0U]));
    }
    if ((1U == vlSelf->xbar__DOT__kob_rob_bank_id[1U])) {
        xbar__DOT____Vcellout__ch1_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel1_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_ack
                        [1U]));
    }
    if ((2U == vlSelf->xbar__DOT__kob_rob_bank_id[1U])) {
        xbar__DOT____Vcellout__ch1_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel1_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_ack
                        [2U]));
    }
    if ((3U == vlSelf->xbar__DOT__kob_rob_bank_id[1U])) {
        xbar__DOT____Vcellout__ch1_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel1_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_ack
                        [3U]));
    }
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_req[0U] = 0U;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_req[1U] = 0U;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_req[2U] = 0U;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_req[3U] = 0U;
    if ((0U == vlSelf->xbar__DOT__kob_rob_bank_id[2U])) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_req[0U] 
            = ((IData)(vlSelf->mpc_channel2_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [2U]));
    }
    if ((1U == vlSelf->xbar__DOT__kob_rob_bank_id[2U])) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_req[1U] 
            = ((IData)(vlSelf->mpc_channel2_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [2U]));
    }
    if ((2U == vlSelf->xbar__DOT__kob_rob_bank_id[2U])) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_req[2U] 
            = ((IData)(vlSelf->mpc_channel2_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [2U]));
    }
    if ((3U == vlSelf->xbar__DOT__kob_rob_bank_id[2U])) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_req[3U] 
            = ((IData)(vlSelf->mpc_channel2_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__kob_rob_req
                        [2U]));
    }
    xbar__DOT____Vcellout__ch2_SWB__u_kob_rob_ack = 0U;
    if ((0U == vlSelf->xbar__DOT__kob_rob_bank_id[2U])) {
        xbar__DOT____Vcellout__ch2_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel2_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_ack
                        [0U]));
    }
    if ((1U == vlSelf->xbar__DOT__kob_rob_bank_id[2U])) {
        xbar__DOT____Vcellout__ch2_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel2_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_ack
                        [1U]));
    }
    if ((2U == vlSelf->xbar__DOT__kob_rob_bank_id[2U])) {
        xbar__DOT____Vcellout__ch2_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel2_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_ack
                        [2U]));
    }
    if ((3U == vlSelf->xbar__DOT__kob_rob_bank_id[2U])) {
        xbar__DOT____Vcellout__ch2_SWB__u_kob_rob_ack 
            = ((IData)(vlSelf->mpc_channel2_rtn_valid)
                ? 0U : (1U & vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_ack
                        [3U]));
    }
    vlSelf->xbar__DOT__chn_KOB_req_valid[0U] = ((~ 
                                                 vlSelf->xbar__DOT__chn_KOB_already_sent
                                                 [0U]) 
                                                & vlSelf->xbar__DOT__mpc_channel_valid
                                                [0U]);
    vlSelf->xbar__DOT__chn_xbar_req_valid[0U] = ((~ 
                                                  vlSelf->xbar__DOT__chn_xbar_already_sent
                                                  [0U]) 
                                                 & vlSelf->xbar__DOT__mpc_channel_valid
                                                 [0U]);
    vlSelf->xbar__DOT__chn_KOB_handshake[0U] = (vlSelf->xbar__DOT__chn_KOB_req_valid
                                                [0U] 
                                                & vlSelf->xbar__DOT__chn_KOB_req_enable
                                                [0U]);
    vlSelf->xbar__DOT__chn_xbar_handshake[0U] = (vlSelf->xbar__DOT__chn_xbar_req_valid
                                                 [0U] 
                                                 & vlSelf->xbar__DOT__chn_xbar_req_enable
                                                 [0U]);
    vlSelf->xbar__DOT__mpc_channel_enable[0U] = (1U 
                                                 & ((~ 
                                                     (vlSelf->xbar__DOT__chn_KOB_req_valid
                                                      [0U] 
                                                      & (~ vlSelf->xbar__DOT__chn_KOB_req_enable))) 
                                                    & (~ 
                                                       (vlSelf->xbar__DOT__chn_xbar_req_valid
                                                        [0U] 
                                                        & (~ vlSelf->xbar__DOT__chn_xbar_req_enable)))));
    vlSelf->xbar__DOT__chn_KOB_req_valid[1U] = ((~ 
                                                 vlSelf->xbar__DOT__chn_KOB_already_sent
                                                 [1U]) 
                                                & vlSelf->xbar__DOT__mpc_channel_valid
                                                [1U]);
    vlSelf->xbar__DOT__chn_xbar_req_valid[1U] = ((~ 
                                                  vlSelf->xbar__DOT__chn_xbar_already_sent
                                                  [1U]) 
                                                 & vlSelf->xbar__DOT__mpc_channel_valid
                                                 [1U]);
    vlSelf->xbar__DOT__chn_KOB_handshake[1U] = (vlSelf->xbar__DOT__chn_KOB_req_valid
                                                [1U] 
                                                & vlSelf->xbar__DOT__chn_KOB_req_enable
                                                [1U]);
    vlSelf->xbar__DOT__chn_xbar_handshake[1U] = (vlSelf->xbar__DOT__chn_xbar_req_valid
                                                 [1U] 
                                                 & vlSelf->xbar__DOT__chn_xbar_req_enable
                                                 [1U]);
    vlSelf->xbar__DOT__mpc_channel_enable[1U] = (1U 
                                                 & ((~ 
                                                     (vlSelf->xbar__DOT__chn_KOB_req_valid
                                                      [1U] 
                                                      & (~ vlSelf->xbar__DOT__chn_KOB_req_enable))) 
                                                    & (~ 
                                                       (vlSelf->xbar__DOT__chn_xbar_req_valid
                                                        [1U] 
                                                        & (~ vlSelf->xbar__DOT__chn_xbar_req_enable)))));
    vlSelf->xbar__DOT__chn_KOB_req_valid[2U] = ((~ 
                                                 vlSelf->xbar__DOT__chn_KOB_already_sent
                                                 [2U]) 
                                                & vlSelf->xbar__DOT__mpc_channel_valid
                                                [2U]);
    vlSelf->xbar__DOT__chn_xbar_req_valid[2U] = ((~ 
                                                  vlSelf->xbar__DOT__chn_xbar_already_sent
                                                  [2U]) 
                                                 & vlSelf->xbar__DOT__mpc_channel_valid
                                                 [2U]);
    vlSelf->xbar__DOT__chn_KOB_handshake[2U] = (vlSelf->xbar__DOT__chn_KOB_req_valid
                                                [2U] 
                                                & vlSelf->xbar__DOT__chn_KOB_req_enable
                                                [2U]);
    vlSelf->xbar__DOT__chn_xbar_handshake[2U] = (vlSelf->xbar__DOT__chn_xbar_req_valid
                                                 [2U] 
                                                 & vlSelf->xbar__DOT__chn_xbar_req_enable
                                                 [2U]);
    vlSelf->xbar__DOT__mpc_channel_enable[2U] = (1U 
                                                 & ((~ 
                                                     (vlSelf->xbar__DOT__chn_KOB_req_valid
                                                      [2U] 
                                                      & (~ vlSelf->xbar__DOT__chn_KOB_req_enable))) 
                                                    & (~ 
                                                       (vlSelf->xbar__DOT__chn_xbar_req_valid
                                                        [2U] 
                                                        & (~ vlSelf->xbar__DOT__chn_xbar_req_enable)))));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[0U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[0U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[0U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__0__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[1U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[1U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[1U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__1__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[2U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[2U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[2U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__2__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[3U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[3U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[3U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_entryid_b__BRA__3__KET____DOT__find_entryid_c__BRA__2__KET____DOT__inst_frr__find_round_robin;
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
            [0U][3U] << 3U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
                                [0U][2U] << 2U) | (
                                                   (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
                                                    [0U]
                                                    [1U] 
                                                    << 1U) 
                                                   | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
                                                   [0U]
                                                   [0U])));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
            [1U][3U] << 3U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
                                [1U][2U] << 2U) | (
                                                   (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
                                                    [1U]
                                                    [1U] 
                                                    << 1U) 
                                                   | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
                                                   [1U]
                                                   [0U])));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
            [2U][3U] << 3U) | ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
                                [2U][2U] << 2U) | (
                                                   (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
                                                    [2U]
                                                    [1U] 
                                                    << 1U) 
                                                   | vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send
                                                   [2U]
                                                   [0U])));
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[0U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[0U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[0U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[0U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__0__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[1U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[1U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[1U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[1U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__1__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[2U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[2U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[2U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[2U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_entryid_c__BRA__2__KET____DOT__find_entryid_b__BRA__3__KET____DOT__inst_frr__find_round_robin;
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__0__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
            [0U][2U] << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
                                [0U][1U] << 1U) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
                               [0U][0U]));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__1__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
            [1U][2U] << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
                                [1U][1U] << 1U) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
                               [1U][0U]));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__2__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
            [2U][2U] << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
                                [2U][1U] << 1U) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
                               [2U][0U]));
    xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__3__KET____DOT__inst_frr__valid_array 
        = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
            [3U][2U] << 2U) | ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
                                [3U][1U] << 1U) | vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send
                               [3U][0U]));
    vlSelf->xbar__DOT__kob_rob_ack[0U] = xbar__DOT____Vcellout__ch0_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__kob_rob_ack[1U] = xbar__DOT____Vcellout__ch1_SWB__u_kob_rob_ack;
    vlSelf->xbar__DOT__kob_rob_ack[2U] = xbar__DOT____Vcellout__ch2_SWB__u_kob_rob_ack;
    vlSelf->mpc_channel0_enable = vlSelf->xbar__DOT__mpc_channel_enable
        [0U];
    vlSelf->mpc_channel1_enable = vlSelf->xbar__DOT__mpc_channel_enable
        [1U];
    vlSelf->mpc_channel2_enable = vlSelf->xbar__DOT__mpc_channel_enable
        [2U];
    vlSelf->xbar__DOT__Inst_KOB__DOT__u_chn_set_valid[0U] 
        = ((vlSelf->xbar__DOT__chn_KOB_req_valid[0U] 
            & (~ vlSelf->xbar__DOT__Inst_KOB__DOT__kob_full
               [0U])) & (0U == (IData)(vlSelf->mpc_channel0_op)));
    vlSelf->xbar__DOT__Inst_KOB__DOT__u_chn_set_valid[1U] 
        = ((vlSelf->xbar__DOT__chn_KOB_req_valid[0U] 
            & (~ vlSelf->xbar__DOT__Inst_KOB__DOT__kob_full
               [1U])) & (0U == (IData)(vlSelf->mpc_channel1_op)));
    vlSelf->xbar__DOT__Inst_KOB__DOT__u_chn_set_valid[2U] 
        = ((vlSelf->xbar__DOT__chn_KOB_req_valid[0U] 
            & (~ vlSelf->xbar__DOT__Inst_KOB__DOT__kob_full
               [2U])) & (0U == (IData)(vlSelf->mpc_channel2_op)));
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch0_kickoff 
        = (((5U == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_used_entry))
             ? 0U : 1U) & vlSelf->xbar__DOT__chn_xbar_req_valid
           [0U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch1_kickoff 
        = (((5U == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_used_entry))
             ? 0U : 1U) & vlSelf->xbar__DOT__chn_xbar_req_valid
           [1U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch2_kickoff 
        = (((5U == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_used_entry))
             ? 0U : 1U) & vlSelf->xbar__DOT__chn_xbar_req_valid
           [2U]);
    __Vtableidx29 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                      [0U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__0__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                                               [0U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                                                   [0U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                                                   [0U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_bank_num__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h6e178afd_0[__Vtableidx29];
    __Vtableidx30 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                      [1U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__1__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                                               [1U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                                                   [1U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                                                   [1U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_bank_num__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h6e178afd_0[__Vtableidx30];
    __Vtableidx31 = ((vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                      [2U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__2__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbar_rtncore__DOT____Vcellinp__find_bank_num__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send
                                                   [2U]))
                                                  : 0U))));
    xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_bank_num__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h6e178afd_0[__Vtableidx31];
    __Vtableidx13 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                      [0U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__0__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                               [0U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [0U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__0__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [0U]))
                                                  : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__0__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h6e178afd_0[__Vtableidx13];
    __Vtableidx14 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                      [1U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__1__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                               [1U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [1U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__1__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [1U]))
                                                  : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__1__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h6e178afd_0[__Vtableidx14];
    __Vtableidx15 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                      [2U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__2__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                               [2U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [2U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__2__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [2U]))
                                                  : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__2__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h6e178afd_0[__Vtableidx15];
    __Vtableidx16 = ((vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                      [3U] << 8U) | (0xffU & (((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__3__KET____DOT__inst_frr__valid_array) 
                                               >> vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                               [3U]) 
                                              | ((7U 
                                                  >= 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [3U]))
                                                  ? 
                                                 ((IData)(xbar__DOT__u_xbarcore__DOT____Vcellinp__find_channel_num__BRA__3__KET____DOT__inst_frr__valid_array) 
                                                  << 
                                                  ((IData)(8U) 
                                                   - 
                                                   vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send
                                                   [3U]))
                                                  : 0U))));
    xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__3__KET____DOT__inst_frr__find_round_robin 
        = Vcommon__ConstPool__TABLE_h6e178afd_0[__Vtableidx16];
    vlSelf->xbar__DOT__Inst_KOB__DOT__d_chn_clr_valid[0U] 
        = (vlSelf->xbar__DOT__kob_rob_ack[0U] & (IData)(xbar__DOT____Vcellout__Inst_KOB__d_ch_0_rob_req));
    vlSelf->xbar__DOT__Inst_KOB__DOT__d_chn_clr_valid[1U] 
        = (vlSelf->xbar__DOT__kob_rob_ack[1U] & (IData)(xbar__DOT____Vcellout__Inst_KOB__d_ch_1_rob_req));
    vlSelf->xbar__DOT__Inst_KOB__DOT__d_chn_clr_valid[2U] 
        = (vlSelf->xbar__DOT__kob_rob_ack[2U] & (IData)(xbar__DOT____Vcellout__Inst_KOB__d_ch_2_rob_req));
    vlSelf->xbar__DOT__chn_u_handshake[0U] = ((IData)(vlSelf->mpc_channel0_enable) 
                                              & (IData)(vlSelf->mpc_channel0_valid));
    vlSelf->xbar__DOT__chn_u_handshake[1U] = ((IData)(vlSelf->mpc_channel1_enable) 
                                              & (IData)(vlSelf->mpc_channel1_valid));
    vlSelf->xbar__DOT__chn_u_handshake[2U] = ((IData)(vlSelf->mpc_channel2_enable) 
                                              & (IData)(vlSelf->mpc_channel2_valid));
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr_next[0U] 
        = vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
        [0U];
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr_next[1U] 
        = vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
        [1U];
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr_next[2U] 
        = vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
        [2U];
    if (vlSelf->xbar__DOT__Inst_KOB__DOT__u_chn_set_valid
        [0U]) {
        vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h3ecd1c16__0 
            = (0xfU & ((IData)(1U) + vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
                       [0U]));
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr_next[0U] 
            = vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h3ecd1c16__0;
    }
    if (vlSelf->xbar__DOT__Inst_KOB__DOT__u_chn_set_valid
        [1U]) {
        vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h3ecd1c16__0 
            = (0xfU & ((IData)(1U) + vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
                       [1U]));
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr_next[1U] 
            = vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h3ecd1c16__0;
    }
    if (vlSelf->xbar__DOT__Inst_KOB__DOT__u_chn_set_valid
        [2U]) {
        vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h3ecd1c16__0 
            = (0xfU & ((IData)(1U) + vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr
                       [2U]));
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr_next[2U] 
            = vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h3ecd1c16__0;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_wptr 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_wptr;
    if (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch0_kickoff) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_wptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_wptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_wptr))));
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_used_entry 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_used_entry;
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_used_entry 
            = (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_used_entry)));
    } else {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_used_entry 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_used_entry;
    }
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_used_entry 
            = (7U & ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_used_entry) 
                     - (IData)(1U)));
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_wptr 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_wptr;
    if (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch1_kickoff) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_wptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_wptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_wptr))));
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_used_entry 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_used_entry;
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_used_entry 
            = (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_used_entry)));
    } else {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_used_entry 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_used_entry;
    }
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_used_entry 
            = (7U & ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_used_entry) 
                     - (IData)(1U)));
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_wptr 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_wptr;
    if (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch2_kickoff) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_wptr 
            = ((4U == (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_wptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_wptr))));
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_used_entry 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_used_entry;
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_used_entry 
            = (7U & ((IData)(1U) + (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_used_entry)));
    } else {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_used_entry 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_used_entry;
    }
    if (((0U != (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_used_entry)) 
         & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_last_entry_already_pop))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_used_entry 
            = (7U & ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_used_entry) 
                     - (IData)(1U)));
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_num_found[0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_bank_num__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_num_found[1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_bank_num__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_num_found[2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vcellout__find_bank_num__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__channel_num_found[0U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__0__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__channel_num_found[1U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__1__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__channel_num_found[2U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__2__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__u_xbarcore__DOT__channel_num_found[3U] 
        = xbar__DOT__u_xbarcore__DOT____Vcellout__find_channel_num__BRA__3__KET____DOT__inst_frr__find_round_robin;
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr_next[0U] 
        = vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
        [0U];
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr_next[1U] 
        = vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
        [1U];
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr_next[2U] 
        = vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
        [2U];
    if (vlSelf->xbar__DOT__Inst_KOB__DOT__d_chn_clr_valid
        [0U]) {
        vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h1cec7f7b__0 
            = (0xfU & ((IData)(1U) + vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                       [0U]));
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr_next[0U] 
            = vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h1cec7f7b__0;
    }
    if (vlSelf->xbar__DOT__Inst_KOB__DOT__d_chn_clr_valid
        [1U]) {
        vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h1cec7f7b__0 
            = (0xfU & ((IData)(1U) + vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                       [1U]));
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr_next[1U] 
            = vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h1cec7f7b__0;
    }
    if (vlSelf->xbar__DOT__Inst_KOB__DOT__d_chn_clr_valid
        [2U]) {
        vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h1cec7f7b__0 
            = (0xfU & ((IData)(1U) + vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr
                       [2U]));
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr_next[2U] 
            = vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h1cec7f7b__0;
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_sel_current_channel_bank_num_want_send[0U] 
        = (3U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_num_found
           [0U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_sel_current_channel_bank_num_want_send[1U] 
        = (3U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_num_found
           [1U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_sel_current_channel_bank_num_want_send[2U] 
        = (3U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_num_found
           [2U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_sel_current_bank_channel_num_want_send[0U] 
        = (3U & vlSelf->xbar__DOT__u_xbarcore__DOT__channel_num_found
           [0U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_sel_current_bank_channel_num_want_send[1U] 
        = (3U & vlSelf->xbar__DOT__u_xbarcore__DOT__channel_num_found
           [1U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_sel_current_bank_channel_num_want_send[2U] 
        = (3U & vlSelf->xbar__DOT__u_xbarcore__DOT__channel_num_found
           [2U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_sel_current_bank_channel_num_want_send[3U] 
        = (3U & vlSelf->xbar__DOT__u_xbarcore__DOT__channel_num_found
           [3U]);
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_ha0433b49__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_sel_current_channel_bank_num_want_send
        [0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected[0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_ha0433b49__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_ha0433b49__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_sel_current_channel_bank_num_want_send
        [1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected[1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_ha0433b49__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_ha0433b49__0 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_sel_current_channel_bank_num_want_send
        [2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected[2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_ha0433b49__0;
    vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected[0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_sel_current_bank_channel_num_want_send
        [0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected[1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_sel_current_bank_channel_num_want_send
        [1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected[2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_sel_current_bank_channel_num_want_send
        [2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected[3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_sel_current_bank_channel_num_want_send
        [3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[0U] = 0U;
    if ((2U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [0U])) {
        if ((1U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
             [0U])) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__3 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
                [3U][0U];
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[0U] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__3;
        } else {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__2 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
                [2U][0U];
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[0U] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__2;
        }
    } else if ((1U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
                [0U])) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__1 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
            [1U][0U];
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[0U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__1;
    } else {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__0 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
            [0U][0U];
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[0U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__0;
    }
    if ((2U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [1U])) {
        if ((1U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
             [1U])) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__3 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
                [3U][1U];
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[1U] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__3;
        } else {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__2 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
                [2U][1U];
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[1U] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__2;
        }
    } else if ((1U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
                [1U])) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__1 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
            [1U][1U];
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[1U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__1;
    } else {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__0 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
            [0U][1U];
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[1U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__0;
    }
    if ((2U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [2U])) {
        if ((1U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
             [2U])) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__3 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
                [3U][2U];
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[2U] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__3;
        } else {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__2 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
                [2U][2U];
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[2U] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__2;
        }
    } else if ((1U & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
                [2U])) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__1 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
            [1U][2U];
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[2U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__1;
    } else {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__0 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel
            [0U][2U];
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[2U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__0;
    }
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_channel_id[0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
        [0U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_channel_id[1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
        [1U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_channel_id[2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
        [2U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_channel_id[3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
        [3U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_channel_id[0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
        [0U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_channel_id[1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
        [1U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_channel_id[2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
        [2U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_channel_id[3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
        [3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[0U] = 0U;
    if ((0U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
         [0U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[0U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [0U][0U];
    } else if ((1U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                [0U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[0U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [1U][0U];
    } else if ((2U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                [0U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[0U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [2U][0U];
    } else {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[3U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[2U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[1U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[0U] = 0U;
    }
    if ((0U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
         [1U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[1U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [0U][1U];
    } else if ((1U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                [1U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[1U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [1U][1U];
    } else if ((2U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                [1U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[1U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [2U][1U];
    } else {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[3U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[2U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[1U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[0U] = 0U;
    }
    if ((0U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
         [2U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[2U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [0U][2U];
    } else if ((1U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                [2U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[2U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [1U][2U];
    } else if ((2U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                [2U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[2U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [2U][2U];
    } else {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[3U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[2U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[1U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[0U] = 0U;
    }
    if ((0U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
         [3U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[3U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [0U][3U];
    } else if ((1U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                [3U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[3U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [1U][3U];
    } else if ((2U == vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                [3U])) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[3U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank
            [2U][3U];
    } else {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[3U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[2U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[1U] = 0U;
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[0U] = 0U;
    }
    if ((4U >= vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
         [0U])) {
        vlSelf->xbar__DOT__u_channel_0_rsp_data[0U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [0U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [0U]][0U];
        vlSelf->xbar__DOT__u_channel_0_rsp_data[1U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [0U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [0U]][1U];
        vlSelf->xbar__DOT__u_channel_0_rsp_data[2U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [0U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [0U]][2U];
        vlSelf->xbar__DOT__u_channel_0_rsp_data[3U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [0U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [0U]][3U];
        vlSelf->xbar__DOT__u_channel_0_rsp_rob_id = 
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_rob_id
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [0U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [0U]];
    } else {
        vlSelf->xbar__DOT__u_channel_0_rsp_data[0U] = 0U;
        vlSelf->xbar__DOT__u_channel_0_rsp_data[1U] = 0U;
        vlSelf->xbar__DOT__u_channel_0_rsp_data[2U] = 0U;
        vlSelf->xbar__DOT__u_channel_0_rsp_data[3U] = 0U;
        vlSelf->xbar__DOT__u_channel_0_rsp_rob_id = 0U;
    }
    if ((4U >= vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
         [1U])) {
        vlSelf->xbar__DOT__u_channel_1_rsp_data[0U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [1U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [1U]][0U];
        vlSelf->xbar__DOT__u_channel_1_rsp_data[1U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [1U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [1U]][1U];
        vlSelf->xbar__DOT__u_channel_1_rsp_data[2U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [1U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [1U]][2U];
        vlSelf->xbar__DOT__u_channel_1_rsp_data[3U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [1U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [1U]][3U];
        vlSelf->xbar__DOT__u_channel_1_rsp_rob_id = 
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_rob_id
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [1U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [1U]];
    } else {
        vlSelf->xbar__DOT__u_channel_1_rsp_data[0U] = 0U;
        vlSelf->xbar__DOT__u_channel_1_rsp_data[1U] = 0U;
        vlSelf->xbar__DOT__u_channel_1_rsp_data[2U] = 0U;
        vlSelf->xbar__DOT__u_channel_1_rsp_data[3U] = 0U;
        vlSelf->xbar__DOT__u_channel_1_rsp_rob_id = 0U;
    }
    if ((4U >= vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
         [2U])) {
        vlSelf->xbar__DOT__u_channel_2_rsp_data[0U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [2U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [2U]][0U];
        vlSelf->xbar__DOT__u_channel_2_rsp_data[1U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [2U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [2U]][1U];
        vlSelf->xbar__DOT__u_channel_2_rsp_data[2U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [2U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [2U]][2U];
        vlSelf->xbar__DOT__u_channel_2_rsp_data[3U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [2U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [2U]][3U];
        vlSelf->xbar__DOT__u_channel_2_rsp_rob_id = 
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_rob_id
            [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
            [2U]][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [2U]];
    } else {
        vlSelf->xbar__DOT__u_channel_2_rsp_data[0U] = 0U;
        vlSelf->xbar__DOT__u_channel_2_rsp_data[1U] = 0U;
        vlSelf->xbar__DOT__u_channel_2_rsp_data[2U] = 0U;
        vlSelf->xbar__DOT__u_channel_2_rsp_data[3U] = 0U;
        vlSelf->xbar__DOT__u_channel_2_rsp_rob_id = 0U;
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel[0U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [0U]) & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
           [0U]][0U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
           [0U]]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel[1U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [1U]) & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
           [1U]][1U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
           [1U]]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel[2U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
            [2U]) & vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
           [2U]][2U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
           [2U]]);
    vlSelf->mpc_xbar_wbuf_req_channel_id[3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_channel_id
        [3U];
    vlSelf->mpc_xbar_wbuf_req_channel_id[2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_channel_id
        [2U];
    vlSelf->mpc_xbar_wbuf_req_channel_id[1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_channel_id
        [1U];
    vlSelf->mpc_xbar_wbuf_req_channel_id[0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_channel_id
        [0U];
    vlSelf->mpc_xbar_htu_channel_id[3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_channel_id
        [3U];
    vlSelf->mpc_xbar_htu_channel_id[2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_channel_id
        [2U];
    vlSelf->mpc_xbar_htu_channel_id[1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_channel_id
        [1U];
    vlSelf->mpc_xbar_htu_channel_id[0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_channel_id
        [0U];
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_set[0U] 
        = (7U & (((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                   [0U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_addr
                  [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                     [0U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                    [0U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                  [0U]] : 0U) >> 1U));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_set[1U] 
        = (7U & (((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                   [1U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_addr
                  [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                     [1U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                    [1U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                  [1U]] : 0U) >> 1U));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_set[2U] 
        = (7U & (((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                   [2U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_addr
                  [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                     [2U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                    [2U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                  [2U]] : 0U) >> 1U));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_set[3U] 
        = (7U & (((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                   [3U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_addr
                  [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                     [3U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                    [3U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                  [3U]] : 0U) >> 1U));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_op_code[0U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [0U]) ? (3U & vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_op
                     [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                        [0U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                       [0U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                     [0U]]) : 0U);
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_op_code[1U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [1U]) ? (3U & vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_op
                     [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                        [1U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                       [1U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                     [1U]]) : 0U);
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_op_code[2U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [2U]) ? (3U & vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_op
                     [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                        [2U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                       [2U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                     [2U]]) : 0U);
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_op_code[3U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [3U]) ? (3U & vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_op
                     [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                        [3U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                       [3U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
                     [3U]]) : 0U);
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_addr[0U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [0U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_addr
           [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [0U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
             [0U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
           [0U]] : 0U);
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_addr[1U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [1U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_addr
           [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [1U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
             [1U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
           [1U]] : 0U);
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_addr[2U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [2U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_addr
           [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [2U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
             [2U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
           [2U]] : 0U);
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_addr[3U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [3U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_addr
           [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [3U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
             [3U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
           [3U]] : 0U);
    if ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
         [0U])) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[0U][0U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [0U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [0U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [0U]][0U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[0U][1U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [0U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [0U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [0U]][1U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[0U][2U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [0U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [0U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [0U]][2U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[0U][3U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [0U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [0U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [0U]][3U];
    } else {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[0U][0U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[0U][1U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[0U][2U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[0U][3U] = 0U;
    }
    if ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
         [1U])) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[1U][0U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [1U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [1U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [1U]][0U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[1U][1U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [1U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [1U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [1U]][1U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[1U][2U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [1U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [1U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [1U]][2U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[1U][3U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [1U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [1U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [1U]][3U];
    } else {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[1U][0U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[1U][1U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[1U][2U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[1U][3U] = 0U;
    }
    if ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
         [2U])) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[2U][0U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [2U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [2U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [2U]][0U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[2U][1U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [2U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [2U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [2U]][1U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[2U][2U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [2U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [2U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [2U]][2U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[2U][3U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [2U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [2U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [2U]][3U];
    } else {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[2U][0U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[2U][1U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[2U][2U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[2U][3U] = 0U;
    }
    if ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
         [3U])) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[3U][0U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [3U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [3U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [3U]][0U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[3U][1U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [3U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [3U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [3U]][1U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[3U][2U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [3U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [3U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [3U]][2U];
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[3U][3U] 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data
            [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
               [3U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [3U] : 0U)][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [3U]][3U];
    } else {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[3U][0U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[3U][1U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[3U][2U] = 0U;
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[3U][3U] = 0U;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__can_send_to_bank[0U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [0U]) & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [0U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
             [0U] : 0U)][0U][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
           [0U]]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__can_send_to_bank[1U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [1U]) & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [1U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
             [1U] : 0U)][1U][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
           [1U]]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__can_send_to_bank[2U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [2U]) & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [2U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
             [2U] : 0U)][2U][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
           [2U]]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__can_send_to_bank[3U] 
        = ((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
            [3U]) & vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [((2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
              [3U]) ? vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
             [3U] : 0U)][3U][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
           [3U]]);
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_rc_valid[0U] = 0U;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_rc_valid[1U] = 0U;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_rc_valid[2U] = 0U;
    vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_rc_valid[3U] = 0U;
    if ((0U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [0U])) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_rc_valid[0U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [0U];
    }
    if ((1U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [0U])) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_rc_valid[1U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [0U];
    }
    if ((2U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [0U])) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_rc_valid[2U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [0U];
    }
    if ((3U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [0U])) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_rc_valid[3U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [0U];
    }
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_rc_valid[0U] = 0U;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_rc_valid[1U] = 0U;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_rc_valid[2U] = 0U;
    vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_rc_valid[3U] = 0U;
    if ((0U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [1U])) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_rc_valid[0U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [1U];
    }
    if ((1U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [1U])) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_rc_valid[1U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [1U];
    }
    if ((2U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [1U])) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_rc_valid[2U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [1U];
    }
    if ((3U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [1U])) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_rc_valid[3U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [1U];
    }
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_rc_valid[0U] = 0U;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_rc_valid[1U] = 0U;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_rc_valid[2U] = 0U;
    vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_rc_valid[3U] = 0U;
    if ((0U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [2U])) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_rc_valid[0U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [2U];
    }
    if ((1U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [2U])) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_rc_valid[1U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [2U];
    }
    if ((2U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [2U])) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_rc_valid[2U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [2U];
    }
    if ((3U == vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected
         [2U])) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_rc_valid[3U] 
            = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
            [2U];
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__channel_rtn_kickoff[0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
        [0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__channel_rtn_kickoff[1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
        [1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__channel_rtn_kickoff[2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel
        [2U];
    vlSelf->mpc_xbar_htu_set[3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_set
        [3U];
    vlSelf->mpc_xbar_htu_set[2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_set
        [2U];
    vlSelf->mpc_xbar_htu_set[1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_set
        [1U];
    vlSelf->mpc_xbar_htu_set[0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_set
        [0U];
    vlSelf->mpc_xbar_htu_op_code[3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_op_code
        [3U];
    vlSelf->mpc_xbar_htu_op_code[2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_op_code
        [2U];
    vlSelf->mpc_xbar_htu_op_code[1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_op_code
        [1U];
    vlSelf->mpc_xbar_htu_op_code[0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_op_code
        [0U];
    vlSelf->mpc_xbar_htu_addr[3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_addr
        [3U];
    vlSelf->mpc_xbar_htu_addr[2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_addr
        [2U];
    vlSelf->mpc_xbar_htu_addr[1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_addr
        [1U];
    vlSelf->mpc_xbar_htu_addr[0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_addr
        [0U];
    vlSelf->mpc_xbar_wbuf_req_data[3U][0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [3U][0U];
    vlSelf->mpc_xbar_wbuf_req_data[3U][1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [3U][1U];
    vlSelf->mpc_xbar_wbuf_req_data[3U][2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [3U][2U];
    vlSelf->mpc_xbar_wbuf_req_data[3U][3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [3U][3U];
    vlSelf->mpc_xbar_wbuf_req_data[2U][0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [2U][0U];
    vlSelf->mpc_xbar_wbuf_req_data[2U][1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [2U][1U];
    vlSelf->mpc_xbar_wbuf_req_data[2U][2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [2U][2U];
    vlSelf->mpc_xbar_wbuf_req_data[2U][3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [2U][3U];
    vlSelf->mpc_xbar_wbuf_req_data[1U][0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [1U][0U];
    vlSelf->mpc_xbar_wbuf_req_data[1U][1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [1U][1U];
    vlSelf->mpc_xbar_wbuf_req_data[1U][2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [1U][2U];
    vlSelf->mpc_xbar_wbuf_req_data[1U][3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [1U][3U];
    vlSelf->mpc_xbar_wbuf_req_data[0U][0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [0U][0U];
    vlSelf->mpc_xbar_wbuf_req_data[0U][1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [0U][1U];
    vlSelf->mpc_xbar_wbuf_req_data[0U][2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [0U][2U];
    vlSelf->mpc_xbar_wbuf_req_data[0U][3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data
        [0U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid[0U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__can_send_to_bank
           [0U] & vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_valid
           [0U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid[1U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__can_send_to_bank
           [1U] & vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_valid
           [1U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid[2U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__can_send_to_bank
           [2U] & vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_valid
           [2U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid[3U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__can_send_to_bank
           [3U] & vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_valid
           [3U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][2U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][2U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][2U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][2U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][2U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][1U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][1U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][1U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][1U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][1U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][0U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][0U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][0U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][0U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[3U][0U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][2U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][2U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][2U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][2U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][2U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][1U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][1U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][1U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][1U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][1U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][0U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][0U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][0U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][0U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[2U][0U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][2U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][2U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][2U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][2U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][2U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][1U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][1U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][1U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][1U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][1U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][0U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][0U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][0U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][0U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[1U][0U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][2U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][2U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][2U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][2U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][2U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][1U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][1U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][1U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][1U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][1U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][0U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][0U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][0U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][0U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[0U][0U][0U] = 0U;
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__channel_rtn_kickoff
        [0U]) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h7c9e1a2b__0 = 1U;
        if ((4U >= vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
             [0U])) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected[0U]][0U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[0U]] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h7c9e1a2b__0;
        }
    }
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__channel_rtn_kickoff
        [1U]) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h7c9e1a2b__0 = 1U;
        if ((4U >= vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
             [1U])) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected[1U]][1U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[1U]] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h7c9e1a2b__0;
        }
    }
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__channel_rtn_kickoff
        [2U]) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h7c9e1a2b__0 = 1U;
        if ((4U >= vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected
             [2U])) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected[2U]][2U][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[2U]] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h7c9e1a2b__0;
        }
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff[0U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
           [0U] & vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [0U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff[1U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
           [1U] & vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [1U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff[2U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
           [2U] & vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [2U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff[3U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
           [3U] & vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [3U]);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][2U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][2U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][2U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][2U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][2U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][2U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][2U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][2U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][2U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][2U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][1U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][1U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][1U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][1U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][1U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][1U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][1U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][1U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][1U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][1U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][0U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][0U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][0U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][0U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][0U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][0U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][0U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][0U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][0U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [3U][0U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][2U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][2U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][2U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][2U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][2U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][2U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][2U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][2U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][2U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][2U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][1U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][1U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][1U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][1U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][1U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][1U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][1U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][1U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][1U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][1U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][0U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][0U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][0U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][0U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][0U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][0U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][0U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][0U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][0U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [2U][0U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][2U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][2U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][2U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][2U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][2U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][2U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][2U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][2U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][2U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][2U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][1U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][1U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][1U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][1U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][1U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][1U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][1U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][1U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][1U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][1U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][0U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][0U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][0U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][0U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][0U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][0U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][0U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][0U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][0U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [1U][0U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][2U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][2U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][2U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][2U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][2U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][2U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][2U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][2U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][2U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][2U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][1U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][1U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][1U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][1U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][1U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][1U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][1U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][1U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][1U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][1U][0U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][0U][4U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][0U][4U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][0U][3U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][0U][3U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][0U][2U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][0U][2U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][0U][1U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][0U][1U];
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][0U][0U] 
        = vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
        [0U][0U][0U];
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][0U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][0U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][0U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][0U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][0U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][0U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][0U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][0U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][0U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][0U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][0U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][0U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][0U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][0U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][0U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][1U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][1U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][1U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][1U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][1U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][1U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][1U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][1U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][1U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][1U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][1U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][1U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][1U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][1U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][1U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][2U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][2U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][2U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][2U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][2U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][2U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][2U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][2U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][2U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][2U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][2U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][2U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [0U][2U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [0U][2U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][2U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][0U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][0U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][0U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][0U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][0U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][0U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][0U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][0U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][0U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][0U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][0U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][0U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][0U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][0U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][0U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][1U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][1U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][1U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][1U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][1U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][1U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][1U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][1U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][1U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][1U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][1U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][1U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][1U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][1U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][1U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][2U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][2U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][2U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][2U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][2U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][2U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][2U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][2U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][2U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][2U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][2U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][2U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [1U][2U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [1U][2U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][2U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][0U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][0U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][0U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][0U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][0U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][0U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][0U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][0U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][0U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][0U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][0U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][0U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][0U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][0U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][0U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][1U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][1U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][1U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][1U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][1U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][1U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][1U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][1U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][1U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][1U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][1U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][1U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][1U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][1U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][1U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][2U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][2U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][2U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][2U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][2U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][2U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][2U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][2U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][2U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][2U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][2U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][2U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [2U][2U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [2U][2U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][2U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][0U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][0U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][0U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][0U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][0U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][0U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][0U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][0U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][0U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][0U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][0U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][0U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][0U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][0U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][0U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][1U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][1U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][1U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][1U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][1U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][1U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][1U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][1U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][1U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][1U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][1U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][1U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][1U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][1U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][1U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][2U][0U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][2U][0U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][2U][0U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][2U][1U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][2U][1U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][2U][1U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][2U][2U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][2U][2U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][2U][2U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][2U][3U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][2U][3U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][2U][3U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][2U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][2U][4U]));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][2U][4U] 
        = xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0 
        = (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid
           [3U][0U][4U] & (~ vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate
                           [3U][0U][4U]));
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank0_kickoff) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h33d84f74__0 = 1U;
        if (((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_wptr)) 
             & (2U >= (IData)(vlSelf->d_bank0_chl_id)))) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[0U][vlSelf->d_bank0_chl_id][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_wptr] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h33d84f74__0;
        }
    }
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank1_kickoff) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hcca64d43__0 = 1U;
        if (((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_wptr)) 
             & (2U >= (IData)(vlSelf->d_bank1_chl_id)))) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[1U][vlSelf->d_bank1_chl_id][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_wptr] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hcca64d43__0;
        }
    }
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank2_kickoff) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h429095b7__0 = 1U;
        if (((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_wptr)) 
             & (2U >= (IData)(vlSelf->d_bank2_chl_id)))) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[2U][vlSelf->d_bank2_chl_id][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_wptr] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h429095b7__0;
        }
    }
    if (vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank3_kickoff) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h33da896b__0 = 1U;
        if (((4U >= (IData)(vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_wptr)) 
             & (2U >= (IData)(vlSelf->d_bank3_chl_id)))) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[3U][vlSelf->d_bank3_chl_id][vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_wptr] 
                = vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h33da896b__0;
        }
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__switch_data 
        = (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__tag_valid) 
            & vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [0U]) | ((~ (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__tag_valid)) 
                     & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid)));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__switch_data 
        = (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__tag_valid) 
            & vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [1U]) | ((~ (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__tag_valid)) 
                     & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid)));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__switch_data 
        = (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__tag_valid) 
            & vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [2U]) | ((~ (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__tag_valid)) 
                     & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid)));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__switch_data 
        = (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__tag_valid) 
            & vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [3U]) | ((~ (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__tag_valid)) 
                     & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid)));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__tag;
    if (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid) 
         & (~ ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__tag_valid) 
               & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
                  [0U]))))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__tag;
    if (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid) 
         & (~ ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__tag_valid) 
               & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
                  [1U]))))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__tag;
    if (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid) 
         & (~ ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__tag_valid) 
               & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
                  [2U]))))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t 
        = vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__tag;
    if (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid) 
         & (~ ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__tag_valid) 
               & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
                  [3U]))))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t 
            = vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag;
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[0U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [0U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[1U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[1U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [0U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[2U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[2U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [0U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[3U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[3U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [0U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[4U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[4U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [0U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[5U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[5U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [0U][5U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[6U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[6U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [0U][6U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[7U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[7U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [0U][7U]));
    if (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid) 
         & (~ ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__tag_valid) 
               & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
                  [0U]))))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag) 
                                                                                >> 5U)] 
            = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[
               ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag) 
                >> 5U)] | ((IData)(1U) << (0x1fU & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag))));
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[0U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [1U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[1U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[1U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [1U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[2U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[2U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [1U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[3U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[3U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [1U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[4U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[4U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [1U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[5U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[5U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [1U][5U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[6U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[6U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [1U][6U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[7U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[7U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [1U][7U]));
    if (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid) 
         & (~ ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__tag_valid) 
               & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
                  [1U]))))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag) 
                                                                                >> 5U)] 
            = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[
               ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag) 
                >> 5U)] | ((IData)(1U) << (0x1fU & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag))));
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[0U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [2U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[1U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[1U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [2U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[2U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[2U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [2U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[3U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[3U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [2U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[4U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[4U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [2U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[5U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[5U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [2U][5U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[6U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[6U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [2U][6U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[7U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[7U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [2U][7U]));
    if (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid) 
         & (~ ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__tag_valid) 
               & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
                  [2U]))))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag) 
                                                                                >> 5U)] 
            = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[
               ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag) 
                >> 5U)] | ((IData)(1U) << (0x1fU & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag))));
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[0U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[0U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [3U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[1U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[1U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [3U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[2U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[2U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [3U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[3U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[3U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [3U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[4U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[4U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [3U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[5U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[5U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [3U][5U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[6U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[6U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [3U][6U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[7U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight[7U] 
           & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id
              [3U][7U]));
    if (((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid) 
         & (~ ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__tag_valid) 
               & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
                  [3U]))))) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag) 
                                                                                >> 5U)] 
            = (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight[
               ((IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag) 
                >> 5U)] | ((IData)(1U) << (0x1fU & (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag))));
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][3U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][3U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][3U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][3U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][3U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][2U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][2U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][2U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][2U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][2U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][1U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][1U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][1U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][1U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][1U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][0U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][0U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][0U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][0U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[2U][0U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][3U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][3U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][3U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][3U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][3U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][2U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][2U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][2U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][2U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][2U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][1U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][1U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][1U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][1U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][1U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][0U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][0U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][0U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][0U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[1U][0U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][3U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][3U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][3U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][3U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][3U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][2U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][2U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][2U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][2U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][2U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][1U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][1U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][1U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][1U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][1U][0U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][0U][4U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][0U][3U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][0U][2U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][0U][1U] = 0U;
    vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[0U][0U][0U] = 0U;
    if (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
        [0U]) {
        vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h19bb34d9__0 = 1U;
        if (((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
              [0U]) & (2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                       [0U]))) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected[0U]][0U][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[0U]] 
                = vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h19bb34d9__0;
        }
    }
    if (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
        [1U]) {
        vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h19bb34d9__0 = 1U;
        if (((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
              [1U]) & (2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                       [1U]))) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected[1U]][1U][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[1U]] 
                = vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h19bb34d9__0;
        }
    }
    if (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
        [2U]) {
        vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h19bb34d9__0 = 1U;
        if (((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
              [2U]) & (2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                       [2U]))) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected[2U]][2U][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[2U]] 
                = vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h19bb34d9__0;
        }
    }
    if (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
        [3U]) {
        vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h19bb34d9__0 = 1U;
        if (((4U >= vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected
              [3U]) & (2U >= vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected
                       [3U]))) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected[3U]][3U][vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[3U]] 
                = vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h19bb34d9__0;
        }
    }
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid[0U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_already_kickoff
                   [0U]));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid[1U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_already_kickoff
                   [1U]));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid[2U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_already_kickoff
                   [2U]));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid[3U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_already_kickoff
                   [3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_kickoff[0U] 
        = (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
           [0U] & vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable
           [0U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_kickoff[1U] 
        = (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
           [1U] & vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable
           [1U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_kickoff[2U] 
        = (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
           [2U] & vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable
           [2U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_kickoff[3U] 
        = (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
           [3U] & vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable
           [3U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_wbuf_already_kickoff[0U] 
        = ((~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [0U]) & (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_already_kickoff
                     [0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_kickoff
                     [0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_wbuf_already_kickoff[1U] 
        = ((~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [1U]) & (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_already_kickoff
                     [1U] | vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_kickoff
                     [1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_wbuf_already_kickoff[2U] 
        = ((~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [2U]) & (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_already_kickoff
                     [2U] | vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_kickoff
                     [2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_wbuf_already_kickoff[3U] 
        = ((~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [3U]) & (vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_already_kickoff
                     [3U] | vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_kickoff
                     [3U]));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid[0U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__htu_already_kickoff
                   [0U]));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid[1U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__htu_already_kickoff
                   [1U]));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid[2U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__htu_already_kickoff
                   [2U]));
    vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid[3U] 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid
           [3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__htu_already_kickoff
                   [3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__htu_kickoff[0U] 
        = (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
           [0U] & vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable
           [0U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__htu_kickoff[1U] 
        = (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
           [1U] & vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable
           [1U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__htu_kickoff[2U] 
        = (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
           [2U] & vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable
           [2U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__htu_kickoff[3U] 
        = (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
           [3U] & vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable
           [3U]);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_htu_already_kickoff[0U] 
        = ((~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [0U]) & (vlSelf->xbar__DOT__u_xbarcore__DOT__htu_already_kickoff
                     [0U] | vlSelf->xbar__DOT__u_xbarcore__DOT__htu_kickoff
                     [0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_htu_already_kickoff[1U] 
        = ((~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [1U]) & (vlSelf->xbar__DOT__u_xbarcore__DOT__htu_already_kickoff
                     [1U] | vlSelf->xbar__DOT__u_xbarcore__DOT__htu_kickoff
                     [1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_htu_already_kickoff[2U] 
        = ((~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [2U]) & (vlSelf->xbar__DOT__u_xbarcore__DOT__htu_already_kickoff
                     [2U] | vlSelf->xbar__DOT__u_xbarcore__DOT__htu_kickoff
                     [2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_htu_already_kickoff[3U] 
        = ((~ vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff
            [3U]) & (vlSelf->xbar__DOT__u_xbarcore__DOT__htu_already_kickoff
                     [3U] | vlSelf->xbar__DOT__u_xbarcore__DOT__htu_kickoff
                     [3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][3U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][3U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][3U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][3U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][3U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][3U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][3U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][3U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][3U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][3U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][2U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][2U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][2U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][2U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][2U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][2U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][2U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][2U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][2U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][2U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][1U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][1U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][1U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][1U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][1U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][1U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][1U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][1U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][1U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][1U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][0U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][0U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][0U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][0U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][0U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][0U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][0U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][0U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][0U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [2U][0U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][3U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][3U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][3U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][3U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][3U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][3U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][3U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][3U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][3U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][3U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][2U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][2U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][2U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][2U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][2U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][2U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][2U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][2U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][2U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][2U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][1U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][1U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][1U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][1U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][1U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][1U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][1U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][1U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][1U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][1U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][0U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][0U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][0U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][0U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][0U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][0U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][0U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][0U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][0U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [1U][0U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][3U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][3U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][3U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][3U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][3U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][3U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][3U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][3U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][3U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][3U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][2U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][2U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][2U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][2U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][2U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][2U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][2U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][2U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][2U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][2U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][1U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][1U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][1U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][1U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][1U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][1U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][1U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][1U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][1U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][1U][0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][0U][4U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][0U][4U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][0U][3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][0U][3U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][0U][2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][0U][2U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][0U][1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][0U][1U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][0U][0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
        [0U][0U][0U];
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][0U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][0U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][0U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][0U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][0U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][0U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][0U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][0U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][0U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][0U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][0U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][0U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][0U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][0U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][0U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][1U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][1U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][1U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][1U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][1U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][1U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][1U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][1U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][1U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][1U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][1U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][1U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][1U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][1U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][1U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][2U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][2U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][2U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][2U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][2U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][2U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][2U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][2U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][2U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][2U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][2U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][2U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][2U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][2U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][2U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][3U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][3U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][3U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][3U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][3U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][3U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][3U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][3U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][3U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][3U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][3U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][3U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [0U][3U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [0U][3U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][3U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][0U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][0U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][0U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][0U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][0U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][0U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][0U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][0U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][0U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][0U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][0U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][0U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][0U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][0U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][0U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][1U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][1U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][1U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][1U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][1U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][1U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][1U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][1U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][1U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][1U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][1U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][1U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][1U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][1U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][1U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][2U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][2U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][2U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][2U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][2U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][2U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][2U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][2U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][2U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][2U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][2U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][2U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][2U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][2U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][2U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][3U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][3U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][3U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][3U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][3U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][3U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][3U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][3U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][3U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][3U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][3U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][3U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [1U][3U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [1U][3U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][3U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][0U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][0U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][0U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][0U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][0U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][0U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][0U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][0U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][0U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][0U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][0U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][0U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][0U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][0U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][0U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][1U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][1U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][1U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][1U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][1U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][1U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][1U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][1U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][1U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][1U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][1U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][1U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][1U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][1U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][1U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][2U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][2U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][2U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][2U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][2U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][2U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][2U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][2U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][2U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][2U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][2U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][2U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][2U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][2U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][2U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][3U][0U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][3U][0U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][3U][0U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][3U][1U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][3U][1U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][3U][1U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][3U][2U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][3U][2U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][3U][2U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][3U][3U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][3U][3U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][3U][3U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0 
        = (vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid
           [2U][3U][4U] & (~ vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate
                           [2U][3U][4U]));
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][3U][4U] 
        = xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    if (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch0_kickoff) {
        vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h744a2bd8__0 = 1U;
        if ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_wptr))) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[0U][(3U 
                                                                       & (vlSelf->mpc_channel0_address 
                                                                          >> 4U))][vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_wptr] 
                = vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h744a2bd8__0;
        }
    }
    if (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch1_kickoff) {
        vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h7e4ea3c9__0 = 1U;
        if ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_wptr))) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[1U][(3U 
                                                                       & (vlSelf->mpc_channel1_address 
                                                                          >> 4U))][vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_wptr] 
                = vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h7e4ea3c9__0;
        }
    }
    if (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch2_kickoff) {
        vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h928c798f__0 = 1U;
        if ((4U >= (IData)(vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_wptr))) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[2U][(3U 
                                                                       & (vlSelf->mpc_channel2_address 
                                                                          >> 4U))][vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_wptr] 
                = vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h928c798f__0;
        }
    }
    vlSelf->mpc_xbar_wbuf_req_valid[3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
        [3U];
    vlSelf->mpc_xbar_wbuf_req_valid[2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
        [2U];
    vlSelf->mpc_xbar_wbuf_req_valid[1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
        [1U];
    vlSelf->mpc_xbar_wbuf_req_valid[0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
        [0U];
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable[0U] 
        = (1U & ((~ (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
                     [0U] & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable
                             [0U]))) & (~ (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
                                           [0U] & (~ 
                                                   vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable
                                                   [0U])))));
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable[1U] 
        = (1U & ((~ (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
                     [1U] & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable
                             [1U]))) & (~ (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
                                           [1U] & (~ 
                                                   vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable
                                                   [1U])))));
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable[2U] 
        = (1U & ((~ (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
                     [2U] & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable
                             [2U]))) & (~ (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
                                           [2U] & (~ 
                                                   vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable
                                                   [2U])))));
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable[3U] 
        = (1U & ((~ (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
                     [3U] & (~ vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable
                             [3U]))) & (~ (vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid
                                           [3U] & (~ 
                                                   vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable
                                                   [3U])))));
    vlSelf->mpc_xbar_htu_valid[3U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
        [3U];
    vlSelf->mpc_xbar_htu_valid[2U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
        [2U];
    vlSelf->mpc_xbar_htu_valid[1U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
        [1U];
    vlSelf->mpc_xbar_htu_valid[0U] = vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid
        [0U];
}
