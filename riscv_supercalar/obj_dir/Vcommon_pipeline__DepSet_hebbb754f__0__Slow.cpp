// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon_pipeline.h"

VL_ATTR_COLD void Vcommon_pipeline___initial__TOP__pipeline__1(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___initial__TOP__pipeline__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h7315c05b__0;
    // Body
    __Vtemp_h7315c05b__0[0U] = 0x2e6d656dU;
    __Vtemp_h7315c05b__0[1U] = 0x5f6d656dU;
    __Vtemp_h7315c05b__0[2U] = 0x74696f6eU;
    __Vtemp_h7315c05b__0[3U] = 0x74727563U;
    __Vtemp_h7315c05b__0[4U] = 0x696e73U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h7315c05b__0)
                 ,  &(vlSelf->__PVT__inst_imem__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcommon_pipeline___ctor_var_reset(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->writeback0_valid = VL_RAND_RESET_I(1);
    vlSelf->writeback0_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback0_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback1_valid = VL_RAND_RESET_I(1);
    vlSelf->writeback1_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback1_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback2_valid = VL_RAND_RESET_I(1);
    vlSelf->writeback2_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback2_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback3_valid = VL_RAND_RESET_I(1);
    vlSelf->writeback3_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback3_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback0_robid = VL_RAND_RESET_I(7);
    vlSelf->writeback1_robid = VL_RAND_RESET_I(7);
    vlSelf->writeback2_robid = VL_RAND_RESET_I(7);
    vlSelf->writeback3_robid = VL_RAND_RESET_I(7);
    vlSelf->mul_slot_busy = VL_RAND_RESET_I(1);
    vlSelf->flush_robid = VL_RAND_RESET_I(7);
    vlSelf->flush_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IF_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PC_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__can_dispatch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_slot0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_slot1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__retire0_is_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__retire1_fl_Told = VL_RAND_RESET_I(6);
    vlSelf->__PVT__retire1_is_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__walk0_T = VL_RAND_RESET_I(6);
    vlSelf->__PVT__walk0_arf_id = VL_RAND_RESET_I(5);
    vlSelf->__PVT__walk0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__walk1_T = VL_RAND_RESET_I(6);
    vlSelf->__PVT__walk1_arf_id = VL_RAND_RESET_I(5);
    vlSelf->__PVT__walk1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(109, vlSelf->__PVT__if_id_reg0);
    VL_RAND_RESET_W(109, vlSelf->__PVT__if_id_reg1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__imem_resp);
    VL_RAND_RESET_W(115, vlSelf->__PVT__id_ir_reg0);
    VL_RAND_RESET_W(115, vlSelf->__PVT__id_ir_reg1);
    vlSelf->__PVT__id_ir_reg0_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_ir_reg0_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_ir_reg1_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_ir_reg1_instr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(115, vlSelf->__PVT__dec_instr0);
    VL_RAND_RESET_W(115, vlSelf->__PVT__dec_instr1);
    VL_RAND_RESET_W(139, vlSelf->__PVT__ir_is_reg0);
    VL_RAND_RESET_W(139, vlSelf->__PVT__ir_is_reg0_next);
    VL_RAND_RESET_W(139, vlSelf->__PVT__ir_is_reg1);
    VL_RAND_RESET_W(139, vlSelf->__PVT__ir_is_reg1_next);
    vlSelf->__PVT__ir_is_reg0_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ir_is_reg0_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ir_is_reg1_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ir_is_reg1_instr = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__inst_ir__fl_write_en_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__inst_ir__fl_write_en_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_branch_in = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->__PVT__inst_imem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__inst_ir__DOT__fl_req_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_ir__DOT__fl_req_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_ir__DOT__rename_0 = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__inst_ir__DOT__rename_1 = VL_RAND_RESET_Q(34);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__fl[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head_next = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail_next = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_intisq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_rob = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_intisq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_rob = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__sq_left = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__memisq_left = VL_RAND_RESET_I(2);
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en = VL_RAND_RESET_I(1);
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en = VL_RAND_RESET_I(1);
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en = VL_RAND_RESET_I(1);
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob[__Vi0]);
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_head = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__walk_ptr = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__retire_num = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(115, vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__ready_vec = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__small_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__small_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__small_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(139, vlSelf->__Vdly__ir_is_reg1);
    VL_RAND_RESET_W(139, vlSelf->__Vdly__ir_is_reg0);
    vlSelf->__Vdly__inst_is_stage__DOT__inst_rob__DOT__rob_head = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v407 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v407 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v407 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v408 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v408 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v409 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v410 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v411 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v412 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v413 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v414 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v415 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v416 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v417 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v418 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v419 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v420 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v421 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v422 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v423 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v424 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v425 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v426 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v427 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v428 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v429 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v430 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v431 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v432 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v433 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v434 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v435 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v436 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v437 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v438 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v439 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v440 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v441 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v442 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v443 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v444 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v445 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v446 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v447 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v448 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v449 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v450 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v451 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v452 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v453 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v454 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v455 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v456 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v457 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v458 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v459 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v460 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v461 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v462 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v463 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v464 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v465 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v466 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v467 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v468 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v469 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v470 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v471 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v472 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v472 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v472 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v473 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v473 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v473 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v474 = 0;
    vlSelf->__Vdlyvlsb__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v474 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v474 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v4 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v5 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v6 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v7 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v8 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v8 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v9 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v9 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v10 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v10 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v11 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v11 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v12 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v12 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v13 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_age__v0 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_age__v1 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_age__v2 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_age__v3 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_age__v4 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_age__v5 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_age__v6 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_age__v7 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v0 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v0 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v0 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v1 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v1 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v2 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v2 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v3 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v0 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v0 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v0 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v1 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v1 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v1 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v2 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v2 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v3 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v0 = 0;
    VL_RAND_RESET_W(115, vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v0);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v0 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v1 = 0;
    VL_RAND_RESET_W(115, vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v1);
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v2 = 0;
    VL_RAND_RESET_W(115, vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v2);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v3 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v0 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v0 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v1 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v2 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v4 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v5 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v6 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v7 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v8 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v9 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v10 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v11 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v0 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v0 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v1 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v1 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v2 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v4 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v5 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v6 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v7 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v8 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v9 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v10 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v11 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v0 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v64 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v64 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v65 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v65 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v66 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v66 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v67 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v67 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v68 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v68 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v69 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v69 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v70 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v70 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v71 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v71 = 0;
}
