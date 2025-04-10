// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___combo__TOP__4(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__4\n"); );
    // Init
    CData/*1:0*/ is_stage__DOT__inst_dispatch__DOT__mem_instr_num;
    CData/*1:0*/ is_stage__DOT__inst_dispatch__DOT__int_instr_num;
    CData/*1:0*/ is_stage__DOT__inst_dispatch__DOT__mem_instr_vec;
    CData/*1:0*/ is_stage__DOT__inst_dispatch__DOT__int_instr_vec;
    CData/*1:0*/ is_stage__DOT__inst_dispatch__DOT__store_instr_vec;
    // Body
    is_stage__DOT__inst_dispatch__DOT__store_instr_vec = 0U;
    if ((1U & ((vlSelf->ir_is_reg0[3U] >> 0xbU) & (
                                                   vlSelf->ir_is_reg0[2U] 
                                                   >> 0x14U)))) {
        is_stage__DOT__inst_dispatch__DOT__store_instr_vec 
            = (1U | (IData)(is_stage__DOT__inst_dispatch__DOT__store_instr_vec));
    }
    if ((1U & ((vlSelf->ir_is_reg1[3U] >> 0xbU) & (
                                                   vlSelf->ir_is_reg1[2U] 
                                                   >> 0x14U)))) {
        is_stage__DOT__inst_dispatch__DOT__store_instr_vec 
            = (2U | (IData)(is_stage__DOT__inst_dispatch__DOT__store_instr_vec));
    }
    is_stage__DOT__inst_dispatch__DOT__mem_instr_vec = 0U;
    if (((vlSelf->ir_is_reg0[3U] >> 0xbU) & (0U != 
                                             (0x300000U 
                                              & vlSelf->ir_is_reg0[2U])))) {
        is_stage__DOT__inst_dispatch__DOT__mem_instr_vec 
            = (1U | (IData)(is_stage__DOT__inst_dispatch__DOT__mem_instr_vec));
    }
    if (((vlSelf->ir_is_reg1[3U] >> 0xbU) & (0U != 
                                             (0x300000U 
                                              & vlSelf->ir_is_reg1[2U])))) {
        is_stage__DOT__inst_dispatch__DOT__mem_instr_vec 
            = (2U | (IData)(is_stage__DOT__inst_dispatch__DOT__mem_instr_vec));
    }
    is_stage__DOT__inst_dispatch__DOT__int_instr_vec = 0U;
    if ((1U & (~ ((vlSelf->ir_is_reg0[3U] >> 0xbU) 
                  & (IData)((0U != (0x300000U & vlSelf->ir_is_reg0[2U]))))))) {
        if ((0x800U & vlSelf->ir_is_reg0[3U])) {
            is_stage__DOT__inst_dispatch__DOT__int_instr_vec 
                = (1U | (IData)(is_stage__DOT__inst_dispatch__DOT__int_instr_vec));
        }
    }
    if ((1U & (~ ((vlSelf->ir_is_reg1[3U] >> 0xbU) 
                  & (IData)((0U != (0x300000U & vlSelf->ir_is_reg1[2U]))))))) {
        if ((0x800U & vlSelf->ir_is_reg1[3U])) {
            is_stage__DOT__inst_dispatch__DOT__int_instr_vec 
                = (2U | (IData)(is_stage__DOT__inst_dispatch__DOT__int_instr_vec));
        }
    }
    vlSelf->instr0_src2 = (0x3fU & (vlSelf->ir_is_reg0[3U] 
                                    >> 0x13U));
    vlSelf->instr1_src2 = (0x3fU & (vlSelf->ir_is_reg1[3U] 
                                    >> 0x13U));
    vlSelf->instr0_src1 = (0x3fU & (vlSelf->ir_is_reg0[3U] 
                                    >> 0x19U));
    vlSelf->instr1_src1 = (0x3fU & (vlSelf->ir_is_reg1[3U] 
                                    >> 0x19U));
    vlSelf->is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en 
        = ((IData)(vlSelf->writeback1_valid) & (IData)(vlSelf->writeback1_need_to_wb));
    vlSelf->is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en 
        = ((IData)(vlSelf->writeback0_valid) & (IData)(vlSelf->writeback0_need_to_wb));
    vlSelf->is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en 
        = ((IData)(vlSelf->writeback2_valid) & (IData)(vlSelf->writeback2_need_to_wb));
    vlSelf->is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en 
        = ((IData)(vlSelf->writeback3_valid) & (IData)(vlSelf->writeback3_need_to_wb));
    vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[3U] = 0U;
    vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[2U] = 0U;
    vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[1U] = 0U;
    vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[0U] = 0U;
    if (((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_valid
          [0U] & ((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [0U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [0U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_valid
          [0U] & (~ ((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [0U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [0U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_valid
          [1U] & ((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [1U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [1U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_valid
          [1U] & (~ ((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [1U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [1U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_valid
          [2U] & ((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [2U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [2U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_valid
          [2U] & (~ ((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [2U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [2U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_valid
          [3U] & ((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                   [3U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                              [3U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[3U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_valid
          [3U] & (~ ((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                      [3U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_robid
                                  [3U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_memisq__DOT__flush_valid_vector[3U] = 1U;
    }
    vlSelf->is_stage__DOT__inst_rob__DOT__next_state 
        = ((0U == (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__current_state))
            ? ((IData)(vlSelf->flush_valid) ? 1U : 0U)
            : ((1U == (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__current_state))
                ? ((IData)(vlSelf->flush_valid) ? 1U
                    : 2U) : ((2U == (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__current_state))
                              ? ((IData)(vlSelf->flush_valid)
                                  ? 1U : ((1U & ((~ 
                                                  (vlSelf->is_stage__DOT__inst_rob__DOT__reg_rob
                                                   [
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__walk_ptr)))][2U] 
                                                   >> 0x13U)) 
                                                 | (~ 
                                                    (vlSelf->is_stage__DOT__inst_rob__DOT__reg_rob
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__walk_ptr)))][2U] 
                                                     >> 0x13U))))
                                           ? 0U : 2U))
                              : 0U)));
    vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[7U] = 0U;
    vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[6U] = 0U;
    vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[5U] = 0U;
    vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[4U] = 0U;
    vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[3U] = 0U;
    vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[2U] = 0U;
    vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[1U] = 0U;
    vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[0U] = 0U;
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [0U] & ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [0U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [0U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [0U] & (~ ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [0U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [0U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[0U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [1U] & ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [1U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [1U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [1U] & (~ ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [1U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [1U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[1U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [2U] & ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [2U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [2U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [2U] & (~ ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [2U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [2U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[2U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [3U] & ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [3U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [3U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[3U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [3U] & (~ ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [3U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [3U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[3U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [4U] & ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [4U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [4U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[4U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [4U] & (~ ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [4U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [4U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[4U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [5U] & ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [5U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [5U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[5U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [5U] & (~ ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [5U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [5U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[5U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [6U] & ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [6U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [6U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[6U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [6U] & (~ ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [6U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [6U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[6U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [7U] & ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                   [7U] ^ (IData)(vlSelf->flush_robid)) 
                  >> 6U)) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                              [7U]) < (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[7U] = 1U;
    }
    if (((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_valid
          [7U] & (~ ((vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                      [7U] ^ (IData)(vlSelf->flush_robid)) 
                     >> 6U))) & ((0x3fU & vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
                                  [7U]) > (0x3fU & (IData)(vlSelf->flush_robid))))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__flush_valid_vector[7U] = 1U;
    }
    vlSelf->retire0_valid = ((((~ (IData)(vlSelf->flush_valid)) 
                               & (0U == (IData)(vlSelf->rob_state))) 
                              & (vlSelf->is_stage__DOT__inst_rob__DOT__reg_rob
                                 [(0x3fU & (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_tail))][2U] 
                                 >> 0x13U)) & (vlSelf->is_stage__DOT__inst_rob__DOT__reg_rob
                                               [(0x3fU 
                                                 & (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_tail))][2U] 
                                               >> 6U));
    vlSelf->is_stage__DOT__inst_memisq__DOT__deq_valid 
        = ((vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_entry_ready
            [vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_tail] 
            & vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_valid
            [vlSelf->is_stage__DOT__inst_memisq__DOT__memisq_tail]) 
           & (~ (IData)(vlSelf->flush_valid)));
    vlSelf->ex_slot1_valid = 0U;
    if ((1U & (~ (IData)(vlSelf->flush_valid)))) {
        if ((3U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__ready_vec))) {
            if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                 & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_mul))) {
                vlSelf->ex_slot1_valid = 0U;
                vlSelf->ex_slot0_valid = 0U;
                vlSelf->ex_slot0_valid = (1U & (~ (IData)(vlSelf->mul_slot_busy)));
            } else if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                        & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                vlSelf->ex_slot1_valid = 1U;
                vlSelf->ex_slot0_valid = 0U;
                vlSelf->ex_slot0_valid = (1U & (~ (IData)(vlSelf->mul_slot_busy)));
            } else if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                        & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_alu))) {
                vlSelf->ex_slot1_valid = 1U;
                vlSelf->ex_slot0_valid = 0U;
                vlSelf->ex_slot0_valid = (1U & (~ (IData)(vlSelf->mul_slot_busy)));
            } else if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                        & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_bju))) {
                vlSelf->ex_slot1_valid = 1U;
                vlSelf->ex_slot0_valid = 0U;
                vlSelf->ex_slot0_valid = (1U & (~ (IData)(vlSelf->mul_slot_busy)));
            } else if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                        & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_bju))) {
                vlSelf->ex_slot1_valid = 1U;
                vlSelf->ex_slot0_valid = 0U;
                vlSelf->ex_slot0_valid = (1U & (~ (IData)(vlSelf->mul_slot_busy)));
            } else if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                        & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_bju))) {
                vlSelf->ex_slot1_valid = 1U;
                vlSelf->ex_slot0_valid = 0U;
                vlSelf->ex_slot0_valid = 0U;
            } else if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                        & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                vlSelf->ex_slot1_valid = 1U;
                vlSelf->ex_slot0_valid = 0U;
                vlSelf->ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_bju) 
                        & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_alu))) {
                vlSelf->ex_slot1_valid = 1U;
                vlSelf->ex_slot0_valid = 0U;
                vlSelf->ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_alu) 
                        & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                vlSelf->ex_slot1_valid = 1U;
                vlSelf->ex_slot0_valid = 0U;
                vlSelf->ex_slot0_valid = 1U;
            } else {
                vlSelf->ex_slot0_valid = 0U;
            }
            vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
            if ((1U & (~ ((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                          & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_mul))))) {
                if ((1U & (~ ((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                              & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_alu))))) {
                    if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                         & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_alu))) {
                        vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                            = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                        vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                            = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                        vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                            = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
                    } else if ((1U & (~ ((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                                         & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_bju))))) {
                        if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                             & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_bju))) {
                            vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                                = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                            vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                            vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
                        } else if ((1U & (~ ((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                                             & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_bju))))) {
                            if (((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                                 & (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                                vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                                vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                                vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
                            } else {
                                vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                            }
                        } else {
                            vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                        }
                    } else {
                        vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                            = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                    }
                } else {
                    vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                }
            } else {
                vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
            }
        } else if ((1U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__ready_vec))) {
            if ((1U & (~ (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_mul)))) {
                if (vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_bju) {
                    vlSelf->ex_slot1_valid = 1U;
                }
            }
            vlSelf->ex_slot0_valid = 0U;
            if (vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_mul) {
                vlSelf->ex_slot0_valid = 1U;
            } else if ((1U & (~ (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_bju)))) {
                vlSelf->ex_slot0_valid = 1U;
            }
            vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
            if ((1U & (~ (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_mul)))) {
                if (vlSelf->is_stage__DOT__inst_intisq__DOT__old0_is_bju) {
                    vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                        = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                    vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                    vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
                } else {
                    vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                }
            } else {
                vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
            }
        } else if ((2U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__ready_vec))) {
            if ((1U & (~ (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_mul)))) {
                vlSelf->ex_slot1_valid = 1U;
            }
            vlSelf->ex_slot0_valid = 0U;
            if (vlSelf->is_stage__DOT__inst_intisq__DOT__old1_is_mul) {
                vlSelf->ex_slot0_valid = 1U;
                vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
                vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
                vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
            } else {
                vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
                vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
            }
        } else {
            vlSelf->ex_slot1_valid = 0U;
            vlSelf->ex_slot0_valid = 0U;
            vlSelf->ex_slot0_valid = 0U;
            vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
            vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
            vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
            vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
        }
    } else {
        vlSelf->ex_slot0_valid = 0U;
        vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
            = vlSelf->is_stage__DOT__inst_intisq__DOT__old1_id;
        vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
            = vlSelf->is_stage__DOT__inst_intisq__DOT__old0_id;
    }
    is_stage__DOT__inst_dispatch__DOT__mem_instr_num 
        = (3U & ((1U & ((IData)(is_stage__DOT__inst_dispatch__DOT__mem_instr_vec) 
                        >> 1U)) + (1U & (IData)(is_stage__DOT__inst_dispatch__DOT__mem_instr_vec))));
    is_stage__DOT__inst_dispatch__DOT__int_instr_num 
        = (3U & ((1U & ((IData)(is_stage__DOT__inst_dispatch__DOT__int_instr_vec) 
                        >> 1U)) + (1U & (IData)(is_stage__DOT__inst_dispatch__DOT__int_instr_vec))));
    vlSelf->is_stage__DOT__instr0_rs1_busy = ((~ ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en) 
                                                  & ((IData)(vlSelf->writeback1_prd) 
                                                     == (IData)(vlSelf->instr0_src1)))) 
                                              & ((~ 
                                                  ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                   & ((IData)(vlSelf->writeback0_prd) 
                                                      == (IData)(vlSelf->instr0_src1)))) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                      & ((IData)(vlSelf->writeback2_prd) 
                                                         == (IData)(vlSelf->instr0_src1)))) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                         & ((IData)(vlSelf->writeback3_prd) 
                                                            == (IData)(vlSelf->instr0_src1)))) 
                                                       & (vlSelf->is_stage__DOT__inst_bt__DOT__reg_busy_table
                                                          [vlSelf->instr0_src1] 
                                                          & (vlSelf->ir_is_reg0[3U] 
                                                             >> 5U))))));
    vlSelf->is_stage__DOT__instr0_rs2_busy = ((~ ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en) 
                                                  & ((IData)(vlSelf->writeback1_prd) 
                                                     == (IData)(vlSelf->instr0_src2)))) 
                                              & ((~ 
                                                  ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                   & ((IData)(vlSelf->writeback0_prd) 
                                                      == (IData)(vlSelf->instr0_src2)))) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                      & ((IData)(vlSelf->writeback2_prd) 
                                                         == (IData)(vlSelf->instr0_src2)))) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                         & ((IData)(vlSelf->writeback3_prd) 
                                                            == (IData)(vlSelf->instr0_src2)))) 
                                                       & (vlSelf->is_stage__DOT__inst_bt__DOT__reg_busy_table
                                                          [vlSelf->instr0_src2] 
                                                          & (vlSelf->ir_is_reg0[3U] 
                                                             >> 4U))))));
    vlSelf->retire1_valid = (((IData)(vlSelf->retire0_valid) 
                              & (vlSelf->is_stage__DOT__inst_rob__DOT__reg_rob
                                 [(0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_tail)))][2U] 
                                 >> 0x13U)) & (vlSelf->is_stage__DOT__inst_rob__DOT__reg_rob
                                               [(0x3fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_tail)))][2U] 
                                               >> 6U));
    vlSelf->ex_slot2_valid = vlSelf->is_stage__DOT__inst_memisq__DOT__deq_valid;
    vlSelf->slot1_T = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_T
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id];
    vlSelf->slot1_control[0U] = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id][0U];
    vlSelf->slot1_control[1U] = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id][1U];
    vlSelf->slot1_control[2U] = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id][2U];
    vlSelf->slot1_control[3U] = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id][3U];
    vlSelf->slot1_pc = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_pc
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id];
    vlSelf->slot1_robid = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id];
    vlSelf->slot0_T = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_T
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id];
    vlSelf->slot0_control[0U] = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id][0U];
    vlSelf->slot0_control[1U] = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id][1U];
    vlSelf->slot0_control[2U] = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id][2U];
    vlSelf->slot0_control[3U] = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id][3U];
    vlSelf->slot0_pc = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_pc
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id];
    vlSelf->slot0_robid = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_robid
        [vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id];
    vlSelf->can_dispatch = (1U & (((((((((((IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_head) 
                                           ^ (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_tail)) 
                                          >> 6U) & 
                                         ((0x3fU & (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_head)) 
                                          == (0x3fU 
                                              & (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_tail))))
                                         ? 0U : (((
                                                   ((IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_head) 
                                                    ^ (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_tail)) 
                                                   >> 6U) 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_head))) 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->is_stage__DOT__inst_rob__DOT__rob_tail))))
                                                  ? 1U
                                                  : 2U)) 
                                       >= (3U & ((IData)(is_stage__DOT__inst_dispatch__DOT__mem_instr_num) 
                                                 + (IData)(is_stage__DOT__inst_dispatch__DOT__int_instr_num))))
                                       ? 1U : 0U) & 
                                     (((3U & ((IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0_valid) 
                                              + (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1_valid))) 
                                       >= (IData)(is_stage__DOT__inst_dispatch__DOT__int_instr_num))
                                       ? 1U : 0U)) 
                                    & (((IData)(vlSelf->is_stage__DOT__memisq_left) 
                                        >= (IData)(is_stage__DOT__inst_dispatch__DOT__mem_instr_num))
                                        ? 1U : 0U)) 
                                   & (((IData)(vlSelf->is_stage__DOT__sq_left) 
                                       >= (3U & ((1U 
                                                  & ((IData)(is_stage__DOT__inst_dispatch__DOT__store_instr_vec) 
                                                     >> 1U)) 
                                                 + 
                                                 (1U 
                                                  & (IData)(is_stage__DOT__inst_dispatch__DOT__store_instr_vec)))))
                                       ? 1U : 0U)) 
                                  & (~ (IData)(vlSelf->flush_valid))));
    if (vlSelf->retire0_valid) {
        vlSelf->is_stage__DOT__inst_rob__DOT__retire_num = 1U;
        if (vlSelf->retire1_valid) {
            vlSelf->is_stage__DOT__inst_rob__DOT__retire_num = 2U;
        }
    } else {
        vlSelf->is_stage__DOT__inst_rob__DOT__retire_num = 0U;
    }
    vlSelf->is_stage__DOT__instr1_valid_rob = ((vlSelf->ir_is_reg1[3U] 
                                                >> 0xbU) 
                                               & (IData)(vlSelf->can_dispatch));
    vlSelf->is_stage__DOT__instr0_valid_rob = ((vlSelf->ir_is_reg0[3U] 
                                                >> 0xbU) 
                                               & (IData)(vlSelf->can_dispatch));
    vlSelf->is_stage__DOT__instr1_valid_memisq = ((IData)(vlSelf->is_stage__DOT__instr1_valid_rob) 
                                                  & ((IData)(is_stage__DOT__inst_dispatch__DOT__mem_instr_vec) 
                                                     >> 1U));
    vlSelf->is_stage__DOT__instr1_valid_intisq = ((IData)(vlSelf->is_stage__DOT__instr1_valid_rob) 
                                                  & ((IData)(is_stage__DOT__inst_dispatch__DOT__int_instr_vec) 
                                                     >> 1U));
    vlSelf->is_stage__DOT__instr0_valid_memisq = ((IData)(vlSelf->is_stage__DOT__instr0_valid_rob) 
                                                  & (IData)(is_stage__DOT__inst_dispatch__DOT__mem_instr_vec));
    vlSelf->is_stage__DOT__instr0_valid_intisq = ((IData)(vlSelf->is_stage__DOT__instr0_valid_rob) 
                                                  & (IData)(is_stage__DOT__inst_dispatch__DOT__int_instr_vec));
    vlSelf->is_stage__DOT____Vcellinp__inst_bt__instr0_disp2bt_rd_en 
        = ((IData)(vlSelf->is_stage__DOT__instr0_valid_rob) 
           & (vlSelf->ir_is_reg0[2U] >> 0x13U));
    vlSelf->is_stage__DOT____Vcellinp__inst_sq__disp2sq_instr1_valid 
        = ((IData)(vlSelf->is_stage__DOT__instr1_valid_memisq) 
           & (vlSelf->ir_is_reg1[2U] >> 0x14U));
    vlSelf->is_stage__DOT____Vcellinp__inst_sq__disp2sq_instr0_valid 
        = ((IData)(vlSelf->is_stage__DOT__instr0_valid_memisq) 
           & (vlSelf->ir_is_reg0[2U] >> 0x14U));
    vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
        = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
        [7U];
    vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
        = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
        [6U];
    vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
        = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
        [5U];
    vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
        = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
        [4U];
    vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
        = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
        [3U];
    vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
        = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
        [2U];
    vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
        = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
        [1U];
    vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
        = vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
        [0U];
    if (((IData)(vlSelf->is_stage__DOT__instr0_valid_intisq) 
         & (IData)(vlSelf->is_stage__DOT__instr1_valid_intisq))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
            = ((0U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((0U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [0U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [0U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [0U])))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
            = ((1U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((1U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [1U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [1U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [1U])))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
            = ((2U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((2U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [2U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [2U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [2U])))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
            = ((3U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((3U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [3U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [3U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [3U])))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
            = ((4U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((4U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [4U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [4U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [4U])))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
            = ((5U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((5U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [5U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [5U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [5U])))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
            = ((6U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((6U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [6U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [6U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [6U])))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
            = ((7U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((7U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [7U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [7U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [7U])))));
    } else if (((~ (IData)(vlSelf->is_stage__DOT__instr1_valid_intisq)) 
                & (IData)(vlSelf->is_stage__DOT__instr0_valid_intisq))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
            = ((0U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [0U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [0U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [0U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
            = ((1U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [1U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [1U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [1U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
            = ((2U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [2U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [2U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [2U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
            = ((3U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [3U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [3U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [3U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
            = ((4U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [4U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [4U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [4U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
            = ((5U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [5U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [5U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [5U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
            = ((6U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [6U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [6U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [6U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
            = ((7U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [7U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [7U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [7U]))));
    } else if (((IData)(vlSelf->is_stage__DOT__instr1_valid_intisq) 
                & (~ (IData)(vlSelf->is_stage__DOT__instr0_valid_intisq)))) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
            = ((0U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [0U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [0U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [0U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
            = ((1U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [1U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [1U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [1U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
            = ((2U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [2U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [2U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [2U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
            = ((3U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [3U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [3U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [3U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
            = ((4U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [4U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [4U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [4U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
            = ((5U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [5U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [5U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [5U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
            = ((6U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [6U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [6U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [6U]))));
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
            = ((7U == (IData)(vlSelf->is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [7U]) ? vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                [7U] : ((IData)(1U) 
                                        + vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [7U]))));
    }
    if (vlSelf->ex_slot0_valid) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[vlSelf->is_stage__DOT__inst_intisq__DOT__slot0_entry_id] = 0U;
    }
    if (vlSelf->ex_slot1_valid) {
        vlSelf->is_stage__DOT__inst_intisq__DOT__intisq_age_next[vlSelf->is_stage__DOT__inst_intisq__DOT__slot1_entry_id] = 0U;
    }
    vlSelf->is_stage__DOT__instr1_rs1_busy = ((~ ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en) 
                                                  & ((IData)(vlSelf->writeback1_prd) 
                                                     == (IData)(vlSelf->instr1_src1)))) 
                                              & ((~ 
                                                  ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                   & ((IData)(vlSelf->writeback0_prd) 
                                                      == (IData)(vlSelf->instr1_src1)))) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                      & ((IData)(vlSelf->writeback2_prd) 
                                                         == (IData)(vlSelf->instr1_src1)))) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                         & ((IData)(vlSelf->writeback3_prd) 
                                                            == (IData)(vlSelf->instr1_src1)))) 
                                                       & (vlSelf->is_stage__DOT__inst_bt__DOT__reg_busy_table
                                                          [vlSelf->instr1_src1] 
                                                          & (vlSelf->ir_is_reg1[3U] 
                                                             >> 5U))))));
    if (((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__instr0_disp2bt_rd_en) 
         & ((0x3fU & (vlSelf->ir_is_reg0[4U] >> 5U)) 
            == (IData)(vlSelf->instr1_src1)))) {
        vlSelf->is_stage__DOT__instr1_rs1_busy = (1U 
                                                  & (vlSelf->ir_is_reg1[3U] 
                                                     >> 5U));
    }
    vlSelf->is_stage__DOT__instr1_rs2_busy = ((~ ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en) 
                                                  & ((IData)(vlSelf->writeback1_prd) 
                                                     == (IData)(vlSelf->instr1_src2)))) 
                                              & ((~ 
                                                  ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en) 
                                                   & ((IData)(vlSelf->writeback0_prd) 
                                                      == (IData)(vlSelf->instr1_src2)))) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en) 
                                                      & ((IData)(vlSelf->writeback2_prd) 
                                                         == (IData)(vlSelf->instr1_src2)))) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en) 
                                                         & ((IData)(vlSelf->writeback3_prd) 
                                                            == (IData)(vlSelf->instr1_src2)))) 
                                                       & (vlSelf->is_stage__DOT__inst_bt__DOT__reg_busy_table
                                                          [vlSelf->instr1_src2] 
                                                          & (vlSelf->ir_is_reg1[3U] 
                                                             >> 4U))))));
    if (((IData)(vlSelf->is_stage__DOT____Vcellinp__inst_bt__instr0_disp2bt_rd_en) 
         & ((0x3fU & (vlSelf->ir_is_reg0[4U] >> 5U)) 
            == (IData)(vlSelf->instr1_src2)))) {
        vlSelf->is_stage__DOT__instr1_rs2_busy = (1U 
                                                  & (vlSelf->ir_is_reg1[3U] 
                                                     >> 4U));
    }
}

void Vcommon___024root___sequent__TOP__2(Vcommon___024root* vlSelf);
void Vcommon___024root___sequent__TOP__3(Vcommon___024root* vlSelf);

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommon___024root___sequent__TOP__2(vlSelf);
        Vcommon___024root___sequent__TOP__3(vlSelf);
    }
    Vcommon___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelf->flush_robid & 0x80U))) {
        Verilated::overWidthError("flush_robid");}
    if (VL_UNLIKELY((vlSelf->flush_valid & 0xfeU))) {
        Verilated::overWidthError("flush_valid");}
    if (VL_UNLIKELY((vlSelf->writeback0_valid & 0xfeU))) {
        Verilated::overWidthError("writeback0_valid");}
    if (VL_UNLIKELY((vlSelf->writeback0_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback0_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback0_prd & 0xc0U))) {
        Verilated::overWidthError("writeback0_prd");}
    if (VL_UNLIKELY((vlSelf->writeback1_valid & 0xfeU))) {
        Verilated::overWidthError("writeback1_valid");}
    if (VL_UNLIKELY((vlSelf->writeback1_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback1_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback1_prd & 0xc0U))) {
        Verilated::overWidthError("writeback1_prd");}
    if (VL_UNLIKELY((vlSelf->writeback2_valid & 0xfeU))) {
        Verilated::overWidthError("writeback2_valid");}
    if (VL_UNLIKELY((vlSelf->writeback2_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback2_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback2_prd & 0xc0U))) {
        Verilated::overWidthError("writeback2_prd");}
    if (VL_UNLIKELY((vlSelf->writeback3_valid & 0xfeU))) {
        Verilated::overWidthError("writeback3_valid");}
    if (VL_UNLIKELY((vlSelf->writeback3_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback3_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback3_prd & 0xc0U))) {
        Verilated::overWidthError("writeback3_prd");}
    if (VL_UNLIKELY((vlSelf->writeback0_robid & 0x80U))) {
        Verilated::overWidthError("writeback0_robid");}
    if (VL_UNLIKELY((vlSelf->writeback1_robid & 0x80U))) {
        Verilated::overWidthError("writeback1_robid");}
    if (VL_UNLIKELY((vlSelf->writeback2_robid & 0x80U))) {
        Verilated::overWidthError("writeback2_robid");}
    if (VL_UNLIKELY((vlSelf->writeback3_robid & 0x80U))) {
        Verilated::overWidthError("writeback3_robid");}
    if (VL_UNLIKELY((vlSelf->writeback3_is_store & 0xfeU))) {
        Verilated::overWidthError("writeback3_is_store");}
    if (VL_UNLIKELY((vlSelf->mul_slot_busy & 0xfeU))) {
        Verilated::overWidthError("mul_slot_busy");}
}
#endif  // VL_DEBUG
