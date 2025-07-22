// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon___024root___eval_initial(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcommon___024root___settle__TOP__1(Vcommon___024root* vlSelf);

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
    vlSelf->mpc_channel0_op = VL_RAND_RESET_I(2);
    vlSelf->mpc_channel0_address = VL_RAND_RESET_I(28);
    VL_RAND_RESET_W(128, vlSelf->mpc_channel0_data);
    vlSelf->mpc_channel0_rtn_valid = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel0_rtn_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->mpc_channel0_rtn_data);
    vlSelf->mpc_channel1_valid = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel1_enable = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel1_op = VL_RAND_RESET_I(2);
    vlSelf->mpc_channel1_address = VL_RAND_RESET_I(28);
    VL_RAND_RESET_W(128, vlSelf->mpc_channel1_data);
    vlSelf->mpc_channel1_rtn_valid = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel1_rtn_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->mpc_channel1_rtn_data);
    vlSelf->mpc_channel2_valid = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel2_enable = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel2_op = VL_RAND_RESET_I(2);
    vlSelf->mpc_channel2_address = VL_RAND_RESET_I(28);
    VL_RAND_RESET_W(128, vlSelf->mpc_channel2_data);
    vlSelf->mpc_channel2_rtn_valid = VL_RAND_RESET_I(1);
    vlSelf->mpc_channel2_rtn_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->mpc_channel2_rtn_data);
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
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar_ISU_crdt_rtn_bank[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->d_bank0_valid = VL_RAND_RESET_I(1);
    vlSelf->d_bank0_enable = VL_RAND_RESET_I(1);
    vlSelf->d_bank0_chl_id = VL_RAND_RESET_I(2);
    vlSelf->d_bank0_rob_id = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->d_bank0_data);
    vlSelf->d_bank1_valid = VL_RAND_RESET_I(1);
    vlSelf->d_bank1_enable = VL_RAND_RESET_I(1);
    vlSelf->d_bank1_chl_id = VL_RAND_RESET_I(2);
    vlSelf->d_bank1_rob_id = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->d_bank1_data);
    vlSelf->d_bank2_valid = VL_RAND_RESET_I(1);
    vlSelf->d_bank2_enable = VL_RAND_RESET_I(1);
    vlSelf->d_bank2_chl_id = VL_RAND_RESET_I(2);
    vlSelf->d_bank2_rob_id = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->d_bank2_data);
    vlSelf->d_bank3_valid = VL_RAND_RESET_I(1);
    vlSelf->d_bank3_enable = VL_RAND_RESET_I(1);
    vlSelf->d_bank3_chl_id = VL_RAND_RESET_I(2);
    vlSelf->d_bank3_rob_id = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->d_bank3_data);
    VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_channel_0_rsp_data);
    vlSelf->xbar__DOT__u_channel_0_rsp_rob_id = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_channel_1_rsp_data);
    vlSelf->xbar__DOT__u_channel_1_rsp_rob_id = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_channel_2_rsp_data);
    vlSelf->xbar__DOT__u_channel_2_rsp_rob_id = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__chn_xbar_already_sent[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__chn_KOB_already_sent[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__chn_xbar_handshake[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__chn_KOB_handshake[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__chn_u_handshake[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__chn_xbar_req_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__chn_xbar_req_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__chn_KOB_req_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__chn_KOB_req_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__mpc_channel_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__mpc_channel_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__kob_rob_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__kob_rob_ack[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__kob_rob_bank_id[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_rtn_free_id[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_wbuf_req_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellinp__u_xbarcore__mpc_xbar_htu_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_wbuffer_id[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_channel_id[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_wbuf_req_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_wbuffer_id[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_set[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_op_code[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_channel_id[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT____Vcellout__u_xbarcore__mpc_xbar_htu_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_req_bank_id[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_head_ptr_next[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_tail_ptr_next[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            vlSelf->xbar__DOT__Inst_KOB__DOT__kob_entry[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__Inst_KOB__DOT__kob_full[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__Inst_KOB__DOT__u_chn_set_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__Inst_KOB__DOT__d_chn_clr_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h75550f81__0 = VL_RAND_RESET_I(4);
    vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_hce2c42ec__0 = VL_RAND_RESET_I(4);
    vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h3ecd1c16__0 = VL_RAND_RESET_I(4);
    vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h1cec7f7b__0 = VL_RAND_RESET_I(4);
    vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h38b33c9b__0 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__Inst_KOB__DOT____Vlvbound_h966593ba__0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_kob_rob_ack[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_rc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch0_SWB__DOT__i_u_ch_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__i_d_bank_crdt_rtn[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch0_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_kob_rob_ack[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_rc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch1_SWB__DOT__i_u_ch_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__i_d_bank_crdt_rtn[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch1_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_kob_rob_ack[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_rc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch2_SWB__DOT__i_u_ch_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__i_d_bank_crdt_rtn[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT____Vcellout__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__u_kob_rob_ack = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__0__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__1__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__2__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__SWB_entry_data[__Vi0]);
    }
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_kob_hs_reg = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__u_ch_hs = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__ch2_SWB__DOT__SWB_GROUP_ARRAY__BRA__3__KET____DOT__u_SWB__DOT__ID_reg = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_rptr = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__ch_rptr[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch0_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch1_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT__n_ch2_used_entry = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_addr[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_op[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_xbarcore__DOT__ce_buffer_data[__Vi0][__Vi1]);
        }
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch0_kickoff = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch1_kickoff = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_ch2_kickoff = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch0_last_entry_already_pop = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch1_last_entry_already_pop = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT__ch2_last_entry_already_pop = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            for (int __Vi2=0; __Vi2<5; ++__Vi2) {
                vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_valid[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            for (int __Vi2=0; __Vi2<5; ++__Vi2) {
                vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_array_invalidate[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            for (int __Vi2=0; __Vi2<5; ++__Vi2) {
                vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_array_valid[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__can_send_to_bank[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__htu_already_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__htu_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_htu_already_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_wbuf_already_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_already_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__upstream_bank_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__channel_selected[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__entry_selected[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__channel_num_found[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_entryid_want_send_to_bank[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<3; ++__Vi1) {
            vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_have_entry_want_send[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__cbe_sel_current_bank_channel_num_want_send[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbarcore__DOT__n_cbe_sel_current_bank_channel_num_want_send[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__tag = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__tag_valid = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__tag = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__tag_valid = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__tag = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__tag_valid = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__tag = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vcellout__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__tag_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_hde2099a3__0);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h5b05dc81__0 = VL_RAND_RESET_I(28);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h57f15970__0 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_ha9f08c44__0);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h063c3644__0 = VL_RAND_RESET_I(28);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h8bc0e573__0 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h2b478e16__0);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h9198af35__0 = VL_RAND_RESET_I(28);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h0963d995__0 = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h744a2bd8__0 = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h7e4ea3c9__0 = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h928c798f__0 = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT____Vlvbound_h19bb34d9__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight);
    VL_RAND_RESET_W(256, vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__0__KET____DOT__u_wbuf_id_gen__DOT__switch_data = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight);
    VL_RAND_RESET_W(256, vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__1__KET____DOT__u_wbuf_id_gen__DOT__switch_data = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight);
    VL_RAND_RESET_W(256, vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__2__KET____DOT__u_wbuf_id_gen__DOT__switch_data = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__tag_inflight);
    VL_RAND_RESET_W(256, vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_inflight);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_t = VL_RAND_RESET_I(8);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__n_tag_valid = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbarcore__DOT__wbuf_id_gen__BRA__3__KET____DOT__u_wbuf_id_gen__DOT__switch_data = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_wptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_rptr = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_rptr[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_rptr = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank0_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank1_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank2_used_entry = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bank3_used_entry = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_rob_id[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_xbar_rtncore__DOT__be_buffer_data[__Vi0][__Vi1]);
        }
    }
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank0_kickoff = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank1_kickoff = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank2_kickoff = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__downstream_bank3_kickoff = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank0_last_entry_already_pop = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank1_last_entry_already_pop = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank2_last_entry_already_pop = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank3_last_entry_already_pop = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<3; ++__Vi1) {
            for (int __Vi2=0; __Vi2<5; ++__Vi2) {
                vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_valid[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<3; ++__Vi1) {
            for (int __Vi2=0; __Vi2<5; ++__Vi2) {
                vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_array_invalidate[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<3; ++__Vi1) {
            for (int __Vi2=0; __Vi2<5; ++__Vi2) {
                vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_array_valid[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__channel_rtn_kickoff[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__can_send_to_channel[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_selected[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__entry_selected[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bank_num_found[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<3; ++__Vi1) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_entryid_want_send_to_channel[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<3; ++__Vi1) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_bank_have_entry_want_send_to_channel[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_have_entry_want_send[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__bce_sel_current_channel_bank_num_want_send[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->xbar__DOT__u_xbar_rtncore__DOT__n_bce_sel_current_channel_bank_num_want_send[__Vi0] = VL_RAND_RESET_I(2);
    }
    VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5ff72ebe__0);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h7c706b56__0 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h8128c2e3__0);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h5d16e19d__0 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h6bc34f9f__0);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h409cfb2d__0 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_haf40a35e__0);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h2e190ff6__0 = VL_RAND_RESET_I(7);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h33d84f74__0 = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_hcca64d43__0 = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h429095b7__0 = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h33da896b__0 = VL_RAND_RESET_I(1);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__0 = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__1 = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__2 = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h012591cd__3 = VL_RAND_RESET_I(3);
    vlSelf->xbar__DOT__u_xbar_rtncore__DOT____Vlvbound_h7c9e1a2b__0 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vchglast__TOP__xbar__DOT__u_xbarcore__DOT__upstream_bank_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
}
