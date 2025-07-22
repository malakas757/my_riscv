// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___combo__TOP__5(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__5\n"); );
    // Init
    CData/*0:0*/ xbar__DOT__u_xbarcore__DOT____Vlvbound_hc51474bc__0;
    CData/*0:0*/ xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2a046bbc__0;
    // Body
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_req_bank_id[0U] 
        = (3U & (vlSelf->mpc_channel0_address >> 4U));
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_req_bank_id[1U] 
        = (3U & (vlSelf->mpc_channel0_address >> 4U));
    vlSelf->xbar__DOT__Inst_KOB__DOT__kob_req_bank_id[2U] 
        = (3U & (vlSelf->mpc_channel0_address >> 4U));
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel2_rtn_enable));
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel2_rtn_enable));
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel2_rtn_enable));
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel2_rtn_enable));
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel1_rtn_enable));
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel1_rtn_enable));
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel1_rtn_enable));
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel1_rtn_enable));
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel0_rtn_enable));
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel0_rtn_enable));
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel0_rtn_enable));
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_ch_hs 
        = ((IData)(vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg) 
           & (IData)(vlSelf->mpc_channel0_rtn_enable));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank2_kickoff 
        = ((IData)(vlSelf->d_bank2_enable) & (IData)(vlSelf->d_bank2_valid));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank3_kickoff 
        = ((IData)(vlSelf->d_bank3_enable) & (IData)(vlSelf->d_bank3_valid));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank0_kickoff 
        = ((IData)(vlSelf->d_bank0_enable) & (IData)(vlSelf->d_bank0_valid));
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank1_kickoff 
        = ((IData)(vlSelf->d_bank1_enable) & (IData)(vlSelf->d_bank1_valid));
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

void Vcommon___024root___combo__TOP__2(Vcommon___024root* vlSelf);
void Vcommon___024root___sequent__TOP__3(Vcommon___024root* vlSelf);
void Vcommon___024root___sequent__TOP__4(Vcommon___024root* vlSelf);

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    Vcommon___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommon___024root___sequent__TOP__3(vlSelf);
        Vcommon___024root___sequent__TOP__4(vlSelf);
    }
    Vcommon___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcommon___024root___change_request_1(Vcommon___024root* vlSelf);

VL_INLINE_OPT QData Vcommon___024root___change_request(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___change_request\n"); );
    // Body
    return (Vcommon___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcommon___024root___change_request_1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
               [0U] ^ vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
               [0U])
         | (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
            [1U] ^ vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
            [1U])
         | (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
            [2U] ^ vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
            [2U])
         | (vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
            [3U] ^ vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
            [3U]));
    VL_DEBUG_IF( if(__req && ((vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
                               [0U] ^ vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
                               [0U]))) VL_DBG_MSGF("        CHANGE: xbar_core.sv:118\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
                               [1U] ^ vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
                               [1U]))) VL_DBG_MSGF("        CHANGE: xbar_core.sv:118\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
                               [2U] ^ vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
                               [2U]))) VL_DBG_MSGF("        CHANGE: xbar_core.sv:118\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
                               [3U] ^ vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
                               [3U]))) VL_DBG_MSGF("        CHANGE: xbar_core.sv:118\n"); );
    // Final
    vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable[0U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
        [0U];
    vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable[1U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
        [1U];
    vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable[2U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
        [2U];
    vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable[3U] 
        = vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable
        [3U];
    return __req;
}

#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->mpc_channel0_valid & 0xfeU))) {
        Verilated::overWidthError("mpc_channel0_valid");}
    if (VL_UNLIKELY((vlSelf->mpc_channel0_op & 0xfcU))) {
        Verilated::overWidthError("mpc_channel0_op");}
    if (VL_UNLIKELY((vlSelf->mpc_channel0_address & 0xf0000000U))) {
        Verilated::overWidthError("mpc_channel0_address");}
    if (VL_UNLIKELY((vlSelf->mpc_channel0_rtn_enable 
                     & 0xfeU))) {
        Verilated::overWidthError("mpc_channel0_rtn_enable");}
    if (VL_UNLIKELY((vlSelf->mpc_channel1_valid & 0xfeU))) {
        Verilated::overWidthError("mpc_channel1_valid");}
    if (VL_UNLIKELY((vlSelf->mpc_channel1_op & 0xfcU))) {
        Verilated::overWidthError("mpc_channel1_op");}
    if (VL_UNLIKELY((vlSelf->mpc_channel1_address & 0xf0000000U))) {
        Verilated::overWidthError("mpc_channel1_address");}
    if (VL_UNLIKELY((vlSelf->mpc_channel1_rtn_enable 
                     & 0xfeU))) {
        Verilated::overWidthError("mpc_channel1_rtn_enable");}
    if (VL_UNLIKELY((vlSelf->mpc_channel2_valid & 0xfeU))) {
        Verilated::overWidthError("mpc_channel2_valid");}
    if (VL_UNLIKELY((vlSelf->mpc_channel2_op & 0xfcU))) {
        Verilated::overWidthError("mpc_channel2_op");}
    if (VL_UNLIKELY((vlSelf->mpc_channel2_address & 0xf0000000U))) {
        Verilated::overWidthError("mpc_channel2_address");}
    if (VL_UNLIKELY((vlSelf->mpc_channel2_rtn_enable 
                     & 0xfeU))) {
        Verilated::overWidthError("mpc_channel2_rtn_enable");}
    if (VL_UNLIKELY((vlSelf->d_bank0_valid & 0xfeU))) {
        Verilated::overWidthError("d_bank0_valid");}
    if (VL_UNLIKELY((vlSelf->d_bank0_chl_id & 0xfcU))) {
        Verilated::overWidthError("d_bank0_chl_id");}
    if (VL_UNLIKELY((vlSelf->d_bank0_rob_id & 0x80U))) {
        Verilated::overWidthError("d_bank0_rob_id");}
    if (VL_UNLIKELY((vlSelf->d_bank1_valid & 0xfeU))) {
        Verilated::overWidthError("d_bank1_valid");}
    if (VL_UNLIKELY((vlSelf->d_bank1_chl_id & 0xfcU))) {
        Verilated::overWidthError("d_bank1_chl_id");}
    if (VL_UNLIKELY((vlSelf->d_bank1_rob_id & 0x80U))) {
        Verilated::overWidthError("d_bank1_rob_id");}
    if (VL_UNLIKELY((vlSelf->d_bank2_valid & 0xfeU))) {
        Verilated::overWidthError("d_bank2_valid");}
    if (VL_UNLIKELY((vlSelf->d_bank2_chl_id & 0xfcU))) {
        Verilated::overWidthError("d_bank2_chl_id");}
    if (VL_UNLIKELY((vlSelf->d_bank2_rob_id & 0x80U))) {
        Verilated::overWidthError("d_bank2_rob_id");}
    if (VL_UNLIKELY((vlSelf->d_bank3_valid & 0xfeU))) {
        Verilated::overWidthError("d_bank3_valid");}
    if (VL_UNLIKELY((vlSelf->d_bank3_chl_id & 0xfcU))) {
        Verilated::overWidthError("d_bank3_chl_id");}
    if (VL_UNLIKELY((vlSelf->d_bank3_rob_id & 0x80U))) {
        Verilated::overWidthError("d_bank3_rob_id");}
}
#endif  // VL_DEBUG
