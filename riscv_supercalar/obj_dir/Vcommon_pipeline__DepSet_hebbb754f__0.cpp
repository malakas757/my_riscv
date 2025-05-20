// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon_pipeline.h"

VL_INLINE_OPT void Vcommon_pipeline___sequent__TOP__pipeline__4(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___sequent__TOP__pipeline__4\n"); );
    // Init
    VlWide<4>/*108:0*/ __Vdly__if_id_reg0;
    VlWide<4>/*108:0*/ __Vdly__if_id_reg1;
    IData/*31:0*/ __Vdly__ir_is_reg0_pc;
    IData/*31:0*/ __Vdly__ir_is_reg0_instr;
    VlWide<5>/*138:0*/ __Vdly__ir_is_reg1;
    VlWide<5>/*138:0*/ __Vdly__ir_is_reg0;
    IData/*31:0*/ __Vdly__ir_is_reg1_instr;
    IData/*31:0*/ __Vdly__ir_is_reg1_pc;
    // Body
    vlSelf->__Vdlyvset__inst_imem__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__inst_is_stage__DOT__inst_memisq__DOT__memisq_tail 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_tail;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v3 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v3 = 0U;
    __Vdly__ir_is_reg1_instr = vlSelf->__PVT__ir_is_reg1_instr;
    __Vdly__ir_is_reg1_pc = vlSelf->__PVT__ir_is_reg1_pc;
    __Vdly__ir_is_reg0_instr = vlSelf->__PVT__ir_is_reg0_instr;
    __Vdly__ir_is_reg0_pc = vlSelf->__PVT__ir_is_reg0_pc;
    __Vdly__if_id_reg1[0U] = vlSelf->__PVT__if_id_reg1[0U];
    __Vdly__if_id_reg1[1U] = vlSelf->__PVT__if_id_reg1[1U];
    __Vdly__if_id_reg1[2U] = vlSelf->__PVT__if_id_reg1[2U];
    __Vdly__if_id_reg1[3U] = vlSelf->__PVT__if_id_reg1[3U];
    __Vdly__if_id_reg0[0U] = vlSelf->__PVT__if_id_reg0[0U];
    __Vdly__if_id_reg0[1U] = vlSelf->__PVT__if_id_reg0[1U];
    __Vdly__if_id_reg0[2U] = vlSelf->__PVT__if_id_reg0[2U];
    __Vdly__if_id_reg0[3U] = vlSelf->__PVT__if_id_reg0[3U];
    vlSelf->__Vdly__inst_is_stage__DOT__inst_rob__DOT__walk_head 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__walk_head;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid__v3 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid__v3 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_GHR_checkpoint__DOT__GHSR_robid__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_GHR_checkpoint__DOT__GHSR_robid__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_GHR_checkpoint__DOT__GHSR_robid__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_GHR_checkpoint__DOT__GHSR_robid__v3 = 0U;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_fl__DOT__fl__v0 = 0U;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_fl__DOT__fl__v1 = 0U;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_fl__DOT__fl__v2 = 0U;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_fl__DOT__fl__v3 = 0U;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v0 = 0U;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v1 = 0U;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v2 = 0U;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v3 = 0U;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v4 = 0U;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v5 = 0U;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v6 = 0U;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v7 = 0U;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v8 = 0U;
    __Vdly__ir_is_reg1[0U] = vlSelf->__PVT__ir_is_reg1[0U];
    __Vdly__ir_is_reg1[1U] = vlSelf->__PVT__ir_is_reg1[1U];
    __Vdly__ir_is_reg1[2U] = vlSelf->__PVT__ir_is_reg1[2U];
    __Vdly__ir_is_reg1[3U] = vlSelf->__PVT__ir_is_reg1[3U];
    __Vdly__ir_is_reg1[4U] = vlSelf->__PVT__ir_is_reg1[4U];
    __Vdly__ir_is_reg0[0U] = vlSelf->__PVT__ir_is_reg0[0U];
    __Vdly__ir_is_reg0[1U] = vlSelf->__PVT__ir_is_reg0[1U];
    __Vdly__ir_is_reg0[2U] = vlSelf->__PVT__ir_is_reg0[2U];
    __Vdly__ir_is_reg0[3U] = vlSelf->__PVT__ir_is_reg0[3U];
    __Vdly__ir_is_reg0[4U] = vlSelf->__PVT__ir_is_reg0[4U];
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_T__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_T__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_T__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_T__v3 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_id__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_id__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_id__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_id__v3 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_id__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_id__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_id__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_id__v3 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_T__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_T__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_T__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_T__v3 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_control__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_control__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_control__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_control__v3 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_GHR_checkpoint__DOT__GHSR_data__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_GHR_checkpoint__DOT__GHSR_data__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_GHR_checkpoint__DOT__GHSR_data__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_GHR_checkpoint__DOT__GHSR_data__v3 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v3 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v0 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v1 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v2 = 0U;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v3 = 0U;
    vlSelf->__Vdly__inst_sq__DOT__sq_tail = vlSelf->__PVT__inst_sq__DOT__sq_tail;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_mt__DOT__RAT__v0 = 0U;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_mt__DOT__RAT__v32 = 0U;
}
