// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_pipeline.h"

VL_INLINE_OPT void Vcommon_pipeline___sequent__TOP__pipeline__5(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___sequent__TOP__pipeline__5\n"); );
    // Init
    CData/*0:0*/ __PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_valid;
    CData/*0:0*/ __PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_valid;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_alloc_valid_1;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_alloc_valid_0;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_id_1;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_id_0;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_alloc_valid_1;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_alloc_valid_0;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_id_1;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_id_0;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_alloc_valid_1;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_alloc_valid_0;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_id_1;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_id_0;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_alloc_valid_1;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_alloc_valid_0;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_id_1;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_id_0;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_valid;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_valid;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_age;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_age;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_id;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_id;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_valid;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_valid;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_age;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_age;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_id;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_id;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_valid;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_valid;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_age;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_age;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_id;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_id;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_valid;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_valid;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_age;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_age;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_id;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_id;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_valid;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_valid;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_age;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_age;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_id;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_id;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_valid;
    CData/*0:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_valid;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_age;
    CData/*3:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_age;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_id;
    CData/*2:0*/ inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_id;
    CData/*1:0*/ inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__0__KET____DOT__picker__hit_index;
    CData/*0:0*/ inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__0__KET____DOT__picker__hit;
    CData/*1:0*/ inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__2__KET____DOT__picker__hit_index;
    CData/*0:0*/ inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__2__KET____DOT__picker__hit;
    CData/*1:0*/ inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l2__BRA__0__KET____DOT__picker__hit_index;
    CData/*0:0*/ inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l2__BRA__0__KET____DOT__picker__hit;
    // Body
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [3U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((3U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (3U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[3U] = 1U;
            }
        } else if (((3U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (3U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[3U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [4U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((4U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (4U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[4U] = 1U;
            }
        } else if (((4U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (4U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[4U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [5U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((5U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (5U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[5U] = 1U;
            }
        } else if (((5U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (5U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[5U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [6U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((6U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (6U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[6U] = 1U;
            }
        } else if (((6U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (6U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[6U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [7U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((7U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (7U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[7U] = 1U;
            }
        } else if (((7U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (7U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[7U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [8U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((8U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (8U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[8U] = 1U;
            }
        } else if (((8U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (8U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[8U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [9U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((9U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (9U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[9U] = 1U;
            }
        } else if (((9U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (9U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[9U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0xaU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0xaU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0xaU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xaU] = 1U;
            }
        } else if (((0xaU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0xaU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xaU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0xbU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0xbU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0xbU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xbU] = 1U;
            }
        } else if (((0xbU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0xbU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xbU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0xcU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0xcU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0xcU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xcU] = 1U;
            }
        } else if (((0xcU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0xcU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xcU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0xdU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0xdU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0xdU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xdU] = 1U;
            }
        } else if (((0xdU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0xdU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xdU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0xeU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0xeU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0xeU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xeU] = 1U;
            }
        } else if (((0xeU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0xeU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xeU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0xfU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0xfU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0xfU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xfU] = 1U;
            }
        } else if (((0xfU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0xfU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0xfU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x10U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x10U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x10U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x10U] = 1U;
            }
        } else if (((0x10U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x10U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x10U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x11U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x11U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x11U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x11U] = 1U;
            }
        } else if (((0x11U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x11U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x11U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x12U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x12U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x12U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x12U] = 1U;
            }
        } else if (((0x12U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x12U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x12U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x13U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x13U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x13U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x13U] = 1U;
            }
        } else if (((0x13U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x13U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x13U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x14U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x14U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x14U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x14U] = 1U;
            }
        } else if (((0x14U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x14U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x14U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x15U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x15U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x15U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x15U] = 1U;
            }
        } else if (((0x15U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x15U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x15U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x16U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x16U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x16U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x16U] = 1U;
            }
        } else if (((0x16U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x16U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x16U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x17U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x17U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x17U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x17U] = 1U;
            }
        } else if (((0x17U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x17U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x17U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x18U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x18U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x18U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x18U] = 1U;
            }
        } else if (((0x18U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x18U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x18U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x19U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x19U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x19U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x19U] = 1U;
            }
        } else if (((0x19U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x19U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x19U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x1aU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x1aU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x1aU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1aU] = 1U;
            }
        } else if (((0x1aU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x1aU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1aU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x1bU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x1bU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x1bU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1bU] = 1U;
            }
        } else if (((0x1bU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x1bU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1bU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x1cU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x1cU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x1cU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1cU] = 1U;
            }
        } else if (((0x1cU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x1cU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1cU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x1dU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x1dU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x1dU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1dU] = 1U;
            }
        } else if (((0x1dU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x1dU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1dU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x1eU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x1eU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x1eU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1eU] = 1U;
            }
        } else if (((0x1eU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x1eU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1eU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x1fU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x1fU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x1fU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1fU] = 1U;
            }
        } else if (((0x1fU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x1fU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x1fU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x20U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x20U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x20U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x20U] = 1U;
            }
        } else if (((0x20U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x20U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x20U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x21U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x21U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x21U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x21U] = 1U;
            }
        } else if (((0x21U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x21U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x21U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x22U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x22U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x22U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x22U] = 1U;
            }
        } else if (((0x22U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x22U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x22U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x23U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x23U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x23U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x23U] = 1U;
            }
        } else if (((0x23U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x23U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x23U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x24U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x24U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x24U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x24U] = 1U;
            }
        } else if (((0x24U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x24U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x24U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x25U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x25U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x25U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x25U] = 1U;
            }
        } else if (((0x25U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x25U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x25U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x26U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x26U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x26U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x26U] = 1U;
            }
        } else if (((0x26U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x26U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x26U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x27U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x27U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x27U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x27U] = 1U;
            }
        } else if (((0x27U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x27U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x27U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x28U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x28U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x28U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x28U] = 1U;
            }
        } else if (((0x28U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x28U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x28U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x29U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x29U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x29U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x29U] = 1U;
            }
        } else if (((0x29U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x29U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x29U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x2aU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x2aU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x2aU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2aU] = 1U;
            }
        } else if (((0x2aU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x2aU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2aU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x2bU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x2bU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x2bU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2bU] = 1U;
            }
        } else if (((0x2bU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x2bU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2bU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x2cU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x2cU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x2cU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2cU] = 1U;
            }
        } else if (((0x2cU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x2cU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2cU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x2dU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x2dU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x2dU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2dU] = 1U;
            }
        } else if (((0x2dU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x2dU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2dU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x2eU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x2eU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x2eU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2eU] = 1U;
            }
        } else if (((0x2eU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x2eU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2eU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x2fU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x2fU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x2fU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2fU] = 1U;
            }
        } else if (((0x2fU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x2fU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x2fU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x30U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x30U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x30U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x30U] = 1U;
            }
        } else if (((0x30U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x30U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x30U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x31U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x31U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x31U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x31U] = 1U;
            }
        } else if (((0x31U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x31U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x31U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x32U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x32U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x32U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x32U] = 1U;
            }
        } else if (((0x32U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x32U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x32U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x33U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x33U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x33U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x33U] = 1U;
            }
        } else if (((0x33U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x33U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x33U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x34U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x34U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x34U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x34U] = 1U;
            }
        } else if (((0x34U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x34U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x34U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x35U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x35U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x35U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x35U] = 1U;
            }
        } else if (((0x35U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x35U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x35U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x36U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x36U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x36U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x36U] = 1U;
            }
        } else if (((0x36U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x36U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x36U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x37U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x37U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x37U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x37U] = 1U;
            }
        } else if (((0x37U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x37U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x37U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x38U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x38U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x38U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x38U] = 1U;
            }
        } else if (((0x38U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x38U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x38U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x39U][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x39U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x39U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x39U] = 1U;
            }
        } else if (((0x39U > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x39U < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x39U] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x3aU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x3aU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x3aU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3aU] = 1U;
            }
        } else if (((0x3aU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x3aU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3aU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x3bU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x3bU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x3bU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3bU] = 1U;
            }
        } else if (((0x3bU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x3bU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3bU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x3cU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x3cU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x3cU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3cU] = 1U;
            }
        } else if (((0x3cU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x3cU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3cU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x3dU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x3dU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x3dU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3dU] = 1U;
            }
        } else if (((0x3dU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x3dU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3dU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x3eU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x3eU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x3eU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3eU] = 1U;
            }
        } else if (((0x3eU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x3eU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3eU] = 1U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
         [0x3fU][2U])) {
        if (((0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
             > (0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
            if (((0x3fU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                 & (0x3fU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)))) {
                vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3fU] = 1U;
            }
        } else if (((0x3fU > (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch)) 
                    | (0x3fU < (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[0x3fU] = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.reset_n)) | (IData)(vlSelf->__PVT__inst_int2__DOT__need_to_flush)))) {
        vlSelf->__PVT__inst_int2__DOT__reg_funct3 = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->__PVT__flush_valid)) 
                      & (~ (IData)(vlSelf->__PVT__mem_issue_stall))))) {
        vlSelf->__PVT__inst_int2__DOT__reg_funct3 = 
            (7U & (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                   [2U][2U] >> 0x17U));
    }
    vlSelf->__PVT__inst_sq__DOT__load_addr_hit[0U] = 0U;
    vlSelf->__PVT__inst_sq__DOT__load_addr_hit[1U] = 0U;
    vlSelf->__PVT__inst_sq__DOT__load_addr_hit[2U] = 0U;
    vlSelf->__PVT__inst_sq__DOT__load_addr_hit[3U] = 0U;
    if (((vlSelf->__PVT__inst_int2__DOT__reg_mem_addr 
          == vlSelf->__PVT__inst_sq__DOT__sq_reg_addr
          [0U]) & vlSelf->__PVT__inst_sq__DOT__sq_reg_valid
         [0U])) {
        vlSelf->__PVT__inst_sq__DOT__load_addr_hit[0U] = 1U;
    }
    if (((vlSelf->__PVT__inst_int2__DOT__reg_mem_addr 
          == vlSelf->__PVT__inst_sq__DOT__sq_reg_addr
          [1U]) & vlSelf->__PVT__inst_sq__DOT__sq_reg_valid
         [1U])) {
        vlSelf->__PVT__inst_sq__DOT__load_addr_hit[1U] = 1U;
    }
    if (((vlSelf->__PVT__inst_int2__DOT__reg_mem_addr 
          == vlSelf->__PVT__inst_sq__DOT__sq_reg_addr
          [2U]) & vlSelf->__PVT__inst_sq__DOT__sq_reg_valid
         [2U])) {
        vlSelf->__PVT__inst_sq__DOT__load_addr_hit[2U] = 1U;
    }
    if (((vlSelf->__PVT__inst_int2__DOT__reg_mem_addr 
          == vlSelf->__PVT__inst_sq__DOT__sq_reg_addr
          [3U]) & vlSelf->__PVT__inst_sq__DOT__sq_reg_valid
         [3U])) {
        vlSelf->__PVT__inst_sq__DOT__load_addr_hit[3U] = 1U;
    }
    vlSelf->__PVT__walk1_valid = (((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state)) 
                                   & (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                      [(0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__walk_ptr)))][2U] 
                                      >> 0x13U)) & 
                                  (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                   [(0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__walk_ptr)))][2U] 
                                   >> 5U));
    vlSelf->__PVT__walk0_valid = (((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state)) 
                                   & (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                      [(0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__walk_ptr))][2U] 
                                      >> 0x13U)) & 
                                  (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                   [(0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__walk_ptr))][2U] 
                                   >> 5U));
    if ((1U & ((~ (IData)(vlSymsp->TOP.reset_n)) | (IData)(vlSelf->__PVT__inst_int2__DOT__need_to_flush)))) {
        vlSelf->__PVT__inst_int2__DOT__reg_robid = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->__PVT__flush_valid)) 
                      & (~ (IData)(vlSelf->__PVT__mem_issue_stall))))) {
        vlSelf->__PVT__inst_int2__DOT__reg_robid = 
            vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid
            [2U];
    }
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_age
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_age
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_age
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_age
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_age
        [4U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_age
        [5U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_age
        [6U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_age
        [7U];
    if ((1U & ((~ (IData)(vlSymsp->TOP.reset_n)) | (IData)(vlSelf->__PVT__inst_int2__DOT__need_to_flush)))) {
        vlSelf->__PVT__inst_int2__DOT__reg_T = 0U;
        vlSelf->__PVT__inst_int2__DOT__reg_is_store = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->__PVT__flush_valid)) 
                      & (~ (IData)(vlSelf->__PVT__mem_issue_stall))))) {
        vlSelf->__PVT__inst_int2__DOT__reg_T = vlSelf->__PVT__inst_buffer__DOT__slot_reg_T
            [2U];
        vlSelf->__PVT__inst_int2__DOT__reg_is_store 
            = (1U & (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                     [2U][2U] >> 0x14U));
    }
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid
        [4U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid
        [5U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid
        [6U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid
        [7U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready_order_reverse
        [7U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready_order_reverse
        [6U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid[2U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready_order_reverse
        [5U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid[3U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready_order_reverse
        [4U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid[4U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready_order_reverse
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid[5U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready_order_reverse
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid[6U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready_order_reverse
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid[7U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready_order_reverse
        [0U];
    vlSelf->inst_sq__DOT____Vcellinp__inst_load_picker__match[0U] 
        = vlSelf->__PVT__inst_sq__DOT__load_addr_hit
        [0U];
    vlSelf->inst_sq__DOT____Vcellinp__inst_load_picker__match[1U] 
        = vlSelf->__PVT__inst_sq__DOT__load_addr_hit
        [1U];
    vlSelf->inst_sq__DOT____Vcellinp__inst_load_picker__match[2U] 
        = vlSelf->__PVT__inst_sq__DOT__load_addr_hit
        [2U];
    vlSelf->inst_sq__DOT____Vcellinp__inst_load_picker__match[3U] 
        = vlSelf->__PVT__inst_sq__DOT__load_addr_hit
        [3U];
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_T__v0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_T[0U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_T__v0;
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_T__v1) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_T[1U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_T__v1;
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_T__v2) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_T[2U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_T__v2;
    }
    if (vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid
        [0U]) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid
            [0U];
    }
    if (vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid
        [0U]) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid
            [0U];
    }
    if (vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid
        [0U]) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid
            [0U];
    }
    if (vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid
        [0U]) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid
            [0U];
    }
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid
        [4U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid
        [5U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid[0U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid
        [6U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid[1U] 
        = vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid
        [7U];
    vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__match[0U] 
        = vlSelf->inst_sq__DOT____Vcellinp__inst_load_picker__match
        [0U];
    vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__match[1U] 
        = vlSelf->inst_sq__DOT____Vcellinp__inst_load_picker__match
        [1U];
    vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__match[0U] 
        = vlSelf->inst_sq__DOT____Vcellinp__inst_load_picker__match
        [2U];
    vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__match[1U] 
        = vlSelf->inst_sq__DOT____Vcellinp__inst_load_picker__match
        [3U];
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_T[0U] 
        = vlSelf->__PVT__inst_buffer__DOT__slot_reg_T
        [0U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_id_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_id_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_alloc_valid_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_alloc_valid_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_id_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_id_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_alloc_valid_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_alloc_valid_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1[2U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_id_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0[2U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_id_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0[2U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_alloc_valid_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1[2U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_alloc_valid_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1[3U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_id_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0[3U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_id_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0[3U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_alloc_valid_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1[3U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_alloc_valid_1;
    if ((((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age
           [1U] >= vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age
           [0U]) | (~ vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid
                    [0U])) & vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid
         [1U])) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid
            [0U];
    }
    if ((((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age
           [1U] >= vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age
           [0U]) | (~ vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid
                    [0U])) & vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid
         [1U])) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid
            [0U];
    }
    if ((((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age
           [1U] >= vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age
           [0U]) | (~ vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid
                    [0U])) & vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid
         [1U])) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid
            [0U];
    }
    if ((((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age
           [1U] >= vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age
           [0U]) | (~ vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid
                    [0U])) & vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid
         [1U])) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid
            [0U];
    }
    if ((1U & ((((((IData)(vlSelf->__PVT__inst_sq__DOT__sq_head) 
                   > vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__index
                   [0U]) ^ ((IData)(vlSelf->__PVT__inst_sq__DOT__sq_head) 
                            > vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__index
                            [1U])) ^ (vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__index
                                      [0U] > vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__index
                                      [1U])) & vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__match
                [0U]) | (~ vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__match
                         [1U])))) {
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__0__KET____DOT__picker__hit 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__match
            [0U];
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__0__KET____DOT__picker__hit_index 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__index
            [0U];
    } else {
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__0__KET____DOT__picker__hit 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__match
            [1U];
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__0__KET____DOT__picker__hit_index 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__index
            [1U];
    }
    if ((1U & ((((((IData)(vlSelf->__PVT__inst_sq__DOT__sq_head) 
                   > vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__index
                   [0U]) ^ ((IData)(vlSelf->__PVT__inst_sq__DOT__sq_head) 
                            > vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__index
                            [1U])) ^ (vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__index
                                      [0U] > vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__index
                                      [1U])) & vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__match
                [0U]) | (~ vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__match
                         [1U])))) {
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__2__KET____DOT__picker__hit 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__match
            [0U];
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__2__KET____DOT__picker__hit_index 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__index
            [0U];
    } else {
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__2__KET____DOT__picker__hit 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__match
            [1U];
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__2__KET____DOT__picker__hit_index 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__index
            [1U];
    }
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_1[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_1[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_1[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_1[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_1[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_1[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_1[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_1[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1
        [3U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_id[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_id[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_age[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_valid[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_small_valid;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_age[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_valid[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_big_valid;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_id[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_id[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_age[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_valid[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_small_valid;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_age[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_valid[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_big_valid;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_id[2U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_id[2U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_age[2U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_valid[2U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_small_valid;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_age[2U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_valid[2U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_big_valid;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_id[3U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_id[3U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_age[3U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_valid[3U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_small_valid;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_age[3U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_valid[3U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_big_valid;
    vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l1_hit[0U] 
        = inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__0__KET____DOT__picker__hit;
    vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l1_hit_index[0U] 
        = inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__0__KET____DOT__picker__hit_index;
    vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l1_hit[1U] 
        = inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__2__KET____DOT__picker__hit;
    vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l1_hit_index[1U] 
        = inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l1__BRA__2__KET____DOT__picker__hit_index;
    if ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0
         [0U] & vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_1
         [0U])) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_1
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_1
            [0U];
    } else if ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0
                [1U] & vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_1
                [1U])) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_1
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_1
            [1U];
    } else if (vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0
               [0U]) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0
            [0U];
    }
    if ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0
         [0U] & vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_1
         [0U])) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_1
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_1
            [0U];
    } else if ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0
                [1U] & vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_1
                [1U])) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_1
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_1
            [1U];
    } else if (vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0
               [0U]) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0
            [0U];
    }
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_id[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_id
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_id[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_id
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_id[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_id
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_id[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_id
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_id
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_id
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_id
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_id
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_age[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_age
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_age[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_age
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_age[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_age
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_age[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_age
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_valid[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_valid
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_valid[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_valid
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_valid[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_valid
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_valid[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_valid
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_age
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_age
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_age
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_age
        [3U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_valid
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_valid
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_valid
        [2U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_valid
        [3U];
    vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__match[0U] 
        = vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l1_hit
        [0U];
    vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__match[1U] 
        = vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l1_hit
        [1U];
    vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__index[0U] 
        = vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l1_hit_index
        [0U];
    vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__index[1U] 
        = vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l1_hit_index
        [1U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_1[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_0[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_0[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_1[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_1[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_0[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_0[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_1[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__small_cmp[0U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_valid
            [0U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_age
           [0U]);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__small_cmp[1U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_valid
            [1U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_age
           [1U]);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__small_cmp[0U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_valid
            [0U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_age
           [0U]);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__small_cmp[1U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_valid
            [1U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_age
           [1U]);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp[0U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid
            [0U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age
           [0U]);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp[1U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid
            [1U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age
           [1U]);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp[0U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid
            [0U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age
           [0U]);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp[1U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid
            [1U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age
           [1U]);
    if ((1U & ((((((IData)(vlSelf->__PVT__inst_sq__DOT__sq_head) 
                   > vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__index
                   [0U]) ^ ((IData)(vlSelf->__PVT__inst_sq__DOT__sq_head) 
                            > vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__index
                            [1U])) ^ (vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__index
                                      [0U] > vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__index
                                      [1U])) & vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__match
                [0U]) | (~ vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__match
                         [1U])))) {
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l2__BRA__0__KET____DOT__picker__hit 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__match
            [0U];
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l2__BRA__0__KET____DOT__picker__hit_index 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__index
            [0U];
    } else {
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l2__BRA__0__KET____DOT__picker__hit 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__match
            [1U];
        inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l2__BRA__0__KET____DOT__picker__hit_index 
            = vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__index
            [1U];
    }
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_1[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_1
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_1[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_1
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_0
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_0
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_0
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_0
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_1[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_1
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_1[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_1
        [1U];
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp
          [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp
          [1U]) & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__small_cmp
                   [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp
                   [1U]))) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid
            [0U];
    } else if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp
                 [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp
                 [1U]) & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp
                          [1U] > vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__small_cmp
                          [0U]))) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid
            [0U];
    } else if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp
                 [1U] > vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp
                 [0U]) & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp
                          [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__small_cmp
                          [1U]))) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid
            [1U];
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp
          [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp
          [1U]) & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__small_cmp
                   [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp
                   [1U]))) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid
            [0U];
    } else if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp
                 [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp
                 [1U]) & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp
                          [1U] > vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__small_cmp
                          [0U]))) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid
            [0U];
    } else if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp
                 [1U] > vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp
                 [0U]) & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp
                          [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__small_cmp
                          [1U]))) {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid
            [0U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid
            [1U];
    } else {
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_age 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_age
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_valid
            [1U];
        inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid
            [1U];
    }
    vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l2_hit[0U] 
        = inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l2__BRA__0__KET____DOT__picker__hit;
    vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l2_hit_index[0U] 
        = inst_sq__DOT__inst_load_picker__DOT____Vcellout__gen_matcher_l2__BRA__0__KET____DOT__picker__hit_index;
    if ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0
         [0U] & vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_1
         [0U])) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0
            [0U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_1
            [0U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0
            [0U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_1
            [0U];
    } else if ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0
                [1U] & vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_1
                [1U])) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0
            [1U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_1
            [1U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0
            [1U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_1
            [1U];
    } else if (vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0
               [0U]) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0
            [0U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0
            [1U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0
            [0U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0
            [1U];
    } else {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0
            [1U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0
            [0U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0
            [1U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0
            [0U];
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_id[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_id[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_age[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_age[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_valid[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_small_valid;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_valid[0U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_big_valid;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_id[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_id[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_id;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_age[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_age[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_age;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_valid[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_small_valid;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_valid[1U] 
        = inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_big_valid;
    vlSelf->__PVT__inst_int2__DOT__load_data = (vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l2_hit
                                                [0U]
                                                 ? 
                                                vlSelf->__PVT__inst_sq__DOT__sq_reg_data
                                                [vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l2_hit_index
                                                [0U]]
                                                 : 
                                                vlSelf->__PVT__inst_dmem__DOT__ram
                                                [(0xffU 
                                                  & (vlSelf->__PVT__inst_int2__DOT__reg_mem_addr 
                                                     >> 2U))]);
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_id[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_id
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_id[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_id
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_id
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_id
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_age[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_age
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_age[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_age
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_age[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_age
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_age[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_age
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_valid[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_valid
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_valid[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_valid
        [1U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_valid
        [0U];
    vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_valid
        [1U];
    if ((0x1fU >= (0x18U & (vlSelf->__PVT__inst_int2__DOT__reg_mem_addr 
                            << 3U)))) {
        vlSelf->__PVT__inst_int2__DOT__load_byte = 
            (0xffU & (vlSelf->__PVT__inst_int2__DOT__load_data 
                      >> (0x18U & (vlSelf->__PVT__inst_int2__DOT__reg_mem_addr 
                                   << 3U))));
        vlSelf->__PVT__inst_int2__DOT__load_hword = 
            (0xffffU & (vlSelf->__PVT__inst_int2__DOT__load_data 
                        >> (0x18U & (vlSelf->__PVT__inst_int2__DOT__reg_mem_addr 
                                     << 3U))));
    } else {
        vlSelf->__PVT__inst_int2__DOT__load_byte = 0U;
        vlSelf->__PVT__inst_int2__DOT__load_hword = 0U;
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__small_cmp[0U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_valid
            [0U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_age
           [0U]);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__small_cmp[1U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_valid
            [1U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_age
           [1U]);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp[0U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid
            [0U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_age
           [0U]);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp[1U] 
        = ((vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid
            [1U] << 4U) | vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_age
           [1U]);
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp
          [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp
          [1U]) & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__small_cmp
                   [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp
                   [1U]))) {
        __PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid
            [0U];
        __PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_valid
            [0U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id
            [0U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_id
            [0U];
    } else if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp
                 [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp
                 [1U]) & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp
                          [1U] > vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__small_cmp
                          [0U]))) {
        __PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid
            [0U];
        __PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid
            [1U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id
            [0U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id
            [1U];
    } else if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp
                 [1U] > vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp
                 [0U]) & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp
                          [0U] >= vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__small_cmp
                          [1U]))) {
        __PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid
            [1U];
        __PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid
            [0U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id
            [1U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id
            [0U];
    } else {
        __PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid
            [1U];
        __PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_valid 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_valid
            [1U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id
            [1U];
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id 
            = vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_id
            [1U];
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__ready_vec 
        = (((IData)(__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_valid) 
            << 1U) | (IData)(__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_valid));
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu 
        = (1U & (~ ((((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                       [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id][2U] 
                       >> 0x10U) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                    [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id][2U] 
                                    >> 0xfU)) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                                 [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id][2U] 
                                                 >> 0x11U)) 
                    | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                       [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id][2U] 
                       >> 0xcU))));
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju 
        = (1U & (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                   [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id][2U] 
                   >> 0x10U) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id][2U] 
                                >> 0xfU)) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                             [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id][2U] 
                                             >> 0x11U)));
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul 
        = (1U & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                 [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id][2U] 
                 >> 0xcU));
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu 
        = (1U & (~ ((((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                       [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                       >> 0x10U) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                    [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                                    >> 0xfU)) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                                 [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                                                 >> 0x11U)) 
                    | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                       [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                       >> 0xcU))));
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju 
        = (1U & (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                   [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                   >> 0x10U) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                                >> 0xfU)) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                             [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                                             >> 0x11U)));
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul 
        = (1U & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                 [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                 >> 0xcU));
}

VL_INLINE_OPT void Vcommon_pipeline___sequent__TOP__pipeline__6(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___sequent__TOP__pipeline__6\n"); );
    // Init
    CData/*0:0*/ __PVT__can_dispatch;
    CData/*0:0*/ __PVT__inst_ir__DOT__fl_can_alloc;
    CData/*0:0*/ __PVT__inst_ir__DOT__fl_req_0;
    CData/*0:0*/ __PVT__inst_ir__DOT__fl_req_1;
    CData/*5:0*/ __PVT__inst_ir__DOT__inst_fl__DOT__read_0;
    CData/*5:0*/ __PVT__inst_ir__DOT__inst_fl__DOT__read_1;
    IData/*31:0*/ __PVT__inst_int0__DOT__left_operand;
    IData/*31:0*/ __PVT__inst_int0__DOT__right_operand;
    IData/*31:0*/ __PVT__inst_int1__DOT__alu_left_operand;
    IData/*31:0*/ __PVT__inst_int1__DOT__alu_right_operand;
    IData/*31:0*/ __PVT__inst_int1__DOT__inst_bju__DOT__pc_plus_imm;
    CData/*0:0*/ __PVT__inst_int2__DOT__need_to_alloc_sq;
    // Body
    if ((1U & ((~ (IData)(vlSymsp->TOP.reset_n)) | (IData)(vlSelf->__PVT__flush_valid)))) {
        vlSelf->__PVT__flush_valid = 0U;
        vlSelf->__PVT__flush_robid = 0U;
        vlSelf->__PVT__branch_target_pc = 0U;
    } else {
        vlSelf->__PVT__flush_valid = (vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid
                                      [1U] & ((IData)(vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_bj) 
                                              & ((IData)(vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_branch_taken_diff) 
                                                 | ((vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [1U][2U] 
                                                     & (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                        [1U][2U] 
                                                        >> 0xbU)) 
                                                    & (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                       [1U][1U] 
                                                       != vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc)))));
        vlSelf->__PVT__flush_robid = vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid
            [1U];
        vlSelf->__PVT__branch_target_pc = vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc;
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_robid__v0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid[0U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_robid__v0;
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_robid__v1) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid[1U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_robid__v1;
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_robid__v2) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid[2U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_robid__v2;
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid[0U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_valid__v0;
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v1) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid[1U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_valid__v1;
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v2) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid[2U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_valid__v2;
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v3) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid[0U] = 0U;
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid[1U] = 0U;
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_control__v0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[0U][0U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v0[0U];
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[0U][1U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v0[1U];
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[0U][2U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v0[2U];
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[0U][3U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v0[3U];
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_control__v1) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[1U][0U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v1[0U];
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[1U][1U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v1[1U];
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[1U][2U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v1[2U];
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[1U][3U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v1[3U];
    }
    if (vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_control__v2) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[2U][0U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v2[0U];
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[2U][1U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v2[1U];
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[2U][2U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v2[2U];
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[2U][3U] 
            = vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v2[3U];
    }
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_robid[0U] 
        = vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid
        [0U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[7U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[6U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[5U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[4U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[3U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[2U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[1U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[0U] = 0U;
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [0U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [0U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [0U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [0U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [0U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [0U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [1U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [1U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [1U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [1U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [1U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [1U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [2U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [2U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [2U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [2U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [2U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [2U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [3U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [3U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [3U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[3U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [3U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [3U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [3U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[3U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [4U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [4U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [4U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[4U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [4U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [4U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [4U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[4U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [5U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [5U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [5U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[5U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [5U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [5U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [5U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[5U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [6U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [6U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [6U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[6U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [6U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [6U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [6U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[6U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [7U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [7U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [7U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[7U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [7U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [7U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [7U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[7U] = 1U;
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[3U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[2U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[1U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[0U] = 0U;
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [0U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [0U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [0U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [0U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [0U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [0U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [1U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [1U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [1U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [1U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [1U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [1U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [2U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [2U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [2U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [2U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [2U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [2U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [3U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [3U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [3U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[3U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [3U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [3U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [3U]) > (0x3fU & (IData)(vlSelf->__PVT__flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[3U] = 1U;
    }
    vlSelf->__PVT__inst_int2__DOT__agu_mem_addr = (
                                                   vlSelf->__PVT__inst_buffer__DOT__slot_reg_rs1
                                                   [2U] 
                                                   + 
                                                   vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                   [2U][0U]);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_dones 
        = ((0x1eU & (IData)(vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_dones)) 
           | ((vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
               [0U][2U] >> 0xcU) & vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid
              [0U]));
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_valid 
        = ((0x1eU & (IData)(vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_valid)) 
           | ((vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
               [0U][2U] >> 0xcU) & vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid
              [0U]));
    __PVT__inst_int1__DOT__alu_right_operand = vlSelf->__PVT__inst_buffer__DOT__slot_reg_rs2
        [1U];
    if ((0x400000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
         [1U][2U])) {
        __PVT__inst_int1__DOT__alu_right_operand = 
            vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
            [1U][0U];
    }
    __PVT__inst_int1__DOT__alu_left_operand = ((0x2000U 
                                                & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                [1U][2U])
                                                ? vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                                               [1U]
                                                : vlSelf->__PVT__inst_buffer__DOT__slot_reg_rs1
                                               [1U]);
    __PVT__inst_int0__DOT__right_operand = vlSelf->__PVT__inst_buffer__DOT__slot_reg_rs2
        [0U];
    if ((0x400000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
         [0U][2U])) {
        __PVT__inst_int0__DOT__right_operand = vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
            [0U][0U];
    }
    __PVT__inst_int0__DOT__left_operand = ((0x2000U 
                                            & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                            [0U][2U])
                                            ? vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                                           [0U] : vlSelf->__PVT__inst_buffer__DOT__slot_reg_rs1
                                           [0U]);
    vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_bj 
        = (1U & (((vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                   [1U][2U] >> 0x11U) | (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                         [1U][2U] >> 0x10U)) 
                 | (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                    [1U][2U] >> 0xfU)));
    __PVT__inst_int1__DOT__inst_bju__DOT__pc_plus_imm 
        = (vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
           [1U] + vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
           [1U][0U]);
    vlSelf->__PVT__inst_int0__DOT__wb1_need_to_flush 
        = (((IData)(vlSelf->__PVT__flush_valid) & (
                                                   (((IData)(vlSelf->__PVT__inst_int0__DOT__wb1_reg_robid) 
                                                     ^ (IData)(vlSelf->__PVT__flush_robid)) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((0x3fU 
                                                     & (IData)(vlSelf->__PVT__inst_int0__DOT__wb1_reg_robid)) 
                                                    < 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__PVT__flush_robid)))))
            ? 1U : 0U);
    vlSelf->__PVT__inst_int0__DOT__wb0_need_to_flush 
        = (((IData)(vlSelf->__PVT__flush_valid) & (
                                                   (((IData)(vlSelf->__PVT__inst_int0__DOT__wb0_reg_robid) 
                                                     ^ (IData)(vlSelf->__PVT__flush_robid)) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((0x3fU 
                                                     & (IData)(vlSelf->__PVT__inst_int0__DOT__wb0_reg_robid)) 
                                                    < 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__PVT__flush_robid)))))
            ? 1U : 0U);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__0__KET____DOT__ms__DOT__need_to_flush 
        = (((IData)(vlSelf->__PVT__flush_valid) & (
                                                   (((IData)(vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__0__KET____DOT__ms__DOT__reg_robid) 
                                                     ^ (IData)(vlSelf->__PVT__flush_robid)) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((0x3fU 
                                                     & (IData)(vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__0__KET____DOT__ms__DOT__reg_robid)) 
                                                    < 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__PVT__flush_robid)))))
            ? 1U : 0U);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__1__KET____DOT__ms__DOT__need_to_flush 
        = (((IData)(vlSelf->__PVT__flush_valid) & (
                                                   (((IData)(vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__1__KET____DOT__ms__DOT__reg_robid) 
                                                     ^ (IData)(vlSelf->__PVT__flush_robid)) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((0x3fU 
                                                     & (IData)(vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__1__KET____DOT__ms__DOT__reg_robid)) 
                                                    < 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__PVT__flush_robid)))))
            ? 1U : 0U);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__2__KET____DOT__ms__DOT__need_to_flush 
        = (((IData)(vlSelf->__PVT__flush_valid) & (
                                                   (((IData)(vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__2__KET____DOT__ms__DOT__reg_robid) 
                                                     ^ (IData)(vlSelf->__PVT__flush_robid)) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((0x3fU 
                                                     & (IData)(vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__2__KET____DOT__ms__DOT__reg_robid)) 
                                                    < 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__PVT__flush_robid)))))
            ? 1U : 0U);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__3__KET____DOT__ms__DOT__need_to_flush 
        = (((IData)(vlSelf->__PVT__flush_valid) & (
                                                   (((IData)(vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__3__KET____DOT__ms__DOT__reg_robid) 
                                                     ^ (IData)(vlSelf->__PVT__flush_robid)) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((0x3fU 
                                                     & (IData)(vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__3__KET____DOT__ms__DOT__reg_robid)) 
                                                    < 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__PVT__flush_robid)))))
            ? 1U : 0U);
    vlSelf->__PVT__inst_int1__DOT__wb_need_to_flush 
        = (((IData)(vlSelf->__PVT__flush_valid) & (
                                                   (((IData)(vlSelf->__PVT__inst_int1__DOT__wb_reg_robid) 
                                                     ^ (IData)(vlSelf->__PVT__flush_robid)) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((0x3fU 
                                                     & (IData)(vlSelf->__PVT__inst_int1__DOT__wb_reg_robid)) 
                                                    < 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__PVT__flush_robid)))))
            ? 1U : 0U);
    vlSelf->__PVT__inst_int2__DOT__need_to_flush = 
        (((IData)(vlSelf->__PVT__flush_valid) & ((((IData)(vlSelf->__PVT__inst_int2__DOT__reg_robid) 
                                                   ^ (IData)(vlSelf->__PVT__flush_robid)) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((0x3fU 
                                                   & (IData)(vlSelf->__PVT__inst_int2__DOT__reg_robid)) 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->__PVT__flush_robid)))))
          ? 1U : 0U);
    vlSelf->__PVT__inst_int2__DOT__wb_need_to_flush 
        = (((IData)(vlSelf->__PVT__flush_valid) & (
                                                   (((IData)(vlSelf->__PVT__inst_int2__DOT__wb_reg_robid) 
                                                     ^ (IData)(vlSelf->__PVT__flush_robid)) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((0x3fU 
                                                     & (IData)(vlSelf->__PVT__inst_int2__DOT__wb_reg_robid)) 
                                                    < 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__PVT__flush_robid)))))
            ? 1U : 0U);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__next_state 
        = ((0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))
            ? ((IData)(vlSelf->__PVT__flush_valid) ? 1U
                : 0U) : ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))
                          ? ((IData)(vlSelf->__PVT__flush_valid)
                              ? 1U : 2U) : ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))
                                             ? ((IData)(vlSelf->__PVT__flush_valid)
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  & ((~ 
                                                      (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__walk_ptr)))][2U] 
                                                       >> 0x13U)) 
                                                     | (~ 
                                                        (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                                         [
                                                         (0x3fU 
                                                          & ((IData)(2U) 
                                                             + (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__walk_ptr)))][2U] 
                                                         >> 0x13U))))
                                                  ? 0U
                                                  : 2U))
                                             : 0U)));
    vlSelf->__PVT__inst_buffer__DOT__slot_need_to_flush[0U] = 0U;
    vlSelf->__PVT__inst_buffer__DOT__slot_need_to_flush[1U] = 0U;
    vlSelf->__PVT__inst_buffer__DOT__slot_need_to_flush[2U] = 0U;
    if ((((IData)(vlSelf->__PVT__flush_valid) & vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid
          [0U]) & (((vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid
                     [0U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                    >> 6U) ^ ((0x3fU & vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid
                               [0U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid)))))) {
        vlSelf->__PVT__inst_buffer__DOT__slot_need_to_flush[0U] = 1U;
    }
    if ((((IData)(vlSelf->__PVT__flush_valid) & vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid
          [1U]) & (((vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid
                     [1U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                    >> 6U) ^ ((0x3fU & vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid
                               [1U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid)))))) {
        vlSelf->__PVT__inst_buffer__DOT__slot_need_to_flush[1U] = 1U;
    }
    if ((((IData)(vlSelf->__PVT__flush_valid) & vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid
          [2U]) & (((vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid
                     [2U] ^ (IData)(vlSelf->__PVT__flush_robid)) 
                    >> 6U) ^ ((0x3fU & vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid
                               [2U]) < (0x3fU & (IData)(vlSelf->__PVT__flush_robid)))))) {
        vlSelf->__PVT__inst_buffer__DOT__slot_need_to_flush[2U] = 1U;
    }
    __PVT__inst_int2__DOT__need_to_alloc_sq = (((~ (IData)(vlSelf->__PVT__flush_valid)) 
                                                & (IData)(vlSelf->__PVT__inst_int2__DOT__reg_is_store)) 
                                               & (IData)(vlSelf->__PVT__inst_int2__DOT__reg_valid));
    vlSelf->__PVT__writeback1_valid = ((IData)(vlSelf->__PVT__inst_int0__DOT__wb1_reg_valid) 
                                       & (~ (IData)(vlSelf->__PVT__flush_valid)));
    vlSelf->__PVT__writeback0_valid = ((IData)(vlSelf->__PVT__inst_int0__DOT__wb0_reg_valid) 
                                       & (~ (IData)(vlSelf->__PVT__flush_valid)));
    vlSelf->__PVT__writeback2_valid = ((IData)(vlSelf->__PVT__inst_int1__DOT__wb_reg_valid) 
                                       & (~ (IData)(vlSelf->__PVT__flush_valid)));
    vlSelf->__PVT__writeback3_valid = ((IData)(vlSelf->__PVT__inst_int2__DOT__wb_reg_valid) 
                                       & (~ (IData)(vlSelf->__PVT__flush_valid)));
    vlSelf->__PVT__retire0_valid = ((((~ (IData)(vlSelf->__PVT__flush_valid)) 
                                      & (0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) 
                                     & (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                        [(0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail))][2U] 
                                        >> 0x13U)) 
                                    & (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                       [(0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail))][2U] 
                                       >> 6U));
    __PVT__can_dispatch = (1U & ((((((((((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_head) 
                                         ^ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                                        >> 6U) & ((0x3fU 
                                                   & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_head)) 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail))))
                                       ? 0U : (((((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_head) 
                                                  ^ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                                                 >> 6U) 
                                                & (((IData)(1U) 
                                                    + 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_head))) 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail))))
                                                ? 1U
                                                : 2U)) 
                                     >= (3U & ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__mem_instr_num) 
                                               + (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__int_instr_num))))
                                     ? 1U : 0U) & (
                                                   ((3U 
                                                     & ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0_valid) 
                                                        + (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1_valid))) 
                                                    >= (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__int_instr_num))
                                                    ? 1U
                                                    : 0U)) 
                                  & (((IData)(vlSelf->__PVT__inst_is_stage__DOT__memisq_left) 
                                      >= (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__mem_instr_num))
                                      ? 1U : 0U)) & 
                                 (~ (IData)(vlSelf->__PVT__flush_valid))));
    vlSelf->__PVT__ex_slot1_valid = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__flush_valid)))) {
        if ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__ready_vec))) {
            if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                 & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul))) {
                vlSelf->__PVT__ex_slot1_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else {
                vlSelf->__PVT__ex_slot0_valid = 0U;
            }
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
            if ((1U & (~ ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                          & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul))))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                              & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))))) {
                    if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                         & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu))) {
                        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                    } else if ((1U & (~ ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                                         & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju))))) {
                        if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                             & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju))) {
                            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                        } else if ((1U & (~ ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                                             & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju))))) {
                            if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                                 & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                            } else {
                                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                            }
                        } else {
                            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                        }
                    } else {
                        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                    }
                } else {
                    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                }
            } else {
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__ready_vec))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul)))) {
                if (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) {
                    vlSelf->__PVT__ex_slot1_valid = 1U;
                }
            }
            vlSelf->__PVT__ex_slot0_valid = 0U;
            if (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) {
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if ((1U & (~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju)))) {
                vlSelf->__PVT__ex_slot0_valid = 1U;
            }
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
            if ((1U & (~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul)))) {
                if (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) {
                    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                } else {
                    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                }
            } else {
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__ready_vec))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul)))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
            }
            vlSelf->__PVT__ex_slot0_valid = 0U;
            if (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) {
                vlSelf->__PVT__ex_slot0_valid = 1U;
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
            } else {
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
            }
        } else {
            vlSelf->__PVT__ex_slot1_valid = 0U;
            vlSelf->__PVT__ex_slot0_valid = 0U;
            vlSelf->__PVT__ex_slot0_valid = 0U;
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
        }
    } else {
        vlSelf->__PVT__ex_slot0_valid = 0U;
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
    }
    vlSelf->__PVT__inst_int1__DOT__alu_data = ((0x40000U 
                                                & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                [1U][3U])
                                                ? (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                    [1U][3U])
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [1U][3U])
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                      [1U][3U])
                                                      ? __PVT__inst_int1__DOT__alu_right_operand
                                                      : 
                                                     (__PVT__inst_int1__DOT__alu_left_operand 
                                                      & __PVT__inst_int1__DOT__alu_right_operand))
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                      [1U][3U])
                                                      ? 0U
                                                      : 
                                                     (__PVT__inst_int1__DOT__alu_left_operand 
                                                      | __PVT__inst_int1__DOT__alu_right_operand)))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [1U][3U])
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                      [1U][3U])
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, __PVT__inst_int1__DOT__alu_left_operand, 
                                                                    (0x1fU 
                                                                     & __PVT__inst_int1__DOT__alu_right_operand))
                                                      : 
                                                     (__PVT__inst_int1__DOT__alu_left_operand 
                                                      >> 
                                                      (0x1fU 
                                                       & __PVT__inst_int1__DOT__alu_right_operand)))
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                      [1U][3U])
                                                      ? 0U
                                                      : 
                                                     (__PVT__inst_int1__DOT__alu_left_operand 
                                                      ^ __PVT__inst_int1__DOT__alu_right_operand))))
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                    [1U][3U])
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [1U][3U])
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                      [1U][3U])
                                                      ? 0U
                                                      : 
                                                     (__PVT__inst_int1__DOT__alu_left_operand 
                                                      < __PVT__inst_int1__DOT__alu_right_operand))
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                      [1U][3U])
                                                      ? 0U
                                                      : 
                                                     VL_LTS_III(32, __PVT__inst_int1__DOT__alu_left_operand, __PVT__inst_int1__DOT__alu_right_operand)))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [1U][3U])
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                      [1U][3U])
                                                      ? 0U
                                                      : 
                                                     (__PVT__inst_int1__DOT__alu_left_operand 
                                                      << 
                                                      (0x1fU 
                                                       & __PVT__inst_int1__DOT__alu_right_operand)))
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                      [1U][3U])
                                                      ? 
                                                     (__PVT__inst_int1__DOT__alu_left_operand 
                                                      - __PVT__inst_int1__DOT__alu_right_operand)
                                                      : 
                                                     (__PVT__inst_int1__DOT__alu_left_operand 
                                                      + __PVT__inst_int1__DOT__alu_right_operand)))));
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_mpliers[0U] 
        = (IData)((((QData)((IData)((- (IData)((__PVT__inst_int0__DOT__right_operand 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(__PVT__inst_int0__DOT__right_operand))));
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_mpliers[1U] 
        = (IData)(((((QData)((IData)((- (IData)((__PVT__inst_int0__DOT__right_operand 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)(__PVT__inst_int0__DOT__right_operand))) 
                   >> 0x20U));
    vlSelf->__PVT__inst_int0__DOT__alu_result = ((0x40000U 
                                                  & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                  [0U][3U])
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                   [0U][3U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                    [0U][3U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [0U][3U])
                                                     ? __PVT__inst_int0__DOT__right_operand
                                                     : 
                                                    (__PVT__inst_int0__DOT__left_operand 
                                                     & __PVT__inst_int0__DOT__right_operand))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [0U][3U])
                                                     ? 0U
                                                     : 
                                                    (__PVT__inst_int0__DOT__left_operand 
                                                     | __PVT__inst_int0__DOT__right_operand)))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                    [0U][3U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [0U][3U])
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, __PVT__inst_int0__DOT__left_operand, 
                                                                   (0x1fU 
                                                                    & __PVT__inst_int0__DOT__right_operand))
                                                     : 
                                                    (__PVT__inst_int0__DOT__left_operand 
                                                     >> 
                                                     (0x1fU 
                                                      & __PVT__inst_int0__DOT__right_operand)))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [0U][3U])
                                                     ? 0U
                                                     : 
                                                    (__PVT__inst_int0__DOT__left_operand 
                                                     ^ __PVT__inst_int0__DOT__right_operand))))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                   [0U][3U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                    [0U][3U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [0U][3U])
                                                     ? 0U
                                                     : 
                                                    (__PVT__inst_int0__DOT__left_operand 
                                                     < __PVT__inst_int0__DOT__right_operand))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [0U][3U])
                                                     ? 0U
                                                     : 
                                                    VL_LTS_III(32, __PVT__inst_int0__DOT__left_operand, __PVT__inst_int0__DOT__right_operand)))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                    [0U][3U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [0U][3U])
                                                     ? 0U
                                                     : 
                                                    (__PVT__inst_int0__DOT__left_operand 
                                                     << 
                                                     (0x1fU 
                                                      & __PVT__inst_int0__DOT__right_operand)))
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [0U][3U])
                                                     ? 
                                                    (__PVT__inst_int0__DOT__left_operand 
                                                     - __PVT__inst_int0__DOT__right_operand)
                                                     : 
                                                    (__PVT__inst_int0__DOT__left_operand 
                                                     + __PVT__inst_int0__DOT__right_operand)))));
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_mcands[0U] 
        = (IData)((((QData)((IData)((- (IData)((__PVT__inst_int0__DOT__left_operand 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(__PVT__inst_int0__DOT__left_operand))));
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_mcands[1U] 
        = (IData)(((((QData)((IData)((- (IData)((__PVT__inst_int0__DOT__left_operand 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)(__PVT__inst_int0__DOT__left_operand))) 
                   >> 0x20U));
    if ((0x20000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
         [1U][2U])) {
        if ((0x2000000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
             [1U][2U])) {
            if ((0x1000000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                 [1U][2U])) {
                if ((0x800000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                     [1U][2U])) {
                    vlSelf->__PVT__inst_int1__DOT__bju_branch_taken 
                        = (1U & (~ (IData)(vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_rs1_lt_rs2)));
                    vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc 
                        = ((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_taken)
                            ? __PVT__inst_int1__DOT__inst_bju__DOT__pc_plus_imm
                            : ((IData)(4U) + vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                               [1U]));
                } else {
                    vlSelf->__PVT__inst_int1__DOT__bju_branch_taken 
                        = vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_rs1_lt_rs2;
                    vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc 
                        = ((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_taken)
                            ? __PVT__inst_int1__DOT__inst_bju__DOT__pc_plus_imm
                            : ((IData)(4U) + vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                               [1U]));
                }
            } else if ((0x800000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                        [1U][2U])) {
                vlSelf->__PVT__inst_int1__DOT__bju_branch_taken 
                    = (1U & (~ (IData)(vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2)));
                vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc 
                    = ((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_taken)
                        ? __PVT__inst_int1__DOT__inst_bju__DOT__pc_plus_imm
                        : ((IData)(4U) + vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                           [1U]));
            } else {
                vlSelf->__PVT__inst_int1__DOT__bju_branch_taken 
                    = vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2;
                vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc 
                    = ((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_taken)
                        ? __PVT__inst_int1__DOT__inst_bju__DOT__pc_plus_imm
                        : ((IData)(4U) + vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                           [1U]));
            }
        } else if ((0x1000000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                    [1U][2U])) {
            vlSelf->__PVT__inst_int1__DOT__bju_branch_taken = 0U;
            vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc 
                = ((IData)(4U) + vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                   [1U]);
        } else if ((0x800000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                    [1U][2U])) {
            vlSelf->__PVT__inst_int1__DOT__bju_branch_taken 
                = (1U & (~ (IData)(vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_rs1_eq_rs2)));
            vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc 
                = ((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_taken)
                    ? __PVT__inst_int1__DOT__inst_bju__DOT__pc_plus_imm
                    : ((IData)(4U) + vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                       [1U]));
        } else {
            vlSelf->__PVT__inst_int1__DOT__bju_branch_taken 
                = vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_rs1_eq_rs2;
            vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc 
                = ((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_taken)
                    ? __PVT__inst_int1__DOT__inst_bju__DOT__pc_plus_imm
                    : ((IData)(4U) + vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                       [1U]));
        }
    } else if ((0x10000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                [1U][2U])) {
        vlSelf->__PVT__inst_int1__DOT__bju_branch_taken = 1U;
        vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc 
            = __PVT__inst_int1__DOT__inst_bju__DOT__pc_plus_imm;
    } else if ((0x8000U & vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                [1U][2U])) {
        vlSelf->__PVT__inst_int1__DOT__bju_branch_taken = 1U;
        vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc 
            = (0xfffffffeU & (vlSelf->__PVT__inst_buffer__DOT__slot_reg_rs1
                              [1U] + vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                              [1U][0U]));
    } else {
        vlSelf->__PVT__inst_int1__DOT__bju_branch_taken = 0U;
        vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc 
            = ((IData)(4U) + vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
               [1U]);
    }
    vlSelf->__PVT__mem_issue_stall = ((IData)(__PVT__inst_int2__DOT__need_to_alloc_sq) 
                                      & (0U == (IData)(vlSelf->__PVT__sq_left)));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en 
        = ((IData)(vlSelf->__PVT__writeback1_valid) 
           & (IData)(vlSelf->__PVT__inst_int0__DOT__wb1_reg_need_to_wb));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en 
        = ((IData)(vlSelf->__PVT__writeback0_valid) 
           & (IData)(vlSelf->__PVT__inst_int0__DOT__wb0_reg_need_to_wb));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en 
        = ((IData)(vlSelf->__PVT__writeback2_valid) 
           & (IData)(vlSelf->__PVT__inst_int1__DOT__wb_reg_need_to_wb));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en 
        = ((IData)(vlSelf->__PVT__writeback3_valid) 
           & (IData)(vlSelf->__PVT__inst_int2__DOT__wb_reg_need_to_wb));
    vlSelf->__Vcellinp__inst_ir__fl_write_en_0 = ((IData)(vlSelf->__PVT__retire0_valid) 
                                                  & (IData)(vlSelf->__PVT__retire0_is_wb));
    vlSelf->__PVT__inst_ir__DOT__rename_0 = ((0x3ffffcfffULL 
                                              & vlSelf->__PVT__inst_ir__DOT__rename_0) 
                                             | ((QData)((IData)(
                                                                (((IData)(vlSelf->__PVT__retire0_valid) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->__PVT__retire0_is_wb)))) 
                                                << 0xcU));
    vlSelf->__PVT__retire1_valid = (((IData)(vlSelf->__PVT__retire0_valid) 
                                     & (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                        [(0x3fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))][2U] 
                                        >> 0x13U)) 
                                    & (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                       [(0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)))][2U] 
                                       >> 6U));
    vlSelf->__PVT__PC_stall = (1U & (((~ (IData)(__PVT__can_dispatch)) 
                                      | (2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) 
                                     | (1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))));
    vlSelf->__PVT__IF_stall = (1U & (((~ (IData)(__PVT__can_dispatch)) 
                                      | (2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) 
                                     | (1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))));
    vlSelf->__PVT__IR_stall = (1U & (((~ (IData)(__PVT__can_dispatch)) 
                                      | (2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) 
                                     | (1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))));
    vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_rob 
        = ((vlSelf->__PVT__ir_is_reg1[3U] >> 0xbU) 
           & (IData)(__PVT__can_dispatch));
    vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_rob 
        = ((vlSelf->__PVT__ir_is_reg0[3U] >> 0xbU) 
           & (IData)(__PVT__can_dispatch));
    vlSelf->__PVT__ID_stall = (1U & (((~ (IData)(__PVT__can_dispatch)) 
                                      | (1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) 
                                     | (2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))));
    vlSelf->__PVT__inst_buffer__DOT__slot_valid_in[1U] 
        = vlSelf->__PVT__ex_slot1_valid;
    vlSelf->__PVT__inst_buffer__DOT__slot_valid_in[0U] 
        = vlSelf->__PVT__ex_slot0_valid;
    vlSelf->__PVT__inst_buffer__DOT__slot_pc_in[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_T_in[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_T
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_robid_in[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[1U][0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id][0U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[1U][1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id][1U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[1U][2U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id][2U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[1U][3U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id][3U];
    vlSelf->__PVT__inst_buffer__DOT__slot_rs1_in[1U] 
        = vlSelf->__PVT__inst_phyreg__DOT__prf_file
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id]];
    vlSelf->__PVT__inst_buffer__DOT__slot_rs2_in[1U] 
        = vlSelf->__PVT__inst_phyreg__DOT__prf_file
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id]];
    vlSelf->__PVT__inst_buffer__DOT__slot_pc_in[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_T_in[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_T
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_robid_in[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[0U][0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id][0U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[0U][1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id][1U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[0U][2U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id][2U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[0U][3U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id][3U];
    vlSelf->__PVT__inst_buffer__DOT__slot_rs1_in[0U] 
        = vlSelf->__PVT__inst_phyreg__DOT__prf_file
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id]];
    vlSelf->__PVT__inst_buffer__DOT__slot_rs2_in[0U] 
        = vlSelf->__PVT__inst_phyreg__DOT__prf_file
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id]];
    vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_branch_taken_diff 
        = (1U & ((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_taken) 
                 ^ (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                    [1U][2U] >> 0xbU)));
    vlSelf->__PVT__lsuint2sq_instr0_valid = ((IData)(__PVT__inst_int2__DOT__need_to_alloc_sq) 
                                             & (~ (IData)(vlSelf->__PVT__mem_issue_stall)));
    vlSelf->__PVT__inst_buffer__DOT__slot_need_to_stall[2U] 
        = vlSelf->__PVT__mem_issue_stall;
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__deq_valid 
        = (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_entry_ready
             [vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_tail] 
             & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
             [vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_tail]) 
            & (~ (IData)(vlSelf->__PVT__flush_valid))) 
           & (~ (IData)(vlSelf->__PVT__mem_issue_stall)));
    vlSelf->__PVT__inst_is_stage__DOT__instr0_rs1_busy 
        = ((~ ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en) 
               & ((IData)(vlSelf->__PVT__inst_int0__DOT__wb1_reg_prd) 
                  == (0x3fU & (vlSelf->__PVT__ir_is_reg0[3U] 
                               >> 0x19U))))) & ((~ 
                                                 ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                  & ((IData)(vlSelf->__PVT__inst_int0__DOT__wb0_reg_prd) 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                         >> 0x19U))))) 
                                                & ((~ 
                                                    ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                     & ((IData)(vlSelf->__PVT__inst_int1__DOT__wb_reg_prd) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                            >> 0x19U))))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                        & ((IData)(vlSelf->__PVT__inst_int2__DOT__wb_reg_prd) 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                               >> 0x19U))))) 
                                                      & (vlSelf->__PVT__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table
                                                         [
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                             >> 0x19U))] 
                                                         & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                            >> 5U))))));
    vlSelf->__PVT__inst_is_stage__DOT__instr0_rs2_busy 
        = ((~ ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en) 
               & ((IData)(vlSelf->__PVT__inst_int0__DOT__wb1_reg_prd) 
                  == (0x3fU & (vlSelf->__PVT__ir_is_reg0[3U] 
                               >> 0x13U))))) & ((~ 
                                                 ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                  & ((IData)(vlSelf->__PVT__inst_int0__DOT__wb0_reg_prd) 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                         >> 0x13U))))) 
                                                & ((~ 
                                                    ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                     & ((IData)(vlSelf->__PVT__inst_int1__DOT__wb_reg_prd) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                            >> 0x13U))))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                        & ((IData)(vlSelf->__PVT__inst_int2__DOT__wb_reg_prd) 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                               >> 0x13U))))) 
                                                      & (vlSelf->__PVT__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table
                                                         [
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                             >> 0x13U))] 
                                                         & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                            >> 4U))))));
    if (vlSelf->__PVT__retire0_valid) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__retire_num = 1U;
        if (vlSelf->__PVT__retire1_valid) {
            vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__retire_num = 2U;
        }
    } else {
        vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__retire_num = 0U;
    }
    vlSelf->__Vcellinp__inst_ir__fl_write_en_1 = ((IData)(vlSelf->__PVT__retire1_valid) 
                                                  & (IData)(vlSelf->__PVT__retire1_is_wb));
    vlSelf->__PVT__inst_ir__DOT__rename_1 = ((0x3ffffcfffULL 
                                              & vlSelf->__PVT__inst_ir__DOT__rename_1) 
                                             | ((QData)((IData)(
                                                                (((IData)(vlSelf->__PVT__retire1_valid) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->__PVT__retire1_is_wb)))) 
                                                << 0xcU));
    vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_memisq 
        = ((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_rob) 
           & ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__mem_instr_vec) 
              >> 1U));
    vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_intisq 
        = ((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_rob) 
           & ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__int_instr_vec) 
              >> 1U));
    vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_memisq 
        = ((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_rob) 
           & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__mem_instr_vec));
    vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_intisq 
        = ((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_rob) 
           & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__int_instr_vec));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__instr0_disp2bt_rd_en 
        = ((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_rob) 
           & (vlSelf->__PVT__ir_is_reg0[2U] >> 0x13U));
    __PVT__inst_ir__DOT__fl_req_1 = ((((~ (IData)(vlSelf->__PVT__ID_stall)) 
                                       & (vlSelf->__PVT__id_ir_reg1[2U] 
                                          >> 0x13U)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->__PVT__id_ir_reg1[2U] 
                                                   >> 0x1aU)))) 
                                     & (vlSelf->__PVT__id_ir_reg1[3U] 
                                        >> 0xbU));
    __PVT__inst_ir__DOT__fl_req_0 = ((((~ (IData)(vlSelf->__PVT__ID_stall)) 
                                       & (vlSelf->__PVT__id_ir_reg0[2U] 
                                          >> 0x13U)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->__PVT__id_ir_reg0[2U] 
                                                   >> 0x1aU)))) 
                                     & (vlSelf->__PVT__id_ir_reg0[3U] 
                                        >> 0xbU));
    vlSelf->__PVT__ex_branch_in[0U] = (((IData)((((QData)((IData)(
                                                                  vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                                                                  [1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc)))) 
                                        << 0xbU) | 
                                       ((((vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid
                                           [1U] & ((IData)(vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_bj) 
                                                   & ((~ 
                                                       vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                       [1U][2U]) 
                                                      | (IData)(vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_branch_taken_diff)))) 
                                          & (~ (IData)(vlSelf->__PVT__flush_valid))) 
                                         << 0xaU) | 
                                        (0x3ffU & (
                                                   (0x400U 
                                                    & (IData)(vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__GHSR_checkpoint))
                                                    ? (IData)(vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__GHSR_checkpoint)
                                                    : 
                                                   ((vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [1U][2U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                       [1U][2U] 
                                                       >> 1U))))));
    vlSelf->__PVT__ex_branch_in[1U] = (((IData)((((QData)((IData)(
                                                                  vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                                                                  [1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc)))) 
                                        >> 0x15U) | 
                                       ((IData)(((((QData)((IData)(
                                                                   vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                                                                   [1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc))) 
                                                 >> 0x20U)) 
                                        << 0xbU));
    vlSelf->__PVT__ex_branch_in[2U] = (((IData)(((((QData)((IData)(
                                                                   vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc
                                                                   [1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc))) 
                                                 >> 0x20U)) 
                                        >> 0x15U) | 
                                       ((0xfffff000U 
                                         & (((vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid
                                              [1U] 
                                              << 0xcU) 
                                             & (((0xffff000U 
                                                  & (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                     [1U][2U] 
                                                     >> 4U)) 
                                                 | (0x1ffff000U 
                                                    & (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                       [1U][2U] 
                                                       >> 3U))) 
                                                | (0x7fff000U 
                                                   & (vlSelf->__PVT__inst_buffer__DOT__slot_reg_control
                                                      [1U][2U] 
                                                      >> 5U)))) 
                                            & ((~ (IData)(vlSelf->__PVT__flush_valid)) 
                                               << 0xcU))) 
                                        | ((IData)(vlSelf->__PVT__inst_int1__DOT__bju_branch_taken) 
                                           << 0xbU)));
    vlSelf->__PVT__inst_buffer__DOT__slot_valid_in[2U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__deq_valid;
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail_next 
        = (0x3fU & (((IData)(vlSelf->__Vcellinp__inst_ir__fl_write_en_0) 
                     & (IData)(vlSelf->__Vcellinp__inst_ir__fl_write_en_1))
                     ? ((IData)(2U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail))
                     : (((IData)(vlSelf->__Vcellinp__inst_ir__fl_write_en_0) 
                         | (IData)(vlSelf->__Vcellinp__inst_ir__fl_write_en_1))
                         ? ((IData)(1U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail))
                         : (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail))));
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [7U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [6U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [5U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [4U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [3U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [2U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [1U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [0U];
    if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_intisq) 
         & (IData)(vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_intisq))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
            = ((0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [0U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [0U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [0U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
            = ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [1U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [1U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [1U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
            = ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [2U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [2U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [2U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
            = ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [3U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [3U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [3U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
            = ((4U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((4U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [4U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [4U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [4U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
            = ((5U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((5U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [5U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [5U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [5U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
            = ((6U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((6U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [6U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [6U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [6U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
            = ((7U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((7U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [7U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [7U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [7U])))));
    } else if (((~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_intisq)) 
                & (IData)(vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_intisq))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
            = ((0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [0U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [0U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [0U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
            = ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [1U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [1U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [1U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
            = ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [2U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [2U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [2U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
            = ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [3U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [3U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [3U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
            = ((4U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [4U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [4U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [4U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
            = ((5U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [5U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [5U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [5U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
            = ((6U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [6U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [6U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [6U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
            = ((7U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [7U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [7U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [7U]))));
    } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_intisq) 
                & (~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_intisq)))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
            = ((0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [0U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [0U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [0U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
            = ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [1U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [1U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [1U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
            = ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [2U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [2U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [2U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
            = ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [3U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [3U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [3U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
            = ((4U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [4U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [4U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [4U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
            = ((5U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [5U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [5U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [5U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
            = ((6U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [6U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [6U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [6U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
            = ((7U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [7U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [7U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [7U]))));
    }
    if (vlSelf->__PVT__ex_slot0_valid) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id] = 0U;
    }
    if (vlSelf->__PVT__ex_slot1_valid) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id] = 0U;
    }
    vlSelf->__PVT__inst_is_stage__DOT__instr1_rs1_busy 
        = ((~ ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en) 
               & ((IData)(vlSelf->__PVT__inst_int0__DOT__wb1_reg_prd) 
                  == (0x3fU & (vlSelf->__PVT__ir_is_reg1[3U] 
                               >> 0x19U))))) & ((~ 
                                                 ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                  & ((IData)(vlSelf->__PVT__inst_int0__DOT__wb0_reg_prd) 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                         >> 0x19U))))) 
                                                & ((~ 
                                                    ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                     & ((IData)(vlSelf->__PVT__inst_int1__DOT__wb_reg_prd) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                            >> 0x19U))))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                        & ((IData)(vlSelf->__PVT__inst_int2__DOT__wb_reg_prd) 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                               >> 0x19U))))) 
                                                      & (vlSelf->__PVT__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table
                                                         [
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                             >> 0x19U))] 
                                                         & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                            >> 5U))))));
    if (((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__instr0_disp2bt_rd_en) 
         & ((0x3fU & (vlSelf->__PVT__ir_is_reg0[4U] 
                      >> 5U)) == (0x3fU & (vlSelf->__PVT__ir_is_reg1[3U] 
                                           >> 0x19U))))) {
        vlSelf->__PVT__inst_is_stage__DOT__instr1_rs1_busy 
            = (1U & (vlSelf->__PVT__ir_is_reg1[3U] 
                     >> 5U));
    }
    vlSelf->__PVT__inst_is_stage__DOT__instr1_rs2_busy 
        = ((~ ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en) 
               & ((IData)(vlSelf->__PVT__inst_int0__DOT__wb1_reg_prd) 
                  == (0x3fU & (vlSelf->__PVT__ir_is_reg1[3U] 
                               >> 0x13U))))) & ((~ 
                                                 ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                  & ((IData)(vlSelf->__PVT__inst_int0__DOT__wb0_reg_prd) 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                         >> 0x13U))))) 
                                                & ((~ 
                                                    ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                     & ((IData)(vlSelf->__PVT__inst_int1__DOT__wb_reg_prd) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                            >> 0x13U))))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                        & ((IData)(vlSelf->__PVT__inst_int2__DOT__wb_reg_prd) 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                               >> 0x13U))))) 
                                                      & (vlSelf->__PVT__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table
                                                         [
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                             >> 0x13U))] 
                                                         & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                            >> 4U))))));
    if (((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__instr0_disp2bt_rd_en) 
         & ((0x3fU & (vlSelf->__PVT__ir_is_reg0[4U] 
                      >> 5U)) == (0x3fU & (vlSelf->__PVT__ir_is_reg1[3U] 
                                           >> 0x13U))))) {
        vlSelf->__PVT__inst_is_stage__DOT__instr1_rs2_busy 
            = (1U & (vlSelf->__PVT__ir_is_reg1[3U] 
                     >> 4U));
    }
    __PVT__inst_ir__DOT__fl_can_alloc = (((((IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head) 
                                            == (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail))
                                            ? 0U : 
                                           (((0x3fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))) 
                                             == (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail))
                                             ? 1U : 3U)) 
                                          >= (((IData)(__PVT__inst_ir__DOT__fl_req_0) 
                                               & (IData)(__PVT__inst_ir__DOT__fl_req_1))
                                               ? 2U
                                               : (((IData)(__PVT__inst_ir__DOT__fl_req_0) 
                                                   | (IData)(__PVT__inst_ir__DOT__fl_req_1))
                                                   ? 1U
                                                   : 0U)))
                                          ? 1U : 0U);
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head_next 
        = (0x3fU & ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))
                     ? ((IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head) 
                        + (((IData)(vlSelf->__PVT__walk0_valid) 
                            & (IData)(vlSelf->__PVT__walk1_valid))
                            ? 2U : (((IData)(vlSelf->__PVT__walk0_valid) 
                                     | (IData)(vlSelf->__PVT__walk1_valid))
                                     ? 1U : 0U))) : 
                    ((((IData)(__PVT__inst_ir__DOT__fl_req_0) 
                       & (IData)(__PVT__inst_ir__DOT__fl_req_1)) 
                      & (IData)(__PVT__inst_ir__DOT__fl_can_alloc))
                      ? ((IData)(2U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))
                      : ((((IData)(__PVT__inst_ir__DOT__fl_req_0) 
                           & (~ (IData)(__PVT__inst_ir__DOT__fl_req_1))) 
                          & (IData)(__PVT__inst_ir__DOT__fl_can_alloc))
                          ? ((IData)(1U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))
                          : ((((IData)(__PVT__inst_ir__DOT__fl_req_1) 
                               & (~ (IData)(__PVT__inst_ir__DOT__fl_req_0))) 
                              & (IData)(__PVT__inst_ir__DOT__fl_can_alloc))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))
                              : (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))))));
    __PVT__inst_ir__DOT__inst_fl__DOT__read_1 = 0U;
    if ((2U != (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) {
        if ((((IData)(__PVT__inst_ir__DOT__fl_req_0) 
              & (IData)(__PVT__inst_ir__DOT__fl_req_1)) 
             & (IData)(__PVT__inst_ir__DOT__fl_can_alloc))) {
            __PVT__inst_ir__DOT__inst_fl__DOT__read_1 
                = vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__fl
                [(0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head)))];
            __PVT__inst_ir__DOT__inst_fl__DOT__read_0 = 0U;
            __PVT__inst_ir__DOT__inst_fl__DOT__read_0 
                = vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__fl
                [(0x1fU & (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))];
        } else {
            if ((1U & (~ (((IData)(__PVT__inst_ir__DOT__fl_req_0) 
                           & (~ (IData)(__PVT__inst_ir__DOT__fl_req_1))) 
                          & (IData)(__PVT__inst_ir__DOT__fl_can_alloc))))) {
                __PVT__inst_ir__DOT__inst_fl__DOT__read_1 
                    = ((((IData)(__PVT__inst_ir__DOT__fl_req_1) 
                         & (~ (IData)(__PVT__inst_ir__DOT__fl_req_0))) 
                        & (IData)(__PVT__inst_ir__DOT__fl_can_alloc))
                        ? vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__fl
                       [(0x1fU & (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))]
                        : 0U);
            }
            __PVT__inst_ir__DOT__inst_fl__DOT__read_0 = 0U;
            if ((((IData)(__PVT__inst_ir__DOT__fl_req_0) 
                  & (~ (IData)(__PVT__inst_ir__DOT__fl_req_1))) 
                 & (IData)(__PVT__inst_ir__DOT__fl_can_alloc))) {
                __PVT__inst_ir__DOT__inst_fl__DOT__read_0 
                    = vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__fl
                    [(0x1fU & (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))];
            } else if ((1U & (~ (((IData)(__PVT__inst_ir__DOT__fl_req_1) 
                                  & (~ (IData)(__PVT__inst_ir__DOT__fl_req_0))) 
                                 & (IData)(__PVT__inst_ir__DOT__fl_can_alloc))))) {
                __PVT__inst_ir__DOT__inst_fl__DOT__read_0 = 0U;
            }
        }
    } else {
        __PVT__inst_ir__DOT__inst_fl__DOT__read_0 = 0U;
    }
    vlSelf->__PVT__inst_ir__DOT__rename_1 = ((0x3ffffffc0ULL 
                                              & vlSelf->__PVT__inst_ir__DOT__rename_1) 
                                             | (IData)((IData)(__PVT__inst_ir__DOT__inst_fl__DOT__read_1)));
    vlSelf->__PVT__inst_ir__DOT__rename_0 = ((0x3ffffffc0ULL 
                                              & vlSelf->__PVT__inst_ir__DOT__rename_0) 
                                             | (IData)((IData)(__PVT__inst_ir__DOT__inst_fl__DOT__read_0)));
    vlSelf->__PVT__ir_is_reg1_next[4U] = ((0x1fU & 
                                           vlSelf->__PVT__ir_is_reg1_next[4U]) 
                                          | (0x7e0U 
                                             & ((IData)(vlSelf->__PVT__inst_ir__DOT__rename_1) 
                                                << 5U)));
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1fU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1fU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1eU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1eU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1dU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1dU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1cU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1cU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1bU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1bU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1aU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1aU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x19U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x19U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x18U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x18U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x17U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x17U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x16U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x16U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x15U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x15U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x14U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x14U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x13U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x13U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x12U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x12U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x11U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x11U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x10U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x10U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xfU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xfU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xeU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xeU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xdU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xdU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xcU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xcU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xbU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xbU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xaU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xaU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[9U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [9U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[8U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [8U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[7U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [7U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[6U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [6U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[5U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [5U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[4U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [4U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[3U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [3U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[2U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [2U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[1U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [1U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0U];
    if ((IData)((0x3000ULL == (0x3000ULL & vlSelf->__PVT__inst_ir__DOT__rename_0)))) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[(0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                                         >> 0xeU)))] 
            = (0x3fU & (IData)((vlSelf->__PVT__inst_ir__DOT__rename_0 
                                >> 6U)));
    }
    if ((IData)((0x3000ULL == (0x3000ULL & vlSelf->__PVT__inst_ir__DOT__rename_1)))) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[(0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                         >> 0xeU)))] 
            = (0x3fU & (IData)((vlSelf->__PVT__inst_ir__DOT__rename_1 
                                >> 6U)));
    }
    vlSelf->__PVT__ir_is_reg0_next[4U] = ((0x1fU & 
                                           vlSelf->__PVT__ir_is_reg0_next[4U]) 
                                          | (0x7e0U 
                                             & ((IData)(vlSelf->__PVT__inst_ir__DOT__rename_0) 
                                                << 5U)));
    vlSelf->__PVT__ir_is_reg0_next[3U] = ((0x8007ffffU 
                                           & vlSelf->__PVT__ir_is_reg0_next[3U]) 
                                          | (0xfff80000U 
                                             & ((vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                 [(0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                              >> 0x1dU)))] 
                                                 << 0x19U) 
                                                | (vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                   [
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                               >> 0x18U)))] 
                                                   << 0x13U))));
    vlSelf->__PVT__ir_is_reg0_next[3U] = ((0x7fffffffU 
                                           & vlSelf->__PVT__ir_is_reg0_next[3U]) 
                                          | (vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                             [(0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                          >> 0x13U)))] 
                                             << 0x1fU));
    vlSelf->__PVT__ir_is_reg0_next[4U] = ((0x7e0U & 
                                           vlSelf->__PVT__ir_is_reg0_next[4U]) 
                                          | (0x7ffU 
                                             & (vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                [(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                             >> 0x13U)))] 
                                                >> 1U)));
    vlSelf->__PVT__ir_is_reg1_next[3U] = ((0x8007ffffU 
                                           & vlSelf->__PVT__ir_is_reg1_next[3U]) 
                                          | (0xfff80000U 
                                             & ((0x7e000000U 
                                                 & ((((IData)(__PVT__inst_ir__DOT__fl_req_0) 
                                                      & ((0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                     >> 0x1dU))) 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                                     >> 0x13U)))))
                                                      ? (IData)(vlSelf->__PVT__inst_ir__DOT__rename_0)
                                                      : 
                                                     vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                     [
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                 >> 0x1dU)))]) 
                                                    << 0x19U)) 
                                                | (0x1f80000U 
                                                   & ((((IData)(__PVT__inst_ir__DOT__fl_req_0) 
                                                        & ((0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                       >> 0x18U))) 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                                       >> 0x13U)))))
                                                        ? (IData)(vlSelf->__PVT__inst_ir__DOT__rename_0)
                                                        : 
                                                       vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                       [
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                   >> 0x18U)))]) 
                                                      << 0x13U)))));
    vlSelf->__PVT__ir_is_reg1_next[3U] = ((0x7fffffffU 
                                           & vlSelf->__PVT__ir_is_reg1_next[3U]) 
                                          | (((((IData)(__PVT__inst_ir__DOT__fl_req_0) 
                                                & (IData)(__PVT__inst_ir__DOT__fl_req_1)) 
                                               & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                              >> 0x13U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                              >> 0x13U)))))
                                               ? (IData)(vlSelf->__PVT__inst_ir__DOT__rename_0)
                                               : vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                              [(0x1fU 
                                                & (IData)(
                                                          (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                           >> 0x13U)))]) 
                                             << 0x1fU));
    vlSelf->__PVT__ir_is_reg1_next[4U] = ((0x7e0U & 
                                           vlSelf->__PVT__ir_is_reg1_next[4U]) 
                                          | (0x1fU 
                                             & (((((IData)(__PVT__inst_ir__DOT__fl_req_0) 
                                                   & (IData)(__PVT__inst_ir__DOT__fl_req_1)) 
                                                  & ((0x1fU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                                 >> 0x13U))) 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                 >> 0x13U)))))
                                                  ? (IData)(vlSelf->__PVT__inst_ir__DOT__rename_0)
                                                  : 
                                                 vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                 [(0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                              >> 0x13U)))]) 
                                                >> 1U)));
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1fU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1fU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1eU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1eU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1dU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1dU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1cU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1cU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1bU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1bU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1aU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1aU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x19U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x19U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x18U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x18U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x17U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x17U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x16U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x16U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x15U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x15U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x14U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x14U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x13U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x13U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x12U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x12U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x11U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x11U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x10U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x10U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xfU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xfU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xeU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xeU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xdU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xdU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xcU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xcU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xbU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xbU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xaU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xaU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[9U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [9U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[8U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [8U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[7U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [7U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[6U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [6U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[5U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [5U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[4U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [4U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[3U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [3U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[2U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [2U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[1U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [1U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0U];
    if ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) {
        if (((IData)(vlSelf->__PVT__walk0_valid) & 
             (~ ((IData)(vlSelf->__PVT__walk0_valid) 
                 & ((IData)(vlSelf->__PVT__walk0_arf_id) 
                    == (IData)(vlSelf->__PVT__walk1_arf_id)))))) {
            vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[vlSelf->__PVT__walk0_arf_id] 
                = vlSelf->__PVT__walk0_T;
        }
        if (vlSelf->__PVT__walk0_valid) {
            vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[vlSelf->__PVT__walk1_arf_id] 
                = vlSelf->__PVT__walk1_T;
        }
    } else {
        if (((IData)(__PVT__inst_ir__DOT__fl_req_0) 
             & (~ ((IData)(__PVT__inst_ir__DOT__fl_req_1) 
                   & ((0x1fU & (IData)((vlSelf->__PVT__inst_ir__DOT__rename_0 
                                        >> 0x13U))) 
                      == (0x1fU & (IData)((vlSelf->__PVT__inst_ir__DOT__rename_1 
                                           >> 0x13U)))))))) {
            vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[(0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                                            >> 0x13U)))] 
                = (0x3fU & (IData)(vlSelf->__PVT__inst_ir__DOT__rename_0));
        }
        if (__PVT__inst_ir__DOT__fl_req_1) {
            vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[(0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                            >> 0x13U)))] 
                = (0x3fU & (IData)(vlSelf->__PVT__inst_ir__DOT__rename_1));
        }
    }
}

VL_INLINE_OPT void Vcommon_pipeline___combo__TOP__pipeline__7(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___combo__TOP__pipeline__7\n"); );
    // Body
    vlSelf->__PVT__read_data1 = vlSelf->__PVT__inst_imem__DOT__ram
        [(0xffU & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr1_if_id[2U] 
                   >> 0xfU))];
    vlSelf->__PVT__read_data0 = vlSelf->__PVT__inst_imem__DOT__ram
        [(0xffU & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr0_if_id[2U] 
                   >> 0xfU))];
}
