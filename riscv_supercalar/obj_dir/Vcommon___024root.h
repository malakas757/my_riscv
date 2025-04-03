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
        VL_IN8(instr0_enq_valid,0,0);
        VL_IN8(instr1_enq_valid,0,0);
        VL_IN8(instr0_robid,6,0);
        VL_IN8(instr1_robid,6,0);
        VL_IN8(instr0_src1_id,5,0);
        VL_IN8(instr0_src2_id,5,0);
        VL_IN8(instr1_src1_id,5,0);
        VL_IN8(instr1_src2_id,5,0);
        VL_IN8(instr0_T,5,0);
        VL_IN8(instr1_T,5,0);
        VL_IN8(instr0_src1_busy,0,0);
        VL_IN8(instr0_src2_busy,0,0);
        VL_IN8(instr1_src1_busy,0,0);
        VL_IN8(instr1_src2_busy,0,0);
        VL_OUT8(intisq_left,1,0);
        VL_IN8(writeback0_valid,0,0);
        VL_IN8(writeback0_need_to_wb,0,0);
        VL_IN8(writeback0_prd,5,0);
        VL_IN8(writeback1_valid,0,0);
        VL_IN8(writeback1_need_to_wb,0,0);
        VL_IN8(writeback1_prd,5,0);
        VL_IN8(writeback2_valid,0,0);
        VL_IN8(writeback2_need_to_wb,0,0);
        VL_IN8(writeback2_prd,5,0);
        VL_IN8(writeback3_valid,0,0);
        VL_IN8(writeback3_need_to_wb,0,0);
        VL_IN8(writeback3_prd,5,0);
        VL_IN8(flush_valid,0,0);
        VL_IN8(flush_robid,6,0);
        VL_IN8(mul_slot_busy,0,0);
        VL_OUT8(ex_slot0_valid,0,0);
        VL_OUT8(ex_slot1_valid,0,0);
        VL_OUT8(slot0_T,5,0);
        VL_OUT8(slot1_T,5,0);
        VL_OUT8(slot0_robid,6,0);
        VL_OUT8(slot1_robid,6,0);
        CData/*2:0*/ intisq__DOT__empty_id0;
        CData/*2:0*/ intisq__DOT__empty_id1;
        CData/*1:0*/ intisq__DOT__ready_vec;
        CData/*2:0*/ intisq__DOT__slot1_entry_id;
        CData/*2:0*/ intisq__DOT__slot0_entry_id;
        CData/*0:0*/ intisq__DOT__old0_is_mul;
        CData/*0:0*/ intisq__DOT__old0_is_bju;
        CData/*0:0*/ intisq__DOT__old0_is_alu;
        CData/*0:0*/ intisq__DOT__old1_is_mul;
        CData/*0:0*/ intisq__DOT__old1_is_bju;
        CData/*0:0*/ intisq__DOT__old1_is_alu;
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_IN(instr0_pc,31,0);
        VL_IN(instr1_pc,31,0);
        VL_OUT(slot0_pc,31,0);
        VL_OUT(slot1_pc,31,0);
        VL_INW(instr0_control,114,0,4);
        VL_INW(instr1_control,114,0,4);
        VL_OUTW(slot0_control,114,0,4);
        VL_OUTW(slot1_control,114,0,4);
        VlUnpacked<CData/*2:0*/, 8> intisq__DOT__in_id;
        VlUnpacked<CData/*0:0*/, 8> intisq__DOT__intisq_valid;
        VlUnpacked<CData/*3:0*/, 8> intisq__DOT__intisq_age;
        VlUnpacked<CData/*3:0*/, 8> intisq__DOT__intisq_age_next;
        VlUnpacked<CData/*0:0*/, 8> intisq__DOT__intisq_src1_state;
        VlUnpacked<CData/*0:0*/, 8> intisq__DOT__intisq_src2_state;
    };
    struct {
        VlUnpacked<CData/*5:0*/, 8> intisq__DOT__intisq_src1_id;
        VlUnpacked<CData/*5:0*/, 8> intisq__DOT__intisq_src2_id;
        VlUnpacked<CData/*5:0*/, 8> intisq__DOT__intisq_T;
        VlUnpacked<IData/*31:0*/, 8> intisq__DOT__intisq_pc;
        VlUnpacked<CData/*6:0*/, 8> intisq__DOT__intisq_robid;
        VlUnpacked<VlWide<4>/*114:0*/, 8> intisq__DOT__intisq_control;
        VlUnpacked<CData/*0:0*/, 8> intisq__DOT__intisq_entry_ready;
        VlUnpacked<CData/*0:0*/, 8> intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid;
        VlUnpacked<CData/*2:0*/, 8> intisq__DOT____Vcellinp__inst_emptyfinder__in_id;
        VlUnpacked<CData/*0:0*/, 8> intisq__DOT__flush_valid_vector;
        VlUnpacked<CData/*0:0*/, 8> intisq__DOT____Vcellinp__inst_oldest_picker__in_valid;
        VlUnpacked<CData/*3:0*/, 8> intisq__DOT____Vcellinp__inst_oldest_picker__in_age;
        VlUnpacked<CData/*2:0*/, 4> intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0;
        VlUnpacked<CData/*2:0*/, 4> intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1;
        VlUnpacked<CData/*0:0*/, 4> intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0;
        VlUnpacked<CData/*0:0*/, 4> intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT__l2_out_id_0;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT__l2_out_id_1;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_0;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_1;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_1;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_1;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_1;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_1;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_1;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_1;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0;
        VlUnpacked<CData/*2:0*/, 8> intisq__DOT__inst_oldest_picker__DOT__id;
        VlUnpacked<CData/*3:0*/, 4> intisq__DOT__inst_oldest_picker__DOT__l1_big_age;
        VlUnpacked<CData/*2:0*/, 4> intisq__DOT__inst_oldest_picker__DOT__l1_big_id;
        VlUnpacked<CData/*0:0*/, 4> intisq__DOT__inst_oldest_picker__DOT__l1_big_valid;
        VlUnpacked<CData/*3:0*/, 4> intisq__DOT__inst_oldest_picker__DOT__l1_small_age;
        VlUnpacked<CData/*2:0*/, 4> intisq__DOT__inst_oldest_picker__DOT__l1_small_id;
        VlUnpacked<CData/*0:0*/, 4> intisq__DOT__inst_oldest_picker__DOT__l1_small_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__l2_big_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__l2_big_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__l2_big_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__l2_small_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__l2_small_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__l2_small_valid;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age;
    };
    struct {
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_id;
        VlUnpacked<CData/*0:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid;
        VlUnpacked<CData/*3:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age;
        VlUnpacked<CData/*2:0*/, 2> intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id;
        VlUnpacked<CData/*4:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp;
        VlUnpacked<CData/*4:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__small_cmp;
        VlUnpacked<CData/*4:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp;
        VlUnpacked<CData/*4:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__small_cmp;
        VlUnpacked<CData/*4:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp;
        VlUnpacked<CData/*4:0*/, 2> intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__small_cmp;
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
