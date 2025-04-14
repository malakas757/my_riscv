// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___combo__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->j_next_pc = ((IData)(4U) + vlSelf->pc);
    vlSelf->bju__DOT__pc_plus_imm = (vlSelf->pc + vlSelf->immediate_data);
    vlSelf->bju__DOT__is_rs1_eq_rs2 = (vlSelf->left_operand 
                                       == vlSelf->right_operand);
    vlSelf->bju__DOT__is_rs1_lt_rs2 = (vlSelf->left_operand 
                                       < vlSelf->right_operand);
    vlSelf->bju__DOT__is_sign_rs1_lt_rs2 = VL_LTS_III(32, vlSelf->left_operand, vlSelf->right_operand);
}

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__3(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->bju__DOT__GHSR_checkpoint = ((IData)(vlSelf->reset_n)
                                          ? (((~ ((IData)(vlSelf->bju__DOT__GHSR_checkpoint) 
                                                  >> 0xaU)) 
                                              & (IData)(vlSelf->bju__DOT__is_bj))
                                              ? (0x400U 
                                                 | ((0x3feU 
                                                     & ((IData)(
                                                                (vlSelf->branch_predict 
                                                                 >> 0x21U)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->branch_taken)))
                                              : ((IData)(vlSelf->bju__DOT__is_bj)
                                                  ? 
                                                 (0x400U 
                                                  | ((0x3feU 
                                                      & ((IData)(vlSelf->bju__DOT__GHSR_checkpoint) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->branch_taken)))
                                                  : (IData)(vlSelf->bju__DOT__GHSR_checkpoint)))
                                          : 0U);
}

VL_INLINE_OPT void Vcommon___024root___combo__TOP__4(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__4\n"); );
    // Init
    CData/*0:0*/ bju__DOT__is_branch_taken_diff;
    // Body
    vlSelf->bju__DOT__is_bj = (IData)((0U != (0x38000U 
                                              & vlSelf->control[2U])));
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
    vlSelf->GHSR_restore = (0x3ffU & ((0x400U & (IData)(vlSelf->bju__DOT__GHSR_checkpoint))
                                       ? (IData)(vlSelf->bju__DOT__GHSR_checkpoint)
                                       : (IData)((vlSelf->branch_predict 
                                                  >> 0x21U))));
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

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    Vcommon___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
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
}
#endif  // VL_DEBUG
