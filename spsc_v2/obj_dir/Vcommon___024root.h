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
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN8(Icachestop,0,0);
    VL_IN8(Icacheflush,0,0);
    VL_IN8(pc_valid,0,0);
    VL_OUT8(tos2_valid,0,0);
    VL_IN8(hit_valid,0,0);
    VL_IN8(hit_set,5,0);
    VL_IN8(hit_way,1,0);
    VL_IN8(refill_valid,0,0);
    VL_IN8(refill_set,5,0);
    CData/*0:0*/ Icache1__DOT__reg_pc_valid;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(pc,31,0);
    VL_OUT(tos2_pc,31,0);
    VL_IN(refill_tag,19,0);
    VL_INW(refill_data,511,0,16);
    IData/*31:0*/ Icache1__DOT__reg_pc;
    VlWide<16>/*511:0*/ Icache1__DOT____Vcellout__data_ram__BRA__0__KET____DOT__u_data__douta;
    VlWide<16>/*511:0*/ Icache1__DOT____Vcellout__data_ram__BRA__1__KET____DOT__u_data__douta;
    VlWide<16>/*511:0*/ Icache1__DOT____Vcellout__data_ram__BRA__2__KET____DOT__u_data__douta;
    VlWide<16>/*511:0*/ Icache1__DOT____Vcellout__data_ram__BRA__3__KET____DOT__u_data__douta;
    IData/*19:0*/ Icache1__DOT____Vcellout__tag_ram__BRA__0__KET____DOT__u_tag__douta;
    IData/*19:0*/ Icache1__DOT____Vcellout__tag_ram__BRA__1__KET____DOT__u_tag__douta;
    IData/*19:0*/ Icache1__DOT____Vcellout__tag_ram__BRA__2__KET____DOT__u_tag__douta;
    IData/*19:0*/ Icache1__DOT____Vcellout__tag_ram__BRA__3__KET____DOT__u_tag__douta;
    VL_OUTW(tos2_data[4],511,0,16);
    VL_OUT(tos2_tag[4],19,0);
    VlUnpacked<CData/*0:0*/, 4> Icache1__DOT__cache_wea;
    VlUnpacked<CData/*5:0*/, 4> Icache1__DOT__cache_index;
    VlUnpacked<VlWide<16>/*511:0*/, 4> Icache1__DOT__cache_dout;
    VlUnpacked<IData/*19:0*/, 4> Icache1__DOT__cache_tout;
    VlUnpacked<CData/*2:0*/, 64> Icache1__DOT__CountWay1;
    VlUnpacked<CData/*2:0*/, 64> Icache1__DOT__CountWay2;
    VlUnpacked<CData/*2:0*/, 64> Icache1__DOT__CountWay3;
    VlUnpacked<CData/*2:0*/, 64> Icache1__DOT__CountWay4;
    VlUnpacked<VlWide<16>/*511:0*/, 64> Icache1__DOT__data_ram__BRA__0__KET____DOT__u_data__DOT__mem;
    VlUnpacked<VlWide<16>/*511:0*/, 64> Icache1__DOT__data_ram__BRA__1__KET____DOT__u_data__DOT__mem;
    VlUnpacked<VlWide<16>/*511:0*/, 64> Icache1__DOT__data_ram__BRA__2__KET____DOT__u_data__DOT__mem;
    VlUnpacked<VlWide<16>/*511:0*/, 64> Icache1__DOT__data_ram__BRA__3__KET____DOT__u_data__DOT__mem;
    VlUnpacked<IData/*19:0*/, 64> Icache1__DOT__tag_ram__BRA__0__KET____DOT__u_tag__DOT__mem;
    VlUnpacked<IData/*19:0*/, 64> Icache1__DOT__tag_ram__BRA__1__KET____DOT__u_tag__DOT__mem;
    VlUnpacked<IData/*19:0*/, 64> Icache1__DOT__tag_ram__BRA__2__KET____DOT__u_tag__DOT__mem;
    VlUnpacked<IData/*19:0*/, 64> Icache1__DOT__tag_ram__BRA__3__KET____DOT__u_tag__DOT__mem;

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
