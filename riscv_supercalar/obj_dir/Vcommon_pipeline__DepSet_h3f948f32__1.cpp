// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_pipeline.h"

VL_INLINE_OPT void Vcommon_pipeline___combo__TOP__pipeline__6(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___combo__TOP__pipeline__6\n"); );
    // Init
    CData/*0:0*/ __PVT__can_dispatch;
    CData/*0:0*/ __PVT__inst_ir__DOT__fl_can_alloc;
    CData/*0:0*/ __PVT__inst_ir__DOT__fl_req_0;
    CData/*0:0*/ __PVT__inst_ir__DOT__fl_req_1;
    CData/*5:0*/ __PVT__inst_ir__DOT__inst_fl__DOT__read_0;
    CData/*5:0*/ __PVT__inst_ir__DOT__inst_fl__DOT__read_1;
    // Body
    vlSelf->__PVT__IF_flush = (1U & ((IData)(vlSymsp->TOP.flush_valid) 
                                     | (~ vlSelf->__PVT__imem_resp[0U])));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en 
        = ((IData)(vlSymsp->TOP.writeback1_valid) & (IData)(vlSymsp->TOP.writeback1_need_to_wb));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en 
        = ((IData)(vlSymsp->TOP.writeback0_valid) & (IData)(vlSymsp->TOP.writeback0_need_to_wb));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en 
        = ((IData)(vlSymsp->TOP.writeback2_valid) & (IData)(vlSymsp->TOP.writeback2_need_to_wb));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en 
        = ((IData)(vlSymsp->TOP.writeback3_valid) & (IData)(vlSymsp->TOP.writeback3_need_to_wb));
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[3U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[2U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[1U] = 0U;
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[0U] = 0U;
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [0U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [0U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [0U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [0U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [0U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [0U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [1U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [1U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [1U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [1U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [1U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [1U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [2U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [2U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [2U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [2U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [2U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [2U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [3U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [3U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [3U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[3U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
          [3U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [3U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [3U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[3U] = 1U;
    }
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
                   [0U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [0U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [0U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [0U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [0U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [1U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [1U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [1U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [1U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [1U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [1U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [2U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [2U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [2U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [2U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [2U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [2U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [3U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [3U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [3U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[3U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [3U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [3U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [3U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[3U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [4U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [4U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [4U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[4U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [4U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [4U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [4U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[4U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [5U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [5U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [5U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[5U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [5U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [5U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [5U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[5U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [6U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [6U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [6U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[6U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [6U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [6U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [6U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[6U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [7U] & ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [7U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [7U]) < (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[7U] = 1U;
    }
    if (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid
          [7U] & (~ ((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [7U] ^ (IData)(vlSymsp->TOP.flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [7U]) > (0x3fU & (IData)(vlSymsp->TOP.flush_robid))))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[7U] = 1U;
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__deq_valid 
        = ((vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_entry_ready
            [vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_tail] 
            & vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid
            [vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_tail]) 
           & (~ (IData)(vlSymsp->TOP.flush_valid)));
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__next_state 
        = ((0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))
            ? ((IData)(vlSymsp->TOP.flush_valid) ? 1U
                : 0U) : ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))
                          ? ((IData)(vlSymsp->TOP.flush_valid)
                              ? 1U : 2U) : ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))
                                             ? ((IData)(vlSymsp->TOP.flush_valid)
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
    vlSelf->__PVT__retire0_valid = ((((~ (IData)(vlSymsp->TOP.flush_valid)) 
                                      & (0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) 
                                     & (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                        [(0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail))][2U] 
                                        >> 0x13U)) 
                                    & (vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob
                                       [(0x3fU & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail))][2U] 
                                       >> 6U));
    __PVT__can_dispatch = (1U & (((((((((((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_head) 
                                          ^ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail)) 
                                         >> 6U) & (
                                                   (0x3fU 
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
                                      ? 1U : 0U) & 
                                    (((3U & ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0_valid) 
                                             + (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1_valid))) 
                                      >= (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__int_instr_num))
                                      ? 1U : 0U)) & 
                                   (((IData)(vlSelf->__PVT__inst_is_stage__DOT__memisq_left) 
                                     >= (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__mem_instr_num))
                                     ? 1U : 0U)) & 
                                  (((IData)(vlSelf->__PVT__inst_is_stage__DOT__sq_left) 
                                    >= (3U & ((1U & 
                                               ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__store_instr_vec) 
                                                >> 1U)) 
                                              + (1U 
                                                 & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__store_instr_vec)))))
                                    ? 1U : 0U)) & (~ (IData)(vlSymsp->TOP.flush_valid))));
    vlSelf->__PVT__ex_slot1_valid = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.flush_valid)))) {
        if ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__ready_vec))) {
            if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                 & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul))) {
                vlSelf->__PVT__ex_slot1_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = (1U 
                                                 & (~ (IData)(vlSymsp->TOP.mul_slot_busy)));
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = (1U 
                                                 & (~ (IData)(vlSymsp->TOP.mul_slot_busy)));
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = (1U 
                                                 & (~ (IData)(vlSymsp->TOP.mul_slot_busy)));
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = (1U 
                                                 & (~ (IData)(vlSymsp->TOP.mul_slot_busy)));
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = (1U 
                                                 & (~ (IData)(vlSymsp->TOP.mul_slot_busy)));
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
    vlSelf->__PVT__imem_resp[0U] = (1U | ((IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__inst_imem__DOT__ram
                                                                    [
                                                                    (0xffU 
                                                                     & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr0_if_id[2U] 
                                                                        >> 0xfU))])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__inst_imem__DOT__ram
                                                                     [
                                                                     (0xffU 
                                                                      & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr1_if_id[2U] 
                                                                         >> 0xfU))])))) 
                                          << 1U));
    vlSelf->__PVT__imem_resp[1U] = (((IData)((((QData)((IData)(
                                                               vlSelf->__PVT__inst_imem__DOT__ram
                                                               [
                                                               (0xffU 
                                                                & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr0_if_id[2U] 
                                                                   >> 0xfU))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__inst_imem__DOT__ram
                                                                [
                                                                (0xffU 
                                                                 & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr1_if_id[2U] 
                                                                    >> 0xfU))])))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->__PVT__inst_imem__DOT__ram
                                                                             [
                                                                             (0xffU 
                                                                              & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr0_if_id[2U] 
                                                                                >> 0xfU))])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__inst_imem__DOT__ram
                                                                              [
                                                                              (0xffU 
                                                                               & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr1_if_id[2U] 
                                                                                >> 0xfU))]))) 
                                                           >> 0x20U)) 
                                                  << 1U));
    vlSelf->__PVT__imem_resp[2U] = ((IData)(((((QData)((IData)(
                                                               vlSelf->__PVT__inst_imem__DOT__ram
                                                               [
                                                               (0xffU 
                                                                & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr0_if_id[2U] 
                                                                   >> 0xfU))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__inst_imem__DOT__ram
                                                                [
                                                                (0xffU 
                                                                 & (vlSymsp->TOP__pipeline__inst_if_stage.__PVT__instr1_if_id[2U] 
                                                                    >> 0xfU))]))) 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    vlSelf->__PVT__inst_is_stage__DOT__instr0_rs1_busy 
        = ((~ ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en) 
               & ((IData)(vlSymsp->TOP.writeback1_prd) 
                  == (0x3fU & (vlSelf->__PVT__ir_is_reg0[3U] 
                               >> 0x19U))))) & ((~ 
                                                 ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                  & ((IData)(vlSymsp->TOP.writeback0_prd) 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                         >> 0x19U))))) 
                                                & ((~ 
                                                    ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                     & ((IData)(vlSymsp->TOP.writeback2_prd) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                            >> 0x19U))))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                        & ((IData)(vlSymsp->TOP.writeback3_prd) 
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
               & ((IData)(vlSymsp->TOP.writeback1_prd) 
                  == (0x3fU & (vlSelf->__PVT__ir_is_reg0[3U] 
                               >> 0x13U))))) & ((~ 
                                                 ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                  & ((IData)(vlSymsp->TOP.writeback0_prd) 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                         >> 0x13U))))) 
                                                & ((~ 
                                                    ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                     & ((IData)(vlSymsp->TOP.writeback2_prd) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__ir_is_reg0[3U] 
                                                            >> 0x13U))))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                        & ((IData)(vlSymsp->TOP.writeback3_prd) 
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
    vlSelf->__PVT__IF_stall = (1U & (((~ (IData)(__PVT__can_dispatch)) 
                                      | (2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) 
                                     | (1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))));
    vlSelf->__PVT__IR_stall = (1U & (((~ (IData)(__PVT__can_dispatch)) 
                                      | (2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) 
                                     | (1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))));
    vlSelf->__PVT__PC_stall = (1U & ((((~ vlSelf->__PVT__imem_resp[0U]) 
                                       | (~ (IData)(__PVT__can_dispatch))) 
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
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail_next 
        = (0x3fU & (((IData)(vlSelf->__Vcellinp__inst_ir__fl_write_en_0) 
                     & (IData)(vlSelf->__Vcellinp__inst_ir__fl_write_en_1))
                     ? ((IData)(2U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail))
                     : (((IData)(vlSelf->__Vcellinp__inst_ir__fl_write_en_0) 
                         | (IData)(vlSelf->__Vcellinp__inst_ir__fl_write_en_1))
                         ? ((IData)(1U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail))
                         : (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail))));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_sq__disp2sq_instr1_valid 
        = ((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_memisq) 
           & (vlSelf->__PVT__ir_is_reg1[2U] >> 0x14U));
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_sq__disp2sq_instr0_valid 
        = ((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_memisq) 
           & (vlSelf->__PVT__ir_is_reg0[2U] >> 0x14U));
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
               & ((IData)(vlSymsp->TOP.writeback1_prd) 
                  == (0x3fU & (vlSelf->__PVT__ir_is_reg1[3U] 
                               >> 0x19U))))) & ((~ 
                                                 ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                  & ((IData)(vlSymsp->TOP.writeback0_prd) 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                         >> 0x19U))))) 
                                                & ((~ 
                                                    ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                     & ((IData)(vlSymsp->TOP.writeback2_prd) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                            >> 0x19U))))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                        & ((IData)(vlSymsp->TOP.writeback3_prd) 
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
               & ((IData)(vlSymsp->TOP.writeback1_prd) 
                  == (0x3fU & (vlSelf->__PVT__ir_is_reg1[3U] 
                               >> 0x13U))))) & ((~ 
                                                 ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                  & ((IData)(vlSymsp->TOP.writeback0_prd) 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                         >> 0x13U))))) 
                                                & ((~ 
                                                    ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                     & ((IData)(vlSymsp->TOP.writeback2_prd) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__ir_is_reg1[3U] 
                                                            >> 0x13U))))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                        & ((IData)(vlSymsp->TOP.writeback3_prd) 
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
