// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon___024root___settle__TOP__2(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__2\n"); );
    // Init
    CData/*1:0*/ Icache1__DOT__way_to_evt;
    // Body
    if (vlSelf->refill_valid) {
        vlSelf->Icache1__DOT__cache_index[0U] = (0x3fU 
                                                 & (IData)(vlSelf->refill_set));
        vlSelf->Icache1__DOT__cache_index[1U] = (0x3fU 
                                                 & (IData)(vlSelf->refill_set));
        vlSelf->Icache1__DOT__cache_index[2U] = (0x3fU 
                                                 & (IData)(vlSelf->refill_set));
        vlSelf->Icache1__DOT__cache_index[3U] = (0x3fU 
                                                 & (IData)(vlSelf->refill_set));
    } else {
        vlSelf->Icache1__DOT__cache_index[0U] = (0x3fU 
                                                 & vlSelf->pc);
        vlSelf->Icache1__DOT__cache_index[1U] = (0x3fU 
                                                 & vlSelf->pc);
        vlSelf->Icache1__DOT__cache_index[2U] = (0x3fU 
                                                 & vlSelf->pc);
        vlSelf->Icache1__DOT__cache_index[3U] = (0x3fU 
                                                 & vlSelf->pc);
    }
    vlSelf->tos2_valid = ((~ (IData)(vlSelf->Icachestop)) 
                          & (IData)(vlSelf->Icache1__DOT__reg_pc_valid));
    vlSelf->tos2_pc = ((IData)(vlSelf->Icachestop) ? 0U
                        : vlSelf->Icache1__DOT__reg_pc);
    Icache1__DOT__way_to_evt = ((((vlSelf->Icache1__DOT__CountWay1
                                   [vlSelf->refill_set] 
                                   >= vlSelf->Icache1__DOT__CountWay2
                                   [vlSelf->refill_set]) 
                                  & (vlSelf->Icache1__DOT__CountWay1
                                     [vlSelf->refill_set] 
                                     >= vlSelf->Icache1__DOT__CountWay3
                                     [vlSelf->refill_set])) 
                                 & (vlSelf->Icache1__DOT__CountWay1
                                    [vlSelf->refill_set] 
                                    >= vlSelf->Icache1__DOT__CountWay4
                                    [vlSelf->refill_set]))
                                 ? 0U : ((((vlSelf->Icache1__DOT__CountWay2
                                            [vlSelf->refill_set] 
                                            >= vlSelf->Icache1__DOT__CountWay1
                                            [vlSelf->refill_set]) 
                                           & (vlSelf->Icache1__DOT__CountWay2
                                              [vlSelf->refill_set] 
                                              >= vlSelf->Icache1__DOT__CountWay3
                                              [vlSelf->refill_set])) 
                                          & (vlSelf->Icache1__DOT__CountWay2
                                             [vlSelf->refill_set] 
                                             >= vlSelf->Icache1__DOT__CountWay4
                                             [vlSelf->refill_set]))
                                          ? 1U : ((
                                                   ((vlSelf->Icache1__DOT__CountWay3
                                                     [vlSelf->refill_set] 
                                                     >= 
                                                     vlSelf->Icache1__DOT__CountWay1
                                                     [vlSelf->refill_set]) 
                                                    & (vlSelf->Icache1__DOT__CountWay3
                                                       [vlSelf->refill_set] 
                                                       >= 
                                                       vlSelf->Icache1__DOT__CountWay1
                                                       [vlSelf->refill_set])) 
                                                   & (vlSelf->Icache1__DOT__CountWay3
                                                      [vlSelf->refill_set] 
                                                      >= 
                                                      vlSelf->Icache1__DOT__CountWay4
                                                      [vlSelf->refill_set]))
                                                   ? 2U
                                                   : 
                                                  ((((vlSelf->Icache1__DOT__CountWay4
                                                      [vlSelf->refill_set] 
                                                      >= 
                                                      vlSelf->Icache1__DOT__CountWay1
                                                      [vlSelf->refill_set]) 
                                                     & (vlSelf->Icache1__DOT__CountWay4
                                                        [vlSelf->refill_set] 
                                                        >= 
                                                        vlSelf->Icache1__DOT__CountWay2
                                                        [vlSelf->refill_set])) 
                                                    & (vlSelf->Icache1__DOT__CountWay4
                                                       [vlSelf->refill_set] 
                                                       >= 
                                                       vlSelf->Icache1__DOT__CountWay3
                                                       [vlSelf->refill_set]))
                                                    ? 3U
                                                    : 0U))));
    vlSelf->Icache1__DOT__cache_wea[0U] = (((IData)(vlSelf->refill_valid) 
                                            & (0U == (IData)(Icache1__DOT__way_to_evt)))
                                            ? 1U : 0U);
    vlSelf->Icache1__DOT__cache_wea[1U] = (((IData)(vlSelf->refill_valid) 
                                            & (1U == (IData)(Icache1__DOT__way_to_evt)))
                                            ? 1U : 0U);
    vlSelf->Icache1__DOT__cache_wea[2U] = (((IData)(vlSelf->refill_valid) 
                                            & (2U == (IData)(Icache1__DOT__way_to_evt)))
                                            ? 1U : 0U);
    vlSelf->Icache1__DOT__cache_wea[3U] = (((IData)(vlSelf->refill_valid) 
                                            & (3U == (IData)(Icache1__DOT__way_to_evt)))
                                            ? 1U : 0U);
    vlSelf->Icache1__DOT__cache_dout[0U][0U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[0U];
    vlSelf->Icache1__DOT__cache_dout[0U][1U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[1U];
    vlSelf->Icache1__DOT__cache_dout[0U][2U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[2U];
    vlSelf->Icache1__DOT__cache_dout[0U][3U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[3U];
    vlSelf->Icache1__DOT__cache_dout[0U][4U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[4U];
    vlSelf->Icache1__DOT__cache_dout[0U][5U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[5U];
    vlSelf->Icache1__DOT__cache_dout[0U][6U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[6U];
    vlSelf->Icache1__DOT__cache_dout[0U][7U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[7U];
    vlSelf->Icache1__DOT__cache_dout[0U][8U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[8U];
    vlSelf->Icache1__DOT__cache_dout[0U][9U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[9U];
    vlSelf->Icache1__DOT__cache_dout[0U][0xaU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[0xaU];
    vlSelf->Icache1__DOT__cache_dout[0U][0xbU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[0xbU];
    vlSelf->Icache1__DOT__cache_dout[0U][0xcU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[0xcU];
    vlSelf->Icache1__DOT__cache_dout[0U][0xdU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[0xdU];
    vlSelf->Icache1__DOT__cache_dout[0U][0xeU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[0xeU];
    vlSelf->Icache1__DOT__cache_dout[0U][0xfU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta[0xfU];
    vlSelf->Icache1__DOT__cache_dout[1U][0U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[0U];
    vlSelf->Icache1__DOT__cache_dout[1U][1U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[1U];
    vlSelf->Icache1__DOT__cache_dout[1U][2U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[2U];
    vlSelf->Icache1__DOT__cache_dout[1U][3U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[3U];
    vlSelf->Icache1__DOT__cache_dout[1U][4U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[4U];
    vlSelf->Icache1__DOT__cache_dout[1U][5U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[5U];
    vlSelf->Icache1__DOT__cache_dout[1U][6U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[6U];
    vlSelf->Icache1__DOT__cache_dout[1U][7U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[7U];
    vlSelf->Icache1__DOT__cache_dout[1U][8U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[8U];
    vlSelf->Icache1__DOT__cache_dout[1U][9U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[9U];
    vlSelf->Icache1__DOT__cache_dout[1U][0xaU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[0xaU];
    vlSelf->Icache1__DOT__cache_dout[1U][0xbU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[0xbU];
    vlSelf->Icache1__DOT__cache_dout[1U][0xcU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[0xcU];
    vlSelf->Icache1__DOT__cache_dout[1U][0xdU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[0xdU];
    vlSelf->Icache1__DOT__cache_dout[1U][0xeU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[0xeU];
    vlSelf->Icache1__DOT__cache_dout[1U][0xfU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta[0xfU];
    vlSelf->Icache1__DOT__cache_dout[2U][0U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[0U];
    vlSelf->Icache1__DOT__cache_dout[2U][1U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[1U];
    vlSelf->Icache1__DOT__cache_dout[2U][2U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[2U];
    vlSelf->Icache1__DOT__cache_dout[2U][3U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[3U];
    vlSelf->Icache1__DOT__cache_dout[2U][4U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[4U];
    vlSelf->Icache1__DOT__cache_dout[2U][5U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[5U];
    vlSelf->Icache1__DOT__cache_dout[2U][6U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[6U];
    vlSelf->Icache1__DOT__cache_dout[2U][7U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[7U];
    vlSelf->Icache1__DOT__cache_dout[2U][8U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[8U];
    vlSelf->Icache1__DOT__cache_dout[2U][9U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[9U];
    vlSelf->Icache1__DOT__cache_dout[2U][0xaU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[0xaU];
    vlSelf->Icache1__DOT__cache_dout[2U][0xbU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[0xbU];
    vlSelf->Icache1__DOT__cache_dout[2U][0xcU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[0xcU];
    vlSelf->Icache1__DOT__cache_dout[2U][0xdU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[0xdU];
    vlSelf->Icache1__DOT__cache_dout[2U][0xeU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[0xeU];
    vlSelf->Icache1__DOT__cache_dout[2U][0xfU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta[0xfU];
    vlSelf->Icache1__DOT__cache_dout[3U][0U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[0U];
    vlSelf->Icache1__DOT__cache_dout[3U][1U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[1U];
    vlSelf->Icache1__DOT__cache_dout[3U][2U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[2U];
    vlSelf->Icache1__DOT__cache_dout[3U][3U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[3U];
    vlSelf->Icache1__DOT__cache_dout[3U][4U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[4U];
    vlSelf->Icache1__DOT__cache_dout[3U][5U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[5U];
    vlSelf->Icache1__DOT__cache_dout[3U][6U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[6U];
    vlSelf->Icache1__DOT__cache_dout[3U][7U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[7U];
    vlSelf->Icache1__DOT__cache_dout[3U][8U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[8U];
    vlSelf->Icache1__DOT__cache_dout[3U][9U] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[9U];
    vlSelf->Icache1__DOT__cache_dout[3U][0xaU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[0xaU];
    vlSelf->Icache1__DOT__cache_dout[3U][0xbU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[0xbU];
    vlSelf->Icache1__DOT__cache_dout[3U][0xcU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[0xcU];
    vlSelf->Icache1__DOT__cache_dout[3U][0xdU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[0xdU];
    vlSelf->Icache1__DOT__cache_dout[3U][0xeU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[0xeU];
    vlSelf->Icache1__DOT__cache_dout[3U][0xfU] = vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta[0xfU];
    vlSelf->Icache1__DOT__cache_tout[0U] = vlSelf->Icache1__DOT____Vcellout__tag_ram__BRA__0__KET____DOT__u_tag__douta;
    vlSelf->Icache1__DOT__cache_tout[1U] = vlSelf->Icache1__DOT____Vcellout__tag_ram__BRA__1__KET____DOT__u_tag__douta;
    vlSelf->Icache1__DOT__cache_tout[2U] = vlSelf->Icache1__DOT____Vcellout__tag_ram__BRA__2__KET____DOT__u_tag__douta;
    vlSelf->Icache1__DOT__cache_tout[3U] = vlSelf->Icache1__DOT____Vcellout__tag_ram__BRA__3__KET____DOT__u_tag__douta;
    vlSelf->tos2_data[0U][0U] = vlSelf->Icache1__DOT__cache_dout
        [0U][0U];
    vlSelf->tos2_data[0U][1U] = vlSelf->Icache1__DOT__cache_dout
        [0U][1U];
    vlSelf->tos2_data[0U][2U] = vlSelf->Icache1__DOT__cache_dout
        [0U][2U];
    vlSelf->tos2_data[0U][3U] = vlSelf->Icache1__DOT__cache_dout
        [0U][3U];
    vlSelf->tos2_data[0U][4U] = vlSelf->Icache1__DOT__cache_dout
        [0U][4U];
    vlSelf->tos2_data[0U][5U] = vlSelf->Icache1__DOT__cache_dout
        [0U][5U];
    vlSelf->tos2_data[0U][6U] = vlSelf->Icache1__DOT__cache_dout
        [0U][6U];
    vlSelf->tos2_data[0U][7U] = vlSelf->Icache1__DOT__cache_dout
        [0U][7U];
    vlSelf->tos2_data[0U][8U] = vlSelf->Icache1__DOT__cache_dout
        [0U][8U];
    vlSelf->tos2_data[0U][9U] = vlSelf->Icache1__DOT__cache_dout
        [0U][9U];
    vlSelf->tos2_data[0U][0xaU] = vlSelf->Icache1__DOT__cache_dout
        [0U][0xaU];
    vlSelf->tos2_data[0U][0xbU] = vlSelf->Icache1__DOT__cache_dout
        [0U][0xbU];
    vlSelf->tos2_data[0U][0xcU] = vlSelf->Icache1__DOT__cache_dout
        [0U][0xcU];
    vlSelf->tos2_data[0U][0xdU] = vlSelf->Icache1__DOT__cache_dout
        [0U][0xdU];
    vlSelf->tos2_data[0U][0xeU] = vlSelf->Icache1__DOT__cache_dout
        [0U][0xeU];
    vlSelf->tos2_data[0U][0xfU] = vlSelf->Icache1__DOT__cache_dout
        [0U][0xfU];
    vlSelf->tos2_data[1U][0U] = vlSelf->Icache1__DOT__cache_dout
        [1U][0U];
    vlSelf->tos2_data[1U][1U] = vlSelf->Icache1__DOT__cache_dout
        [1U][1U];
    vlSelf->tos2_data[1U][2U] = vlSelf->Icache1__DOT__cache_dout
        [1U][2U];
    vlSelf->tos2_data[1U][3U] = vlSelf->Icache1__DOT__cache_dout
        [1U][3U];
    vlSelf->tos2_data[1U][4U] = vlSelf->Icache1__DOT__cache_dout
        [1U][4U];
    vlSelf->tos2_data[1U][5U] = vlSelf->Icache1__DOT__cache_dout
        [1U][5U];
    vlSelf->tos2_data[1U][6U] = vlSelf->Icache1__DOT__cache_dout
        [1U][6U];
    vlSelf->tos2_data[1U][7U] = vlSelf->Icache1__DOT__cache_dout
        [1U][7U];
    vlSelf->tos2_data[1U][8U] = vlSelf->Icache1__DOT__cache_dout
        [1U][8U];
    vlSelf->tos2_data[1U][9U] = vlSelf->Icache1__DOT__cache_dout
        [1U][9U];
    vlSelf->tos2_data[1U][0xaU] = vlSelf->Icache1__DOT__cache_dout
        [1U][0xaU];
    vlSelf->tos2_data[1U][0xbU] = vlSelf->Icache1__DOT__cache_dout
        [1U][0xbU];
    vlSelf->tos2_data[1U][0xcU] = vlSelf->Icache1__DOT__cache_dout
        [1U][0xcU];
    vlSelf->tos2_data[1U][0xdU] = vlSelf->Icache1__DOT__cache_dout
        [1U][0xdU];
    vlSelf->tos2_data[1U][0xeU] = vlSelf->Icache1__DOT__cache_dout
        [1U][0xeU];
    vlSelf->tos2_data[1U][0xfU] = vlSelf->Icache1__DOT__cache_dout
        [1U][0xfU];
    vlSelf->tos2_data[2U][0U] = vlSelf->Icache1__DOT__cache_dout
        [2U][0U];
    vlSelf->tos2_data[2U][1U] = vlSelf->Icache1__DOT__cache_dout
        [2U][1U];
    vlSelf->tos2_data[2U][2U] = vlSelf->Icache1__DOT__cache_dout
        [2U][2U];
    vlSelf->tos2_data[2U][3U] = vlSelf->Icache1__DOT__cache_dout
        [2U][3U];
    vlSelf->tos2_data[2U][4U] = vlSelf->Icache1__DOT__cache_dout
        [2U][4U];
    vlSelf->tos2_data[2U][5U] = vlSelf->Icache1__DOT__cache_dout
        [2U][5U];
    vlSelf->tos2_data[2U][6U] = vlSelf->Icache1__DOT__cache_dout
        [2U][6U];
    vlSelf->tos2_data[2U][7U] = vlSelf->Icache1__DOT__cache_dout
        [2U][7U];
    vlSelf->tos2_data[2U][8U] = vlSelf->Icache1__DOT__cache_dout
        [2U][8U];
    vlSelf->tos2_data[2U][9U] = vlSelf->Icache1__DOT__cache_dout
        [2U][9U];
    vlSelf->tos2_data[2U][0xaU] = vlSelf->Icache1__DOT__cache_dout
        [2U][0xaU];
    vlSelf->tos2_data[2U][0xbU] = vlSelf->Icache1__DOT__cache_dout
        [2U][0xbU];
    vlSelf->tos2_data[2U][0xcU] = vlSelf->Icache1__DOT__cache_dout
        [2U][0xcU];
    vlSelf->tos2_data[2U][0xdU] = vlSelf->Icache1__DOT__cache_dout
        [2U][0xdU];
    vlSelf->tos2_data[2U][0xeU] = vlSelf->Icache1__DOT__cache_dout
        [2U][0xeU];
    vlSelf->tos2_data[2U][0xfU] = vlSelf->Icache1__DOT__cache_dout
        [2U][0xfU];
    vlSelf->tos2_data[3U][0U] = vlSelf->Icache1__DOT__cache_dout
        [3U][0U];
    vlSelf->tos2_data[3U][1U] = vlSelf->Icache1__DOT__cache_dout
        [3U][1U];
    vlSelf->tos2_data[3U][2U] = vlSelf->Icache1__DOT__cache_dout
        [3U][2U];
    vlSelf->tos2_data[3U][3U] = vlSelf->Icache1__DOT__cache_dout
        [3U][3U];
    vlSelf->tos2_data[3U][4U] = vlSelf->Icache1__DOT__cache_dout
        [3U][4U];
    vlSelf->tos2_data[3U][5U] = vlSelf->Icache1__DOT__cache_dout
        [3U][5U];
    vlSelf->tos2_data[3U][6U] = vlSelf->Icache1__DOT__cache_dout
        [3U][6U];
    vlSelf->tos2_data[3U][7U] = vlSelf->Icache1__DOT__cache_dout
        [3U][7U];
    vlSelf->tos2_data[3U][8U] = vlSelf->Icache1__DOT__cache_dout
        [3U][8U];
    vlSelf->tos2_data[3U][9U] = vlSelf->Icache1__DOT__cache_dout
        [3U][9U];
    vlSelf->tos2_data[3U][0xaU] = vlSelf->Icache1__DOT__cache_dout
        [3U][0xaU];
    vlSelf->tos2_data[3U][0xbU] = vlSelf->Icache1__DOT__cache_dout
        [3U][0xbU];
    vlSelf->tos2_data[3U][0xcU] = vlSelf->Icache1__DOT__cache_dout
        [3U][0xcU];
    vlSelf->tos2_data[3U][0xdU] = vlSelf->Icache1__DOT__cache_dout
        [3U][0xdU];
    vlSelf->tos2_data[3U][0xeU] = vlSelf->Icache1__DOT__cache_dout
        [3U][0xeU];
    vlSelf->tos2_data[3U][0xfU] = vlSelf->Icache1__DOT__cache_dout
        [3U][0xfU];
    vlSelf->tos2_tag[0U] = vlSelf->Icache1__DOT__cache_tout
        [0U];
    vlSelf->tos2_tag[1U] = vlSelf->Icache1__DOT__cache_tout
        [1U];
    vlSelf->tos2_tag[2U] = vlSelf->Icache1__DOT__cache_tout
        [2U];
    vlSelf->tos2_tag[3U] = vlSelf->Icache1__DOT__cache_tout
        [3U];
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
    Vcommon___024root___settle__TOP__2(vlSelf);
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
    vlSelf->Icachestop = VL_RAND_RESET_I(1);
    vlSelf->Icacheflush = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->pc_valid = VL_RAND_RESET_I(1);
    vlSelf->tos2_valid = VL_RAND_RESET_I(1);
    vlSelf->tos2_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->tos2_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->tos2_tag[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->hit_valid = VL_RAND_RESET_I(1);
    vlSelf->hit_set = VL_RAND_RESET_I(6);
    vlSelf->hit_way = VL_RAND_RESET_I(2);
    vlSelf->refill_valid = VL_RAND_RESET_I(1);
    vlSelf->refill_set = VL_RAND_RESET_I(6);
    vlSelf->refill_tag = VL_RAND_RESET_I(20);
    VL_RAND_RESET_W(512, vlSelf->refill_data);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Icache1__DOT__cache_wea[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Icache1__DOT__cache_index[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->Icache1__DOT__cache_dout[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Icache1__DOT__cache_tout[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->Icache1__DOT__reg_pc_valid = VL_RAND_RESET_I(1);
    vlSelf->Icache1__DOT__reg_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->Icache1__DOT__CountWay1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->Icache1__DOT__CountWay2[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->Icache1__DOT__CountWay3[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->Icache1__DOT__CountWay4[__Vi0] = VL_RAND_RESET_I(3);
    }
    VL_RAND_RESET_W(512, vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta);
    VL_RAND_RESET_W(512, vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta);
    VL_RAND_RESET_W(512, vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta);
    VL_RAND_RESET_W(512, vlSelf->Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta);
    vlSelf->Icache1__DOT____Vcellout__tag_ram__BRA__0__KET____DOT__u_tag__douta = VL_RAND_RESET_I(20);
    vlSelf->Icache1__DOT____Vcellout__tag_ram__BRA__1__KET____DOT__u_tag__douta = VL_RAND_RESET_I(20);
    vlSelf->Icache1__DOT____Vcellout__tag_ram__BRA__2__KET____DOT__u_tag__douta = VL_RAND_RESET_I(20);
    vlSelf->Icache1__DOT____Vcellout__tag_ram__BRA__3__KET____DOT__u_tag__douta = VL_RAND_RESET_I(20);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->Icache1__DOT__data_ram__BRA__0__KET____DOT__u_data__DOT__mem[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->Icache1__DOT__data_ram__BRA__1__KET____DOT__u_data__DOT__mem[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->Icache1__DOT__data_ram__BRA__2__KET____DOT__u_data__DOT__mem[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->Icache1__DOT__data_ram__BRA__3__KET____DOT__u_data__DOT__mem[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->Icache1__DOT__tag_ram__BRA__0__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->Icache1__DOT__tag_ram__BRA__1__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->Icache1__DOT__tag_ram__BRA__2__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->Icache1__DOT__tag_ram__BRA__3__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_RAND_RESET_I(20);
    }
}
