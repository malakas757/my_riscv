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
    CData/*0:0*/ bju__DOT__is_branch_taken_diff;
    // Body
    vlSelf->j_next_pc = ((IData)(4U) + vlSelf->pc);
    vlSelf->bju__DOT__pc_plus_imm = (vlSelf->pc + vlSelf->immediate_data);
    vlSelf->bju__DOT__is_rs1_eq_rs2 = (vlSelf->left_operand 
                                       == vlSelf->right_operand);
    vlSelf->bju__DOT__is_rs1_lt_rs2 = (vlSelf->left_operand 
                                       < vlSelf->right_operand);
    vlSelf->bju__DOT__is_sign_rs1_lt_rs2 = VL_LTS_III(32, vlSelf->left_operand, vlSelf->right_operand);
    vlSelf->bju__DOT__is_bj = (IData)((0U != (0x38000U 
                                              & vlSelf->control[2U])));
    vlSelf->GHSR_restore = (0x3ffU & ((0x400U & (IData)(vlSelf->bju__DOT__GHSR_checkpoint))
                                       ? (IData)(vlSelf->bju__DOT__GHSR_checkpoint)
                                       : (IData)((vlSelf->branch_predict 
                                                  >> 0x21U))));
    if ((0x20000U & vlSelf->control[2U])) {
        if ((0x2000000U & vlSelf->control[2U])) {
            if ((0x1000000U & vlSelf->control[2U])) {
                if ((0x800000U & vlSelf->control[2U])) {
                    vlSelf->branch_taken = (1U & (~ (IData)(vlSelf->bju__DOT__is_rs1_lt_rs2)));
                    vlSelf->branch_target_pc = ((IData)(vlSelf->branch_taken)
                                                 ? vlSelf->bju__DOT__pc_plus_imm
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->pc));
                } else {
                    vlSelf->branch_taken = vlSelf->bju__DOT__is_rs1_lt_rs2;
                    vlSelf->branch_target_pc = ((IData)(vlSelf->branch_taken)
                                                 ? vlSelf->bju__DOT__pc_plus_imm
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->pc));
                }
            } else if ((0x800000U & vlSelf->control[2U])) {
                vlSelf->branch_taken = (1U & (~ (IData)(vlSelf->bju__DOT__is_sign_rs1_lt_rs2)));
                vlSelf->branch_target_pc = ((IData)(vlSelf->branch_taken)
                                             ? vlSelf->bju__DOT__pc_plus_imm
                                             : ((IData)(4U) 
                                                + vlSelf->pc));
            } else {
                vlSelf->branch_taken = vlSelf->bju__DOT__is_sign_rs1_lt_rs2;
                vlSelf->branch_target_pc = ((IData)(vlSelf->branch_taken)
                                             ? vlSelf->bju__DOT__pc_plus_imm
                                             : ((IData)(4U) 
                                                + vlSelf->pc));
            }
        } else if ((0x1000000U & vlSelf->control[2U])) {
            vlSelf->branch_taken = 0U;
            vlSelf->branch_target_pc = ((IData)(4U) 
                                        + vlSelf->pc);
        } else if ((0x800000U & vlSelf->control[2U])) {
            vlSelf->branch_taken = (1U & (~ (IData)(vlSelf->bju__DOT__is_rs1_eq_rs2)));
            vlSelf->branch_target_pc = ((IData)(vlSelf->branch_taken)
                                         ? vlSelf->bju__DOT__pc_plus_imm
                                         : ((IData)(4U) 
                                            + vlSelf->pc));
        } else {
            vlSelf->branch_taken = vlSelf->bju__DOT__is_rs1_eq_rs2;
            vlSelf->branch_target_pc = ((IData)(vlSelf->branch_taken)
                                         ? vlSelf->bju__DOT__pc_plus_imm
                                         : ((IData)(4U) 
                                            + vlSelf->pc));
        }
    } else if ((0x10000U & vlSelf->control[2U])) {
        vlSelf->branch_taken = 1U;
        vlSelf->branch_target_pc = vlSelf->bju__DOT__pc_plus_imm;
    } else if ((0x8000U & vlSelf->control[2U])) {
        vlSelf->branch_taken = 1U;
        vlSelf->branch_target_pc = (0xfffffffeU & (vlSelf->left_operand 
                                                   + vlSelf->immediate_data));
    } else {
        vlSelf->branch_taken = 0U;
        vlSelf->branch_target_pc = ((IData)(4U) + vlSelf->pc);
    }
    bju__DOT__is_branch_taken_diff = ((IData)(vlSelf->branch_taken) 
                                      ^ (vlSelf->branch_predict 
                                         >> 0x2bU));
    vlSelf->update_GHSR = ((IData)(vlSelf->bju__DOT__is_bj) 
                           & ((~ (IData)((vlSelf->branch_predict 
                                          >> 0x20U))) 
                              | (IData)(bju__DOT__is_branch_taken_diff)));
    vlSelf->flush = ((IData)(vlSelf->bju__DOT__is_bj) 
                     & ((IData)(bju__DOT__is_branch_taken_diff) 
                        | ((IData)((0x80100000000ULL 
                                    == (0x80100000000ULL 
                                        & vlSelf->branch_predict))) 
                           & ((IData)(vlSelf->branch_predict) 
                              != vlSelf->branch_target_pc))));
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
    vlSelf->left_operand = VL_RAND_RESET_I(32);
    vlSelf->right_operand = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(115, vlSelf->control);
    vlSelf->immediate_data = VL_RAND_RESET_I(32);
    vlSelf->branch_predict = VL_RAND_RESET_Q(44);
    vlSelf->j_next_pc = VL_RAND_RESET_I(32);
    vlSelf->branch_target_pc = VL_RAND_RESET_I(32);
    vlSelf->branch_taken = VL_RAND_RESET_I(1);
    vlSelf->flush = VL_RAND_RESET_I(1);
    vlSelf->GHSR_restore = VL_RAND_RESET_I(10);
    vlSelf->update_GHSR = VL_RAND_RESET_I(1);
    vlSelf->bju__DOT__is_rs1_eq_rs2 = VL_RAND_RESET_I(1);
    vlSelf->bju__DOT__is_rs1_lt_rs2 = VL_RAND_RESET_I(1);
    vlSelf->bju__DOT__is_sign_rs1_lt_rs2 = VL_RAND_RESET_I(1);
    vlSelf->bju__DOT__pc_plus_imm = VL_RAND_RESET_I(32);
    vlSelf->bju__DOT__is_bj = VL_RAND_RESET_I(1);
    vlSelf->bju__DOT__GHSR_checkpoint = VL_RAND_RESET_I(11);
}
