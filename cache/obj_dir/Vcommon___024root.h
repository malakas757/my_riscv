// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommon.h for the primary calling header

#ifndef VERILATED_VCOMMON___024ROOT_H_
#define VERILATED_VCOMMON___024ROOT_H_  // guard

#include "verilated.h"

class Vcommon__Syms;
VL_MODULE(Vcommon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rstn,0,0);
        VL_IN8(mpc_channel0_valid,0,0);
        VL_OUT8(mpc_channel0_enable,0,0);
        VL_IN8(mpc_channel0_op,2,0);
        VL_IN8(mpc_channel1_valid,0,0);
        VL_OUT8(mpc_channel1_enable,0,0);
        VL_IN8(mpc_channel1_op,2,0);
        VL_IN8(mpc_channel2_valid,0,0);
        VL_OUT8(mpc_channel2_enable,0,0);
        VL_IN8(mpc_channel2_op,2,0);
        CData/*2:0*/ xbar_core__DOT__ch0_wptr;
        CData/*2:0*/ xbar_core__DOT__ch1_wptr;
        CData/*2:0*/ xbar_core__DOT__ch2_wptr;
        CData/*2:0*/ xbar_core__DOT__n_ch0_wptr;
        CData/*2:0*/ xbar_core__DOT__n_ch1_wptr;
        CData/*2:0*/ xbar_core__DOT__n_ch2_wptr;
        CData/*2:0*/ xbar_core__DOT__ch0_rptr;
        CData/*2:0*/ xbar_core__DOT__ch1_rptr;
        CData/*2:0*/ xbar_core__DOT__ch2_rptr;
        CData/*2:0*/ xbar_core__DOT__n_ch0_rptr;
        CData/*2:0*/ xbar_core__DOT__n_ch1_rptr;
        CData/*2:0*/ xbar_core__DOT__n_ch2_rptr;
        CData/*2:0*/ xbar_core__DOT__ch0_used_entry;
        CData/*2:0*/ xbar_core__DOT__ch1_used_entry;
        CData/*2:0*/ xbar_core__DOT__ch2_used_entry;
        CData/*2:0*/ xbar_core__DOT__n_ch0_used_entry;
        CData/*2:0*/ xbar_core__DOT__n_ch1_used_entry;
        CData/*2:0*/ xbar_core__DOT__n_ch2_used_entry;
        CData/*0:0*/ xbar_core__DOT__upstream_ch0_kickoff;
        CData/*0:0*/ xbar_core__DOT__upstream_ch1_kickoff;
        CData/*0:0*/ xbar_core__DOT__upstream_ch2_kickoff;
        CData/*0:0*/ xbar_core__DOT__ch0_last_entry_already_pop;
        CData/*0:0*/ xbar_core__DOT__ch1_last_entry_already_pop;
        CData/*0:0*/ xbar_core__DOT__ch2_last_entry_already_pop;
        CData/*2:0*/ xbar_core__DOT____Vlvbound_h57f15970__0;
        CData/*2:0*/ xbar_core__DOT____Vlvbound_h8bc0e573__0;
        CData/*2:0*/ xbar_core__DOT____Vlvbound_h0963d995__0;
        CData/*0:0*/ xbar_core__DOT____Vlvbound_h744a2bd8__0;
        CData/*0:0*/ xbar_core__DOT____Vlvbound_h7e4ea3c9__0;
        CData/*0:0*/ xbar_core__DOT____Vlvbound_h928c798f__0;
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_IN(mpc_channel0_address,31,4);
        VL_INW(mpc_channel0_data,127,0,4);
        VL_IN(mpc_channel1_address,31,4);
        VL_INW(mpc_channel1_data,127,0,4);
        VL_IN(mpc_channel2_address,31,4);
        VL_INW(mpc_channel2_data,127,0,4);
        VlWide<4>/*127:0*/ xbar_core__DOT____Vlvbound_hde2099a3__0;
        IData/*27:0*/ xbar_core__DOT____Vlvbound_h5b05dc81__0;
        VlWide<4>/*127:0*/ xbar_core__DOT____Vlvbound_ha9f08c44__0;
        IData/*27:0*/ xbar_core__DOT____Vlvbound_h063c3644__0;
        VlWide<4>/*127:0*/ xbar_core__DOT____Vlvbound_h2b478e16__0;
        IData/*27:0*/ xbar_core__DOT____Vlvbound_h9198af35__0;
        VL_OUT8(mpc_xbar_htu_valid[4],0,0);
        VL_IN8(mpc_xbar_htu_enable[4],0,0);
        VL_OUT8(mpc_xbar_htu_channel_id[4],1,0);
        VL_OUT8(mpc_xbar_htu_op_code[4],1,0);
        VL_OUT(mpc_xbar_htu_addr[4],31,0);
        VL_OUT8(mpc_xbar_htu_set[4],2,0);
        VL_OUT8(mpc_xbar_htu_wbuffer_id[4],7,0);
        VL_OUT8(mpc_xbar_wbuf_req_valid[4],0,0);
        VL_IN8(mpc_xbar_wbuf_req_enable[4],0,0);
        VL_OUT8(mpc_xbar_wbuf_req_channel_id[4],1,0);
    };
    struct {
        VL_OUTW(mpc_xbar_wbuf_req_data[4],127,0,4);
        VL_OUT8(mpc_xbar_wbuf_req_wbuffer_id[4],7,0);
        VL_INW(mpc_xbar_wbuf_rtn_free_id[4],255,0,8);
        VlUnpacked<CData/*2:0*/, 3> xbar_core__DOT__ch_rptr;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 5>, 3> xbar_core__DOT__ce_buffer_addr;
        VlUnpacked<VlUnpacked<CData/*2:0*/, 5>, 3> xbar_core__DOT__ce_buffer_op;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 5>, 3> xbar_core__DOT__ce_buffer_data;
        VlUnpacked<VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 4>, 3> xbar_core__DOT__cbe_array_valid;
        VlUnpacked<VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 4>, 3> xbar_core__DOT__cbe_array_invalidate;
        VlUnpacked<VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 4>, 3> xbar_core__DOT__n_cbe_array_valid;
        VlUnpacked<CData/*0:0*/, 4> xbar_core__DOT__htu_already_kickoff;
        VlUnpacked<CData/*0:0*/, 4> xbar_core__DOT__htu_kickoff;
        VlUnpacked<CData/*0:0*/, 4> xbar_core__DOT__n_htu_already_kickoff;
        VlUnpacked<CData/*0:0*/, 4> xbar_core__DOT__n_wbuf_already_kickoff;
        VlUnpacked<CData/*0:0*/, 4> xbar_core__DOT__wbuf_already_kickoff;
        VlUnpacked<CData/*0:0*/, 4> xbar_core__DOT__wbuf_kickoff;
        VlUnpacked<CData/*0:0*/, 4> xbar_core__DOT__upstream_bank_valid;
        VlUnpacked<CData/*0:0*/, 4> xbar_core__DOT__upstream_bank_enable;
        VlUnpacked<CData/*0:0*/, 4> xbar_core__DOT__upstream_bank_kickoff;
        VlUnpacked<CData/*1:0*/, 4> xbar_core__DOT__channel_selected;
        VlUnpacked<CData/*2:0*/, 4> xbar_core__DOT__entry_selected;
        VlUnpacked<CData/*2:0*/, 4> xbar_core__DOT__channel_num_found;
        VlUnpacked<IData/*31:0*/, 4> xbar_core__DOT__channel_num_int;
        VlUnpacked<VlUnpacked<CData/*2:0*/, 4>, 3> xbar_core__DOT__cbe_sel_current_channel_entryid_want_send_to_bank;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 3> xbar_core__DOT__cbe_sel_current_channel_have_entry_want_send_to_bank;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 3>, 4> xbar_core__DOT__cbe_sel_current_bank_have_entry_want_send;
        VlUnpacked<CData/*1:0*/, 4> xbar_core__DOT__cbe_sel_current_bank_channel_num_want_send;
        VlUnpacked<CData/*1:0*/, 4> xbar_core__DOT__n_cbe_sel_current_bank_channel_num_want_send;
        VlUnpacked<CData/*0:0*/, 4> __Vchglast__TOP__xbar_core__DOT__upstream_bank_enable;
    };

    // INTERNAL VARIABLES
    Vcommon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vcommon___024root(const char* name);
    ~Vcommon___024root();
    VL_UNCOPYABLE(Vcommon___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vcommon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
