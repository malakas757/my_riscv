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
        VL_IN8(reset_n,0,0);
        VL_IN8(flush_valid,0,0);
        VL_IN8(flush_robid,6,0);
        VL_IN8(ex_slot0_valid,0,0);
        VL_IN8(ex_slot1_valid,0,0);
        VL_IN8(ex_slot2_valid,0,0);
        VL_IN8(slot0_T,5,0);
        VL_IN8(slot1_T,5,0);
        VL_IN8(slot2_T,5,0);
        VL_IN8(slot0_robid,6,0);
        VL_IN8(slot1_robid,6,0);
        VL_IN8(slot2_robid,6,0);
        VL_IN8(IQ0_rs1_addr,5,0);
        VL_IN8(IQ0_rs2_addr,5,0);
        VL_IN8(IQ1_rs1_addr,5,0);
        VL_IN8(IQ1_rs2_addr,5,0);
        VL_IN8(MEM_rs1_addr,5,0);
        VL_IN8(MEM_rs2_addr,5,0);
        VL_OUT8(int0_valid,0,0);
        VL_OUT8(int0_T,5,0);
        VL_OUT8(int0_robid,6,0);
        VL_OUT8(int1_valid,0,0);
        VL_OUT8(int1_T,5,0);
        VL_OUT8(int1_robid,6,0);
        VL_OUT8(int2_valid,0,0);
        VL_OUT8(int2_T,5,0);
        VL_OUT8(int2_robid,6,0);
        VL_IN8(mem_issue_stall,0,0);
        VL_IN8(writeback0_need_to_wb,0,0);
        VL_IN8(writeback1_need_to_wb,0,0);
        VL_IN8(writeback2_need_to_wb,0,0);
        VL_IN8(writeback3_need_to_wb,0,0);
        VL_IN8(writeback0_prd,5,0);
        VL_IN8(writeback1_prd,5,0);
        VL_IN8(writeback2_prd,5,0);
        VL_IN8(writeback3_prd,5,0);
        CData/*0:0*/ ex_buffer__DOT____Vlvbound_hcf70db14__1;
        CData/*5:0*/ ex_buffer__DOT____Vlvbound_h5df65fe2__0;
        CData/*5:0*/ ex_buffer__DOT____Vlvbound_h6850f279__0;
        CData/*5:0*/ ex_buffer__DOT____Vlvbound_h3d1dfe81__0;
        CData/*6:0*/ ex_buffer__DOT____Vlvbound_hfbfc84f6__0;
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_IN(slot0_pc,31,0);
        VL_IN(slot1_pc,31,0);
        VL_IN(slot2_pc,31,0);
        VL_IN(IQ0_rs1_data,31,0);
        VL_IN(IQ0_rs2_data,31,0);
        VL_IN(IQ1_rs1_data,31,0);
        VL_IN(IQ1_rs2_data,31,0);
        VL_IN(MEM_rs1_data,31,0);
        VL_IN(MEM_rs2_data,31,0);
        VL_OUT(int0_pc,31,0);
        VL_OUT(int0_rs1,31,0);
        VL_OUT(int0_rs2,31,0);
        VL_OUT(int1_pc,31,0);
        VL_OUT(int1_rs1,31,0);
        VL_OUT(int1_rs2,31,0);
        VL_OUT(int2_pc,31,0);
        VL_OUT(int2_rs1,31,0);
        VL_OUT(int2_rs2,31,0);
        VL_IN(writeback0_data,31,0);
        VL_IN(writeback1_data,31,0);
        VL_IN(writeback2_data,31,0);
    };
    struct {
        VL_IN(writeback3_data,31,0);
        IData/*31:0*/ ex_buffer__DOT____Vlvbound_h1655a754__0;
        IData/*31:0*/ ex_buffer__DOT____Vlvbound_h5911c180__0;
        IData/*31:0*/ ex_buffer__DOT____Vlvbound_ha2614b0e__0;
        VL_INW(slot0_control,114,0,4);
        VL_INW(slot1_control,114,0,4);
        VL_INW(slot2_control,114,0,4);
        VL_OUTW(int0_control,114,0,4);
        VL_OUTW(int1_control,114,0,4);
        VL_OUTW(int2_control,114,0,4);
        VlWide<4>/*114:0*/ ex_buffer__DOT____Vlvbound_hc9f25bea__0;
        VlUnpacked<CData/*0:0*/, 3> ex_buffer__DOT__slot_reg_valid;
        VlUnpacked<IData/*31:0*/, 3> ex_buffer__DOT__slot_reg_pc;
        VlUnpacked<IData/*31:0*/, 3> ex_buffer__DOT__slot_reg_rs1;
        VlUnpacked<IData/*31:0*/, 3> ex_buffer__DOT__slot_reg_rs2;
        VlUnpacked<CData/*5:0*/, 3> ex_buffer__DOT__slot_reg_rs1_addr;
        VlUnpacked<CData/*5:0*/, 3> ex_buffer__DOT__slot_reg_rs2_addr;
        VlUnpacked<CData/*6:0*/, 3> ex_buffer__DOT__slot_reg_robid;
        VlUnpacked<CData/*5:0*/, 3> ex_buffer__DOT__slot_reg_T;
        VlUnpacked<VlWide<4>/*114:0*/, 3> ex_buffer__DOT__slot_reg_control;
        VlUnpacked<CData/*0:0*/, 3> ex_buffer__DOT__slot_need_to_flush;
        VlUnpacked<CData/*0:0*/, 3> ex_buffer__DOT__slot_need_to_stall;
        VlUnpacked<CData/*0:0*/, 3> ex_buffer__DOT__slot_valid_in;
        VlUnpacked<IData/*31:0*/, 3> ex_buffer__DOT__slot_pc_in;
        VlUnpacked<CData/*6:0*/, 3> ex_buffer__DOT__slot_robid_in;
        VlUnpacked<CData/*5:0*/, 3> ex_buffer__DOT__slot_T_in;
        VlUnpacked<IData/*31:0*/, 3> ex_buffer__DOT__slot_rs1_in;
        VlUnpacked<IData/*31:0*/, 3> ex_buffer__DOT__slot_rs2_in;
        VlUnpacked<CData/*5:0*/, 3> ex_buffer__DOT__slot_rs1_addr_in;
        VlUnpacked<CData/*5:0*/, 3> ex_buffer__DOT__slot_rs2_addr_in;
        VlUnpacked<VlWide<4>/*114:0*/, 3> ex_buffer__DOT__slot_control_in;
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
