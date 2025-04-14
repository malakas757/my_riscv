// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___combo__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__1\n"); );
    // Init
    CData/*0:0*/ bju__DOT__is_rs1_eq_rs2;
    CData/*0:0*/ bju__DOT__is_rs1_lt_rs2;
    CData/*0:0*/ bju__DOT__is_sign_rs1_lt_rs2;
    CData/*0:0*/ bju__DOT__is_branch_taken_diff;
    IData/*31:0*/ bju__DOT__pc_plus_imm;
    // Body
    vlSelf->j_next_pc = ((IData)(4U) + vlSelf->pc);
    bju__DOT__pc_plus_imm = (vlSelf->pc + vlSelf->immediate_data);
    bju__DOT__is_rs1_eq_rs2 = (vlSelf->left_operand 
                               == vlSelf->right_operand);
    bju__DOT__is_rs1_lt_rs2 = (vlSelf->left_operand 
                               < vlSelf->right_operand);
    bju__DOT__is_sign_rs1_lt_rs2 = VL_LTS_III(32, vlSelf->left_operand, vlSelf->right_operand);
    if ((0x10U & vlSelf->control)) {
        if ((0x1000U & vlSelf->control)) {
            if ((0x800U & vlSelf->control)) {
                if ((0x400U & vlSelf->control)) {
                    vlSelf->branch_taken = (1U & (~ (IData)(bju__DOT__is_rs1_lt_rs2)));
                    vlSelf->branch_pc = ((IData)(vlSelf->branch_taken)
                                          ? bju__DOT__pc_plus_imm
                                          : ((IData)(4U) 
                                             + vlSelf->pc));
                } else {
                    vlSelf->branch_taken = bju__DOT__is_rs1_lt_rs2;
                    vlSelf->branch_pc = ((IData)(vlSelf->branch_taken)
                                          ? bju__DOT__pc_plus_imm
                                          : ((IData)(4U) 
                                             + vlSelf->pc));
                }
            } else if ((0x400U & vlSelf->control)) {
                vlSelf->branch_taken = (1U & (~ (IData)(bju__DOT__is_sign_rs1_lt_rs2)));
                vlSelf->branch_pc = ((IData)(vlSelf->branch_taken)
                                      ? bju__DOT__pc_plus_imm
                                      : ((IData)(4U) 
                                         + vlSelf->pc));
            } else {
                vlSelf->branch_taken = bju__DOT__is_sign_rs1_lt_rs2;
                vlSelf->branch_pc = ((IData)(vlSelf->branch_taken)
                                      ? bju__DOT__pc_plus_imm
                                      : ((IData)(4U) 
                                         + vlSelf->pc));
            }
        } else if ((0x800U & vlSelf->control)) {
            vlSelf->branch_taken = 0U;
            vlSelf->branch_pc = ((IData)(4U) + vlSelf->pc);
        } else if ((0x400U & vlSelf->control)) {
            vlSelf->branch_taken = (1U & (~ (IData)(bju__DOT__is_rs1_eq_rs2)));
            vlSelf->branch_pc = ((IData)(vlSelf->branch_taken)
                                  ? bju__DOT__pc_plus_imm
                                  : ((IData)(4U) + vlSelf->pc));
        } else {
            vlSelf->branch_taken = bju__DOT__is_rs1_eq_rs2;
            vlSelf->branch_pc = ((IData)(vlSelf->branch_taken)
                                  ? bju__DOT__pc_plus_imm
                                  : ((IData)(4U) + vlSelf->pc));
        }
    } else if ((8U & vlSelf->control)) {
        vlSelf->branch_taken = 1U;
        vlSelf->branch_pc = bju__DOT__pc_plus_imm;
    } else if ((4U & vlSelf->control)) {
        vlSelf->branch_taken = 1U;
        vlSelf->branch_pc = (0xfffffffeU & (vlSelf->left_operand 
                                            + vlSelf->immediate_data));
    } else {
        vlSelf->branch_taken = 0U;
        vlSelf->branch_pc = ((IData)(4U) + vlSelf->pc);
    }
    bju__DOT__is_branch_taken_diff = ((IData)(vlSelf->branch_taken) 
                                      ^ (IData)(vlSelf->branch_predict));
    vlSelf->flush = ((0x10U & vlSelf->control) ? ((0x1000U 
                                                   & vlSelf->control)
                                                   ? (IData)(bju__DOT__is_branch_taken_diff)
                                                   : 
                                                  ((~ 
                                                    (vlSelf->control 
                                                     >> 0xbU)) 
                                                   & (IData)(bju__DOT__is_branch_taken_diff)))
                      : ((8U & vlSelf->control) ? (IData)(bju__DOT__is_branch_taken_diff)
                          : ((vlSelf->control >> 2U) 
                             & (IData)(bju__DOT__is_branch_taken_diff))));
}

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    Vcommon___024root___combo__TOP__1(vlSelf);
}

#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->branch_predict & 0xfeU))) {
        Verilated::overWidthError("branch_predict");}
}
#endif  // VL_DEBUG
